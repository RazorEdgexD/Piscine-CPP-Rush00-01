//
// Created by Oleksiy Pogiba on 11/12/17.
//

#ifndef RUSH01_OSMODULE_HPP
#define RUSH01_OSMODULE_HPP

#include "Modul.hpp"

class OSModul : public Modul {
private:
    OSModul(const OSModul &);

    OSModul &operator=(const OSModul &);
    std::string _moduleName;

    std::string _ostype;

    std::string _mac_os;

    std::string _version_os;

public:
    OSModul();

    ~OSModul();

    void render_information(std::vector<std::string>& val);

    const std::string &get_moduleName() const;

    const std::string &get_ostype() const;

    const std::string &get_mac_os() const;

    const std::string &get_version_os() const;


};


#endif //RUSH01_OSMODULE_HPP
