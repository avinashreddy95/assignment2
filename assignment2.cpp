#include<iostream>
    using namespace std;
    int main () {
       int a[4][5] =
        {
            {0 , 0 , 1 , 0 , 9},
            {0 , 0 , 6 , 9 , 0 },
            {0 , 0 , 0 , 0 , 0 },
            {0 , 4 , 9 , 0 , 1 }
        };
     int row = 4, col = 5;
     int size = 0;
        for (int n = 0; n < row; n++)
            for (int j = 0; j < col; j++)
                if (a[n][j] != 0)
                    size++;
    
        int compactMatrix[4][size];
        int k = 0;
        for (int n = 0; n < row; n++)
            for (int j = 0; j < col; j++)
                if (a[n][j] != 0)
                {
                    compactMatrix[0][k] = n;
                    compactMatrix[1][k] = j;
                    compactMatrix[2][k] = a[n][j];
                    k++;
                }
     
        for (int n=0; n<3; n++)
        {
            for (int j=0; j<size; j++)
                cout <<" "<< compactMatrix[n][j];
     
            cout <<"\n";
        }
        cout<<"Num of 0 = "<< size <<endl;
       if (size > ((row * col)/ 2))
          cout<<"not a sparse matrix"<<endl;
       else
          cout<<"This is a sparse matrix"<<endl;
    
        return 0;
    }
