//
// Created by Oleksiy Pogiba on 11/12/17.
//

#include "OSDisplay.hpp"

OSDisplay::OSDisplay(const OSModul & val) : e(val) {

}

void OSDisplay::disolay_info(int x, int y) {

  move(x,y + 10);
  addstr(e.get_moduleName().c_str());
  mvprintw(x + 1, y, "OS type :: %s", e.get_ostype().c_str());
  mvprintw(x + 2, y, "Mac OS :: %s", e.get_mac_os().c_str());
  mvprintw(x + 3, y, "Version OS :: %s", e.get_version_os().c_str());
}

OSDisplay::~OSDisplay() {}
