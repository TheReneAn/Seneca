/***********************************************************************
// OOP244 Workshop 5: Member Operator Overloads IN LAB
//
// File Parts.h

	�� Name: Youjin An
	�� Email : auj0827@gmail.com
	�� Part: in_lab
	�� Date: 2019/10/10

***********************************************************************/

#ifndef SDDS_PARTS_H
#define SDDS_PARTS_H

namespace sdds {

	const int MIN_FORCE = 50;	// to set the minimum force

	class Arms {
		private:
			int force;			// the amount of punch power

		public:
			Arms();				// Default constructor
			Arms(int A_force);	// 1 Argument Constructor

			int getForce() const;

			// Operator Overload Members
			Arms& operator++();
			Arms operator++(int);
			Arms& operator+=(int Passed_int);

	}; // class Arms
}
#endif //SDDS_PARTS_H
