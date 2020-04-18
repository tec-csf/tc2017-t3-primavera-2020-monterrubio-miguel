/*
**Sea a[1..n] un vector ordenado de enteros todos distintos, implementar un algoritmo con la menor compejidad posible en el peor caso capaz de encontrar un índice i tal que 1≤i≤n y a[i] = i, suponiendo que tal índice exista.
**
**Algoritmo: Divide y vencerás
**
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <time.h>

using namespace std;

vector<int> create(int size)
{
	srand (time(NULL));
	vector<int> arr;
	int x;
	std::vector<int>::iterator it;

	for (int i = 0; i < size; ++i)
	{
		
		do {
			x = rand() % 100 + 1;
			it = find(arr.begin(), arr.end(), x);

		} while (it != arr.end());

		arr.push_back(x);
	}

	sort(arr.begin(), arr.end());

	return arr;
}

void printArr(vector<int> arr)
{
	for (int i = 0; i < arr.size(); ++i)
	{
		cout << endl << arr[i];
	}
	cout << endl;
}

int searchIdx(vector<int> arr, int low, int high)
{

	if (high >= low)
	{
		int mid = (low + high) / 2;
		if (arr[mid] == mid)
		{
			return mid;
		}
		else if (mid < arr[mid])
		{
			return searchIdx(arr, low, mid-1);
		}
		else if (mid > arr[mid])
		{
			return searchIdx(arr, mid+1, low);
		}
	}
	else
	{
		return -1;
	}
}

int main()
{
	int size = 10;
	
	vector<int> arr = create(size);
	printArr(arr);

	int i = searchIdx(arr, 0, size-1);

	cout << endl << "indice i encontrado. a[" << i << "] =" << arr[i] << endl;

	return 0;
}

