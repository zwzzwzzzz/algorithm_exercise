#include<iostream>
#include<algorithm>
#include<vector>

int main(){
    int n,k;
    std::cin>>n>>k;
    std::vector<int> woods(n);
    for(auto &x:woods) std::cin>>x;
    std::sort(woods.begin(),woods.end());
    int low=1,high=woods[n-1];
    int mid;
    while(low<=high){
        mid=(low+high)/2;
       int count=0;
        for(int j=0;j<n;j++){
            count+=woods[j]/mid;
            }
        if(count>=k){
            low=mid+1;
        }else {
            high=mid-1;
        }
    }
    std::cout<<high;
    }

