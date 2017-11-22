//
// Created by Oleksiy Pogiba on 11/12/17.
//

#include "HostnameDisplay.hpp"
#include "../Modules/HostnameModul.hpp"

HostnameDisplay::HostnameDisplay(const HostnameModul & val) : d(val) {

}

void HostnameDisplay::disolay_info(int x, int y) {

  move(x,y + 10);
  addstr(d.get_moduleName().c_str());
  mvprintw(x + 1, y, "User name :: %s", d.get_user_name().c_str());
  mvprintw(x + 2, y, "Host name :: %s", d.get_host_name().c_str());
}

HostnameDisplay::~HostnameDisplay() {}
