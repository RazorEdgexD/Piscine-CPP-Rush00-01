/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassShip.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosobliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 13:39:48 by aosobliv          #+#    #+#             */
/*   Updated: 2017/11/05 21:09:37 by oklymeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassShip.hpp"

Ship::Ship(void) : _hp(100){
	_pos_x = 50;
	_pos_y = 50;
    _points = 0;
    _bulletsCount = 0;
    allBullets = NULL;
    tmp = NULL;
	_symbol = '>';
}

Ship::Ship(Ship const &src) : _hp(100){
	*this = src;
	_pos_x = 50;
	_pos_y = 50;
    _points = 0;
    _bulletsCount = 0;
	_symbol = '>';
}

Ship & Ship::operator=(Ship const & src){
    this->_hp = src._hp;
	return *this;
}

Ship::~Ship(void){

}

void Ship::get_damage(int dmg){
	this->_hp -= dmg;
	if (this->_hp <= 0){
		this->_hp = 0;
	}
}

void Ship::freeBullets() {
	List *del = allBullets;
	List *tmp = allBullets;
if (tmp) {
	while (tmp->next)
	{
			tmp = tmp->next;
			delete del->laser;
			del->next = NULL;
			delete del;
			del = tmp;
	}
 	 delete tmp->laser;
	 delete del;
}
}

int Ship::get_hp(void){
	return(this->_hp);
}

void    Ship::setPoints() {
    _points += 20;
}

void    Ship::setDefaultPoints() {
    _points = 0;
}

void    Ship::setDefaultHP() {
    _hp = 100;
}

int     Ship::getPoints() {
    return _points;
}

void    Ship::moveLeft() {
    _pos_x > 3 ? _pos_x-- : 0;
}

void    Ship::moveRight() {
    _pos_x < _maxHeight - 4 ? _pos_x++ : _maxHeight - 1;
}

void    Ship::moveForvard() {
    _pos_y < _maxWidth - 4 ? _pos_y++ : _maxWidth - 1;
}

void    Ship::moveBack() {
    _pos_y > 3 ? _pos_y-- : 0;
}

void    Ship::setSymbol(char c) {
    _symbol = c;
}

void    Ship::move() {

}

void    Ship::setPlacement() {
    _pos_x = _maxHeight / 2;
    _pos_y = _maxWidth / 4;
}

int     Ship::getBulletsCount() const {
    return _bulletsCount;
}

void    Ship::fire() {
    List *newList = new List;
    newList->laser = new Laser(_pos_x, _pos_y);
    newList->laser->setWindowSize(getMaxWidth(), getMaxHeight());
    newList->next = allBullets;
    allBullets = newList;
    List *tmp = allBullets;
}
