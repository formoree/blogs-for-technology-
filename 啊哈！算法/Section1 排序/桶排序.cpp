//�ռ临�ӶȽϸ�
#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int a[11];
    int b;
    //��Ͱ��ʼ��Ϊ0
    for(int i=0;i<11;i++)
        a[i]=0;
    //��������
    for(int i=0;i<5;i++){
        cin>>b;
        a[b]++;
    }

    //�������
    for(int i=0;i<11;i++){
        for(int j=0;j<a[i];j++)
            cout<<i<<" ";
    }

    getchar();getchar();//��ͣ
    return 0;
}
