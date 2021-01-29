#include "f.h"
#include <math.h>


int findNOK(int x, int y){
    int index = 1;
    int NOK = 0;
    while (1){
        if (NOK != 0){
            break;
        }

        if ( x * index % y == 0){
            NOK = x * index;
        }
        index++;


    }
    return NOK;
}




float absoluteValue(float z){
    
    float multiplyBy = (z > 0 ? 1.0 : -1.0); 
    z *= multiplyBy;
    return z;
}
double squareRoot(double q){
    if ( q < 0){
        q = absoluteValue(q);
    }
    printf("The abs value of our number is: %lf\n",q);
    return sqrt(q);

}