/***********************************************************************
// OOP244 Workshop 3: Member functions and privacy
// File MarksReport.h

	�� Name: Youjin An
	�� Part: DIY
	�� Date: 2019/09/28

***********************************************************************/

#ifndef SDDS_MARKSREPORT_H_
#define SDDS_MARKSREPORT_H_

#include "Mark.h"

namespace sdds {

	class MarksReport {
	private:
		Mark* Marks;
		char Report_Title[71];
		int Num_Marks;

	public:
		void initialize();
		void getMarks();
		void print();
		void terminate();
	};
}

#endif // SDDS_MARKSREPORT_H_
