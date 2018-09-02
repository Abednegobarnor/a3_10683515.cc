#include <iostream>

using namespace std;

int main()
{
   int  score;
   cout<<"Please enter your score:";
   cin>>score;

   if(score<=100 && score>=80){
       cout<<"Your grade is:A";
   }

   else if(score<=79 && score>=75){
        cout<<"Your grade is:B+";
   }

   else if(score<=74 && score>=70){
         cout<<"Your grade is : B";

   }
   else if(score<=69 && score>=65){
         cout<<"Your grade is: C+";
   }
   else if(score<=64 && score>=60){
        cout<<"Your grade is: C";
   }
   else if( score<=59 && score>=55){
      cout<<"Your grade is:D+";
   }
   else if(score<=54 && score>=50){
      cout<<"Your grade is: D";
   }
   else if(score<=49 && score>=45){
      cout<<"Your grade is: E";
   }
   else if(score<=44 && score>=0){
      cout<<"Your grade is: F";
   }
   return 0;
}
