/***********************************************************************
// OOP244 Workshop 1 DIY: Compiling modular source code
// File PhoneApp.cpp

	�� Name: Youjin An
	�� Email : yan24@myseneca.ca
	�� Part: DIY (DO IT YOURSELF)
	�� Date: 2019/09/15

***********************************************************************/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include "PhoneDir.h"

using namespace std;
using namespace sdds;

int main() {

	phoneDir("SDDS Phone Directory", "phones.txt");

	return 0;
}