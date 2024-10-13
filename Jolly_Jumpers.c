#include "Jolly_Jumpers.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void Jolly_Jumpers(int Array[], int size) {
    int number[105]={0};
    bool is_Jolly=true;
    for(int i=0;i<size-1;i++){
        number[abs(Array[i]-Array[i+1])]++;
    }
    for(int i=1;i<size;i++){
        if(number[i]!=1)is_Jolly=false;
    }
    if(is_Jolly)printf("Jolly\n");
    else printf("Not jolly\n");
}
