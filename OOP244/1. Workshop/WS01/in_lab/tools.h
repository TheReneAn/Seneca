/***********************************************************************
// OOP244 Workshop 1: Compiling modular source code
// File tools.h

	�� Name: Youjin An
	�� Email : yan24@myseneca.ca
	�� Part: in_lab
	�� Date: 2019/09/12

***********************************************************************/

#pragma once

// displays the user interface menu
int menu(int noOfSamples);
// moves the cursor backwards
void goBack(int n);
// Draws a line and adds a label if provided
void line(int n, const char* label = nullptr);
// Performs a fool-proof integer entry
int getInt(int min, int max);