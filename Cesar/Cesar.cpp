
#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;
void Funkcja(int klucz, char tab[], string slowo);
void Funkcja(int klucz, char tab[], string slowo)
{
	int dl;
	dl = strlen(tab);
	if ( !(klucz >= -26 && klucz <= 26) )
	{
		cout << "Blad zly klucz";
		
	}
	if (klucz >= 0)
	{
		for(int i = 0; i < dl; i++)
		{
			if (tab[i] + klucz <= 'z')
			{
				tab[i] += klucz;
			}
			else
			{
				tab[i] = tab[i] + klucz - 26;
			}
		}
	}
	else
	{
		for (int i = 0; i < dl; i++)
		{
			if (tab[i] + klucz >= 'a')
			{
				tab[i] += klucz;
			}
			else
			{
				tab[i] = tab[i] + klucz + 26;
			}
		}
	}
	cout << "Przed zaszyfrowaniem " << slowo << endl;
	cout << "Po zaszyfrowaniu " << tab << endl;
}
int main()
{
	string slowo;
	int klucz;
	char tab[100];
	auto start = high_resolution_clock::now();
	cout << "Podaj wyraz skladajacy sie z malych liter" << endl;
	cin >> tab;
	slowo = tab;
	cout << "Podaj klucz z przedzialu [-26..26]" << endl;
	cin >> klucz;
	Funkcja(klucz, tab, slowo);

	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << "\n Ilosc milisekund do wykonania zadania - ";
	cout << duration.count() << endl;
}