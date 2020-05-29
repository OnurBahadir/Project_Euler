/*
The sum of the squares of the first ten natural numbers is,1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is, (1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of
the first ten natural numbers and the square of the sum is 3025-385 = 2640.
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <iostream>


uint64_t squareOfSum(const uint64_t & n){
    return ( n*(n+1)*n*(n+1))/4; 
}

uint64_t sumOfSquare(const uint64_t & n){
        return (n*(n+1)*(2*n+1))/6 ;
}

int main(){
    std::cout<<squareOfSum(100)-sumOfSquare(100);


}


  
