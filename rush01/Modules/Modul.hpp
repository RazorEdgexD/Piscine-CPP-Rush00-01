//
// Created by Oleksiy Pogiba on 11/11/17.
//

#ifndef RUSH01_MODUL_HPP
#define RUSH01_MODUL_HPP


#include "IMonitorModule.hpp"

class Modul : IMonitorModule {
public:

    virtual const std::string &get_moduleName() const = 0;
    virtual void render_information(std::vector<std::string>& val) = 0;
    Modul();
    virtual ~Modul();
private:
    Modul &operator=(const Modul&);
    Modul (const Modul &);

protected:
    void split(const std::string& s, char c, std::vector<std::string>&);


};


#endif //RUSH01_MODUL_HPP
