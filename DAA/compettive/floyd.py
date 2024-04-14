nodes = int(input())
inf = float("inf")
adj_matrix = [[inf for _ in range(nodes)] for __ in range(nodes)]
final_matrix = [[inf for _ in range(nodes)] for __ in range(nodes)]

for i in range(nodes):
    for j in range(nodes):
        adj_matrix[i][j] = int(input())
        

for i in range(nodes):
    for j in range(nodes):
        final_matrix[i][j] = adj_matrix[i][j]

for  k in range(nodes):
    for i in range(nodes):
        for j in range(nodes):
            final_matrix[i][j] = min(final_matrix[i][j], final_matrix[i][k] + final_matrix[k][j])

            
#printing
for i in range(nodes):
    for j in range(nodes):
        if adj_matrix[i][j] == 999:
            print("INF", end="::")
        else:
            print(adj_matrix[i][j], end="::")
    print()
    
print()
print("***")

for i in range(nodes):
    for j in range(nodes):
        print(final_matrix[i][j], end="::")
    print()
    
#detecting cycles
# for i in range(nodes):
#     for j in range(nodes):
#         if (final_matrix[i][j] < 0)
#         {
#             print("Negative Cycle Detected")
#             print("Nodes involved = ", i, "and ",j)
#         }
            