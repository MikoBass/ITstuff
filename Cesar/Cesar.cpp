
#include <iostream>
using namespace std;
void Funkcja(int klucz, char tab[]);
int main()
{
	string slowo;
	int klucz;
	char tab[100];
	cout << "Podaj klucz szyfrowania" << endl;
	cin >> klucz;
	cout << "Podaj slowo do zaszyfrowania" << endl;
	cin >> tab;
	void funkcja();

}
void Funkcja(int klucz, char tab[])
{
	int dl;
	int i;
	dl = strlen(tab);
	if ( !(klucz >= -26 && klucz <= 26) )
	{
		cout << "Blad zly klucz";
		
	}
	else if (klucz <= 26)
	{
		cout << "Blad zly klucz";
	}
	else if (klucz >= 0)
	{
		while (i < dl)
		{

		}
	}
}