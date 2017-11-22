//
// Created by Oleksiy Pogiba on 11/11/17.
//

#ifndef RUSH01_RAMMODUL_HPP
#define RUSH01_RAMMODUL_HPP

#include "IMonitorModule.hpp"
#include "Modul.hpp"

class RAMModul : public Modul {
public:
    RAMModul();

    ~RAMModul();

    void render_information(std::vector<std::string>& val);

    const std::string &get_moduleName() const;
    int get_capasity_RAM() const;

    int get_used_RAM() const;

    int get_unused_RAM() const;



private:

    RAMModul(const RAMModul &);

    RAMModul &operator=(const RAMModul &);

    int index;

    std::string _moduleName;

    int _capasity_RAM;

    int _used_RAM;

    int _unused_RAM;



};


#endif //RUSH01_RAMMODUL_HPP
