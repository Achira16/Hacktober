#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
    {
        vector<int> v;
        v.push_back(1);
        v.push_back(5);
        v.push_back(6);
        v.push_back(6);
        vector<int>::iterator it=lower_bound(v.begin(),v.end(),6);
        vector<int>::iterator it1=upper_bound(v.begin(),v.end(),6);
        cout << it1-it;
    }
