//
// Created by Oleksiy Pogiba on 11/12/17.
//

#ifndef RUSH01_HOSTNAMEDISPLAY_HPP
#define RUSH01_HOSTNAMEDISPLAY_HPP

#include "IMonitorDisplay.hpp"
#include "../Modules/HostnameModul.hpp"

class HostnameDisplay : public IMonitorDisplay {
public:
    HostnameDisplay(const HostnameModul & val);
    void disolay_info(int x, int y);
    ~HostnameDisplay();

private:
    const HostnameModul &d;
    HostnameDisplay(const HostnameDisplay &);

    HostnameDisplay &operator=(const HostnameDisplay &);

    HostnameDisplay();



};


#endif //RUSH01_HOSTNAMEDISPLAY_HPP
