#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()

{

	// here is the datastring length=1&width=2&height=3

	string str = "";

	cin >> str;

	string str1 = str.substr(7,1);

	string str2 = str.substr (15,1);
      
        string str3 = str.substr (24,1);
double length, width, height, volume, cost, charge, profit;
	

	stringstream(str1) >> length;

	stringstream(str2) >> width;

	stringstream(str3) >> height;

	// Constants for cost and amount charged
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;
	volume = length * width * height;
	cost = volume * COST_PER_CUBIC_FOOT;
  charge = volume * CHARGE_PER_CUBIC_FOOT;
  profit = charge - cost;

	cout << "Content-type: text/html" << endl << endl;

        cout << "<html><head><title>customer order</title></head><body>" << endl;
        
        cout << "Data received: "  << str << endl << "<br>";
	
	cout << "length: "  << length << endl << "<br>";

	cout << "width : "  << width << endl << "<br>";

	cout << "height : "  << height << endl << "<br>" ;

	cout << "The total volume: " <<  volume << endl << "<br>";

	cout << "cost : " << cost << endl << "<br>";
	
	cout << "charge : " << charge << endl << "<br>";
	
	cout << "profit : " << profit << endl << "<br>";
	
	cout << "</body></html>" << endl;

	return 0;

}