#include <iostream>
#include <iomanip>

using namespace std;

/* Exercicio BEE 1014
 * Consumption
 * Joao Victor Terra
 */

int main(){
	int X; /* total distance in Km */
	double Y; /* spent fuel total*/
	double cons;
	
	cin >> X >> Y;

	cons = X / Y;

	cout << std::fixed << std::setprecision(3) << cons << " km/l" << endl; 
	
	return 0;
}
