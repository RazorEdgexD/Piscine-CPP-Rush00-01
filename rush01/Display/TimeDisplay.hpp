//
// Created by Oleksiy Pogiba on 11/12/17.
//

#ifndef RUSH01_TIMEDISPLAY_HPP
#define RUSH01_TIMEDISPLAY_HPP


#include "IMonitorDisplay.hpp"
#include "../Modules/TimeModul.hpp"

class TimeDisplay : public IMonitorDisplay {

public:
    TimeDisplay(const TimeModul& val);
    void disolay_info(int x, int y);
    ~TimeDisplay();

private:
    const TimeModul &f;
    TimeDisplay(const TimeDisplay &);
    TimeDisplay&operator=(const TimeDisplay &);
    TimeDisplay();

};


#endif //RUSH01_TIMEDISPLAY_HPP
