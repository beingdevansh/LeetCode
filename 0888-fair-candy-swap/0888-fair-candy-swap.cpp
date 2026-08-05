class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        int sumA = accumulate(A.begin(), A.end(), 0);
        int sumB = accumulate(B.begin(), B.end(), 0);
        int diff = (sumA - sumB) / 2;
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        int i = 0, j = 0;
        while (i < A.size() && j < B.size()) {
            if (A[i] - B[j] == diff) 
                return {A[i], B[j]};
            
            else if (A[i] - B[j] < diff)
                i++;

            else
                j++;
        }

        return {-1, -1};
    }
};