#include<iostream>
using namespace std;
int maze2(int row,int col){
    if(row<1||col<1) return 0;
    if(row==1||col==1) return 1;
    int right = maze2(row,col-1);
    int down = maze2(row-1,col);
    int total = right+down;
    return total;
 }

int main(){
    cout<<maze2(3,4);
}