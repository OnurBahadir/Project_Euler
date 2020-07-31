#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool isPrime(const unsigned long & num)
{
    if ( num<=3 ){ return num>1; } 
    
    else if( num%2==0 || num%3==0 ) { return 0; }
    
    else{
        for ( int i=5; i*i<=num; i+=6 ) {
            if( num%i==0 || num%(i+2)==0 ){
                return 0;
            }
        }
        return 1;
    }
}

std::vector<int> rotations(const int& num)
{
    std::vector<int> rots{num};
    std::string rotates=std::to_string(num);

    for( int i=0; i< int( rotates.size()-1 ) ; i++ ){
          std::rotate(rotates.rbegin(), rotates.rbegin() + 1, rotates.rend());  
          rots.emplace_back(std::stoi(rotates));
    }
    return rots;
}

bool isCircular(const unsigned long& num)
{
    for( const auto x:rotations(num) ){
        if( !isPrime(x) ){
            return 0;
        }
    }
    return 1;
}

int main(){
    unsigned long n=0;
    unsigned long lim=1000000;

    for ( int i=0; i<int(lim) ;i++ ){
        if ( isCircular(i) ){          
           n+=1;
        }
    }
    std::cout << n <<"\n";
}
