def isinf(num):
    return num >= 999
inf = 999

def floydd_warshall(adj_matrix,num_nodes):
    dists = [[inf for i in range(num_nodes)] for j in range(num_nodes)]
    
    for i in range(num_nodes):
        for j in range(num_nodes):
            dists[i][j] = adj_matrix[i][j]

    for k in range(num_nodes):
        for i in range(num_nodes):
            for j in range(num_nodes):
                dists[i][j] = min(dists[i][j], dists[i][k]+dists[k][j])
    
   
    
    print()
    for i in range(num_nodes):
        for j in range(num_nodes):
            if dists[i][j] < 0:
                print("Yes")
                return
    print("No")
        
num_nodes = int(input())
adj_matrix = [[int(input()) for _ in range(num_nodes)] for __ in range(num_nodes)]

"""
0::3::INF::
INF::0::4::
2::INF::0::
"""

print("*"*3)
for i in range(num_nodes):
    for j in range(num_nodes):
        print(adj_matrix[i][j] if not isinf(adj_matrix[i][j]) else "INF",end="::")
    print()
floydd_warshall(adj_matrix,num_nodes)