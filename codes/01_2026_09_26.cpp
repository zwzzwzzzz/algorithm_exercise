#include<iostream>
#include<vector>
#include<algorithm>
 
int main(){
    int n,c;
    int t;
    long long answer=0;
    std::cin>>n>>c;
    std::vector<int> num(n);
    
    for(auto &x:num) std::cin>>x;
    std::sort(num.begin(),num.end());

    for(int i=0;i<n;++i){
        t=num[i]+c;
        answer+=std::upper_bound(num.begin(),num.end(),t)-std::lower_bound(num.begin(),num.end(),t);
    }

std::cout<<answer;


}