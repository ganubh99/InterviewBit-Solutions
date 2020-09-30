void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int R=A.size();
    int C=A[0].size();
    for(int i=0;i<R;i++){
        for(int j=i;j<C;j++){
            swap(A[i][j],A[j][i]);
        }
    }
    for(int i=0;i<R;i++){
        for(int j=0,k=R-1;j<k;j++,k--){
            swap(A[i][j],A[i][k]);
        }
    }
    
}
