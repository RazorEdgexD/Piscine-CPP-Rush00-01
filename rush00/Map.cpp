/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oklymeno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 20:23:33 by oklymeno          #+#    #+#             */
/*   Updated: 2017/11/05 20:38:32 by oklymeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Map.h"

int Map::asteroidsIndex = 50;

Map::Map(Map const &mbr) {
	_maxX = mbr.getMaxX();
	_maxY = mbr.getMaxY();
	_space = mbr.getSpace();
	_asteroids = mbr.getAsteroids();
}

Map::~Map() {

}

Map::Map() {
    _wnd = initscr();
    getmaxyx(_wnd, _maxX, _maxY);
};

Map &Map::operator=(Map const &mbr) {
	_maxX = mbr.getMaxX();
	_maxY = mbr.getMaxY();
	_space = mbr.getSpace();
	_asteroids = mbr.getAsteroids();
    return *this;
}

int     Map::getMaxX() const{
    return _maxY;
}

int     Map::getMaxY() const{
    return _maxX;
}

void    Map::setSpace() {
    _space = _maxX * _maxY / 10;
}

void    Map::setAsteroids() {
    _asteroids = _maxX * _maxY / asteroidsIndex;
}

int     Map::getAsteroids() const{
    return _asteroids;
}

int     Map::getSpace() const{
    return _space;
}

void Map::print_hp(int hp, int points){
	mvwprintw(_wnd, 1, 1, "Current hp:");
	(hp > 0) ? mvwprintw(_wnd, 1, 12, std::to_string(hp).c_str()) :
		mvwprintw(_wnd, 1, 12, "die");
    mvwprintw(_wnd, 1, 25, "Points:");
    mvwprintw(_wnd, 1, 32, std::to_string(points).c_str());
}

void Map::checkAlive(Ship *player, Asteroid *ast){
	if ((player->getPos_x() == ast->getPos_x()
		&& player->getPos_y() + 2 == ast->getPos_y() && ast->get_visible() == 1)
	|| (player->getPos_x() + 1 == ast->getPos_x()
		&& player->getPos_y() + 1 == ast->getPos_y() && ast->get_visible() == 1)
	|| (player->getPos_x() - 1 == ast->getPos_x()
		&& player->getPos_y() + 1 == ast->getPos_y() && ast->get_visible() == 1)
	|| (player->getPos_x() - 2 == ast->getPos_x()
		&& player->getPos_y() == ast->getPos_y() && ast->get_visible() == 1)
	|| (player->getPos_x() + 2 == ast->getPos_x()
		&& player->getPos_y() == ast->getPos_y() && ast->get_visible() == 1)
    || (player->getPos_x() + 1 == ast->getPos_x()
       && player->getPos_y() == ast->getPos_y() && ast->get_visible() == 1)
    || (player->getPos_x() - 1 == ast->getPos_x()
       && player->getPos_y() == ast->getPos_y() && ast->get_visible() == 1)
    || (player->getPos_x() == ast->getPos_x()
      && player->getPos_y() + 1 == ast->getPos_y() && ast->get_visible() == 1))
		{
		player->get_damage(ast->get_dmg());
		ast->set_invisible();
	}
}

void Map::KillAsteroid(Laser *laser, Asteroid *ast, Ship *player){
	if ((laser->getPos_x() == ast->getPos_x()
		&& laser->getPos_y() == ast->getPos_y() && ast->get_visible() == 1)
	|| (laser->getPos_x() == ast->getPos_x()
		&& laser->getPos_y() + 1 == ast->getPos_y() && ast->get_visible() == 1)){
			ast->set_invisible();
            laser->setPos(-1, -1);
            player->setPoints();
        }
}

void Map::Draw_ship(Ship *player){
	mvwaddch(_wnd, player->getPos_x(),player->getPos_y(), player->getSymbol());
	mvwaddch(_wnd, player->getPos_x() + 1,player->getPos_y(), player->getSymbol());
	mvwaddch(_wnd, player->getPos_x() - 1,player->getPos_y(), player->getSymbol());
	mvwaddch(_wnd, player->getPos_x() + 1,player->getPos_y() - 1, player->getSymbol());
	mvwaddch(_wnd, player->getPos_x() - 1,player->getPos_y() - 1, player->getSymbol());
	mvwaddch(_wnd, player->getPos_x() ,player->getPos_y() - 1, player->getSymbol());
	mvwaddch(_wnd, player->getPos_x() + 1,player->getPos_y() - 2, player->getSymbol());
	mvwaddch(_wnd, player->getPos_x() - 1,player->getPos_y() - 2, player->getSymbol());
	mvwaddch(_wnd, player->getPos_x() + 2,player->getPos_y() - 2, player->getSymbol());
	mvwaddch(_wnd, player->getPos_x() - 2,player->getPos_y() - 2, player->getSymbol());
	mvwaddch(_wnd, player->getPos_x() ,player->getPos_y() - 2	, player->getSymbol());
	mvwaddch(_wnd, player->getPos_x(),player->getPos_y() + 1, player->getSymbol());
	mvwaddch(_wnd, player->getPos_x(),player->getPos_y() + 2, player->getSymbol());
}

void Map::restoreDefaults(Ship *player) {
    player->setDefaultPoints();
    player->setDefaultHP();
    player->setPlacement();
}

void Map::gameOver(int x, int y) {
    const char gameOver[15][75] = {
                "  _____          __  __ ______    ______      ________ _____",
                "  / ____|   /\\   |  \\/  |  ____|  / __ \\ \\    / /  ____|  __ \\ ",
                " | |  __   /  \\  | \\  / | |__    | |  | \\ \\  / /| |__  | |__) |",
                "| | |_ | / /\\ \\ | |\\/| |  __|   | |  | |\\ \\/ / |  __| |  _  /",
                "| |__| |/ ____ \\| |  | | |____  | |__| | \\  /  | |____| | \\ \\",
                "  \\_____/_/    \\_\\_|  |_|______|  \\____/   \\/   |______|_|  \\_\\",
                " ",
                "  Press ESC to Exit                    "
                "  Press ENTER to Restart"
            };
            for (int i = 0; i != 10; i++){
                for (int j = 0; j != 75; j++){
                    if (std::isprint(gameOver[i][j]))
                        mvwaddch(_wnd, x / 4 + i, y / 4 + j, gameOver[i][j]);
                }
            }
}

void Map::printElements(Asteroid *objects, Space *space, Ship *player) {
    int ch;
    bool exit = false;
    bool game = true;
    cbreak();
    noecho();
    clear();
    refresh();
    keypad(_wnd, true);
    nodelay(_wnd, true);
    curs_set(0);
    start_color();
    init_pair(1, COLOR_RED, COLOR_BLACK);
    init_pair(2, COLOR_BLUE, COLOR_BLACK);
    player->setWindowSize(_maxY, _maxX);
    player->setPlacement();
    for (int j = 0; j < _asteroids; j++) {
        objects[j].setWindowSize(_maxY, _maxX);
    }
    for (int j = 0; j < _space; j++) {
        space[j].setWindowSize(_maxY, _maxX);
    }
    while (!exit) {
        mvwaddch(_wnd, player->getPos_x(), player->getPos_y(), player->getSymbol());
        ch = wgetch(_wnd);
        switch (ch) {
            case '\033':
                exit = true;
                break;
            case 10:
                if (game == false) {
                    game = true;
                    restoreDefaults(player);
                    asteroidsIndex = 50;
                }
                break;
            case KEY_RIGHT:
                if (game == true) {
                    player->moveForvard();
                }
                break;
            case KEY_LEFT:
                if (game == true) {
                    player->moveBack();
                }
                break;
            case KEY_DOWN:
                if (game == true) {
                    player->moveRight();
                }
                break;
            case KEY_UP:
                if (game == true) {
                    player->moveLeft();
                }
                break;
            case 32:
                if (game == true) {
                    player->fire();
                }
                break;
            default:
                break;
        }
        if (exit) {
            break;
        }
        if (player->get_hp() == 0) {
            game = false;
            gameOver(_maxX, _maxY);
        }

        if (game) {
            werase(_wnd);
            for (int j = 0; j < _space; j++) {
                space[j].move();
                if (space[j].getPos_y() < space[j].getMaxWidth()) {
                    mvwaddch(_wnd, space[j].getPos_x(), space[j].getPos_y(), space[j].getSymbol());
                }
            }
            attron(COLOR_PAIR(2));
            Draw_ship(player);
            attroff(COLOR_PAIR(2));
            attron(COLOR_PAIR(1));
            for (int j = 0; j < _asteroids; j++) {
    			checkAlive(player, &objects[j]);
                objects[j].move();

                if (objects[j].getPos_y() < objects[j].getMaxWidth()) {
                    mvwaddch(_wnd, objects[j].getPos_x(), objects[j].getPos_y(), objects[j].getSymbol());
                }
            }
            attroff(COLOR_PAIR(1));
    		for(player->tmp = player->allBullets;  player->tmp != NULL; player->tmp = player->tmp->next) {
                player->tmp->laser->move();
    			for (int j = 0; j < _asteroids; j++) {
    				KillAsteroid(player->tmp->laser, &objects[j], player);
    			}
                mvwaddch(_wnd, player->tmp->laser->getPos_x(), player->tmp->laser->getPos_y(), player->tmp->laser->getSymbol());
            }

    		print_hp(player->get_hp(), player->getPoints());
            box(_wnd, 0, 0);
            wrefresh(_wnd);
            usleep(1000000/60);
        }
    }
    delwin(_wnd);
    endwin();
		player->freeBullets();
}
