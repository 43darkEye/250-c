#include<stdio.h>
int main(){
    int a,b,c;
    
    printf("Enter the number which you want to compare \n");
    scanf("%d %d %d",&a,&b,&c);
    
    if(a>b&&a>c){
        printf("a is geater then b and c");
        
    }else if(b>a&&b>c){
        printf("b is gearter then a and c");
    }else if(c>a&&c>b){
        printf("c is geatere then a and b ");
    }
    //less then 
    
    
    if(a<b&&a<c){
        printf("a is less then b and c");
        
    }else if(b<a&&b<c){
        printf("b is less then a and c");
    }else if(c<a&&c<b){
        printf("c is less then a and b ");
    }
    //equal then
    else if(a==b||a==c){
        printf("a is equal to b and c");
    }else if(b==c||b==a){
        printf("b is equal to a and c");
    }else if(c==a||c==b){
        printf("c is equal to a and b");
    }
    
    //equal but grater 
    
    else if(b==c||b>a){
        printf("b is equal to a but grater  then a\n");
    }else if(a==c||a>b){
        printf("a is equal to a but grater then  c\n");
    }else if(c==b||c>a){
        printf("c is equal to a but grater then  c\n");
    }
    //grater but equal
    
    else if(b>c||b==a){
        printf("b is grater then a but equal to  a\n");
    }else if(a>c||a==b){
        printf("a is grater then c but equal to  b\n");
    }else if(c>b||c==a){
        printf("c is grater then b but equal to  a\n");
    }
    
    //equal but less
    
    else if(b==c||b<a){
        printf("b is equal to a but less  then a\n");
    }else if(a==c||a<b){
        printf("a is equal to a but less then  c\n");
    }else if(c==b||c<a){
        printf("c is equal to a but less then  c\n");
    }
    //less but equal
    
    else if(b<c||b==a){
        printf("b is less then a but equal to  a\n");
    }else if(a<c||a==b){
        printf("a is less then c but equal to  b\n");
    }else if(c<b||c==a){
        printf("c is less then b but equal to  a\n");
    }
    return 0;
}