//
// Created by Oleksiy Pogiba on 11/12/17.
//

#include "TimeDisplay.hpp"

TimeDisplay::TimeDisplay(const TimeModul & val) : f(val) {

}

void TimeDisplay::disolay_info(int x, int y) {

  move(x,y + 10);
  addstr(f.get_moduleName().c_str());
  move(x + 1,y);
  addstr("Current time ::");
  addstr(f.get_time().c_str());
}

TimeDisplay::~TimeDisplay() {}
