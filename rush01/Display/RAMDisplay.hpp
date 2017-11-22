//
// Created by Oleksiy Pogiba on 11/12/17.
//

#ifndef RUSH01_RAMDISPLAY_HPP
#define RUSH01_RAMDISPLAY_HPP


#include "IMonitorDisplay.hpp"
#include "../Modules/RAMModul.hpp"

class RAMDisplay : public IMonitorDisplay {
public:
    RAMDisplay(const RAMModul& val);
    void disolay_info(int x, int y);
    ~RAMDisplay();

private:
    const RAMModul &k;
    RAMDisplay(const RAMDisplay &);
    RAMDisplay&operator=(const RAMDisplay &);
    RAMDisplay();

};


#endif //RUSH01_RAMDISPLAY_HPP
