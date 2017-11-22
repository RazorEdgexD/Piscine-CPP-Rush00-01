//
// Created by Oleksiy Pogiba on 11/11/17.
//

#ifndef RUSH01_HOSTNAMEMODUL_HPP
#define RUSH01_HOSTNAMEMODUL_HPP

#include "Modul.hpp"
class HostnameModul : public Modul {
private:
    HostnameModul(const HostnameModul &);

    HostnameModul &operator=(const HostnameModul &);
    std::string _moduleName;
    std::string _host_name;
    std::string _user_name;
public:
    HostnameModul();

    ~HostnameModul();

    void render_information(std::vector<std::string>& val);

    const std::string &get_moduleName() const;

    const std::string &get_host_name() const;

    const std::string &get_user_name() const;


};


#endif //RUSH01_HOSTNAMEMODUL_HPP
