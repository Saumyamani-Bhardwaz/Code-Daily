class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& A) {
        short cnt[10001] = {}, maxCnt = 0, num = 0, j = 0;
        for (int n : A) {
            maxCnt = max(maxCnt, ++cnt[n]);
            if (maxCnt == cnt[n]) num = n;
        }
        for (int i = 0; i <= 10000; ++i) {
            int n = i ? i : num;
            while (cnt[n]-- > 0) {
                A[j] = n;
                j = (j + 2) % A.size();
                if (j == 0) j = 1;
            }
        }
        return A;
    }
};
