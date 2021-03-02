/*Пример за опасно
преобразуване на типове*/


int main(void){
    short int siValue = 13; /* 2 bytes */
    int* pnValue = (int*) &siValue;
    *pnValue = 31; /* crash
    write 4 bytes */
    printf("%d, %ld", siValue, *pnValue);
    char chValue = ‘x’; /* a byte */
    double* pdValue = (double*) &chValue;
    *pdValue = 0.0; /* crash
    write 8 bytes */
    printf("%c, %f", chValue, *pdValue);
    return 0;
}