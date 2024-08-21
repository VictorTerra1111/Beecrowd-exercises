#include <iostream>
#include <iomanip>

using namespace std;

/* Exercicio 1008
 * Salary
 * Joao Victor Terra
 */

int main(){
	int number, hours;
	double amount, salary;

	cin >> number >> hours >> amount;
	
	salary = hours * amount;

	cout << "NUMBER = " << number << endl << "SALARY = U$ " << std::fixed << std::setprecision(2) << salary << endl;
	return 0;
}
