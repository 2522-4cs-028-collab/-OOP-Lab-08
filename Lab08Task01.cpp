#include<iostream>
using namespace std;

class Payment{
	
	
	public:
		
		virtual void calculateFee() = 0;
};

class BankTransfer : public Payment {
	
	int payAmount;
	
	public:
		BankTransfer(int p){
			payAmount = p;
		}
		
		void calculateFee(){
			cout<<"Transaction fee: "<<payAmount*0.02<<endl;
			
		}
};

class DigitalWallet : public Payment {
	
	int payAmount;
	
	public:
		DigitalWallet(int p){
			payAmount = p;
		}
		
		void calculateFee(){
			cout<<"Transaction fee: "<<payAmount*0.01<<endl;
			
		}
};

int main(){
	
	BankTransfer b(10000);
	DigitalWallet d(10000);
	
	b.calculateFee();
	d.calculateFee();
	
	
	
	return 0;
}