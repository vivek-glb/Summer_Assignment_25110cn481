#include<iostream>
using namespace std;
int main(){
    int i,j;
    int a[3][3],b[3][3],diff[3][3];
    cout << "enter the 1st matrix " << endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin >> a[i][j];
        }
    }
    cout << "enter the 2nd matrix " << endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin >> b[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            diff[i][j]=a[i][j]-b[i][j];
        }
    }
    cout << "the difference of 2 matrix is " << endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            cout << diff[i][j] << " ";
            cout << endl;
    }
    return 0;
}