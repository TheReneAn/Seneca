/***********************************************************************
// OOP244 MILESTONE 1: Date Class & MenuItem Class & Menu Class
//
// File Utils.cpp

	�� Name: Youjin An
	�� Email : yan24@myseneca.ca
	�� Part: MS01
	�� Date: 17 Nov 2019

***********************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

#include "Utils.h"

namespace sdds {

	void flushKeyboard(std::istream& is) {
		char get_char = '\0';
		while (get_char != '\n') {
			get_char = cin.get();
		} // while
	}

}