double myPow(double x, int n) {
    int i;
    double r=1;
    if(x<100&&x>-100){
        r=pow(x,n);
    }
    return r;
}