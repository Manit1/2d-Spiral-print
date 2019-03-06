#include <iostream>

using namespace std;
void PrintSpiral(int arr[10][10],int r,int c){
          int startCol=0,startRow=0,endCol=c-1,endRow=r-1;
          while(startCol<=endCol && startRow<=endRow){
            //print first row
            for(int i=startCol;i<=endCol;i++)
                cout<<arr[startRow][i]<<" ";
            startRow++;
            //print end column
            for(int i=startRow;i<=endRow;i++)
                cout<<arr[i][endCol]<<" ";
            endCol--;
            //print end row
           if(endRow>startRow){
            for(int i=endCol;i>=startCol;i--)
                cout<<arr[endRow][i]<<" ";
            endRow--;
          }
            //print first column
            if(startCol<endCol){
            for(int i=endRow;i>=startRow;i--)
                cout<<arr[i][startCol]<<" ";
            startCol++;
            }
          }

}

int main()
{
    int arr[10][10],r,c;
    cout<<"Enter the number of rows and columns you want in your array :";
    cin>>r>>c;
    cout<<"\nEnter the elements of the array\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cin>>arr[i][j];
    }

    cout<<"\nThe spiral print of the above given array is :"<<endl;
    PrintSpiral(arr,r,c);
}
