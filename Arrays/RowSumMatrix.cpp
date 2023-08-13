#include<iostream>
#include<LIMITS>

using namespace std;

void printMatrix(int arr[][3]){

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void printRowSum(int arr[][3]){

    cout<<"\nRow Sum\n";

    for(int i=0; i<3; i++){

        int rowSum = 0;

        for(int j=0; j<3; j++){

            rowSum+= arr[i][j];
        }
        cout<<i<<" th row "<<rowSum<<endl;
    }
}

void largestRowSum(int arr[][3]){

    cout<<"\nLargest Row Sum\n";

    int largestRowSum = INT_MIN, showRow = 0;

    for(int i=0; i<3; i++){

        int rowSum = 0;

        for(int j=0; j<3; j++){

            rowSum+= arr[i][j];
        }
            if(largestRowSum < rowSum){
                showRow = i;
                largestRowSum = rowSum;
            }
    }

    cout<<"Largest Row Sum is : "<<largestRowSum<<endl;
    cout<<showRow<<" th row is holding largest Row Sum \n";
}

void printColSum(int arr[][3]){

    cout<<"\nCol Sum\n";

    for(int col = 0; col<3; col++){

        int colSum = 0;

        for(int row = 0; row<3; row++){

            colSum += arr[row][col];
        }
        cout<<col<<" th row "<<colSum<<endl;
    }
}

void wavePrint(int arr[][3]){

    cout<<"\n Wave Print \n";

    for(int col=0; col<3; col++){

        if(col & 1){

            // odd col
            for(int row=2; row>=0; row--){
                cout<<arr[row][col]<<" ";
            }
        }
        else{
            // even col
            for(int row=0; row<3; row++){
                cout<<arr[row][col]<<" ";
            }
        }
    }
}
int main(){

    int matrix[3][3];

    cout<<"Enter the Elements in Matrix "<<endl;
    //input
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){

            cin>>matrix[i][j];
        }
    }

    // output
    printMatrix(matrix);

    // rowSum
    printRowSum(matrix);

    // colSum
    printColSum(matrix);

    // largest RowSum
    largestRowSum(matrix);

    //Wave Print
    wavePrint(matrix);

    return 0;
}