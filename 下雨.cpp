#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"输入的数组大小:";
    cin>>n;
    cout<<"录入数组";
    int height[n+2];
    height[0]=0;height[n+1]=0;
    for (int i=1; i<=n; i++) {
        cin>>height[i];
    }
    int R = 0,L = 0,min=0,add=0,tem=0;
    for (int i=1; i<=n; i++) {
        
        if (height[i]>height[i+1]) {
            L=i;
            for (; height[i]>=height[i+1]; i++) {
                if (i==n) {
                    cout<<add;
                    return 0;
                }
            }
            while (height[i]<=height[i+1]) {
                if (i==n) {
                    cout<<add;
                    return 0;
                }
                i++;
            }
            R=i;
            i--;
            min=height[R]>height[L]?height[L]:height[R];
            if (L==n+1) {
                break;
            }
            for (int k=L; k<=R; k++) {
                tem=min-height[k];
                if (tem<0) {
                    tem=0;
                }
                add+=tem;
            }
        }
        
    }
    cout<<add;
	return 0;
}

