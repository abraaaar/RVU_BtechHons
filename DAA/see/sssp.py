#dijkstra

from heapq import heappop, heappush

def create_adjacency_matrix(graph,vertices):
    adjacency_matrix = [[0 for _ in range(vertices)] for _ in range(vertices)]
    zero_weight = []
    for edge in graph:
        vertex1, vertex2, weight = edge
        if(weight == 0):
            zero_weight.append([vertex1,vertex2])
        adjacency_matrix[vertex1-1][vertex2-1] = weight
    for i in range(vertices):
        for j in range(vertices):
            for row in zero_weight:
                if row == [i+1,j+1]:
                    zero_score = 1
            if(i!=j and adjacency_matrix[i][j]==0 and zero_score!=1):
                adjacency_matrix[i][j] = 9999
            zero_score = 0
    return adjacency_matrix

def dijkstra(graph, vertices, start_vertex):
    shortest_paths = [9999] * vertices
    visited = [0] * vertices
    shortest_paths[start_vertex] = 0
    
    
    heap = [(0, start_vertex)]
    while heap:
        (curr_weight, u) = heappop(heap)
        if visited[u]:
            continue
        visited[u] = 1
        for v, weight in enumerate(graph[u]):
            if not visited[v] and shortest_paths[v] > shortest_paths[u] + weight:
                shortest_paths[v] = shortest_paths[u] + weight
                heappush(heap, (shortest_paths[v], v))

    for i in range(1, vertices):
        if shortest_paths[i] == 9999:
            print(f"{start_vertex + 1} {i + 1} -1")
        else:
            print(f"{start_vertex + 1} {i + 1} {shortest_paths[i]}")

vertex = int(input())
edges = int(input())
if(vertex == 0 or edges == 0):
    print(-1)
else:
    graph = []
    for _ in range(edges):
            graph.append(list(map(int, input().strip().split(' '))))

    adjacency_matrix = create_adjacency_matrix(graph,vertex)
    dijkstra(adjacency_matrix,vertex,0)
