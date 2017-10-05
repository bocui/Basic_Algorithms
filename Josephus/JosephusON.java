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
}

