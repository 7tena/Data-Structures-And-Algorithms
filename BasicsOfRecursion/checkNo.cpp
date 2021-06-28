bool checkNumber(int input[], int size, int x) {
	if(input[0] == x){
		return true;
	}
    if(size>=0){
        bool isPresent = checkNumber(input+1, size-1,x);
		return isPresent;
    }
}