#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main()
{
    // // create vector , declare
    // vector<int>v;
    // vector<int>v1(5,1);
    // //size and capacity
    // cout<<"Size of v: "<<v.size()<<endl;
    // cout<<"Capacity of v: "<<v.capacity()<<endl;
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(10);
    // cout<<"Size of v: "<<v.size()<<endl;
    // cout<<"Capacity of v: "<<v.capacity()<<endl;
    // // Update  value
    // v[1]=5;
    // cout<<"Size of v1: "<<v1.size()<<endl;
    // cout<<"Capacity of v1: "<<v1.capacity()<<endl;
    // v1.push_back(8);
    // cout<<"Size of v1: "<<v1.size()<<endl;
    // cout<<"Capacity of v1: "<<v1.capacity()<<endl;

    //Delete value from vector
    // vector<int>vnew;
    // vnew.push_back(4);
    // vnew.push_back(41);
    // vnew.push_back(14);
    // vnew.push_back(40);
    // vnew.push_back(42);
    // vnew.pop_back();
    // cout<<"Size of vnew: "<<vnew.size()<<endl;
    // cout<<"Capacity of vnew: "<<vnew.capacity()<<endl;

    // vnew.erase(vnew.begin()+1);
    // cout<<"Size of vnew: "<<vnew.size()<<endl;
    // cout<<"Capacity of vnew: "<<vnew.capacity()<<endl;

    // for(int i=0;i<vnew.size();i++)
    // cout<<vnew[i]<<"  ";

    // //Insert Value
    // vnew.insert(vnew.begin()+1,50);
    // cout<<endl;

    // vnew[1]=37;
    //  for(int i=0;i<vnew.size();i++)
    // cout<<vnew[i]<<"  ";
    // cout<<endl;
    // vnew.clear(); //remove all the element
    // cout<<"Size of vnew: "<<vnew.size()<<endl;
    // cout<<"Capacity of vnew: "<<vnew.capacity()<<endl;

    // vector<int>arr;
    // arr.push_back(2);
    // arr.push_back(22);
    // arr.push_back(12);
    // arr.push_back(21);
    // arr.push_back(122);
    // cout<<arr[0]<<endl;
    // cout<<arr.front()<<endl;
    // cout<<arr[arr.size()-1]<<endl;
    // cout<<arr.back()<<endl;

    // vector<int>a;
    // //Copy value of one vector to another

    // a = arr;
    // cout<<a.size();
    // cout<<endl;
    // for(auto it = arr.begin();it!=arr.end();it++)
    // {
    //     cout<<*it<<" ";
    // }

    // cout<<endl;
    // for(auto i: arr)
    // cout<<i<<" ";

    vector<int>ans;
    ans.push_back(5);
    ans.push_back(235);
    ans.push_back(15);
    ans.push_back(54);
    ans.push_back(125);

    //Sort in increasing order
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<"  ";
    cout<<endl;

    // //Sort in Descending order
    // sort(ans.begin(),ans.end(),greater<int>());
    // for(int i=0;i<ans.size();i++)
    // cout<<ans[i]<<"  ";

    //Another method to decreasing order
    // sort(ans.rbegin(),ans.rend());
    // for(int i=0;i<ans.size();i++)
    // cout<<ans[i]<<"  ";
    // cout<<endl;

    // Search in binary search
    cout<<binary_search(ans.begin(),ans.end(),55)<<endl;

   //find index of the element
   cout<<find(ans.begin(),ans.end(),54)-ans.begin()<<endl;


}
