// Algorithm in O(2^N) 
public int step(int n) {
    if (n < 1) {
	return 0;
    }
    if (n == 1 || n == 2) {
	return n;
    }
    return step(n - 1) + step(n - 2);
}

//
