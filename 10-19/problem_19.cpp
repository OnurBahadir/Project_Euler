/*19
How many Sundays fell on the first of the month during the twentieth century 
(1 Jan 1901 to 31 Dec 2000)? 
*/

#include <iostream>

bool isLeap(int64_t year){
    if(year%100==0){
        return (year%400==0);
    }
    else{
        return (year%4==0);
    }
}

int main(){
    const int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    const int daysL[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    uint32_t day=0;
    int sum=1;
    for(int i=1900;i<2001;i++){
        if(isLeap(i)){
            for(int j=0;j<12;j++){
                if( sum%7==0 && i>=1901){
                    day+=1;
                }
                sum+=daysL[j];
            }
        }
        else{
            for(int j=0;j<12;j++){
                if( sum%7==0  && i>=1901 ){
                    day+=1;
                }
                sum+=days[j];
            }

        }
    }
    std::cout<<day<<"\n";
}