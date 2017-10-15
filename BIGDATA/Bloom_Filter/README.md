This subrepository is for Bloom filter problem. <br>

Bloom filter is a space-efficient probabilistic data structure, conceived by Burton Howard Bloom in 1970. <br>

It is for validation if an element is a member of a set. <br>

## Short Algorithm Description.

A Bloom filter is a bit array containing m bits, all intialized to 0. And there are k different hash functions. <br>

Each of these functions map the input elements to one position of this m-bits array. 

Note that $k << m$. 


