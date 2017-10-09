// Algorithm in O(2^N) 
public int stepO2N(int n) {
    if (n < 1) {
	return 0;
    }
    if (n == 1 || n == 2) {
	return n;
    }
    return step(n - 1) + step(n - 2);
}

//Algorithm in O(N)

public int stepON(int n) {
    if (n < 1) {
	return 0;
    }
    if (n == 1 || n == 2) {
	return n;
    }
    int res = 2;
    int pre = 1;
    int tmp = 0;
    for (int i = 3; i <= n; i++) {
	tmp = res;
	res = res + pre;
	pre = tmp;
    } 
    return res;
}
