Top K problem for massive data stream. <br>

It firstly use the hash function to divide the large data into separate small file and deliver them to each slave point. <br>

Similar to the idea proposed by MapReduce. And then use the "max heap" to find the total K most frequent elements in the whole dataset. <br>

Also notice that Top K is the most frequent, the time complexity is. 
