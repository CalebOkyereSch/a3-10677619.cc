#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int score;
	cout<<"Welcome to the GPA checking App"<<endl;
	cout<<endl;
	cout<<"Please Enter Your Score : ";
	cin>>score;
	switch( score ){
		case 80 ... 100:
			cout<<score<<" is graded A"<<endl;
			break;
		case 75 ... 79:
			cout<<score<< "is graded B+"<<endl;
			break;
		case 70 ... 74:
			cout<<score<<" is graded B"<<endl;
			break;
		case 65 ... 69:
			cout<<score<<" is graded C+"<<endl;
			break;
		case 60 ... 64:
			cout<<score<<" is graded C"<<endl;
			break;
		case 55 ... 59:
			cout<<score<<" is graded D"<<endl;
			break;
		case 50 ... 54:
			cout<<score <<" is graded E"<<endl;
			break;
		case 0 ... 49:
			cout<<score<<" is graded F"<<endl;
			break;
		default:
			cout<<" wrong input"<<endl;
			break;
	}
	
	return 0;
}
