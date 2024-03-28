bool isPalindrome(int x) {
    long int rem,y;
    long int z=0;
    y=x;
    if(x<0){
    return false;}
    while(x!=0){
        rem=x%10;
        z=z*10+rem;
        x=x/10;
    }
    if (z==y){
        return true;

    }
    else{
        return false;
    }
}