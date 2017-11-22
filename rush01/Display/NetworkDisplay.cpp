//
// Created by Oleksiy Pogiba on 11/12/17.
//

#include "NetworkDisplay.hpp"

NetworkDisplay::NetworkDisplay(const NetworkModule & val) : c(val) {


}

void NetworkDisplay::disolay_info(int x, int y) {

  move(x,y + 10);
  addstr(c.get_moduleName().c_str());
  mvprintw(x + 1, y, "Packets in :: %d", c.get_packets_in());
  mvprintw(x + 2, y, "Packets out ::  %d", c.get_packets_in());
  mvprintw(x + 3, y, "Packets memory in :: :: %d %d", c.get_packets_memory_in(),c.get_size_in());
  mvprintw(x + 4, y, "Packets memory out :: :: %d %d", c.get_packets_memory_out(), c.get_size_out());
}

NetworkDisplay::~NetworkDisplay() {}
