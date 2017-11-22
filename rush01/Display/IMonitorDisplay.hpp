//
// Created by Oleksiy Pogiba on 11/12/17.
//

#ifndef RUSH01_IMONITORDISPLAY_HPP
#define RUSH01_IMONITORDISPLAY_HPP

#include <iostream>
#include "vector"
#include <sys/sysctl.h>
#include <ncurses.h>

class IMonitorDisplay {
public:
    virtual void disolay_info(int x, int y) = 0;
};

#endif //RUSH01_IMONITORDISPLAY_HPP
