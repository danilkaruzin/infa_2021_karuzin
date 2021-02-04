#include <string>
#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int N;
    string zvezda("*");
    string x("*");
    cin >> N;
    for (int i =0 ; i < N ; i++ ) {
        cout << zvezda << endl ;
        zvezda = zvezda + x;
    }

    return 0;
    
    
    
}

