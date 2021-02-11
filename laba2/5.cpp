#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

bool proverka( int a)
{
	int n = (int)sqrt((double)a);
	if (n * n ==  a)
		return true;
	else
		return false;
}



int main()

{
	int a, q , p , r;
	cin >> a;
	for (int i = 0; i * i <= a ; i++){
		for (int j = 0; j * j <= a - i * i; j++){
			for (int k = 0; k * k <= a - i * i - j * j; k++ ){
				if (proverka(a - (i * i + j * j + k * k)  ))
					{
					
					q  = i;
					p = j;
					r = k;
					}
					
				
			}
		
		}
	
		
		
		
		
	}
	
	
	

	cout << sqrt(a - q * q - p * p - r * r) << " "<< r << " "<< p << " " << q; 
	
	
	
	
	
}
