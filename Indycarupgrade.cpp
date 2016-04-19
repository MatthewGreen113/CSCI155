// This program calculates the the number of laps traveled
#include <iostream>
using namespace std;

int main() {
//setting up varibles 
double rate, time, laps, length;

//get the rate of speed
cout << "How fast is the car traveling in mph? ";
cin >> rate;

//get length of track
cout << "What is the length of the track in miles? ";
cin >> length;

//get the time
cout << "How long has the car been traveling in seconds? ";
cin >> time;

//calculate the number of laps traveled
laps = ( (rate) * ( (time) / 3600 ) ) / (length);

//display the number of laps travled
cout << "The car has traveled " << laps << " lap(s)" << endl;
return 0;
} 