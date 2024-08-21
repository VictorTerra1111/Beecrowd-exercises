#include <iostream>
#include <iomanip>

using namespace std;

/* Exercicio BEE 1010
 * Simple Calculate
 * Joao Victor Terra
 */

int main(){
	int prod1, prod2;
	double unit1, unit2, price1, price2, paid;

	cin >> prod1 >> unit1 >> price1;
	cin >> prod2 >> unit2 >> price2;
	
	paid = (unit1 * price1) + (unit2 * price2);

	cout << "VALOR A PAGAR: R$ " << std::fixed << std::setprecision(2) << paid << endl;
	return 0;
}	

