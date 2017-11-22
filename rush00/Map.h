/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oklymeno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 20:27:42 by oklymeno          #+#    #+#             */
/*   Updated: 2017/11/05 21:10:15 by oklymeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H
# include <string>
# include <iostream>
# include <ncurses.h>
# include "ClassObject.hpp"
# include "ClassShip.hpp"
# include "ClassAsteroid.hpp"
# include "Space.h"
# include "unistd.h"

class Map {

private:
    int     _asteroids;
    int     _space;
    int     _maxX;
    int     _maxY;


    static int asteroidsIndex;
    WINDOW  *_wnd;
    void moveElements(WINDOW *wnd, Ship *player, Object *object, Space *space);

    void checkAlive(Ship *player, Asteroid *ast);
	  void KillAsteroid(Laser *laser, Asteroid *ast,Ship *player);
    void restoreDefaults(Ship *player);
    void gameOver(int x, int y);
public:
    Map();
    Map(Map const &mbr);
    virtual ~Map();
    Map&	operator=(Map const &mbr);

    void	printElements(Asteroid *objects, Space *space, Ship *player);
    int     getMaxX() const;
    int     getMaxY() const;
    void	setAsteroids();
    void	setSpace();
    int     getAsteroids() const;
    int     getSpace() const;
	  void	Draw_ship(Ship *player);
	  void	print_hp(int hp, int points);
};


#endif //MAP_H
