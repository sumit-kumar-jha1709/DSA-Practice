int setBits(int N){
    // Write your code here.

    // Step1: Check if the number is already set, that is, if all the bits are already 1.
    // IF all the bits already 1, then bitwise AND between N and N+1 would give zero.
    // N=7, 7=111 and 8=1000 so, 7&8 is 0.
    if((N&(N+1))==0) return N;  

    //Step2: If N doesn't have all set bits already then we can make it using bitwise OR.
    // Bitwise OR would keep the 1 se 1 but convert 0 to 1.
    // N=5
    // 5 = 1 0 1
    // 6 = 1 1 0
    //5|6= 1 1 1 (7)
    int num=N|(N+1);
    return num;
}