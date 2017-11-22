/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAsteroid.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosobliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 13:57:24 by aosobliv          #+#    #+#             */
/*   Updated: 2017/11/05 21:04:53 by oklymeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassAsteroid.hpp"
#include <iostream>

Asteroid::Asteroid(void) : _visible(1), _dmg(20){
	_pos_x = rand() % 500;
	_pos_y = rand() % 1000;
	_symbol = 'O';
}

Asteroid::Asteroid(Asteroid const &src) : _visible(1), _dmg(20){
	*this = src;
	_symbol = 'O';
}

Asteroid & Asteroid::operator=(Asteroid const & src){
		this->_dmg = src._dmg;
		 this->_pos_x = src._pos_x;
		 this->_pos_y = src._pos_y;
		return *this;
}

Asteroid::~Asteroid(void){
}

void Asteroid::set_invisible(void){
	this->_visible = 0;
}

void Asteroid::set_visible(void){
	this->_visible = 1;
}

int Asteroid::get_visible(void){
	return(this->_visible);
}

void Asteroid::setSymbol(char c) {
	this->_symbol = c;
}

char Asteroid::getSymbol(void) {
	const char c = 32;
	return ((this->_visible == 1 ? _symbol : c));
}

void Asteroid::move() {
	if (!this->get_visible()) {
		 _pos_y = 50;
	} else {
		_pos_y > 0 ? _pos_y-- : _pos_y = _maxWidth + rand() % 50;
	}
}

int	 Asteroid::get_dmg(void){
	return (this->_dmg);
}
