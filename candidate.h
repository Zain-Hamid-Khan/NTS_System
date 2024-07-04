using namespace std;
class Candidate: public Fee ,public Enrollment             //Multiple inheritence
{
	private:
	string cand_name;
	string cand_address;
	string cand_email;
	double cand_phone_no;
	double cand_cnic;
	
	public:
		Fee fee_chalan;
		Fee fee_submission;
		Fee fee_account;
		Enrollment e1;
		Candidate();
		Candidate(string pName,string pAddress,string pEmail,double pPhoneNo,double pCnic);
		void setData(string pName,string pAddress,string pEmail,double pPhoneNo,double pCnic);
		void printData();
		friend void Admitcard(Candidate);               //Friend Function
};
