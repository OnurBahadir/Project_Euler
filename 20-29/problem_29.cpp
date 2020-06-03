#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
int main(){
    double temp=0;
    std::vector<double> results{4};

    for(int i=2;i<=100;i++){
        for(int j=2;j<=100;j++){
                temp=pow(i,j);
                auto isInArray=std::find(results.begin(),results.end(),temp);
                if(isInArray != std::end(results)){
                    continue;
                }
                else{
                    results.emplace_back(temp);
                }
        }
    }
    std::cout<<results.size()<<"\n";
}