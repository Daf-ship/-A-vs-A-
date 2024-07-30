// ++A vs A++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int A = 10;
    int B = A++;


    cout << "B" << B << endl;
    cout << "A" << A << endl;

    B = ++A;

    cout << B << " : B \n" ;
    cout << A << " : A \n";





    int C = 5, D = 8;


    C += D;
    cout << "C+D = " << C << endl; 




    C -= D; 
    cout << "C-D = " << C << endl; 




    C *= D;
    cout << "C*D = " << C << endl;




    C /= D;
    cout << "C/D = " << C << endl;




    C %= D;
    cout << "C%D = " << C << endl;








    return 0;
}


