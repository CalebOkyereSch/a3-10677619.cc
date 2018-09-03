#include<iostream>
using namespace std;
int main(){
float score;
cout<<"\t\t The Grade Detector"<<endl;
cout<<"Please enter you score  for the exam : ";
cin>>score;
if(score <=100 && score >=0){
if (score >=80){
cout<<score<<" is graded A"<<endl;
}
else if(score <80 && score >=75){
cout<<score<< " is graded B+"<<endl;
}
else if (score <75 && score >=70){
cout<<score<<" is graded B "<<endl;
}
else if(score<70 && score>=65){
cout<<score<<" is graded C+"<<endl;
}
else if (score<65 && score>=60){
cout<<score<< " is graded D" <<endl;
}
else if(score <60 && score>=50){
cout<<score<< " is graded E"<<endl;
}
else{
cout<<score << " is graded F"<<endl;
}
}
else{
cout<<score<<" is a Wrong Input" <<endl;
}
return 0;
}
