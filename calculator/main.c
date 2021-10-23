#include <stdio.h>  
#include "main.h"

int a,e,m = 0;
double d =0;
void main() { 
    int testInt1,testInt2;
    printf("Enter an integer1 :"); 
    scanf("%d", &testInt1);
    printf("Enter an integer2 :");
    scanf("%d", &testInt2);
    //testInt2 = 10;
    //testInt1 = 12;
    a = adder(testInt1,testInt2);
    printf("adding :%d\n",a);
    m = multiplier(testInt1,testInt2);
    printf("multiplication:%d\n",m);
    e = extract(testInt1,testInt2);
    printf("extraction :%d\n",e);
    d = divide(testInt1,testInt2);
    printf("divison:%.6f\n",d);
    
}