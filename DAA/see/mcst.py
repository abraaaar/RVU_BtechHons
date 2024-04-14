#prims

def create_adjacency_matrix(graph,vertices):
    adjacency_matrix = [[0 for _ in range(vertices)] for _ in range(vertices)]
    zero_weight = []
    for edge in graph:
        vertex1, vertex2, weight = edge
        adjacency_matrix[vertex1-1][vertex2-1] = weight
    return adjacency_matrix

def prims(graph, vertices):
    selected_vertices = [0]
    mst_edges = []
    total_cost = 0

    while len(selected_vertices) != vertices:
        min_edge = (None, None, float('inf'))
        for vertex in selected_vertices:
            for i in range(vertices):
                if (graph[vertex][i] and i not in selected_vertices
                        and graph[vertex][i] < min_edge[2]):
                    min_edge = (vertex, i, graph[vertex][i])

        if min_edge[0] is not None:
            mst_edges.append(min_edge)
            selected_vertices.append(min_edge[1])
            total_cost += min_edge[2]
    print(total_cost)

vertex = int(input())
edges = int(input())
if(vertex == 0 or edges == 0):
    print(-1)
else:
    graph = []
    for _ in range(edges):
            graph.append(list(map(int, input().strip().split(' '))))

    adjacency_matrix = create_adjacency_matrix(graph,vertex)
    prims(adjacency_matrix,vertex)