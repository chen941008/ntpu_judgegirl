#include "D_size.h"
int D_size(int S, int D) {
    int sum=S;
    while (sum<D) {
        S++;
        sum+=S;
    }
    return S;
}
