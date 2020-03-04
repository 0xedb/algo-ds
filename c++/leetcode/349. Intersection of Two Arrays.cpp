class Solution
{
public:
  vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
  {
    vector<int> which, other, ans;
    if (nums1.size() > nums2.size())
    {
      which = nums2;
      other = nums1;
    }
    else
    {
      which = nums1;
      other = nums2;
    }

    set<int> st;
    for (int i = 0; i < which.size(); i++)
    {
      st.insert(which[i]);
    }

    for (int i = 0; i < other.size(); i++)
    {
      if (st.count(other[i]))
      {
        ans.push_back(other[i]);
        st.erase(other[i]);
      }
    }

    return ans;
  }
};