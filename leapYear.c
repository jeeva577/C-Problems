

#include <stdio.h>

int main()
{
    int year;
    printf("enter no:");
    scanf("%d",&year);
    if((year%4 == 0 && year%100 != 0) || year%400 == 0){
        printf("it is leap year");
    }else{
        printf("It is not leap year");
    }
}
