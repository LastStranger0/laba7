#include "pch.h"
#include "iostream"
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	string s;
	cout << "vvedite stroku\n";
	getline(cin, s);
	int n, m = 1000;
	int y = s.length();
	for (int i = 0; i < y; i++)
	{
		if ((s[i] == ' ') || (i == 0))
		{
			int q = 0;
			for (int j = i + 1; j < y; j++)
			{
				q++;
				if (s[j] == ' ')
					break;
			}
			if (q < m)
			{
				m = q;
				n = i;
			}
		}
	}
	if (n != 0)
	{
		cout << n + 2 << " " << m - 1 << "\n";
		for (int i = n + 1; s[i] != ' '; i++)
			cout << s[i];
	}
	else
	{
		cout << n + 1 << " " << m << "\n";
		for (int i = n; s[i] != ' '; i++)
			cout << s[i];
	}
	system("pause");
	return 0;
}