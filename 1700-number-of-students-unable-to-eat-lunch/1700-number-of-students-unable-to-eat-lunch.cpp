class Solution {
public:
    int countStudents(vector<int>& sd, vector<int>& sw) {
        queue <int> sdq;
        for(int val : sd)
            sdq.push(val);

        stack <int> st;
        for(int i = sw.size() - 1; i >= 0; i--)
            st.push(sw[i]);

        int counter = 0;
        while(!sdq.empty() && counter < sdq.size())
        {
            if(sdq.front() == st.top())
            {
                sdq.pop();
                st.pop();
                counter = 0;
            }

            else
            {
                sdq.push(sdq.front());
                sdq.pop();
                counter++;
            }
        } 

        return sdq.size();
    }
};