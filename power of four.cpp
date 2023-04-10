class Solution {
public:
    bool isPowerOfFour(int n) 
   {
    if(n==1)
    return 1;
    if(n<4)
    return 0;
    while(n!=4)
    {
        if(n%4==0)
        {
            n/=4;
            continue;
        }
        else
        {
            return 0;
            break;
        }
    }
    return 1;
    }
};
