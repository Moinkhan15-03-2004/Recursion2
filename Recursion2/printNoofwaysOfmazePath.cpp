#include<iostream>
using namespace std;
void printpath(int sr,int sc,int er,int ec,string s){
   if(sr>er||ec>er) return;
   if(sr==er||sc==ec){
      cout<<s<<endl;
      return;
   }
   printpath(sr,sc+1,er,ec,s+'R');// right
   printpath(sr+1,sc,er,ec,s+'D');// down
}
int main(){
    printpath(1,1,3,3," ");
}