// Selection Sort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<time.h>

void selectionSort(int[], int);
using namespace std;
int main()
{
	int n;
	cout << "Enter the size of array  ";
	cin >> n;
	int *a;
	a = new int[n];
	clock_t begin, end;
	double time;
	cout << "Enter the array" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << endl << "actual array is......." << endl;
	for (int i = 0; i < n; i++)
	{
		cout <<" "<< a[i] << " ";
	}
	cout << endl;

	begin = clock();
	selectionSort(a, n);
	end = clock();

	time = ((double)end - begin) / CLOCKS_PER_SEC;
	cout << endl << "sorted array is......." << endl;
	for (int i = 0; i < n; i++)
	{
		cout <<" "<< a[i] << " ";
	}
	cout << endl;
	cout << "This algorithm took " << time << " seconds!!!" << endl;
	system("pause");
    return 0;
}

void selectionSort(int a[], int n)
{
	for (int j = 0; j < n; j++)
	{
		int temp = a[j];
		for (int i = j; i < n; i++)
		{
			if (temp > a[i])
			{
				temp = a[i];
			}
		}

		for (int k = j; k < n; k++)
		{
			if (a[k] == temp)
			{
				int an;
				an = a[k];
				a[k] = a[j];
				a[j] = an;
			}
		}
	}
}
