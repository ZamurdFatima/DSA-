#include <iostream>
using namespace std;
int main ()
{
 float a=5.5; // initial value: 5
 int b(3); // initial value: 3
 int c{2}; // initial value: 2
 float result; // initial value undetermined
 a = a + b;
 result = a - c;
8
 cout << result;
 return 0;
}
