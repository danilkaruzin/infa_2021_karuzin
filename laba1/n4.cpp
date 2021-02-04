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
    for (int i =0 ; i < N -1 ; i++ ) {
        zvezda = zvezda + x;
    }
    for (int i =0; i < N - 1; i++){
        zvezda[zvezda.length()-i] = '\0';
        cout << zvezda << endl;
    }
    cout << "*" << endl;
    return 0;
    
    
    
}

