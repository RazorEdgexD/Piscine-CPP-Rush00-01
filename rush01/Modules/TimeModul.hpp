//
// Created by Oleksiy Pogiba on 11/12/17.
//

#ifndef RUSH01_TIMEMODUL_HPP
#define RUSH01_TIMEMODUL_HPP

#include "Modul.hpp"

class TimeModul : public Modul {
public:
    TimeModul();

    ~TimeModul();

    void render_information(std::vector<std::string>& val);

    const std::string &get_moduleName() const;

private:

    TimeModul(const TimeModul &);

    TimeModul &operator=(const TimeModul &);

public:
    const std::string &get_time() const;

private:
    std::string _moduleName;

    std::string _time;

};


#endif //RUSH01_TIMEMODUL_HPP
