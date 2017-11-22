/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Space.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oklymeno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 21:16:26 by oklymeno          #+#    #+#             */
/*   Updated: 2017/11/05 21:16:47 by oklymeno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPACE_H
# define SPACE_H

# include "ClassObject.hpp"
# include <iostream>

class Space : public Object {

public:
    Space();
    ~Space();
    Space(Space const &mbr);
    Space &operator=(Space const &mbr);

    void move();
    void setSymbol(char c);
};
#endif //RUSH00_SPACE_H
