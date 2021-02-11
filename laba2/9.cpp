#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;





int main()
{
	int a, n, max1 =-999999, max2 = -999999 ,min1 = 999999 , min2 = 999999;
	cin >> n;
	for (int i = 0; i < n; ++i){
 		cin >> a;
        if (a < min1){
            min2 = min1;
            min1 = a;
        }else if (a < min2)
            min2 = a;
        
        if (a > max1){
            max2 = max1;
            max1 = a;
        }else if (a > max2)
            max2 = a;
		
	
}
	cout << min1 << " " << min2 << " "  << max2 << " "  << max1	; 
		
	
		
		
		
		
		
		
	
}
