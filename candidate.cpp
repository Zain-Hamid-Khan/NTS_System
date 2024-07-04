	#include"candidate.h"
	using namespace std;
	Candidate :: Candidate()
		{
			cand_name="";
			cand_address="";
			cand_email="";
			cand_phone_no=0;
			cand_cnic=0;
		}
		
		Candidate :: Candidate(string pName,string pAddress,string pEmail,double pPhoneNo,double pCnic)
		{
			cand_name=pName;
			cand_address=pAddress;
	        cand_email=pEmail;
	        cand_phone_no=pPhoneNo;
	        cand_cnic=pCnic;
		}
		
		void Candidate :: setData(string pName,string pAddress,string pEmail,double pPhoneNo,double pCnic)
		{
			cand_name=pName;
			cand_address=pAddress;
	        cand_email=pEmail;
	        cand_phone_no=pPhoneNo;
	        cand_cnic=pCnic;
		}
		
		void Candidate :: printData()
		{
	
			cout<<"Candidate's name = "<<cand_name<<endl;
			cout<<"Candidate's address = "<<cand_address<<endl;
			cout<<"Candidate's email address = "<<cand_email<<endl;
			cout<<"Candidate's phone number = "<<cand_phone_no<<endl;
			cout<<"Candidate's cnic/b-form number = "<<cand_cnic<<endl;	
		}
		void Admitcard(Candidate obj)               //Freind Funtion
		{
			cout<<"----------------------------------------------"<<endl;
			cout<<"                Admit Card                    "<<endl;
			cout<<"               FOR NTS EXAM                   "<<endl;
			obj.printData();
			obj.printDatae();
		}
