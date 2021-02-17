#include<iostream>
using namespace std;
#define R 3
#define C 4
void spiralTraversal(int A[R][C]){
    int lastRow=R-1;
    int lastColumn=C-1;
    int x=0,y=0;
    int i;
    while(x<=lastColumn && y<=lastRow){
        for(i=x;i<=lastColumn;i++){
            cout<<A[x][i]<<" ";
        }
        y++;
        for(i=y;i<=lastRow;i++){
            cout<<A[i][lastColumn]<<" ";
        }
        lastColumn--;
        if(x<=lastRow){
            for(i=lastRow;i>=x;i--){
                cout<<A[lastRow][i]<<" ";
            }
            lastRow--;
        }
        if(y<=lastColumn){
            for(i=lastRow;i>=y;i--){
                cout<<A[i][y]<<" ";
            }
            x++;
        }
    }
}
int main(){
    int matrix[R][C] = 
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    spiralTraversal(matrix);
    return 0;
}