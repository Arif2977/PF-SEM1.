int calculated[46];
int climbStairs(int n) {
    
    if (n==1){
        return 1;
    }
    if (n==2){
        return 2;
    }
    if (n==3){
        return 3;
    }
    if (calculated[n]!=0){
        return calculated[n];
    }

    int calc =climbStairs(n-1)+climbStairs(n-2);
    calculated[n]=calc;
    return calc;
}
