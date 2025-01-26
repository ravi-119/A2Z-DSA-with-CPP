// if condition

// #include <iostream>
// using namespace std;
// int main() {
//   int a = 10;
//   if ( a < 20 )
//   {
//     cout<<" a is less than 20 "<< endl; 
//   }
//   cout<< " value of a is " << a << endl;
//   return 0;
// }

// if, else condition 

// #include <iostream>
// using namespace std;
// int main() {
//     int a = 100;
//     if ( a < 20 )
//     {
//         cout<< " a is less than 20 " <<endl;
//     }
//     else
//     {
//         cout<< " a is not less than 20 " <<endl;
//     }
//     cout<< " value of a is : " << a << endl;

//     return 0;
// }


// if, else if, else condition 

// #include <iostream>
// using namespace std;
// int main() {
//     int a = 100;
//     if ( a == 20 )
//     {
//         cout<< " Value of a is 20 " <<endl;
//     }
//     else if( a == 30 )
//     {
//         cout<< " value of a is 30 " <<endl;
//     }
//     else
//     {
//         cout<< " value of a is not matching: " << a << endl;
//     }
//     cout<< " value of a is : " << a << endl;

//     return 0;
// }



#include <iostream>
using namespace std;
int main ()
{
    // local variable declaration:
    char grade = 'D';
    switch(grade)
    {
        case 'A' :
        cout << "Excellent!" << endl;
        break;

        case 'B' :
        case 'C' :
        cout << "Well done" << endl;
        break;

        case 'D' :
        cout << "You passed" << endl;
        break;

        case 'F' :
        cout << "Better try again" << endl;
        break;

        default :
        cout << "Invalid grade" << endl;
    }
    cout << "Your grade is " << grade << endl;
    return 0;
}