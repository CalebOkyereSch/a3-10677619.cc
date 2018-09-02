#include<iostream>
using namespace std;
int main(){
         float score;
		 score=0;
		 cout<<"Welcome To The Grade Analyzer"  <<endl;
		 cout<<"Please Enter The Score You Had : ";
		 cin>>score;
		 cout<<endl;
		 switch(score <=100 && score>=80){
		 	case true:
		 	cout<< score <<" is graded A"<<endl;
		 	break;
		 }
         switch(score<80 && score>=75){
         	case true:
         		cout<< score <<" is graded B+"<<endl;
         		break;
		 }
        switch(score<75 && score>=70){
        	case true:
        		cout<<score<< " is graded B"<<endl;
				break;
		}
       switch(score<70 && score>=65){
       	case true:
       		cout<<score<< " is graded C+"<<endl;
       	break;
	   }
      switch(score<65 && score>=60 ){
      	case true:
      		cout<<score<< " is graded C"<<endl;
      		break;
	  }
	  switch(score<60 && score>=55){
	  	case true: 
	  	       cout<<score << " is graded D"<<endl;
	  	       break;
	  }
	  switch(score<55 && score>=50){
	  	case true:
	  		cout<<score<<" is graded E"<<endl;
	  		break;
	  }
	  switch(score<50 && score>=0){
	  	case true:
	  		cout<<score<<" is graded F"<<endl;
	  		break;
	  }
	return 0;
}
