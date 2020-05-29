/*
A palindromic number reads the same both ways. 
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>

bool isPalin(const uint64_t &number ){
    uint64_t temp=number;
    uint64_t sum=0;
    uint64_t r=0;
    while(temp){
        r=temp%10;
        temp=temp/10;
        sum=sum*10+r;
    }
    return (sum==number);
}
int main(){
    uint64_t largest=0;
    for(int i=999;i>99;i--){
        for(int j=999;j>99;j--){
            if(isPalin(i*j) && i*j>largest){
                largest=i*j;
            }
        }
    }
    std::cout<<largest<<"\n";
}
  
  
