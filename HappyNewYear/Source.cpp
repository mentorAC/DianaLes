#include <iostream>
#include <ctime>
#include <Windows.h>
using namespace std;

int main() {
	tm tim = tm();
	tim.tm_mday = 1;
	tim.tm_mon = 1-1;
	tim.tm_year = 2023 - 1900;
	time_t new_year = mktime(&tim);

	while (true) {
		time_t carlday = time(0);
		double sec = difftime(new_year, carlday);

		if (sec == 0) {
			break;
		}

		int dni = sec / 60 / 60 / 24;
		int god = sec / 60 / 60 - 24 * dni;
		int hwyl = sec / 60 - 60 * god - dni * 24 * 60;
		int sec1 = sec - 60 * god * 60 - hwyl * 60 - dni * 24 * 60 * 60;

		cout << dni << " Days " << god << ":" << hwyl << ":" << sec1 << "\r\t";
		//Sleep(500);
		//system("cls");
	}
	cout << "Happy new year!";
	return 0;
}