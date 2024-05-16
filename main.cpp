#include <iostream>
#include <vector>
using namespace std;


int main() {
  vector<int>v{1,2,4,5,6,7,8,9};
  vector<int>v1{11,13,15,17,7,19,21,23,25,1};
  vector<int>v2{23,25,35,46,57,1,43,21,12,7};

  vector<int>ans;
  for(int i = 0 ; i < v.size() ; i++)
    {
      int ele = v[i];
      for(int j = 0 ; j< v1.size(); j++)
        {
          int elem = v1[j];
          for(int k = 0; k< v2.size() ; k++)
            {
              if(ele == elem == v2[k])
              {
                ans.push_back(ele);
              }
            }
        }
    }
  for(int i = 0 ; i< ans.size() ; i++)
    {
      cout << ans[i] <<" ";
    }
}