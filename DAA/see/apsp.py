
#floyd
def create_adjacency_matrix(graph,vertices):
    adjacency_matrix = [[0 for _ in range(vertices)] for _ in range(vertices)]
    zero_weight = []
    for edge in graph:
        vertex1, vertex2, weight = edge
        if(weight==0):
            zero_weight.append([vertex1,vertex2])
        adjacency_matrix[vertex1-1][vertex2-1] = weight
    
    for i in range(vertices):
        for j in range(vertices):
            for row in zero_weight:
                if row == [i+1, j+1]:
                    zero_score = 1
            if(i!=j and adjacency_matrix[i][j]==0 and zero_score!=1):
                adjacency_matrix[i][j] = 9999
            zero_score =0
    return adjacency_matrix

def floyd(graph,vertices):
    dist_matrix = graph
    for k in range(vertices):
        for i in range(vertices):
            for j in range(vertices):
                dist_matrix[i][j] = min(dist_matrix[i][j], dist_matrix[i][k]+dist_matrix[k][j])
    for i in range(vertices):
        for j in range(vertices):
            if i!=j:
                print(f'{i+1} {j+1} {dist_matrix[i][j]}')

vertex = int(input())
edges = int(input())
if(vertex == 0 or edges == 0):
    print(-1)
else:
    graph = []
    for _ in range(edges):
            graph.append(list(map(int, input().strip().split(' '))))

    adjacency_matrix = create_adjacency_matrix(graph,vertex)
    floyd(adjacency_matrix,vertex)


