/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

*/

#include <iostream>
bool divisible(const uint64_t &number){
    for(int i=11;i<=20;i++){
        if( (number%i)!= 0 ){
            return 0;
        }
    }
    return 1;
}

int main(){
    uint64_t n=20;
    while(true){
        if(divisible(n)){
            break;
        }
        else{
            n+=20;
        }
    }
    std::cout<< n <<"\n";
}
  
  
