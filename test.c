#include <stdio.h>
#include "hell.h"
void affichage(int x0, int y0, int z0){
    if(x0==1){
        int cc=mult(y0,z0);
        printf("%d",cc);
    }
    else if(x0==2){
        int cc1=add(y0,z0);
        printf("%d",cc1);
    }
    else if(x0==3){
        if(y0>z0){
            int cc2=sous(y0,z0);
            printf("%d",cc2);
        }
        else{
            int cc3=sous(z0,y0);
            printf("%d",cc3);
        }
    }
    else{
        if(y0>z0){
            float cc4=div(y0,z0);
            printf("%f",cc4);
        }
        else{
            float cc5=div(z0,y0);
            printf("%f",cc5);
        }
    }
}
int mult(int x1,int y1){
    int c1=x1*y1;
    return c1;
}
int add(int x2, int y2){
    int c2=x2+y2;
    return c2;
}
int sous(int x3, int y3){
    int c3=x3-y3;
    return c3;
}
float div(float x4, float y4){
    float c4=x4/y4;
    return c4;
}