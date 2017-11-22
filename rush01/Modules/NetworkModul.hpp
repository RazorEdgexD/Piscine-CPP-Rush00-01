//
// Created by Oleksiy Pogiba on 11/12/17.
//

#ifndef RUSH01_NETWORKMODULE_HPP
#define RUSH01_NETWORKMODULE_HPP

#include "Modul.hpp"


class NetworkModule : public Modul {
public:
    NetworkModule();

    ~NetworkModule();

    void render_information(std::vector<std::string>& val);

    const std::string &get_moduleName() const;

    int get_packets_in() const;

    int get_packets_memory_in() const;

    int get_packets_memory_out() const;

    int get_packets_out() const;

private:

    NetworkModule(const NetworkModule &);

    NetworkModule &operator=(const NetworkModule &);

    int index;

    std::string _moduleName;

    int _packets_in;
public:
    char get_size_in() const;

    char get_size_out() const;

private:
    int _packets_memory_in;

    int _packets_memory_out;

    int _packets_out;

    char _size_in;

    char _size_out;



};


#endif //RUSH01_NETWORKMODULE_HPP
