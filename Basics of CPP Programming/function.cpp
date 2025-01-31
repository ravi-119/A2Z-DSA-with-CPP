// function returning the max between two numbers
#include <iostream>
using namespace std;
// function declaration
int max(int num1, int num2)
{
 int result;
 if (num1 > num2)
 result = num1;
 else
 result = num2;
 return result;
}
int main ()
{
 // local variable declaration:
 int a = 100;
 int b = 200;
 int ret;
 // calling a function to get max value.
 ret = max(a, b);
 cout << "Max value is : " << ret << endl;
 return 0;
}





// call by value 

/* The call by value method of passing arguments to a function copies the actual
value of an argument into the formal parameter of the function. In this case,
changes made to the parameter inside the function have no effect on the
argument.
By default, C++ uses call by value to pass arguments. In general, this means
that code within a function cannot alter the arguments used to call the function.
Consider the function swap() definition as follows. */

// function definition to swap the values.
void swap(int x, int y)
{
 int temp;
 temp = x;  /* save the value of x */
 x = y;  /* put y into x */
 y = temp;  /* put x into y */

 return;
}


#include <iostream>
using namespace std;
// function declaration
void swap(int x, int y);
int main ()
{
 // local variable declaration:
 int a = 100;
 int b = 200;

 cout << "Before swap, value of a :" << a << endl;
 cout << "Before swap, value of b :" << b << endl;

 // calling a function to swap the values.
 swap(a, b);
 cout << "After swap, value of a :" << a << endl;
 cout << "After swap, value of b :" << b << endl;

 return 0;
}






// Call by referance
// function definition to swap the values.
void swap(int &x, int &y)
{
 int temp;
 temp = x; /* save the value at address x */
 x = y; /* put y into x */
 y = temp; /* put x into y */

 return;
}

#include <iostream>
using namespace std;
// function declaration
void swap(int &x, int &y);
int main ()
{
 // local variable declaration:
 int a = 100;
 int b = 200;

 cout << "Before swap, value of a :" << a << endl;
 cout << "Before swap, value of b :" << b << endl;

 /* calling a function to swap the values using variable reference.*/
 swap(a, b);

 cout << "After swap, value of a :" << a << endl;
 cout << "After swap, value of b :" << b << endl;

 return 0;
}




// Default Values for Parameters

#include <iostream>
using namespace std;
int sum(int a, int b=20)
{
 int result;
 result = a + b;

 return (result);
}

int main ()
{
 // local variable declaration:
 int a = 100;
 int b = 200;
 int result;

 // calling a function to add the values.
 result = sum(a, b);
 cout << "Total value is :" << result << endl;

 // calling a function again as follows.
 result = sum(a);
 cout << "Total value is :" << result << endl;

 return 0;
}