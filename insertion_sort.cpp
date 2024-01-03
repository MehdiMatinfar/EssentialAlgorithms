
#include <iostream>
#include<array> 

using namespace std;
int main() {

    int a[]={2,8,5,3,9,4};
    int n =end(a)-begin(a);
    for (int i=1; i<n;i++){
        int key=a[i];
        int j = i-1;

        while(a[j]>key && j>0){
                a[j+1]=a[j];
                j=j-1;

        }
        a[j+1]=key;
        
    }

    for (int i = 0; i < n; i++)
    {cout << a[i]<<",";}


    return 0;
}
