#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   const int NUM_EMPLOYEES = 5;
   int hours[NUM_EMPLOYEES];
   double payRate[NUM_EMPLOYEES];


cout << "Enter the hours worked by " << NUM_EMPLOYEES
     << " Employees and their\n"
     << "hourly pay rates. \n";
   for (int index = 0; index < NUM_EMPLOYEES; index++)
   {
     cout << "Enter the hours worked by employee #"
      << (index + 1) << ": ";
    cin >> hours[index];
    cout << "Hurly pay rate for employee #" << (index+1) << ": ";
    cin >> payRate[index];
   }
cout << "Here is the gross pay for each employee: \n";
cout << fixed << showpoint << setprecision(2);
for (int index = 0; index < NUM_EMPLOYEES; index++)
{
  double grossPay = hours[index] * payRate[index];
  cout << "Employess #" << (index + 1);
  cout << ": S" << grossPay << endl;
}
   return 0;
}