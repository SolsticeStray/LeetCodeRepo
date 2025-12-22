void reverseString(char* s, int sSize) {
    
    char *ptrL = s ;
    char *ptrR = s + sSize - 1 ;

    char temp ;

    while ( ptrL < ptrR ){

        temp = *ptrR ;
        *ptrR = *ptrL ;
        *ptrL = temp;

        ptrL ++;
        ptrR --;

    }

}
