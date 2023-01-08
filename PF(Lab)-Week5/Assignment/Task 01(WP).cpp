#include <iostream>
using namespace std;
int function(int number);

main()
{
   int number,result;
   cout << "Enter Number: ";
   cin >> number;
   result = function(number);
   cout << "Answer: " << result;
}
int function(int number)
{
  int total;
  total = number*5;
  return total;
}