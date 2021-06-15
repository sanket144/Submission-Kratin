#include <iostream>
#include <ctime>
#include <fstream>

using namespace std;

int main()
{
    float liters;
	int minutes;
	cout<<"How much did you drink water today?" << endl;
	cin>>liters;
	cout << "How many minutes you have exposed to sunlight ?" << endl;
	cin >> minutes;


	time_t tmNow;
    tmNow = time(NULL);
    struct tm t = *localtime(&tmNow);

	freopen("RECORD.txt", "w", stdout);
	cout << "You have drunk " << liters<<" Liters " << " of water on " << t.tm_mday << "-" << t.tm_mon + 1 << "-" << t.tm_year + 1900 << endl;

	cout << "Your exposure to sun is " << minutes<<" Minutes " << " on " << t.tm_mday << "-" << t.tm_mon + 1 << "-" << t.tm_year + 1900 << endl;

	fclose(stdout);
}
