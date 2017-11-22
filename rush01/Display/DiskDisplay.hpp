//
// Created by Oleksiy Pogiba on 11/12/17.
//

#ifndef RUSH01_DISKDISPLAY_HPP
#define RUSH01_DISKDISPLAY_HPP


#include "IMonitorDisplay.hpp"
#include "../Modules/DiskModul.hpp"

class DiskDisplay : public IMonitorDisplay {
public:
    DiskDisplay(const DiskModul & val);
    void disolay_info(int x, int y);
    ~DiskDisplay();

private:
    const DiskModul &b;
    DiskDisplay(const DiskDisplay &);

    DiskDisplay &operator=(const DiskDisplay &);

    DiskDisplay();


};


#endif //RUSH01_DISKDISPLAY_HPP
