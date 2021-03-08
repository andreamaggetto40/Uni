#include <iostream>

using namespace std;

string deleteDouble(string &str){
    string newStr = "";
    newStr += str.at(0);

    for(char i : str){
        if(newStr.at(newStr.length() - 1) != i){
            newStr += i;
        }
    }

    return newStr;
}

void deleteDouble(string &str){
    unsigned init = 0;
    unsigned i = 1;

    while(i < str.length()){
        if(str.at(i) == str.at(init)){
            str.erase(str.begin() + i);
            i--;
        }
        else{
            init++;
        }
        i++;
    }
}

int main(){            
    string first = "aaaa";
    
    deleteDouble(first);

    cout<<first <<endl;

    
}
