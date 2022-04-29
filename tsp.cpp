
class Solution {
public:
int total_cost(vector<vector<int>>cost,int s,vector<vector<int>>vertices){
    //vector<vector<int>>cost;
    vector<vector<int>>vetrices;
    for(int i=0;i<V;i++)
    if(i!=s)
    vertices.push_back(i);
    
    //store min weight
    int min_path=INT_MAX;
    do{
        int current_pathWeight=0;  //initially
        for(int i=0;i<vertex.size();i++){
            current_pathWeright+= graph[k][vertex[i]];
            k=vertex[i];
        }
        current_pathWeight+=graph[k][s];
        //update minimum
        min_path=min(min_path,current_pathWeight);
    }
    while(
        next_permutation(vertex.begin(),vertex.end()));
        return min_path;
}
};
