class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
       long long  reverse =0;
        int count=0;
        while (n > 0)
    	{
    		reverse = reverse << 1;
    		if (n & 1 == 1)
    		{
    			reverse = reverse ^ 1;
    			
    		}
    		n = n >> 1;
    		count++;
    	}
    	count=32-count;
    	while(count--) reverse=reverse<<1;
        return reverse;
    }
};
