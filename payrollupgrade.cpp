// This progam calculates the user's pay. 
#include <iostream>
using namespace std;
 
int main() { 
//setting up variables
double hours, rate, pay, ftax, stax, netpay, staxper, ftaxper, tottax; 
 
// Get the number of hours worked. 
cout << "How many hours did you work? "; 
cin >> hours; 
 
// Get the hourly pay rate. 
cout << "How much do you get paid per hour? "; 
cin >> rate;

// Ask Federal Tax rate.
cout << "What percent do you pay for federal tax? ";
cin >> ftax;
ftaxper = (ftax) * (.01);


// Get the state tax rate.
cout << "What percent do you pay for state tax? ";
cin >> stax;
staxper = (stax) * (.01);

 
// Calculate the pay. 
pay = hours * rate;
tottax = (pay * ftaxper) + (pay * staxper);
netpay = pay - tottax;
 
// Display the gross pay, total tax, and netpay 
cout << "Your gross pay is $ " << pay << endl;
cout << "You have spent $ " << tottax << " total on taxes" << endl;
cout << "Your netpay (gross pay minus taxes) is $ " << netpay << endl;
return 0; 
}