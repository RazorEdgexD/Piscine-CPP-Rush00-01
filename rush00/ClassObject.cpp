/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassObject.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosobliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 13:17:49 by aosobliv          #+#    #+#             */
/*   Updated: 2017/11/05 21:11:23 by oklymeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassObject.hpp"

Object::Object(void) : _pos_x(1), _pos_y(1) {
}

Object::Object(Object const &src){
	*this = src;
}

Object::~Object(void){
}

Object & Object::operator=(Object const & src){
		this->_pos_x = src._pos_x;
		this->_pos_y = src._pos_y;
		return *this;
}

void Object::setPos(int x, int y){
	this->_pos_x = x;
	this->_pos_y = y;
}

int Object::getPos_x(void){
	return(this->_pos_x);
}

int Object::getPos_y(void){
	if (_pos_y < _maxWidth) {
        return _pos_y;
    } else {
        return _maxWidth;
    }
}

void Object::right(void){
	(this->_pos_x <= 999) ? this->_pos_x++ : 0;
}
void Object::left(void){
	(this->_pos_x >= 1) ? this->_pos_x-- : 0;
}
void Object::top(void){
	(this->_pos_y <= 999) ? this->_pos_y++ : 0;
}
void Object::bot(void){
	(this->_pos_y >= 1) ? this->_pos_y-- : 0;
}

void Object::setSymbol(char c) {
	_symbol = c;
}

char Object::getSymbol() {
	return _symbol;
}

void Object::setPosX(int n) {
    _pos_x = n;
}

void Object::setPosY(int n) {
	_pos_y = n;
}

void Object::setWindowSize(int maxWidth, int maxHeight) {
	_maxHeight = maxHeight;
	_maxWidth = maxWidth;
}

int Object::getMaxWidth() {
	return _maxWidth;
}

int Object::getMaxHeight() {
	return _maxHeight;
}
