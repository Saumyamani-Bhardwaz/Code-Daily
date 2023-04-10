class Solution {
public:
    bool isPowerOfThree(int n) 
    {
    if(n==1)
    return 1;
    if(n<3)
    return 0;
    while(n!=3)
    {
        if(n%3==0)
        {
            n/=3;
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
