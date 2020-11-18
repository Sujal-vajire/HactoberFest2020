/* Print a matrix in spiral order */


#include <iostream>

using namespace std;

void spiral(int a[][100],int r,int c){
   int sr = 0, sc = 0, er = r-1, ec = c-1;
    
    while(sr<=er && sc<=ec){
        //Print sr from sc till ec
        for(int col = sc;col<=ec;col++){
            cout<<a[sr][col]<<' ';
        }
        sr++;
        // Print ec from sr till er
        for(int row = sr;row<=er;row++){
            cout<<a[row][ec]<<' ';
        }
        ec--;
        // Print er from ec till sc
        if(sr<er){
            for(int col=ec;col>=sc;col--){
                cout<<a[er][col]<<' ';
            }
            er--;
        }

        // Print sc from er till sr
        if(sc<ec){
            for(int row=er;row>=sr;row--){
                cout<<a[row][sc]<<' ';
            }
            sc++;
        }
    }
}

int main(){
    int num=1,r,c;
    cin>>r>>c;
       int arr[r][c];
       
       for(int i=0;i<r;i++){
           for(int j=0;j<c;j++){
               arr[i][j]=num;
     num++;  }
       }
    
    
}

  
