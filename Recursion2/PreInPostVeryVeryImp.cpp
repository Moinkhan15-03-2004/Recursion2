#include<iostream>
using namespace std;
void pip(int n){
    if(n==0) return;
    cout<<"pre"<<n<<endl;
    pip(n-1);
    cout<<"In"<<n<<endl;
    pip(n-1);
    cout<<"post"<<n<<endl;
}
int main(){
    cout<<endl;
    pip(3);
}

// pre3
// pre2
// pre1
// In1
// post1
// In2
// pre1
// In1
// post1
// post2
// In3
// pre2
// pre1
// In1
// post1
// In2
// pre1
// In1
// post1
// post2
// post3