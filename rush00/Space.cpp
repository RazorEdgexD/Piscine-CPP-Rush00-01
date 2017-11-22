/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Space.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oklymeno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 21:16:15 by oklymeno          #+#    #+#             */
/*   Updated: 2017/11/05 21:16:18 by oklymeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Space.h"

Space::Space() {
    _symbol = '.';
    _pos_x = rand() % 1000;
    _pos_y = rand() % 1000;
}

Space::Space(Space const &mbr) {

}

Space::~Space() {

}

Space &Space::operator=(Space const &mbr) {
    return *this;
}

void Space::move() {
    _pos_y > 1 ? _pos_y -= 2.25 : _pos_y = _maxWidth + rand() % 50;
}

void Space::setSymbol(char c) {
    _symbol = c;
}
