class Solution {
public:
   vector<int> countBits(int n) {
         if (n == 0) return {0};                         // 0  = 0              = 0 = 0000
    vector<int> ans{0,1};                           // 1  = 2^0            = 1 = 0001
    int twos = 1;                                   // 2  = 2^1            = 1 = 0010
    for(int i=2;i<=n;i++){                          // 3  = 2^1 + 1        = 2 = 0011
        int diff = 1;                               // 4  = 2^2            = 1 = 0100
        if (twos * 2 == i) twos*=2;                 // 5  = 2^2 + 1        = 2 = 0101
        else if (twos * 2 < i) {                    // 6  = 2^2 + 2        = 2 = 0110
            diff = ans[(i - (twos * 2))]+1;         // 7  = 2^2 + 3        = 3 = 0111
        }                                           // 8  = 2^3            = 1 = 1000
        else                                        // 9  = 2^3 + 1        = 2 = 1001
        {                                           // 10 = 2^3 + 2        = 2 = 1010
            diff = ans[(i - twos)]+1;               // 11 = 2^3 + 3        = 3 = 1011
        }                                           // 12 = 2^3 + 2^2      = 2 = 1100
        ans.push_back(diff);                        // 13 = 2^3 + 2^2 + 1  = 3 = 1101
    }                                               // 14 = 2^3 + 2^2 + 2  = 3 = 1110
    return ans;   
    }
};