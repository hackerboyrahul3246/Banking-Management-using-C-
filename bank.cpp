#include<iostream>
#include<windows.h>
using namespace std;
 class Bank{
 	protected:
 		string Name;
 		string title;
 		string Account_No;
 	
 		public:
 		
 			void Head(){
 				cout<<"							JHAJI KA PAISA DUBNE WALA BANK"<<endl;
 				cout<<"					              		  WELCOME"<<endl;
 cout<<"																 PAISA WAHI DUBANA NAHI"<<endl;
cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;				 
			 cout<<"    ENTER YOUR NAME : "<<endl;
			 cin>>Name>>title;
			 cout<<"    ENTER YOUR PIN :"<<endl;
			 cin>>Account_No;
			cout<<"																Hi ," <<Name<< title<<endl;
			 
			 }

 };
 class Bank1{
 	protected:
 		string PIN;
 		int   n2=17000;
 		public:
 			void item(){

cout<<												"HOW CAN WE HELP YOU"<<endl;
				
cout<<"						AVALAIBLE BALANCE :" <<n2<<endl;
					
						
						
						
	cout<<"			1. WITHDRAWAL :"<<endl;
	cout<<"			2. ADD BALANCE IN ACCOUNT :"<<endl;
	cout<<"			3. OPEN NEW ACCOUNT :"<<endl;
	cout<<"			4. CLOSE YOUR ACCOUNT :"<<endl;
			
				
					
				
					} 				
		};
class kong{
	protected:
	int Choise,  n,n2=17000,f;
		public:
			 void sub(){
			 	
cout<<"									ENTER YOUR CHOISE "<<endl<<endl;
			 								cin>>Choise;
			 	if(Choise==1){
			 		cout<<"								ENTER AMOUNT :"<<endl;
							cin>>n;
							if(n>n2)
								cout<<		"Insuficant Balance"<<endl;
							else
							cout<<"			Your Avalaible Balance " <<n2-n<<endl;
								}
								else if (Choise==2){
									cout<<"		Enter Amount"<<endl;
									cin>>f;
									cout<<"		Amount Added Successfully"<<endl;
									cout<<"		Avalaible Balance  " <<f+n2<<endl;
									
								}
								else if (Choise==3){
									cout<<"			Sorry Quota Full"<<endl;
									
								}
								else if(Choise==4){
									cout<<"			Thanks For Using our Service"<<endl;
								}
								else{
									cout<<"			invalid choise"<<endl;
								}
				//	switch(Choise){
					//	case '1' :
					//		
						
					//		if(n>=n2)
							//	cout<<"Insuficant Balance"<<endl;
						//	}
					//		else {
						//		cout<<"Wait Your Transation is Processing..... :"<<endl;
						//	}
						//	break;
					//	case '2' :
						//	cout<<"Successfuly Added Amount "<<endl;
						//	cout<<"Total Present Amount is : "<<n+n2<<endl;
						//	break;
					//	case '3' :
						//	cout<<"Sorry we Are temporary not Opening New Acconts : We will Start Soon :"<<endl;
					//		break;
					//	case '4' :
					///	 	cout<<"Are You Sure Wants to close You Account "<<endl;
					//	 	cout<<"Y / N"<<endl;
					//	 	
					///////////		break;
//						//		cout<<"1. WITHDRAWAL :"<<endl;
						//		cout<<"2. ADD BALANCE IN ACCOUNT :"<<endl;
					//			cout<<"3. OPEN NEW ACCOUNT :"<<endl;
						//		cout<<"4. CLOSE YOUR ACCOUNT :"<<endl;
						//		cout<<"5. EXIT :"<<endl;
						//	break;
					//	default :
						//	cout<<"Invalid Choise"<<endl;
							 	
					
			 }
		
 };
 class Last :public Bank ,public kong, public Bank1 {
 	public:
 	void Fix(){
	 
 	cout<<"							WE ARE HAPPY TO HELP YOU "<<endl;
 						cout<<"				THANKYOU"<<endl;
 					}
 	
 };
 int main(){
 	Last o;
 
 	o.Head();
 	o.item();
 	o.sub();
 	o.Fix();
 
 }
