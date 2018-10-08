#pragma once
/* File: VectorDriver.cpp
* Athr: Dimitri Zarzhitsky
* Date: October 16, 2002
*
* Desc: provides the basic framework and examples for an introduction to
*       the STL::vector, iterators, and the algorithms facilities.
*
* Edited by: Rafe Cooley
* Date: October 1, 2017 (the future)
*
*/
// Sidney Jensen
// 10/8/18
// Builds functions for vectors
typedef unsigned long ulong;

#include <iostream>
#include <vector>
#include <stdlib.h>

using std::cout;
using std::endl;
using std::vector;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
	for (ulong i = 0; i<data.size(); i++) {
		data.at(i) = i;
	}
}

// print our vector in a fancy way
void print(const vector<short> &data) {
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 1; i<data.size(); i++) {
			cout << ", " << data.at(i);
		}
		cout << ">";
	}
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
	std::vector<short>::const_iterator iter = data.begin();

	short sum = 0;
	while (iter != data.end()) {
		sum += *iter;
		iter++;
	}

	return sum;
}

// TODO: implement add_numbers
// takes a list and adds ten random numbers to it
void add_numbers(vector<short> &data) {
	for (ulong i = 1; i < 11; i++) // loops through ten times
	{
		data.push_back(rand()); // adds a random number
	}
}

// TODO: implement print_even
// prints out all the values at an even index
void print_even(const vector<short>& data) {
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 1; i<data.size(); i++) {
			if (i % 2 == 0) { // if even, then print out
				cout << ", " << data.at(i);
			}
		}
		cout << ">";
	}
}

// TODO: implement is_present
// returns true if the value is in the data vector and false if is not
bool is_present(const vector<short> &data, short value)
{
	std::vector<short>::const_iterator iter = data.begin();

	while (iter != data.end()) {
		if (value == *iter)
		{
			return true; // returns true if finds number in the vector
		}
		else 
		{
			iter++; // iterates through entire vector until end or finds value
		}
	}

	return false; // if doesn't find, returns false
}
// TODO: implement std::sort function

