
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int n ;
    cin >> n;
    string star("*");
    for(int i=0;i<n;i++)
        {
            string s;
            for(int j=0;j<n-2*i;j++)
                s+=star;
            for(int j=0;j<i;j++)
                cout<<" ";
            cout<<s<<endl;
        }       

}
