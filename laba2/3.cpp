#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

main()

{
	int a , div =2 ;
	cin >> a;
	
	cout << "a = ";
	
	cout << a << " = 1";
	while (a>1)
	{
		while (a % div == 0)
		{
			cout<< " * " << div;
			a = a/div;
			
		}
		div++;
		
	}
	
	
	
	
	
}
