//
// Created by Oleksiy Pogiba on 11/12/17.
//

#include "DiskDisplay.hpp"

DiskDisplay::DiskDisplay(const DiskModul & val) : b(val) {

}

void DiskDisplay::disolay_info(int x, int y) {

  move(x,y + 10);
  addstr(b.get_moduleName().c_str());
  mvprintw(x + 1, y, "Disk read :: %d", b.get_packets_in());
  mvprintw(x + 2, y, "Disk write ::  %d", b.get_packets_out());
  mvprintw(x + 3, y, "Disk memory read :: :: %d %d", b.get_packets_memory_in(),b.get_size_in());
  mvprintw(x + 4, y, "Disk memory write :: :: %d %d", b.get_packets_memory_out(), b.get_size_out());
}

DiskDisplay::~DiskDisplay() {}
