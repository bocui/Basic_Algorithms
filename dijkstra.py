class Graph:
"""
# Graph's necessary element: {nodes     :  set, 
			      edges     :  defaultdict
			      distance  :  dictionary}
"""
    def __init__(self):
        self.nodes = set()
        self.edges = defaultdict(list)
        self.distances = {}

# Graph's necessary operations: {add_node, add_edge}
    def add_node(self, value):
        self.nodes.add(value)

    def add_edge(self, from_node, to_node, distance):
        self.edges[from_node].append(to_node)
        self.edges[to_node].append(from_node)
        self.distances[(from_node, to_node)] = distance


def dijsktra(graph, initial):
"""
graph  : the graph
initial : the begining node


{visited}   : the traversed node so far and its shortest distance, the dictionary structure.  
{node}      : the node has not been traversed
{path}      : the dictionary structure. 
"""
    visited = {initial: 0}
    path = {}
  
    nodes = set(graph.nodes)
    
    while nodes: 
	min_node = None
	for node in nodes:
	    if node in visited: 
		if min_node is None:
		    min_node = node
		elif visited[node] < visited[min_node]
		    min_node = node
# In this condition, the min_node is None means:
#    1. nodes is empty
#    2. node in nodes is not in visited. 
	if min_node is None:
	    break

	nodes.remove(min_node)
	current_weight = visited[min_node]

	for edge in graph.edges[min_node]:
	    weight = current_weight + graph.distance[(min_node, edge)]
	    if edge not in visited or weight < visited[edge]:
		visited[edge] = weight
		path[edge] = min_node

    return visited, path







