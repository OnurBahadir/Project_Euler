// 22

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

std::vector<std::string> splitt(const std::string &s,const char c1){
	std::string el="";
	std::vector<std::string> data;
	for(int i=0;i<s.size();i++){
		if( s[i]==c1 ){
            if(el!=""){
			    data.emplace_back(el);
            }
			el="";
		}
		else{
			el+=s[i];
		}
		if(i==(s.size()-1) ){
			if(s[i]!=c1){
				data.emplace_back(el);
			}
		}
	}
	return data;
}

std::string readTxt(std::string loc){
    std::ifstream read_out(loc);
    std::string myString="";
    if(read_out.is_open()){
        while (std::getline(read_out,myString) ){
        }
        read_out.close();
    }
    return myString;
}

std::multimap<std::string,uint16_t> alphabet={
    {"A",1},{"B",2},{"C",3},{"D",4},{"E",5},{"F",6},{"G",7},{"H",8},{"I",9},{"J",10},{"K",11},{"L",12},
    {"M",13},{"N",14},{"O",15},{"P",16},{"Q",17},{"R",18},{"S",19},{"T",20},{"U",21},{"V",22},{"W",23},
    {"X",24},{"Y",25},{"Z",26}
};

uint64_t getPoint(std::string name){
    uint64_t sum=0;
    std::string temp="";
    for(int i=0;i<name.size();i++){
        temp+=name[i];
        auto search=alphabet.find(temp);
        sum+=(search->second);
        temp="";
    }
    return sum;
}
int main(){
    std::vector<std::string> names=splitt(readTxt("p022_names.txt"),',');
    std::sort(names.begin(),names.end());
    int i=1;
    uint64_t sum=0;
    for(auto x:names){
        sum+=(i*getPoint(x));
        i+=1;
    }
    std::cout<<sum<<"\n";
}