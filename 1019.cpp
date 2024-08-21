#include <iostream>

using namespace std;

class Tempo{
	public:
		
		
		int get_minutes(int s);
		int get_hours(int s);
		void read_time() const;
		void print_time() const;
	private:
		int h, m, s;
};

int Tempo::get_minutes(s){ int m = s / 60; return m;}

int Tempo::get_hours(s){ int h = s/3600; return h;}

void Tempo::read_time() const{ cin >> s;}

void Tempo::print_time() const{ cout << h << ":" << m << ":" << s << endl;}

int main(){

	cout << "yes" << endl;

	return 0;
}
