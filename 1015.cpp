#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

/* Exercicio BEE 1015
 * Distance between Two Points
 * Joao Victor Terra
 */

int main(){
	double x1, y1, x2, y2, distance;

	cin >> x1 >> y1 >> x2 >> y2;

	distance = pow(pow(x2-x1, 2) + pow(y2-y1, 2), 0.5); 
	
	cout << std::fixed << std::setprecision(4) << distance << endl;


	return 0;
}
