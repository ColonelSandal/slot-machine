#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main () {
	int money=10, betting;
	cout<<"Welcome to the slot machine!"<<endl;
	cout<<"Your current balance is: "<<money<<endl;
	while (money!=0){
	cout<<"How much money do you want to bet? ";
	cin>>betting;
	if (betting>money) {
		cout<<"The betting amount is over your current balance. Please enter again: "<<endl;
	}
	else {
		srand(time(0));
		int dice1 = (rand() % 9) + 1;
		int dice2 = (rand() % 9) + 1;
		int dice3 = (rand() % 9) + 1;
		cout<<"The machine's result is: "<<dice1<<" "<<dice2<<" "<<dice3<<endl;
		if (dice1==dice2 and dice2==dice3) {
			money=money+(betting*100);
			cout<<"Congratulations! You won the jackpot!"<<endl<<"Your current balance is: "<<money<<endl; 
		}
		else if (dice1==dice2 or dice1==dice3 or dice2==dice3) {
			money=money+(betting*2);
			cout<<"Congratulations! You won!"<<endl<<"Your current balance is: "<<money<<endl;
		}
		else {
			money=money-betting;
			cout<<"You lost! Better luck next time!"<<endl<<"Your current balance is: "<<money<<endl;
		}
		if(money>=10000) {
			cout<<"You have become the world's richest man!";
			break;
		} 	
		}
	
		}
	cout<<"You've ran out of money!";
}
