//
// Created by Oleksiy Pogiba on 11/12/17.
//

#ifndef RUSH01_PROCESSDISPLAY_HPP
#define RUSH01_PROCESSDISPLAY_HPP


#include "IMonitorDisplay.hpp"
#include "../Modules/ProcessModul.hpp"

class ProcessDisplay : public IMonitorDisplay {
public:
    ProcessDisplay(const ProcessModul& val);
    void disolay_info(int x, int y);
    ~ProcessDisplay();

private:
    const ProcessModul &g;
    ProcessDisplay(const ProcessDisplay &);
    ProcessDisplay&operator=(const ProcessDisplay &);
    ProcessDisplay();

};


#endif //RUSH01_PROCESSDISPLAY_HPP
