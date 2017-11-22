//
// Created by Oleksiy Pogiba on 11/12/17.
//

#include "ProcessDisplay.hpp"

ProcessDisplay::ProcessDisplay(const ProcessModul & val) : g(val) {

}

void ProcessDisplay::disolay_info(int x, int y) {

  move(x,y + 10);
  addstr(g.get_moduleName().c_str());
  mvprintw(x + 1, y, "Process total :: %d", g.get_total_process());
  mvprintw(x + 2, y, "Process running :: %d", g.get_running_process());
  mvprintw(x + 3, y, "Process stuck :: %d", g.get_stuck_process());
  mvprintw(x + 4, y, "Process sleeping :: %d", g.get_sleeping_process());
  mvprintw(x + 5, y, "Process threads :: %d", g.get_threads_process());
}

ProcessDisplay::~ProcessDisplay() {}
