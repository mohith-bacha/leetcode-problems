class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string s=to_string(n);
        sort(s.begin(),s.end());
        while(true)
        {
            if(s[0]!='0')
            {
                int num=stoi(s);
                if(isPowerOfTwo(num))
                {
                    return true;
                }
            }
            if(!next_permutation(s.begin(),s.end()))
            {
                break;
            }
        }
        return false;
    }
    
    bool isPowerOfTwo(int num)
    {
        return (num & (num-1)) ==0;
    }
};
