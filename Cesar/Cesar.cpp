
#include <iostream>
using namespace std;
void Funkcja(int klucz, char tab[]);
void Funkcja(int klucz, char tab[])
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
				tab += klucz;
			}
			else
			{
				tab = tab + klucz - 26;
			}
		}
	}
	else
	{
		for (int i = 0; i < dl; i++)
		{
			if (tab[i] + klucz >= 'a')
			{
				tab += klucz;
			}
			else
			{
				tab = tab + klucz + 26;
			}
		}
	}
	cout << "Po zaszyfrowaniu " << tab << endl;
}
int main()
{
	string slowo;
	int klucz;
	char tab[100];
	cout << "Podaj wyraz skladajacy sie z malych liter" << endl;
	cin >> tab;
	cout << "Podaj klucz z przedzialu [-26..26]" << endl;
	cin >> klucz;
	Funkcja(klucz, tab);

}