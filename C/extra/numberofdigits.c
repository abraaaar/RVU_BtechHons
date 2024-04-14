#include <stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int a,b,c, count=0;
    while(1){ 
        a=num%10;
        b=num-a;
        c=b/10;    
        num=c;
        count++;
        if (c==0){
            break;
        }
    }
    printf("the number of digits is: %d",count);

    
}

  

