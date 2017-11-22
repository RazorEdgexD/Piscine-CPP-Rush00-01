//
// Created by Oleksiy Pogiba on 11/11/17.
//

#ifndef RUSH01_IMONITORMODULE_HPP
#define RUSH01_IMONITORMODULE_HPP


#include <iostream>
#include "vector"
#include <sys/sysctl.h>

class IMonitorModule {
public:
    virtual void render_information(std::vector<std::string>& val) = 0;
};


#endif //RUSH01_IMONITORMODULE_HPP
