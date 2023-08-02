#include <stdio.h>
#include<stdlib.h>
#include<time.h>

    int main(){
 int number  ,guess ,nguesses =1;
 srand(time(0));
 number = rand()%100 +1; // genrate random number between 1-100
//  printf("The number is %d " ,number);50
 // keep the loop running until the number is gussed

do{
    printf(" guess the number\n");
    scanf("%d" ,&guess);
    if( guess>number){
        printf(" lower number please\n");
    }
    else if( guess<number){
        printf(" higher number please\n");
    }
    else{
        printf(" you guessed it in %d attempts\n" ,nguesses );
    }
    nguesses ++;


}while( guess != number);










    
return 0;
}