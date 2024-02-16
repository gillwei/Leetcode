class Solution {
    void dfs (vector<vector<int>>&image,int sr ,int sc , int row ,int col ,int source,int color)
    {   
        if(sr<0||sr>=row||sc<0||sc>=col)  // condition for not going out of bounds
            return;
        
       if(image[sr][sc]!=source)  // this the condition which prevents infinite loop 
            return ;
        image[sr][sc]=color;
        dfs(image,sr-1,sc,row,col,source,color); // left
        dfs(image,sr+1,sc,row,col,source,color); //right
        dfs(image,sr,sc+1,row,col,source,color); //top
        dfs(image,sr,sc-1,row,col,source,color); // bottom
    }
public:
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int source = image[sr][sc];
        if(image[sr][sc]==color)
            return image;
        int row  =image.size();
        int col = image[0].size();
        dfs(image,sr,sc,row,col,source,color);
        
        return image;  
    }
};