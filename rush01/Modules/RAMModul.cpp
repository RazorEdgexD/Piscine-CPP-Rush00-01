#include "RAMModul.hpp"

RAMModul::RAMModul() {
    _moduleName = "RAM Module";
    this->index = 3;

    size_t i;
    long long j;

    sysctlbyname("hw.memsize", &j, &i, NULL, 0);
    _capasity_RAM = static_cast<int>(static_cast<float>(j/(1024 * 1024)));


}

void RAMModul::render_information(std::vector<std::string>& val)
{
    std::vector<std::string> v;

    this->split(val[this->index],' ', v);

    this->_used_RAM = std::stoi(v[1]);
    this->_unused_RAM = std::stoi(v[5]);



}

RAMModul::~RAMModul(){

}

const std::string& RAMModul::get_moduleName() const {
    return _moduleName;
}

int RAMModul::get_capasity_RAM() const {
    return _capasity_RAM;
}

int RAMModul::get_used_RAM() const {
    return _used_RAM;
}

int RAMModul::get_unused_RAM() const {
    return _unused_RAM;
}
