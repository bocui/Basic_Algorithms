public int fibON(int n) {
    if (n < 1) {
	return 0;
    }
    if (n == 1 || n == 2) {
	return 1;
    }
    
    int res = 0;
    int pre = 1;
    int prepre = 1;
    for (int i = 3; i < n; i++) {
        pre = res;
	res = res + pre;
        res = prepre + pre;
	pre = res;
    }
}
