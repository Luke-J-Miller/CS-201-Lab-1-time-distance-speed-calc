#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double distance, time, velocity;

	cout << "Enter how many miles you are traveling " << endl;
	cin >> distance;

	cout << "How fast are you traveling in mph? " << endl;
	cin >> velocity;
	
    // Calculate the time it takes here.
	time = distance/velocity;
	//comment//
	cout << endl;
	cout << "At " << fixed << setprecision(2) << velocity << " mph it will take " << fixed << setprecision(2) << time << " hours to travel " << fixed << setprecision(2) << distance << " miles." << endl;
	
	return 0;

}