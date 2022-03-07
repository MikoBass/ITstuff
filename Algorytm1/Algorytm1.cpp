#include <iostream>
using namespace std;
int main()
{
	int n;
	int lp;
	int p;
	int c = 0;
	cout << "Ile liczb pierwszych chcesz wyswietlic" << endl;
	cin >> n;
	lp = 0;
	p = 2;
	while (lp < n)
	{
		for (int d = 2;d <= p-1; d++)
		{
			
			cout << d;
			if (p%d == 0)
			{
				cout << "p ";
				cout << "Jest pierwsze";
				lp += 1;
			}
			
			p += 1;
		}
		if(p%d!=0)
		{
			
		}
	}
		
}


