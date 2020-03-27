#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
using namespace std;
int main()
{
	int m;
	scanf("%d", &m);
	string str[100];
	for (int i = 0; i < 2*m; i += 2)
	{
		cin >> str[i] >> str[i+1];
		if (str[i].length()> str[i+1].length() )
			{
				cout << str[i] << " is longer than " << str[i+1] << "\n";
			}else if(str[i].length()== str[i+1].length() ){
				cout << str[i] << " is equal long to " << str[i+1] << "\n";
			}else{
				cout << str[i] << " is shorter than " << str[i+1] << "\n";
			}
	}
	return 0;
}