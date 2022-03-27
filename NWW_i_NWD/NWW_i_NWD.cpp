#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
int main()
{
    auto start = high_resolution_clock::now();
    int a = 0;
    int b = 0;
    cout << "Hello World!\n";
    cout << "Podaj dwie liczby\n";
    cin >> a >> b;
    int iloczyn = a * b;
    while (a != b)
    {
        if (a <= b)
        {
            b = b - a;
        }
        else
        {
            a = a - b;
        }
    }
    float nww = iloczyn / a;
    cout << "NWD = " << a << endl;
    cout << "NWW = " << nww;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "\n Ilosc milisekund do wykonania zadania - ";
    cout << duration.count() << endl;
}
