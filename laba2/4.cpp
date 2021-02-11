#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

bool prime(int n)
{
	for (int i = 2; i*i <= n; i++)
	{
		if (n%i == 0)
			return false;
		
	}
	
	return true;
}




int main()

{
	int n, a = 0 , b = 2;
	cin >> n ;
	
	
	while (a < n)
	{
		if (prime(b))
		{
			a++;
		}
		
		b++ ;
		
		
	}
	cout << b-1  ;
	
	
	
	
	
}
