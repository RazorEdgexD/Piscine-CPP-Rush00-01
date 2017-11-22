//
// Created by Oleksiy Pogiba on 11/12/17.
//

#ifndef RUSH01_CPUDISPALY_HPP
#define RUSH01_CPUDISPALY_HPP


#include "IMonitorDisplay.hpp"
#include "../Modules/CPUModul.hpp"

class CPUDisplay : public IMonitorDisplay {
public:
    CPUDisplay(const CPUModul & val);
    void disolay_info(int x, int y);
    ~CPUDisplay();

private:
    const CPUModul &a;
    CPUDisplay(const CPUDisplay &);

    CPUDisplay &operator=(const CPUDisplay &);

    CPUDisplay();
};


#endif //RUSH01_CPUDISPALY_HPP
