// This program is used by General Crates, INC. to calculate
// the volume, cost, customer charge, and profit of a crate 
// of any size. It calculates this data from user input, which
// consists of the dimensions of the crate.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Constants for cost and amount charged
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;
  
    // Varibles
    double length, width, height, volume, cost, charge, profit;
  
    // Set desired output formatting for numbers
    cout << setprecision(2) << fixed << showpoint;
  
    // Prompt the user for varibles
    cout << "Enter the dimensions of the crate (in feet) ";
    cout << "Length:  ";
    cin >> length;
    cout << "Width:  ";
    cin >> width;
    cout << "Height:  ";
    cin >> height;
  
    // Calculate the crate's volume, the cost to produce it,
    // the charge to the costumer, and the profit.
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;
  
    // Display calculated data
    cout << "The volume of the crate is ";
    cout << volume << " cubic feet." << endl;
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;
    return 0;
}