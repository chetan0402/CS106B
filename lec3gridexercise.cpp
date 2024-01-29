#include<iostream>
#include<vector>
#include<string>
#include<array>
#include<cmath>
using namespace std;

bool knightCanMove(vector<vector<string>>& grid,const array<int,2>& knightPos,const array<int,2>& toMove){
    int diffY=knightPos[1]-toMove[1];
    int diffX=knightPos[0]-toMove[0];
    float diff = diffX*diffX + diffY*diffY;
    if(diff == float(5) && grid[toMove[0]][toMove[1]]==""){
        return true;
    }
    return false;
}

int main(){
    vector<vector<string>> map={
        {"","","","","king","","",""},
        {"","","knight","","","","",""},
        {"","","","","","",""},
        {"","rook","","","","",""},
        {"","","","","","",""},
        {"","","","","","",""},
        {"","","","","","",""}};
    cout << knightCanMove(map,{1,2},{2,4}) << endl;
}