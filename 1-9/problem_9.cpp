/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a^2 + b^2 = c^2

For example, 3^2 + 4^2 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

*/

#include <iostream>
#include <math.h>

bool pythagoreanTriplet(const uint16_t & a, const uint16_t & b,const uint16_t & c){
    return sqrt(pow(a,2)+pow(b,2))==c;
}

int main(){
    uint64_t product=0;
    for(int i=1;i<1000;i++){
        for(int j=i;j<(1000-i) ;j++){
            uint16_t c=1000-i-j;
            if(pythagoreanTriplet(i,j,c)){
                product=i*j*c;
                break;
            }
        } 
    }
    std::cout<<product<<"\n"; 
}


  
