#include<iostream>
#include<string>
using namespace std;

void nameDiamond(string&name){
    int length=name.length();
    for(int i=1;i<=(2*length-1);i++){
        for(int j=1;j<=length;j++){
            if(i-j >= 0 && i-j <=4){
                cout << name[j-1];
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main(){
    cout << "Enter a name." << endl;
    string name;
    getline(cin,name);
    nameDiamond(name);
    return 0;
}