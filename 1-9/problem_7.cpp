/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
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
int main(){
    const uint16_t lim=10001;
    uint16_t n=1;
    uint64_t number=0;
    for(int i=3;n<lim;i+=2){
        if(isPrime(i)){
            n+=1;
        }
        number=i;
    }
    std::cout<<number<<"\n";

}


  
