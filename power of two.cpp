class Solution {
public:
    bool isPowerOfTwo(int n)
    {
    
        for( int i=0; i<=30; i++)
        {  
          
          int result=pow(2,i);
          if(result == n)
          {
            return true;
          }
        }
        return false;
    } 
};
