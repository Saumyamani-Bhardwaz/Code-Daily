class Solution {
public:
    int subtractProductAndSum(int n)
    {
        int sum=0;
        int product=1;

        while(n!=0)
        {
          int digit= n%10;
          product= product*digit;
          sum= sum+digit;

          n= n/10;

        }
     int subtract= product-sum;
     return subtract;

    }
};
