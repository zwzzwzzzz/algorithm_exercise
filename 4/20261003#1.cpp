#include<iostream>

int main(){
    int target;
    int sum=0;
    std::cin>>target;
    int r=1;
    for(int l=1;l<(target+1)/2;l++){
        while(sum<target){
            sum+=r;
            r++;  
        }
        if(sum==target){
            std::cout<<l<<' '<<r-1<<'\n';
        }
        sum-=l;
    }
}