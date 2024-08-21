#include <iostream>
#include <iomanip>
#define PI 3.14159

using namespace std;

/* Exercicio BEE 1012
 * Area
 * Joao Victor Terra
 */

int main(){
	double A, B, C;
	double tri, cir, trap, quad, ret;

	cin >> A >> B >> C;

	tri = (A * C ) / 2.0;
	cir = Pi * C * C;
	trap = ((A + B) * C) / 2.0;	
	quad = B * B;
	ret = A * B;

	cout << "TRIANGULO: " << std::fixed << std::setprecision(3) << tri << endl;
	cout << "CIRCULO: " << std::fixed << std::setprecision(3) << cir << endl;
	cout << "TRAPEZIO: " << std::fixed << std::setprecision(3) << trap << endl;
	cout << "QUADRADO: " << std::fixed << std::setprecision(3) << quad << endl;
	cout << "RETANGULO: " << std::fixed << std::setprecision(3) << ret << endl;
	return 0;
}
