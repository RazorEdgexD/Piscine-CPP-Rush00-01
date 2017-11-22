//
// Created by Oleksiy Pogiba on 11/12/17.
//

#ifndef RUSH01_OSDISPLAY_HPP
#define RUSH01_OSDISPLAY_HPP


#include "IMonitorDisplay.hpp"
#include "../Modules/OSModul.hpp"

class OSDisplay : public IMonitorDisplay{
public:
    OSDisplay(const OSModul& val);
    void disolay_info(int x, int y);
    ~OSDisplay();

private:
    const OSModul &e;
    OSDisplay(const OSDisplay &);
    OSDisplay&operator=(const OSDisplay &);
    OSDisplay();

};


#endif //RUSH01_OSDISPLAY_HPP
