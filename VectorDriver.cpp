// VectorDriver.cpp : Defines the entry point for the console application.
// Sidney Jensen
// 10/8/18
// Tests the vetor driver functions

#include "stdafx.h"

#include "VectorDriver.h"
#include <algorithm>

using std::sort;

int main() {
	cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
	vector<short> sample_vector(5);

	cout << "new vector: ";
	print(sample_vector);
	cout << endl;

	fill_vector(sample_vector);

	cout << "filled vector: ";
	print(sample_vector);
	cout << endl;

	cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
	cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;

	vector<short> vector1;
	add_numbers(vector1);
	print(vector1);
	cout << endl;

	// using add_numbers twice in a row;
	add_numbers(vector1);
	add_numbers(vector1);
	print(vector1);
	// adds 20 random numbers to the 10 previously stored in vector 1

	cout << endl;
	print_even(vector1);
	cout << endl;

	cout << is_present(sample_vector, 3) << endl; // prints 1 if true, 0 if false for these two lines
	cout << is_present(sample_vector, 100) << endl;

	vector<short> short_vector;
	for (ulong i = 1; i < 6; i++)// adding 5 random numbers to vector
	{
		short_vector.push_back(rand()); 
	}
	print(short_vector);// showing unsorted vector
	cout << endl;
	sort(short_vector.begin(), short_vector.end());
	print(short_vector);// shows sorted vector

	system("pause");
	return 0;
}
