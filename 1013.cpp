#include <iostream>

using namespace std;

int main(){
	int a, b, c, maiorAB, maiorABC, abs1, abs2;

	cin >> a >> b >> c;
	
	abs1 = (a - b);
	
	if(abs1 < 0) 
		abs1 = abs1 * -1;
	
	maiorAB = (a + b + (abs1)) / 2;	
	
	abs2 = (maiorAB - c);
        
	if(abs2 < 0) 
		abs2 = abs2 * -1;
        
	maiorABC = (maiorAB + c + (abs2)) / 2;

	cout << maiorABC << " eh o maior" << endl;

	return 0;
}
