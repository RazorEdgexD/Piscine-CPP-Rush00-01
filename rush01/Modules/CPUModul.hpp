//
// Created by Oleksiy Pogiba on 11/11/17.
//

#ifndef RUSH01_CPUMODUL_HPP
#define RUSH01_CPUMODUL_HPP


#include "Modul.hpp"

class CPUModul : public Modul {
public:
    CPUModul();

    ~CPUModul();

    void render_information(std::vector<std::string>& val);

    const std::string &get_moduleName() const;

    double get_user_usage() const;

    double get_system_usage() const;

    double get_idle_usage() const;

    int get_amount_cores() const;

    const std::string &get_cpuName() const;

private:

    CPUModul(const CPUModul &);

    CPUModul &operator=(const CPUModul &);

    int index;

    double _user_usage;

    double _system_usage;

    double _idle_usage;

    int _amount_cores;

    std::string _moduleName;

    std::string _cpuName;
};



#endif //RUSH01_CPUMODUL_HPP
