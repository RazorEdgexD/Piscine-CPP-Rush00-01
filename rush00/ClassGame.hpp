/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassGame.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosobliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 15:43:09 by aosobliv          #+#    #+#             */
/*   Updated: 2017/11/05 21:07:53 by oklymeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSGAME_HPP
# define CLASSGAME_HPP

# include <ncurses.h>
# include <string>
# include <iostream>
# include "Map.h"
# include "ClassAsteroid.hpp"
# include "Space.h"

class Game {

public:

	Game(void);
	Game(Game const &src);
	~Game(void);
	void Init(void);

	Game & operator=(Game const & src);

	void	setH(int h);
	void	setW(int w);
private:

	int		_h;
	int		_w;

};

#endif
