#include <stdio.h>
#include "hell.h"
int main(){
    int a;
    scanf("%d",&a);
    if(a==4){
        float b;
        float c;
        printf("donner nombre float: ");
        scanf("%f",&b);
        printf("donner nombre float: ");
        scanf("%f",&c);
        affichage(a,b,c);
    }
    else{
        int b;
        int c;
        printf("donner nombre int: ");
        scanf("%d",&b);
        printf("donner nombre int: ");
        scanf("%d",&c);
        affichage(a,b,c);
    }
    
    
}