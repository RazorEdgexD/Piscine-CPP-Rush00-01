#include "CPUModul.hpp"

void CPUModul::render_information(std::vector<std::string>& val)
{
    std::vector<std::string> v;
    this->split(val[this->index],' ', v);
    this->_user_usage = std::stod(v[2]);
    this->_system_usage =  std::stod(v[4]);
    this->_idle_usage =  std::stod(v[6]);
}



CPUModul::CPUModul()
{
    char buf[100];
    size_t buflen = 100;
    size_t i = 4;


    sysctlbyname("machdep.cpu.brand_string", &buf, &buflen, NULL, 0);
    this->_cpuName.assign(buf);
    sysctlbyname("machdep.cpu.core_count", &this->_amount_cores, &i, NULL, 0);
    this->index = 2;
    this->_moduleName = "CPU Module";
}

double CPUModul::get_user_usage() const {
    return _user_usage;
}

double CPUModul::get_system_usage() const {
    return _system_usage;
}

double CPUModul::get_idle_usage() const {
    return _idle_usage;
}

int CPUModul::get_amount_cores() const {
    return _amount_cores;
}

const std::string &CPUModul::get_cpuName() const {
    return _cpuName;
}

const std::string &CPUModul::get_moduleName() const {
    return _moduleName;
}

CPUModul::~CPUModul() {}
