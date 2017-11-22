/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAsteroid.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosobliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 13:57:36 by aosobliv          #+#    #+#             */
/*   Updated: 2017/11/04 13:57:42 by aosobliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSASTEROID_HPP
# define CLASSASTEROID_HPP

#include "ClassObject.hpp"

class Asteroid : public Object {

public:

	Asteroid(void);
	Asteroid(Asteroid const &src);
	~Asteroid(void);

	Asteroid & operator=(Asteroid const & src);
	void set_visible(void);
	void set_invisible(void);
	int get_visible(void);
	char getSymbol(void);
    void    move();
	int		get_dmg(void);
    

private:

	int	_visible;
	int _dmg;

protected:
	void    setSymbol(char c);
};

#endif
