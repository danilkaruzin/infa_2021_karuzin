#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;





int main()
{
	int a,b,m;
	bool q;
	cin >> a >> b >> m;
	for (int i=0; i <= m; i++){
		if ((a * i - b) % m == 0)
		{
		
			cout << i << " ";
			q = true;
		}
	}
	if(!q) cout << -1;
}

