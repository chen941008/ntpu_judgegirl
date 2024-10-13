//
//  fibr.c
//  MatrixTranspose
//
//  Created by 陳宥愷 on 2024/10/2.
//

#include "fibr.h"

int fibr(int n) {
    if(n==1)return 1;
    else if(n==2)return 2;
    else{
        int sum=fibr(n-1)+fibr(n-2);
        return sum;
    }
    return 0;
}
