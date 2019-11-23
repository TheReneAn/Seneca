/***********************************************************************
// OOP244 Project Milestone 2 THE READWRITABLE INTERFACE
//
// File ReadWriteable.cpp

	�� Name: Youjin An
	�� Email : yan24@myseneca.ca
	�� Part: MS02
	�� Date: 23 Nov 2019

***********************************************************************/

#define _CRT_SECURE_NO_WARNINGS

using namespace std;

#include "ReadWriteable.h"

namespace sdds {

	istream& operator>>(istream& is, ReadWriteable& readwriteable) {
		return readwriteable.read(is);
	}

	ostream& operator<<(ostream& os, const ReadWriteable& readwriteable) {
		return readwriteable.write(os);
	}
}