#include"fee.h"
using namespace std;

    int Fee ::setFee_chalan (int pFee_chalan)              //Accessor and Mutator Functions
	{
		fee_chalan=pFee_chalan;
}
	int Fee:: getFee_chalan()
	{
		return fee_chalan;
	}
	
	int Fee:: setFee_submision(int pFee_submission)
	{
		fee_submission=pFee_submission;
	}
	int Fee:: getFee_submission()
	{
		return fee_submission;
	}
	
	int Fee:: setFee_account(int pFee_account)
	{
		fee_account=pFee_account;
	}
	int Fee:: getFee_account()
	{
		return fee_account;
	}
	
	int Fee:: printAccount()
	{
	    cout<<"\nAmount in your Account is :"<<fee_account;
	}
	
	int Fee:: printFee()
	{
		cout<<"\nFee for the test for candidate is ="<<fee_chalan;
	}
