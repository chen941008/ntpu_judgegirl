#include "fac.h"
int fac(int n) {

    if(n==1)return 1;
    else{
        int sum=n*fac(n-1);
        return sum;
    }
    return 0;
}
