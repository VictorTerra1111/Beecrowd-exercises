#include <iostream>
#include <iomanip>

using namespace std;

/* Exercicio BEE 1006
 * Average 2
 * Joao Victor Terra
 */

int main(){
	double A, B, C, MEDIA;

	cin >> A >> B >> C;

	MEDIA =(A*2 + B*3 + C*5)/10.0;

	cout << std::fixed << std::setprecision(1) << "MEDIA = " << MEDIA << endl;

	return 0;
}
