#include <iostream>
#include <string>
#include <iomanip>

#define BONUS 15

using namespace std;

/* Exercicio BEE 1009 
 * Salary with Bonus
 * Joao Victor Terra
 */

int main(){
	string name;
	double salary, sales, total;

	cin >> name >> salary >> sales;
		
	total = salary + ((sales * BONUS) / 100.0);

	cout << "TOTAL = R$ " << std::fixed << std::setprecision(2) << total << endl;

	return 0;
}
