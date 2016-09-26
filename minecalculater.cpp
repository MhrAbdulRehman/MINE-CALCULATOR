#include <iostream>
using namespace std;

int main()
{
   float a, b, result;
   char operation;
 
   // Get numbers and mathematical operator from user input
   
   cout<<"please enter the operation you want perform (+,-,*,/)";
   cin>> operation;
    cout<<"please enter the first operend---";
   cin >> a; 
    cout<<"please enter the second operend---";
   cin >> b;

   // Character constants are enclosed in single quotes
   switch(operation)
   {
   case '+':
         result = a + b;
         break;

   case '-':
         result = a - b;
         break;

   case '*':
         result = a * b;
         break;

   case '/':
         result = a / b;
         break;

   default:
         cout << "Invalid operation. Program terminated." << endl;
         return -1;
   }

   // Output result
   cout<<"the result is here ";
   cout << result << endl;
   return 0;
}
