//5.	Написать функцию, меняющую порядок следования элементов передаваемого ей массива на противоположный.

#include<iostream>
#include <windows.h>
using namespace std;
void ShowNaoborot(int arr[], const int X) {


	for (int i = 0; i < X / 2; i++) {
		swap(arr[i], arr[X - 1 - i]);
	}
}
int main()
{
	setlocale(LC_ALL, "rus");
	int mass[20];
	for (int i = 0; i < 20; i++) 
		mass[i] = rand() % 40;
	
	for (int i = 0; i < 20; i++) 
		cout << mass[i] << "\t";
	
	cout << "\n\n";

	ShowNaoborot(mass, 20);

	for (int i = 0; i < 20; i++)
		cout << mass[i] << "\t";
	cout << "\n\n";

}

