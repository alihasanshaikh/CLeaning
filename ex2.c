#include <stdio.h>


int main()
{
    int Mathsmarks;
    int Sciencemarks;
    printf("Enter Your Maths marks\n");
    scanf("Enter your marks %d",&Mathsmarks);
    printf("Enter Your Science marks\n");
    scanf("Enter Your Science Marks %d",&Sciencemarks);
   if (Mathsmarks >= 35) {
    printf("congo you won price of 15RS as you Passed Exam of Maths");
   }
   
    else if (Sciencemarks >= 35){
        printf("congo you won price 15");
    }
    
    else{
        printf("Sorry You Failled");
    }
      
    return 0;
}
