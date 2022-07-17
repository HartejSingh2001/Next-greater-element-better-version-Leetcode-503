/*
Kep in mind that this can be used to sort an array using stack as in this case here the the stack at the end when i becomes -1 will give a sorted stack !!
*/
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size(),i;
        stack<int> st;
        vector<int> v(n,-1);// make a vector of size n and assign -1 to all of them
        for(i=(2*n)-1;i>=0;i--)
        {
            while(!st.empty() && st.top()<=nums[i%n])
            {
                st.pop();
            }
            if(i<n)
            {
                if(!st.empty())
                {
                    v[i]=st.top();
                    //v.push_back(st.top());wrong answer
                }
            }
            st.push(nums[i%n]);
        }
     return v;   
    }
};
