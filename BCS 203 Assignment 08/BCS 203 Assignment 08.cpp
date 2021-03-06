// Ian Liotta
// BCS 203 Assignment 08

#include "stdafx.h"
#include "snowData.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Function Prototypes
void sortArray(snowData arr[], int size);
void printArray(snowData arr[], int size, string month, int startDate);

int main()
{
	snowData weekData[7];
	int startDate = 1;
	double snowfall = 0.0;
	string month = "";

	//Let the user enter month name, starting date, and snowfall for seven days
	cout << "Enter month:\n";
	cin >> month;
	cout << "Enter starting date: \n";
	cin >> startDate;
	for (int i = 0; i < 7; i++) {
		cout << "Enter snowfall for " << month << " " << startDate + i << ":\n";
		cin >> snowfall;
		weekData[i].setDate(startDate + i);
		weekData[i].setDepth(snowfall);
	}

	//Sort and print the array
	sortArray(weekData, 7);
	printArray(weekData, 7, month, startDate);

	return 0;
}

/*				sortArray
Use a slection sort to sort an array of snowData objects in order of
greatest snow depth to least snow depth.
*/
void sortArray(snowData arr[], int size) {
	int outer, maxIndex = 0;
	snowData temp;

	for (outer = 0; outer < size - 1; outer++) {
		maxIndex = outer;
		for (int i = outer + 1; i < size; i++) {
			if (arr[i].getDepth() > arr[maxIndex].getDepth())
				maxIndex = i;
		}
		temp.setDate(arr[maxIndex].getDate());
		temp.setDepth(arr[maxIndex].getDepth());
		arr[maxIndex].setDate(arr[outer].getDate());
		arr[maxIndex].setDepth(arr[outer].getDepth());
		arr[outer].setDate(temp.getDate());
		arr[outer].setDepth(temp.getDepth());
	}
}

/*      printArray
Print the array of snowfall data.
*/
void printArray(snowData arr[], int size, string month, int startDate) {
	cout << "Snowfall Data for " << month << " " << startDate << "-" << startDate + 7 << endl;
	cout << setw(10) << "Date" << setw(10) << "Base" << endl;
	for (int i = 0; i < 7; i++) {
		cout << setw(10) << arr[i].getDate() << setw(10) << arr[i].getDepth() << endl;
	}
}
