/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassGame.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosobliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 15:43:03 by aosobliv          #+#    #+#             */
/*   Updated: 2017/11/05 21:07:43 by oklymeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassGame.hpp"

Game::Game(void) : _h(80), _w(24){
}

Game::Game(Game const &src) : _h(80), _w(24){
	*this = src;
}

Game & Game::operator=(Game const & src){
	this->_h = src._h;
	this->_w = src._w;
	return *this;
}

Game::~Game(void){
}

void Game::setH(int h) {
    _h = h;
}

void Game::setW(int w) {
    _w = w;
}

void Game::Init(void) {
    Map map;
    setH(map.getMaxX());
    setW(map.getMaxY());
    map.setAsteroids();
    map.setSpace();
    Space *space = new Space[map.getSpace()];
    Asteroid *asteroids = new Asteroid[map.getAsteroids()];
    Ship *player = new Ship();
    map.printElements(asteroids, space, player);
		delete[] space;
		delete[] asteroids;
		delete player;
}
