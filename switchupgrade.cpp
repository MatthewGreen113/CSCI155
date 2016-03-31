#include <iostream>
#include <string>
#include <fstream>
using namespace std;
 
int main ()
{
 ofstream outputFile;
 // Open an output file
 outputFile.open("switchfile.txt");
 // local variable declaration: 
 char grade;
 cout << "What is the grade? : ";
 cin >> grade;
   
  switch(grade)
   {
   case 'A' :
   case 'a' :
      cout << "Excellent!" << endl;
      break;
   case 'B' :
   case 'b' :
   case 'C' :
   case 'c' :
      cout << "Well done" << endl;
      break;
   case 'D' :
   case 'd' :
      cout << "You passed" << endl;
      break;
   case 'F' :
   case 'f' :
      cout << "Better try again" << endl;
      break;
   default :
      cout << "Invalid grade" << endl;
   }
   cout << "Your grade is " << grade << endl;
  
  // Write numbers to a file
  outputFile << grade << endl;
  cout << "The grade was saved to a file./n";
 
  // Close the file
  outputFile.close();
  cout << "Done ";
   return 0;
}