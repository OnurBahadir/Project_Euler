/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream>
bool isPrime(const uint64_t num){
    if(num<=3){return num>1;} // 1,2,3
    else if(num%2==0 || num%3==0){return 0;}
    else{
        for(int i=5;i*i<=num;i+=6){
            if(num%i==0 || num%(i+2)==0){return 0;}
        }
        return 1;
    }
}

int main(){
    uint64_t l=600851475143;
    uint32_t i=2;
    uint32_t primeNumber=0;
    while(l>1){
        if(l%i==0){
            if( isPrime(i) ){
                primeNumber=i;
            }
            l/=i;
        }
        else{
            i+=1;
        }
    }
    std::cout<<primeNumber<<"\n";
}
  
  
