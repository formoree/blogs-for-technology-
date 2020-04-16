//空间复杂度较高
#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int a[11];
    int b;
    //将桶初始化为0
    for(int i=0;i<11;i++)
        a[i]=0;
    //输入数据
    for(int i=0;i<5;i++){
        cin>>b;
        a[b]++;
    }

    //输出数据
    for(int i=0;i<11;i++){
        for(int j=0;j<a[i];j++)
            cout<<i<<" ";
    }

    getchar();getchar();//暂停
    return 0;
}
