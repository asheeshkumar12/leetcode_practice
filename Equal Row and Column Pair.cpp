class Solution:
    def equalPairs(self, grid: List[List[int]]) -> int:
        h=list(map(list,zip(*grid)))
        c=0
        for i in range(len(grid)):
            for j in range(len(grid)):
                if grid[i]==h[j]:
                    c+=1;
        return c
        
