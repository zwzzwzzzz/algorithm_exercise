#include<iostream>
#include<vector>

int main(){
    int n,m;
    std::cin>>n>>m;
    std::vector<int> num(n);
    for(auto&x:num) std::cin>>x;

    int target;
    while(std::cin>>target){
        auto it=lower_bound(num.begin(),num.end(),target);
        if(*it==target) {
            std::cout<<(it-num.begin()+1)<<' ';}else{
                std::cout<<-1<<' ';
            }
    }
}