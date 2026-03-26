#include<stdio.h>
int main(){
    
    int num;
    
    printf("Enter the number which you want to know is even or odd :\n");
    scanf("%d",&num);
    
    if(num==0){
        printf("The number is Zero\n");
    }else if(num%2!=0){
        printf("The number is Odd\n");
    }else if(num%2==0){
        printf("The number is Even\n");
        
    }else if(num!=0){
        printf("The number is invalid\n ");
    }
    
    return 0;
}