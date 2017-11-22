#include "CPUDisplay.hpp"

CPUDisplay::CPUDisplay(const CPUModul & val) : a(val) {

}

void CPUDisplay::disolay_info(int x, int y) {

  move(x,y + 10);
  addstr(a.get_moduleName().c_str());
  move(x + 1,y);
  addstr(a.get_cpuName().c_str());
  mvprintw(x + 2, y, "Amount cores :: %d", a.get_amount_cores());
  mvprintw(x + 3, y, "User usage ::  %.1f%%", a.get_user_usage());
  mvprintw(x + 4, y, "Sytem usage ::  %.1f%%", a.get_system_usage());
  mvprintw(x + 5, y, "Idle usage ::  %.1f%%", a.get_idle_usage());
}

CPUDisplay::~CPUDisplay() {}
