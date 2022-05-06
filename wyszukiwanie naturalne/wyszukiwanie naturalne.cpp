#include <iostream>
using namespace std;
int main()
{
    int sz = 0;
    int tab[25] = { 2, 3, 5, 7, 11, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47 };
    int liczby[10];
    int funkcja(int sz, int tab[], int index, int liczby[]);
    int index = 0;

    cout << "Podaj index'y jakich liczb chcesz poznać" << endl;
    cin >> sz;
    funkcja(sz, tab, index, liczby);

}
int funkcja(int sz, int tab[], int index, int liczby[])
{
    for (int i = 0; i <= sizeof(tab); i++)
    {
        if (tab[i] == sz)
        {
            liczby[index] = i;
            index += 1;
        }
    }
    for (int i = 0; i <= 4; i++)
    {
        cout << liczby[i];
    }
    return 0;
}
