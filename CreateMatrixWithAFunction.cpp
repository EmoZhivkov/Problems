#include "stdafx.h"
#include <iostream>
using namespace std;

int** CreateMatrix(int m, int n)
{
	cout << endl;
	int **matrix = new int*[m];

	for (int i = 0; i < m; i++)
	{
		matrix[i] = new int[n];
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> *(*(matrix + i) + j);
		}
	}
	cout << endl;
	return matrix;
}

void ReleaseMemory(int **matrix)
{
	delete[] matrix;
	
}

int main()
{
	int a, b;
	cin >> a >> b;

	int ** matrix = CreateMatrix(a, b);

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cout << *(*(matrix + i) + j) << " ";
		}
		cout << endl;
	}
	cout << endl;
	
	ReleaseMemory(matrix);
    return 0;
}

