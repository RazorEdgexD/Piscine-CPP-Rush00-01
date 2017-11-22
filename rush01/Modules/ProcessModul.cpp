#include "ProcessModul.hpp"

void ProcessModul::render_information(std::vector<std::string>& val)
{
    std::vector<std::string> v;
    this->split(val[this->index],' ', v);

    this->_total_process = std::stoi(v[1]);;
    this->_running_process = std::stoi(v[3]);;
    this->_stuck_process = std::stoi(v[5]);;
    this->_sleeping_process = std::stoi(v[7]);;
    this->_threads_process = std::stoi(v[9]);;
}


const std::string& ProcessModul::get_moduleName() const {
    return _moduleName;
}

ProcessModul::ProcessModul()
{
    this->index = 0;
    this->_moduleName = "Process Module";
}

ProcessModul::~ProcessModul() {}

int ProcessModul::get_total_process() const {
    return _total_process;
}

int ProcessModul::get_running_process() const {
    return _running_process;
}

int ProcessModul::get_stuck_process() const {
    return _stuck_process;
}

int ProcessModul::get_sleeping_process() const {
    return _sleeping_process;
}

int ProcessModul::get_threads_process() const {
    return _threads_process;
}
