#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;
int funkcja(int sz, int tab[]);
int main()
{
    int sz = 0;
    int tab[25] = { 2, 3, 5, 7, 11, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47 };

    cout << "Podaj index'y jakich liczb chcesz poznać" << endl;
    cin >> sz;
    auto start = high_resolution_clock::now();
    funkcja(sz, tab);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\n Ilosc milisekund do wykonania zadania - ";
    cout << duration.count() << endl;

}
int funkcja(int sz, int tab[])
{
    int index = 0;
    int liczby[10];
    for (int i = 0; i < 25; i++)
    {
        if (tab[i] == sz)
        {
            liczby[index] = i;
            index += 1;
        }
    }
    for (int i = 0; i < index; i++)
    {
        cout << liczby[i] << "\t";
    }
    return 0;
}
