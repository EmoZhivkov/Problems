#include "stdafx.h"
#include <iostream>
using namespace std;

int strContain(char a[], char b[])
{
	int cnt = 0;
	for (int i = 0; i < strlen(b); i++)
	{
		if ((i + strlen(a)) > strlen(b))
		{
			return 0;
			break;
		}

		for (int j = 0; j < strlen(a); j++)
		{
			if (b[i + j] == a[j])
			{
				cnt++;
			}
			else
			{
				cnt = 0;
				break;
			}
		}

		if (cnt == strlen(a))
		{
			return 1;
			break;
		}
	}
	
}

int main()
{
	char a[] = { "azsumhotin" };
	char b[] = { "azsumazsumhotin" };


	bool is = strContain(a, b);

	//if bool == 1 then a is contained in b
	//if bool == 0 then a is NOT contained in b
	cout << is << endl;
    return 0;
}

