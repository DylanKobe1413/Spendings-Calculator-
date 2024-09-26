#include <iostream>
using namespace std;

void PriceList(double* Price_Array, string* Item_Array, int Size)
{
	double limit = 65;
	double total = 0;
	double leftover;
	for (int i = 0; i < Size; i++)
	{
		cout << "Item Name: ";
		cin >> Item_Array[i];
		cout << "Price Amount: ";
		cin >> Price_Array[i];
	}

	for (int i = 0; i < Size; i++)
	{
		total += Price_Array[i];
	}
	if (total > limit)
	{
		leftover = total - limit;
		cout << "Today, you spent $" << total << ". You are $" << leftover << " above the limit.\n";
	}
	else
	{
		leftover = limit - total;
		cout << "\nToday, you spent $" << total << ". You have $" << leftover << " left to spend!\n";
	}
}

void MostandLeast(double* Price_Array, string* Item_Array, int Size)
{
	int Max = 0;
	int Min = 0;

	for (int i = 0; i < Size; i++)
	{

		if (Price_Array[Max] < Price_Array[i])
			Max = i;

		if (Price_Array[Min] > Price_Array[i])
			Min = i;
	}
	cout << "The most expensive item was " << Item_Array[Max];
	cout << "\nThe least expensive item was\n " << Item_Array[Min];
}


int main()
{
	int size;
	cout << "How many expenses did you have today: ";
	cin >> size;
	double* price_array = new double[size];
	string* item_array = new string[size];
	cout << "Please enter your expenses\n\n";
	PriceList(price_array,item_array, size);
	MostandLeast(price_array, item_array, size);


	return 0;
}