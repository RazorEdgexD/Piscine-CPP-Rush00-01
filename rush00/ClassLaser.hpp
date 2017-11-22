/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassLaser.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosobliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 14:04:14 by aosobliv          #+#    #+#             */
/*   Updated: 2017/11/05 21:08:24 by oklymeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSLASER_HPP
# define CLASSLASER_HPP

# include "ClassObject.hpp"

class Laser : public Object {

public:

    Laser(void);
    Laser(int x, int y);
	Laser(Laser const &src);
	~Laser(void);
    void    move();
    void    setSymbol(char c);

	Laser & operator=(Laser const & src);

private:

	int	_lonng;

};

#endif
