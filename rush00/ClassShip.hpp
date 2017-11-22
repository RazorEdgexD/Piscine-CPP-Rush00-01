/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassShip.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosobliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 13:39:55 by aosobliv          #+#    #+#             */
/*   Updated: 2017/11/05 21:09:39 by oklymeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSSHIP_HPP
# define CLASSSHIP_HPP

# include <string>
# include "ClassObject.hpp"
# include "ClassLaser.hpp"

class Ship : public Object {

public:

	Ship(void);
	Ship(Ship const &src);
	~Ship(void);

	Ship & operator=(Ship const & src);

	void    get_damage(int dmg);
	int 	get_hp(void);
    void    moveLeft();
    void    moveRight();
    void    moveForvard();
    void    moveBack();
    void    move();
    void    fire();
    int     getBulletsCount() const;
    struct  List
    {
        Laser   *laser;
        List    *next;
    };

    List *allBullets;
    List *tmp;
    void    setPoints();
    void    setDefaultPoints();
    void    setDefaultHP();
    int     getPoints();
    void    setPlacement();
		void    freeBullets();

private:
	int	_hp;
    int _bulletsCount;
    int _points;


protected:
	void	setSymbol(char c);
};

#endif
