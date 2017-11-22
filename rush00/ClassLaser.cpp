/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassLaser.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosobliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 14:04:20 by aosobliv          #+#    #+#             */
/*   Updated: 2017/11/05 21:08:21 by oklymeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassLaser.hpp"

Laser::Laser(void) : _lonng(3) {
	_symbol = '-';
}

Laser::Laser(int x, int y) {
    _pos_x = x;
    _pos_y = y;
    _symbol = '-';
}

Laser::Laser(Laser const &src): _lonng(3){
	*this = src;
	_symbol = '-';
}

Laser & Laser::operator=(Laser const & src){
	this->_lonng = src._lonng;
	return *this;
}

Laser::~Laser(void){
}

void Laser::move(){
    _pos_y < _maxWidth ? _pos_y++ : _pos_y = _maxWidth;

}

void    Laser::setSymbol(char c) {
    _symbol = c;
}
