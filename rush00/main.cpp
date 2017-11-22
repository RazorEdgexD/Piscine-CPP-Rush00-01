/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oklymeno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 21:01:53 by oklymeno          #+#    #+#             */
/*   Updated: 2017/11/05 21:24:38 by oklymeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ncurses.h>
#include "Map.h"
#include "ClassShip.hpp"
#include "ClassGame.hpp"
#include <ctime>

int main() {
    srand(time(0));
    Game game;
    game.Init();
    return 0;
}
