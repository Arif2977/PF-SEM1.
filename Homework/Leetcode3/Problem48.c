void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int n=matrixSize;
    int temp;
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }
    for(int i=0;i<n;i++){
        int k=n-1,j=0;
        while(j<k){
            temp=matrix[i][k];
            matrix[i][k]=matrix[i][j];
            matrix[i][j]=temp;
            j++;
            k--;
        }
    }
}
