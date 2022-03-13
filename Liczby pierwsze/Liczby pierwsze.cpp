#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cout << "ile liczb pierwszych mam wyswietlic?" << endl;
    cin >> n;
    int p = 2;
    cout << "Liczby pierwsze:" << endl;
    for (int c = 0; c < n; c)
    {
        bool pier = true;
        for (int i = 2; i <= p / 2; i++)
        {
            if (p % i == 0)
            {
                pier = false;
                break;
            }
        }
        if (pier == true)
        {
            cout << p << endl;
            c++;
        }
        p++;

    }
}
