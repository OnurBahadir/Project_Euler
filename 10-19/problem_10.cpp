/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.
*/

#include <iostream>

bool isPrime(const int num){
    if(num<=3){return num>1;} // 1,2,3
    else if(num%2==0 || num%3==0){return 0;}
    else{
        for(int i=5;i*i<=num;i+=6){
            if(num%i==0 || num%(i+2)==0){return 0;}
        }
        return 1;
    }
}

int main() {
    uint32_t lim=2000000;
    uint64_t sum=2;
    for(uint32_t i=3;i<lim;i+=2){
        if(isPrime(i)){
            sum+=i;
        }
    }
    std::cout<<sum<<"\n";
}

  
