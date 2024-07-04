#include"enrollment.h"
using namespace std;
        Enrollment ::	Enrollment()
		{
			rollno=211306;
			center_of_exam="Rawalpindi Institute of Managment Sciences";
		}

		void Enrollment ::printDatae()
		{
		 cout<<"\n Roll NO : "<<rollno;
			cout<<"\nCenter of exam "<<center_of_exam<<endl;
		cout<<"Test Date is "<<date_of_exam<<endl;	}
