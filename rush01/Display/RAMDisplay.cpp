//
// Created by Oleksiy Pogiba on 11/12/17.
//

#include "RAMDisplay.hpp"

RAMDisplay::RAMDisplay(const RAMModul & val) : k(val) {

}

void RAMDisplay::disolay_info(int x, int y) {

  move(x,y + 10);
  addstr(k.get_moduleName().c_str());
  mvprintw(x + 1, y, "RAM capacity :: %dM", k.get_capasity_RAM());
  mvprintw(x + 2, y, "RAM used :: %dM", k.get_used_RAM());
  mvprintw(x + 3, y, "RAM unused :: %dM", k.get_unused_RAM());
}

RAMDisplay::~RAMDisplay() {}
