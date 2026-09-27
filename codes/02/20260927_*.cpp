#include<iostream>
#include<vector>

int main(){
    int n,m;
    std::cin>>n>>m;
    std::vector<int> pics(n+1);
    for(int i=1;i<=n;++i){
        std::cin>>pics[i];
    }
    int l=1,distinct=0;
    int bestl=1,bestr=n,bestlen=n+1;
    std::vector<int> num_artist(m+1,0);
    for(int r=1;r<=n;r++){
        num_artist[pics[r]]++;
        if(num_artist[pics[r]]==1){ 
            distinct++;
            
    }
    while(distinct==m){
        if(r-l+1<bestlen){
            bestlen=r-l+1;
            bestl=l;
            bestr=r;
        }
        if(num_artist[pics[l]]==1){
            distinct--;
            num_artist[pics[l]]--;
            l++;
        }else{
            num_artist[pics[l]]--;
            l++;
        }
    }
}
    std::cout<<bestl<<' '<<bestr;

}