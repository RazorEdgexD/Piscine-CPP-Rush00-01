//
// Created by Oleksiy Pogiba on 11/12/17.
//

#ifndef RUSH01_NETWORKDISPLAY_HPP
#define RUSH01_NETWORKDISPLAY_HPP


#include "IMonitorDisplay.hpp"
#include "../Modules/NetworkModul.hpp"

class NetworkDisplay : public IMonitorDisplay{
public:
    NetworkDisplay(const NetworkModule& val);
    void disolay_info(int x, int y);
    ~NetworkDisplay();

private:
    const NetworkModule &c;
    NetworkDisplay(const NetworkDisplay &);
    NetworkDisplay&operator=(const NetworkDisplay &);
    NetworkDisplay();


};


#endif //RUSH01_NETWORKDISPLAY_HPP
