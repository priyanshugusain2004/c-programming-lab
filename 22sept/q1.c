#include<stdio.h>
int main(){
    int marks;
     printf("Enter an marks: ");
     scanf("%d", &marks);
     
     if (marks < 0 || marks > 100 ){
        printf("invald marks");
        
     }else if (marks > 90 && marks < 100){
      printf("A+");
     }else if (marks < 80 && marks > 89){
      printf("A");
     }else if (marks > 70 && marks < 79){
      printf("B");
     }else if (marks > 60 && marks < 69){
      printf("C");
     }else if (marks > 50 && marks < 59){
      printf("D");
     }else if (marks > 50 ){
      printf("F");
     }
   
   return (0);
   }