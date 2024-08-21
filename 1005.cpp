#include <iostream>
#include <iomanip>


using namespace std;

/* Exercicio BEE 1005
 * Average 1
 * Joao Victor Terra
 * */
int main(){
	double A, B, media;

	cin >> A >> B;

	media = (A * 3.5 + B * 7.5) / 11.0;
	
	cout << "MEDIA = " << std::fixed <<std::setprecision(6) << media << endl;
	
	return 0;
}
