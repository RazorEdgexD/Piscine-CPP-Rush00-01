//
// Created by Oleksiy Pogiba on 11/12/17.
//

#ifndef RUSH01_DISKMODUL_HPP
#define RUSH01_DISKMODUL_HPP

#include "Modul.hpp"

class DiskModul :   public Modul {
public:
    DiskModul();

    ~DiskModul();

    void render_information(std::vector<std::string>& val);

    const std::string &get_moduleName() const;

    int get_packets_in() const;

    int get_packets_memory_in() const;

    int get_packets_memory_out() const;

    int get_packets_out() const;

    char get_size_in() const;

    char get_size_out() const;

private:

    DiskModul(const DiskModul &);

    DiskModul &operator=(const DiskModul &);

    int index;

    std::string _moduleName;

    int _packets_in;

    int _packets_memory_in;

    int _packets_memory_out;

    int _packets_out;

    char _size_in;

    char _size_out;

};


#endif //RUSH01_DISKMODUL_HPP
