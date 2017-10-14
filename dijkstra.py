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
  visited = {initial: 0}
  path = {}

  nodes = set(graph.nodes)
