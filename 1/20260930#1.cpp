#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int n,m;
    std::cin>>n>>m;
    std::vector<int> num(n);
    for(auto &x:num) std::cin>>x;
    for(int i=0;i<m;i++){
        int target;
        std::cin>>target;
        auto it=std::lower_bound(num.begin(),num.end(),target);
        if(it==num.end()||*it!=target){
            std::cout<<-1<<' ';
        }else{
            std::cout<<it-num.begin()+1<<' ';
        }
    }
}