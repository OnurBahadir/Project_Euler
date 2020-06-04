#include <iostream>

double fac(const int n){
    double sum=1;
    for(int i=n;i>1;i--){
        sum*=i;
    }
    return sum;
}
double bn(const int x,const int y){
    return fac(x)/ ( fac(y)*fac(x-y));
}
int main(){
    int y=20;
    int x=20;
    long long int sumOfRoutes=bn(x+y,y);

    std::cout<<sumOfRoutes<<"\n";
    
}