
using namespace std;
class Fee
{
	private:
	int fee_chalan;
	int fee_submission;
	int fee_account;
	
	public:
	int setFee_chalan(int pFee_chalan);
	int getFee_chalan();
	int setFee_submision(int pFee_submission);
	int getFee_submission();
	int setFee_account(int pFee_account);
	int getFee_account();
	int printAccount();
	int printFee();
};
