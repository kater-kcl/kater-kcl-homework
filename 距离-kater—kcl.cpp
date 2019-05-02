#include <iostream>
#include <cmath>
using namespace std;
int main(){
    cout<<"输入数组的大小";
    int a;
    cin>>a;
    int num[a];
    cout<<"读入数组";
    for (int i=0; i<a; i++) {
        cin>>num[i];
    }
    //cout<<"fsjlfkjslkfjskldfjlkajflkjalkfjsdlfjlksjaglkjf;skgjsl;dfkjlskjaghiodhfuweaifjrnv";
    int min=abs(num[0]+num[1]);
    for (int i=0; i<a-1; i++) {
        for (int k=i+1; k<a; k++) {
            if (abs(num[i]-num[k])<min) {
                min=abs(num[i]-num[k]);
            }
        }
    }
    cout<<min;
    return 0;
}
