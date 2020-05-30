// 21

#include <iostream>
#include <math.h>

uint64_t sumOfProperDivision(uint64_t n){
    uint64_t s=0;
    for (int i=2; i<=sqrt(n); i++) {
        if(n%i==0){
            if( (n/i)==i){
                s+=i;
            }
            else{
                s+=(i+n/i);
            }
        }
    }
    return s+1;
}

bool isAmicable(uint64_t n){
    return (sumOfProperDivision(n)!=n  && (sumOfProperDivision(sumOfProperDivision(n))==n ) );
}
int main(){
   uint64_t sum=0;
   uint64_t lim=10000;
   for(int i=1;i<lim;i++){
       if(isAmicable(i)){
           sum+=i;
       }
   }
   std::cout<<sum<<"\n";
}