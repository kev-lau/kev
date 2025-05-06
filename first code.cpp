// project 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.141592653

using namespace std;
int main()
{
    double s = 3, r = 5;
    cout << "Area Calculator\n";
    cout << "****************\n\n";
    cout << "Area of Square ";
    cout << " of side s = " << s;
    cout << " is " << s * s;

    cout << "\nArea of Circle";
    cout << " of radius r = " <<
        setprecision(4) << r;
    cout << " is " << PI * r * r;

    cout << "\nArea of Triangle";
    cout << " of side s = " << s;
    cout << " of side r = " << r;
    cout << " is " << 0.5 * s * r << '\n';

    cout << " s = ";

    cin >> s; 
    cout << "Area of Square";
    cout << " s = " << s;
    cout << " is " << s * s << '\n';

    cout << " r = ";

    cin >> r;
    cout << "Area of Circle";
    cout << " r = " << r;
    cout << " is " << PI * r * r << '\n';

        





    

   
}
