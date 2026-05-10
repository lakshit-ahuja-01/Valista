row=int(input())
coloumn=int(input())
matrix=[]
for i in range(row):
  r=list(map(int,input().split()))
  matrix.append(r)
col_max=[]
for j in range(coloumn): 
    elements = []
    for i in range(row): 
        elements.append(matrix[i][j])
    col_max.append(max(elements))
print(col_max)