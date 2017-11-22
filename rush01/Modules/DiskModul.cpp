#include "DiskModul.hpp"

void DiskModul::render_information(std::vector<std::string>& val)
{
    std::vector<std::string> v;
    this->split(val[this->index],' ', v);

    std::vector<std::string> temporary;

    this->split(v[1],'/', temporary);
    this->_packets_in = std::stoi(temporary[0]);
    this->_packets_memory_in = std::stoi(temporary[1]);

    _size_in = temporary[1][temporary[1].length() - 1];

    temporary.clear();

    this->split(v[3],'/', temporary);
    this->_packets_out = std::stoi(temporary[0]);
    this->_packets_memory_out = std::stoi(temporary[1]);
    _size_out = temporary[1][temporary[1].length() - 1];



}

DiskModul::DiskModul()
{
    this->index = 5;
    this->_moduleName = "Disk Module";
}

char DiskModul::get_size_in() const {
    return _size_in;
}

char DiskModul::get_size_out() const {
    return _size_out;
}

DiskModul::~DiskModul() {}

int DiskModul::get_packets_in() const {
    return _packets_in;
}

int DiskModul::get_packets_memory_in() const {
    return _packets_memory_in;
}

int DiskModul::get_packets_memory_out() const {
    return _packets_memory_out;
}

int DiskModul::get_packets_out() const {
    return _packets_out;
}

const std::string& DiskModul::get_moduleName() const {
    return _moduleName;
}
