#include<iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cout << "enter the no of rows and column of 1st matrix ";
    cin >>r1>>c1;
    cout <<"enter the no of rows and columns of 2nd matrix ";
    cin >> r2>>c2;
    if(c1!=r2){
         cout <<"multiplication is not possible";
         return 0;
    }
    int i,j,k,a[r1][c1],b[r2][c2],mul[r1][c2];
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++)
        cin >> a[i][j];
    }
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++)
        cin >> b[i][j];
    }
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            mul[i][j]=0;
            for(k=0;k<c1;k++)
            mul[i][j]= mul[i][j]+a[i][k]*b[k][j];
        }
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++)
        cout << mul[i][j] <<" ";
        cout << endl;
    }
    return 0;
}