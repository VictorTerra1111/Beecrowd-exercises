#include <iostream>
#include <iomanip>

#define PI 3.14159
using namespace std;

/* Exercicio BEE 1011
 * Sphere
 * Joao Victor Terra
 */

int main(){
	double r, area;

	cin >> r;
	
	area = (4.0/3) * PI * r * r *r;

	cout << "VOLUME = " << std::fixed << std::setprecision(3) << area << endl;

	return 0;
}	
		
