/*
The following iterative sequence is defined for the set of positive integers:
n → n/2 (n is even)
n → 3n + 1 (n is odd)
Using the rule above and starting with 13, we generate the following sequence:
13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.
Which starting number, under one million, produces the longest chain?
NOTE: Once the chain starts the terms are allowed to go above one million.
*/

//   ***************  NEED  OPTIMIZATION ****************** ///

#include <iostream>

uint64_t Collatz_Sequence(const uint64_t &x){
    if(x==1){
        return 1;
    }
    else if( x%2==0 ){
        return x/2;
    }

    else{
        return 3*x+1;
    }
}

uint32_t numberOfTerms(int64_t temp){
    uint64_t n=1;;
    while(true){
        temp=Collatz_Sequence(temp);
        if(temp==1){
            break;
        }
        else{
            n+=1;
        }
    }
    return n;
}

int main() {

    uint32_t lim=1000000;
    uint64_t chain=1; 
    uint32_t number=1;

    for(uint64_t i=2;i<lim;i++){
        if(numberOfTerms(i)>chain){
            chain=numberOfTerms(i);
            number=i;
        }
    }
    std::cout<<number<<"\n";
}

  
