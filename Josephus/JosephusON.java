// It is the algorithm with time complexity O(N)

public Node josephusON(Node head, int m) {
    if (head == null || head.next == head || m < 1) {
	return head;
    }
    
    Node cur = head.next;

    // It is for the size of Node list
    int size = 1;
    while (cur != head) {
	size++;
	cur = cur.next;
    }
    int pos = getLive(size, m);
    while (--pos != 0) {
	head = head.next;
    }
    head.next = head;
    return head;
}

public int getLive(int size, int m) {
    if (size == 1) {
	return 1;
    }
    return (getLive(size-1, m) + m - 1) % size + 1;
}

