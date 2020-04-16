//时间复杂度较高
#include <iostream>
using namespace std;
int main(){
    int a[5]={99,35,12,38,21};
    int b;
    for(int i=0;i<4;i++){
        for(int j=0;j<4-i;j++){
            if(a[j]>a[j+1]){
                b = a[j];
                a[j] = a[j+1];
                a[j+1] = b;
            }
        }
    }

    for(int i=0;i<5;i++)
        cout<<a[i]<<" ";
    getchar();getchar();
    return 0;
}
