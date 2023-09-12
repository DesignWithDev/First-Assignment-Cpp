// Q1 - Take 2 integer values in two variables x and y and print their product.
#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;
    cout << "The product is: " << a * b;
}

//---------------------------------------------------------------------------------------------------------
// Q2 - Print the ASCII value of character ‘U’.
#include <iostream>
using namespace std;

int main()
{
    char ch = 'U';
    cout << "ASCII value of 'U' is: " << int('U');
}

//-----------------------------------------------------------------------------------------------------------
// Q3 - Write a C++ program to take length and breadth of a rectangle and print its area.
#include <iostream>
using namespace std;

int main()
{
    int length = 12, breadth = 11;
    cout << "Length: " << length << endl;
    cout << "breath: " << breadth << endl;

    cout << "Area of Rectangle is: " << length * breadth;
}

//-----------------------------------------------------------------------------------------------------------
// Q4 - Write a C++ program to calculate the cube of a number.
#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    cout << "Cube of " << a << " is " << a * a * a << endl;
}

//-----------------------------------------------------------------------------------------------------------
// Q5 - Write a C++ program to find size of basic data types.
#include <iostream>
using namespace std;

int main()
{
    cout << "\nSize of fundamental data types :\n";
    cout << " The sizeof(char) : " << sizeof(char) << " bytes \n";
    cout << " The sizeof(short) : " << sizeof(short) << " bytes \n";
    cout << " The sizeof(int) : " << sizeof(int) << " bytes \n";
    cout << " The sizeof(long): " << sizeof(long) << " bytes \n";
    cout << " The sizeof(long long) :" << sizeof(long long) << " bytes \n";
    cout << " The sizeof(float) :" << sizeof(float) << " bytes \n";
    cout << " The sizeof(double) :" << sizeof(double) << " bytes \n";
    cout << " The sizeof(long double) :" << sizeof(long double) << " bytes \n";
    cout << " The sizeof(bool) : " << sizeof(bool) << " bytes \n\n";
    return 0;
}

//-----------------------------------------------------------------------------------------------------------
// Q6 - Write a C++ program to swap two numbers with the help of a third variable.
#include<iostream>
using namespace std;

int main(){
    int a = 10, b = 20, c;
    cout<<"Value of a and b before swap are "<<a<<" and "<<b<<endl;

    c = a;
    a = b;
    b = c;

    cout<<"Value of a and b after swap are "<<a<<" and "<<b<<endl;
}