
#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;

int main()
{

	int a = 0;
	int b = 1;
	int c;
	int n = 3;		
	int m;
	auto start = high_resolution_clock::now();
	cout << "Ile liczb z ciagu wypisac" << endl;
	cin >> m;
	cout << endl;
	cout << a << endl << b << endl;
	while (n <= m)
	{
		c = a + b;
		a = b;
		b = c;
		n++;
	
		cout << c << endl;
	}
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << "\n Ilosc milisekund do wykonania zadania - ";
	cout << duration.count() << endl;
}
