int minBitFlips(int start, int goal) {
    
    int count=0,xor;
    xor=start^goal;
    while(xor)
    {
        xor=xor&(xor-1);
    count++;
    }
    return count;
}
