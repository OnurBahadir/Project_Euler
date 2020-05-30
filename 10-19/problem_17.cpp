/*17
If the numbers 1 to 5 are written out in words: 
one, two, three, four, five, then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, 
how many letters would be used? 
*/

#include <iostream>
#include <map>
#include <string>

std::map<uint16_t,std::string> data={
    {0,""},
    {1,"one"},
    {2,"two"},
    {3,"three"},
    {4,"four"},
    {5,"five"},
    {6,"six"},
    {7,"seven"},
    {8,"eight"},
    {9,"nine"},
    {10,"ten"},
    {11,"eleven"},
    {12,"twelve"},
    {13,"thirteen"},
    {14,"fourteen"},
    {15,"fifteen"},
    {16,"sixteen"},
    {17,"seventeen"},
    {18,"eighteen"},
    {19,"nineteen"}
};

std::map<uint16_t,std::string> data10={
    {0,""},
    {1,"teen"},
    {2,"twenty"},
    {3,"thirty"},
    {4,"forty"},
    {5,"fifty"},
    {6,"sixty"},
    {7,"seventy"},
    {8,"eighty"},
    {9,"ninety"}
};

std::string numberName(uint16_t n){
    if(n<20){
        return data[n];
    }
    if(n>=20 && n<100){
        return data10[n/10]+data[n%10];
    }
    else if(n>99 & n<1000) {
        if( n%100==0){
            return data[n/100]+"hundred";
        }
        
        else if( n%100<20 ){
            return data[n/100]+"hundredand"+data[n%100];
        }
        else{
            return data[n/100]+"hundredand"+data10[(n-(n/100)*100)/10]+data[n%10];
        }
    }
    else{
        return "onethousand";
    }    
};
int main(){
    uint64_t sum=0;
    for(int i=1;i<=1000;i++){
        sum+= ( numberName(i).size() );
    }
    
    std::cout<<sum<<"\n";
}