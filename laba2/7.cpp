#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;


	
int main(){
	
	
int a;
bool b;
cin >> a;
 for (int i = 0 ; i*i*i <= a; i++){
 	for(int j = 0; j*j*j <= a ; j++){
 		if (i * i * i + j * j * j == a){
		 
 			cout << i << " "<< j << endl;
 			b = true;
			 }

	 }
	 
	 
	
 }
 if (!b) cout << "impossible";
	
	
	
	
	
	
	
	
	
	
	
}	
	
	
	

