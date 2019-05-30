#include<stdio.h> //inbuilt library for input and output


//Fridah Kanario

//declare viriables
float balance=5000;
int deposit;
int withdraw;
int InitPIN=1234;
int PIN;
int option;
int choice;

int main(){  //main method where the program starts executing
	
	
	//declare functions
	float Deposit();
	void CheckBalance();
	void Withdraw();
	
	
	printf("Enter 1 to initiate or 5 to stop\n");
	scanf("%d",&choice);
	
	while( choice!= 5){  //use while loop to restart or terminate the program

	printf("Choose service\n 1. Deposit \n 2. Check balnce \n 3. Withdraw \n 4. Exit \n");
	
	scanf("%d", &option);
	
	switch(option){  //use switch statements to execute the functions
		case 1:
			 Deposit();
			break;
		case 2:
			 CheckBalance();
			break;
			
		case 3:
			 Withdraw();
			break;
		default:
			printf(" Thank you \n");	
	}
	
		}
return 0;	
	
}
	
	
	
	//define the deposit function	
float Deposit(deposit){
	
	printf("Enter your pin to deposit: \n");
	scanf("%d",&PIN);
	if(PIN==InitPIN){
		
		printf("Enter deposit amount: \n");
		scanf("%d",&deposit);
		balance=balance+deposit;
			printf(" you have deposited %d, your current balance ksh %.2f.",deposit,balance);
	}
	else{
		
		printf(" you have entered wrong PIN!");
	}
	
	return balance ;	
}	


//define the check balance function
void CheckBalance(){
	
	
printf("Enter your pin to check balance: \n");
	scanf("%d",&PIN);
	if(PIN==InitPIN){
	balance=balance+deposit;
			printf(" your current balance is ksh %.2f",balance);
	}
	else{
		
		printf(" you have entered wrong PIN!");
	}
	
	
return;	
}


//define the withdraw function
void Withdraw(){
	printf("Enter your pin to withdraw: \n");
	scanf("%d",&PIN);
	if(PIN==InitPIN){
		printf("Enter amount to withdraw: \n");
		scanf("%d",&withdraw);
		if(balance>=withdraw){
			
			balance=balance-withdraw;
			printf("You have successfully withdrawn %d , your balance is %.2f",withdraw,balance);
			
		}
		
		else{
			printf("You have insufficient balance!");
		}
		
	}
	else{
		
		printf(" you have entered wrong PIN!");
	}
	
	
	return;
}
