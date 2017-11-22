//
// Created by Oleksiy Pogiba on 11/12/17.
//

#ifndef RUSH01_PROCESSMODUL_HPP
#define RUSH01_PROCESSMODUL_HPP

#include "Modul.hpp"


class ProcessModul : public Modul {

public:
    ProcessModul();

    ~ProcessModul();

    void render_information(std::vector<std::string>& val);

    const std::string &get_moduleName() const;

    int get_total_process() const;

    int get_running_process() const;

    int get_stuck_process() const;

    int get_sleeping_process() const;

    int get_threads_process() const;

private:

    ProcessModul(const ProcessModul &);

    ProcessModul &operator=(const ProcessModul &);

    int index;

    int _total_process;

    int _running_process;

    int _stuck_process;

    int _sleeping_process;

    int _threads_process;

    std::string _moduleName;


};


#endif //RUSH01_PROCESSMODUL_HPP
