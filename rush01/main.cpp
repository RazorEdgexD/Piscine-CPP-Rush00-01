#include "Modules/CPUModul.hpp"
#include "Modules/functions.hpp"
#include "Modules/DiskModul.hpp"
#include "Modules/NetworkModul.hpp"
#include "Modules/HostnameModul.hpp"
#include "Modules/OSModul.hpp"
#include "Modules/ProcessModul.hpp"
#include "Modules/TimeModul.hpp"

#include "Display/CPUDisplay.hpp"
#include "Display/DiskDisplay.hpp"
#include "Modules/RAMModul.hpp"
#include "Display/HostnameDisplay.hpp"
#include "Display/NetworkDisplay.hpp"
#include "Display/OSDisplay.hpp"
#include "Display/ProcessDisplay.hpp"
#include "Display/TimeDisplay.hpp"
#include "Display/RAMDisplay.hpp"

#include "zconf.h"
#include <ncurses.h>
#include <sys/ioctl.h>

void pony(int x, int y){
	mvprintw(x, y, "                __..___ ");
	mvprintw(x + 1, y, "          _.-'____<'``  ");
	mvprintw(x + 2, y, "    ___.-`.-'`     ```_'");
	mvprintw(x + 3, y, "   /  \\.'` __.----'','/.");
	mvprintw(x + 4, y, "  ( /  \\_/` ,---''.' /  ");
	mvprintw(x + 5, y, "  | |    `,._\\  ,'  /``'");
	mvprintw(x + 6, y, " /( '.  .'``'-`   .-.   ");
	mvprintw(x + 7, y, "( /\\    | |``'.`._|.-:  ");
	mvprintw(x + 8, y, "|| (\\_  ( (    \\ _ | |  ");
	mvprintw(x + 9, y, "|| : \\   \\ \\    ))\\ \\j  ");
	mvprintw(x + 10, y, "|( (, \\   '.`--'/  ``-. ");
	mvprintw(x + 11, y, "' . \\`.`.   ````  \\__/  ");
	mvprintw(x + 12, y, " V(  \\ `-\\-,______.-'   ");
	mvprintw(x + 13, y, "__/\\ .`.     /.^. /     ");
	mvprintw(x + 14, y, "    \\|`.:   (/   V      ");

}

void	draw_base(WINDOW *wnd, int y){
	move(1,y / 2 - 10);
	addstr("F T _ G K R E L L M");
	mvwhline(wnd, 0, y / 2 - 20,42,41);
	mvwhline(wnd, 2, y / 2 - 20,42,41);
	mvwhline(wnd, 9, y/ 2 - 20,42,41);
	mvwhline(wnd, 15, y / 2 - 20,42,41);
	mvwhline(wnd, 21,y / 2 - 20,42,41);
	mvwhline(wnd, 25, y / 2 - 20,42,41);
	mvwhline(wnd, 30, y / 2 - 20,42,41);
	mvwhline(wnd, 37, y/ 2 - 20,42,41);
	mvwhline(wnd, 40, y / 2 - 20,42,41);
	mvwhline(wnd, 45, y/ 2 - 20,42,41);
	mvvline(0, y / 2 + 21,42,46);
	mvvline(1, y / 2 - 20,42,45);
}

int main()
{
	CPUModul *a = new CPUModul();
	DiskModul *b = new DiskModul();
	NetworkModule *c = new NetworkModule();
	HostnameModul *d = new HostnameModul();
	OSModul *e = new OSModul();
	ProcessModul *g = new ProcessModul();
	TimeModul *f = new TimeModul();
	RAMModul *k = new RAMModul();

	CPUDisplay *da = new CPUDisplay(*a);;
	DiskDisplay *db = new DiskDisplay(*b);;
	NetworkDisplay *dc = new NetworkDisplay(*c);;
	HostnameDisplay *dd = new HostnameDisplay(*d);;
	OSDisplay *de = new OSDisplay(*e);;
	ProcessDisplay *dg = new ProcessDisplay(*g);;
	TimeDisplay *df = new TimeDisplay(*f);;
	RAMDisplay *dk = new RAMDisplay(*k);;

	struct ttysize ts;
	int ch;
	WINDOW *wnd;
	int x = 2;
	int y = 2;
	int check[9] = {1, 1, 1, 1, 1, 1, 1, 1, 1};

	ioctl(0, TIOCGSIZE, &ts);
	wnd = initscr();
	cbreak();
	noecho();
	clear();
	refresh();
	nodelay(wnd, true);
	while(42){
		clear();
		std::vector<std::string> v;
		split(exec(),'\n', v);
		draw_base(wnd, ts.ts_cols);
		ch = wgetch(wnd);
		switch (ch) {
			case '1':
				check[0] == 0 ? check[0] = 1 : check[0] = 0;
				break;
			case '2':
				check[1] == 0 ? check[1] = 1 : check[1] = 0;
				break;
			case '3':
				check[2] == 0 ? check[2] = 1 : check[2] = 0;
				break;
			case '4':
				check[3] == 0 ? check[3] = 1 : check[3] = 0;
				break;
			case '5':
				check[4] == 0 ? check[4] = 1 : check[4] = 0;
				break;
			case '6':
				check[5] == 0 ? check[5] = 1 : check[5] = 0;
				break;
			case '7':
				check[6] == 0 ? check[6] = 1 : check[6] = 0;
				break;
			case '8':
				check[7] == 0 ? check[7] = 1 : check[7] = 0;
				break;
			case '*':
				check[8] == 0 ? check[8] = 1 : check[8] = 0;
					break;
			case '\033':
				delwin(wnd);
				endwin();
				exit(1);
					break;
			default:
				break;
			}
		if (check[0] == 1)
			da->disolay_info(x + 1, ts.ts_cols / 2 - 18);
		if (check[1] == 1)
			db->disolay_info(x + 8 , ts.ts_cols / 2 - 18);
		if (check[2] == 1)
			dc->disolay_info(x + 14 , ts.ts_cols / 2 - 18);
		if (check[3] == 1)
		 	dd->disolay_info(x + 20 , ts.ts_cols / 2 - 18);
		if (check[4] == 1)
			de->disolay_info(x + 24 , ts.ts_cols / 2 - 18);
		if (check[5] == 1)
			dg->disolay_info(x + 29 , ts.ts_cols / 2 - 18);
		if (check[6] == 1)
			df->disolay_info(x + 36 , ts.ts_cols / 2 - 18);
		if (check[7] == 1)
			dk->disolay_info(x + 39 , ts.ts_cols / 2 - 18);
		if (check[8] == 0)
				pony(x + 45 , ts.ts_cols / 2 - 12);

		a->render_information(v);
		b->render_information(v);
		c->render_information(v);
		d->render_information(v);
		e->render_information(v);
		g->render_information(v);
		f->render_information(v);
		k->render_information(v);
		box(wnd, 42, 42);
		refresh();
	}
	delwin(wnd);
	endwin();

	delete a;
	delete b;
	delete c;
	delete d;
	delete e;
	delete f;
	delete g;
	delete k;

	delete da;
	delete db;
	delete dc;
	delete dd;
	delete de;
	delete df;
	delete dg;
	delete dk;
}
