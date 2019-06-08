
#include <cassert>
#include <iostream>
#include <fstream>
#include "../my_code/weather.h"

using namespace std;
string getInput_file()
{
string filenm;
cout << "Input the name of the new readings file:\n";
cin >> filenm;
return filenm;
}
void get_wreadings(string filenm, Weather& w) {
	ifstream rfile(getInput_file());
	while (!rfile) {
		cout << "Could not read input file: " << endl;
//		cout << "Please enter a good filename: " << endl;
		rfile.open(getInput_file());
	}
	int m, d, y;
	double temp, hum, ws;
	while (rfile >> m >> d >> y >> temp >> hum >> ws) {
		WReading wr = WReading(Date(d, m, y), temp, hum, ws);
		w.add_reading(wr);
	}
	rfile.close();
}


int main() {
	Weather irkutsk = Weather("Irkutsk", GPS(46.3, 67.2));
	string filenm = getInput_file();
	get_wreadings(filenm, irkutsk);
	
	
	cout << irkutsk << endl;
}

