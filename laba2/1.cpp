#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

main()

{
	int a, b,c;
	cin >> a >> b >> c;
	
	
	if ((a > c +b) || (b > a + c) || (c > a + b)){
		cout << "impossible";
		
	}
	else {
	if ( c*c + b*b == a*a)
		cout << "straight";
		if ( c*c + b*b > a*a)
		cout << "sharp";
		if ( c*c + b*b  < a*a)
		cout << "flolen";}
	
	
	if (a < b) 
	swap(a ,b);
	if (b < c) 
	swap (b, c);
	if (a < b) 
	swap (a, b);
	
	
	
	
	
	
	
	
	
	return 0;
}
