road_nodes, road_edges = map(int, input().split())

road_from = [0] * road_edges
road_to = [0] * road_edges
road_weight = [0] * road_edges

for i in range(road_edges):
    road_from[i], road_to[i], road_weight[i] = map(int, input().split())
    
g = [[0 for x in range(road_nodes)]for x in range(road_nodes)]
    
for i in range(len(road_from)):
    g[road_from[i]-1][road_to[i]-1] = road_weight[i]
print(g)