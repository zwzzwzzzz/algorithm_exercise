#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    int m,n;
    std::cin>>m>>n;
    std::vector<int> school(m);
    std::vector<int>  student(n);
    for(auto &x:school) std::cin>>x;
    for(auto &x:student) std::cin>>x;
    std::sort(school.begin(),school.end());     
    long long sum=0;

    for(int i=0;i<n;++i){
    auto it=std::lower_bound(school.begin(),school.end(),student[i]);

    if (it==school.end()) {
        sum+=(student[i]-school[m-1]);}else if
       (it==school.begin()) {
        sum+=(school[0]-student[i]);}else{
            if(student[i]-*(it-1)>(*it-student[i])){
                sum+=(*it-student[i]);
            }else{
                sum+=student[i]-*(it-1);
            }
        }


    }
 std::cout<<sum;    
}
