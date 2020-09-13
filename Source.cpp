#include <iostream>
using namespace std;

void xuat(int a[], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
}

void InsertSort(int a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int t = a[i];
		int j = i - 1;
		while (j >= 0 && t > a[j])
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = t;
	}

}

int main()
{
	int a[100], n;
	cout << "Nhap n: ";
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		a[i] = rand() % (50 - 3 + 1) + 3;
	}
	xuat(a, n);
	InsertSort(a, n);
	cout << endl;
	xuat(a, n);
	return 0;
}