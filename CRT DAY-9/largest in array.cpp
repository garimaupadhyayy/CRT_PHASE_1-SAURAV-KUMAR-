#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    int largest(vector<int>& arr)
     {
        int n = arr.size();
        int maxi = -1;
        
        for( int i =0; i<n; i++)
        {
            if(arr[i]> maxi) 
            {
                maxi = arr[i];
            }
        }
        return maxi;
    }
};

int main()
{
  Solution s;
  vector<int>arr = {2,7,4,9,1};
  cout<<s.largest(arr);
  return 0;
}
