#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;





int main()
{
	int a, max = -999999, i;
	
	 do{
	 	cin >> a;
	 	if ( a > max){
	 		max = a;
	 		i = 1;
		 }
		if ( a == max)
			i++;
		
	 } while ( a != 0);
	
	
	cout << i - 1 << " "<< max;
}



