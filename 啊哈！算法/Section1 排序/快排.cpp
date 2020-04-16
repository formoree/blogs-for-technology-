#include <cstdio>
#include <iostream>
using namespace std;
int a[101],n;
//n为输入数据大小
void quicksort(int left,int right){
    int i=left,j=right,temp=a[i],b;

    if(left>right) return;

    while(i!=j){
        while(a[j]>=temp&&i<j) j--;
        while(a[i]<=temp&&i<j) i++;

        if(i<j)
        {
            b=a[j];a[j] = a[i]; a[i] = b;
        }
    }

    a[left] = a[i]; a[i] = temp;
    quicksort(left,i-1);
    quicksort(i+1,right);
}

int main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    quicksort(1,n);
    for(int j=1;j<=n;j++)
            cout<<a[j]<<" ";
    return 0;
}
