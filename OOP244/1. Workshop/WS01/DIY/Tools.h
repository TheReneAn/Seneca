/***********************************************************************
// OOP244 Workshop 1 DIY: Compiling modular source code
// File Tools.h

	�� Name: Youjin An
	�� Email : yan24@myseneca.ca
	�� Part: DIY (DO IT YOURSELF)
	�� Date: 2019/09/15

***********************************************************************/

#ifndef SDDS_TOOLS_H
#define SDDS_TOOLS_H

namespace sdds {

	bool valid(long long min, long long max, long long val);
	long long getLongLong(long long min, long long max, const char* valueName);
	void toLowerCase(char* lowerCase, const char* str);
	bool yes();

}

#endif