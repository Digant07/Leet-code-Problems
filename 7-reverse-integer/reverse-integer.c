long int reverse(int x){
    long int rem,z=0;
    while(x!=0){
        rem=x%10;
        z=z*10+rem;
        x=x/10;
    }
    if(z<INT_MIN|| z>INT_MAX){
        z=0;
    }

    return z;

}