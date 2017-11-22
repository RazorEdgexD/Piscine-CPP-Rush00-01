/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassObject.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosobliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 13:17:55 by aosobliv          #+#    #+#             */
/*   Updated: 2017/11/05 21:11:31 by oklymeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSOBJECT_HPP
# define CLASSOBJECT_HPP

class Object {

public:

	Object(void);
	Object(Object const &src);
	~Object(void);

	void setPos(int x, int y);
	int	 getPos_x(void);
	int	 getPos_y(void);
	void right(void);
	void left(void);
	void top(void);
	void bot(void);
	char getSymbol();
	void setPosX(int n);
	void setPosY(int n);

	void	setWindowSize(int maxWidth, int maxHeight);
	int		getMaxWidth();
	int		getMaxHeight();
    virtual void	move() = 0;

	Object & operator=(Object const & src);

protected:

	float	_pos_x;
	float   _pos_y;
	char 	_symbol;
	int 	_maxWidth;
	int 	_maxHeight;
	virtual void	setSymbol(char c) = 0;

};

#endif
