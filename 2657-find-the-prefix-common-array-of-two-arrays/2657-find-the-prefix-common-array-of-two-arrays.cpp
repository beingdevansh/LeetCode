class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_set <int> a, b;
        vector <int> ans;
        for(int i = 0; i < A.size(); i++)
        {
            int count = 0;
            a.insert(A[i]);
            b.insert(B[i]);

            for(int val : a)
            {
                if(b.find(val) != b.end())
                    count++;
            }

            ans.push_back(count);
        }

        return ans;
    }
};