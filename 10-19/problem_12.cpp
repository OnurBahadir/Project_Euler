/*
What is the value of the first triangle number to have over five hundred divisors?
*/

#include <iostream>
#include <math.h>

uint64_t numberOfDivisor(const uint64_t &n ){
    int s=0;
    for (int i=1; i<=sqrt(n); i++) {
        if(n%i==0){
            if( (n/i)==i){
                s+=1;
            }
            else{
                s+=2;
            }
        }
    }
    return s;
}

uint64_t triangle(const uint64_t &n){
    return n*(n+1)/2;
}

int main(){
    uint32_t limit=500;
    uint64_t i=1;
    uint64_t triangle_number=0;
    while(true){
        if(numberOfDivisor(triangle(i))>limit ){
            triangle_number=triangle(i);
            break;
        }
        else{
            i+=1;
        }
    }
    std::cout<<triangle_number<<"\n";
}