int allIndexes(int a[], int size, int x, int output[]){
    if(size==0){
        return 0;
    }
    int ans  = allIndexes(a+1, size-1, x, output);
    if(a[0] == x){
        for(int i = ans-1; i>=0; i--){
            output[i+1] = output[i] + 1;
        }
        output[0] = 0;
        ans++;
    }else{
        for (int i = ans - 1; i >= 0; i--) {
            output[i] = output[i] + 1;
        }
    }
    return ans;
}