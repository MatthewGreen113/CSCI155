// This program shows that local varibles do not retain
// their values between function calls
#include <iostream>
using namespace std;

// Function prototype
void showLocal();

int main()
{
  showLocal();
  showLocal();
  return 0;
}

void showLocal()
{
  int localNum = 5;
  cout << "localNum is " << localNum << endl;
  localNum = 99;
}