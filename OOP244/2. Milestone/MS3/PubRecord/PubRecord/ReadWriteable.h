/***********************************************************************
// OOP244 Project Milestone 3: THE PUBRECORD ABSRACT CLASS
//
// File ReadWriteable.h

	�� Name: Youjin An
	�� Email : yan24@myseneca.ca
	�� Part: MS03
	�� Date: 23 Nov 2019

***********************************************************************/

#ifndef SDDS_READWRITABLE_H
#define SDDS_READWRITABLE_H

#include <iostream>

namespace sdds {

	class ReadWriteable {
	public:
		virtual std::istream& read(std::istream& is = std::cin) = 0;
		virtual std::ostream& write(std::ostream& os = std::cout)const = 0;
	};

	std::istream& operator>>(std::istream& is, ReadWriteable& readwriteable);
	std::ostream& operator<<(std::ostream& os, const ReadWriteable& readwriteable);

}
#endif // SDDS_READWRITABLE_H