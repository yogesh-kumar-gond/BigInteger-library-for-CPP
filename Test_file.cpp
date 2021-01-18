/*
 * @author yogesh kumar gond
 * MNNIT ALLAHABAD
 * Big Integer library in C++, single file implementation.
 */
#include <iostream>
#include "BigInteger.h"
using namespace std;

int main(){
    BigInteger b(    "198827429823709423472492836348976");
    BigInteger c("6482648162784725472353476524765672546");
    b+=b;
    cout<<b.getNumber()<<endl;
    b=c-b;

    cout<<b.getNumber()<<endl;
    return 0;
}
