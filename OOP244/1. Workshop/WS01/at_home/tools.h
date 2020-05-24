/***********************************************************************
// OOP244 Workshop 1: Compiling modular source code
// File tools.h

	�� Name: Youjin An
	�� Email : yan24@myseneca.ca
	�� Part: at_home
	�� Date: 2019/09/13

***********************************************************************/

#ifndef SDDS_TOOLS_H 
#define SDDS_TOOLS_H

namespace sdds {
	// displays the user interface menu
	int menu(int noOfSamples);
	// moves the cursor backwards
	void goBack(int n);
	// Draws a line and adds a label if provided
	void line(int n, const char* label = nullptr);
	// Performs a fool-proof integer entry
	int getInt(int min, int max);
}

#endif