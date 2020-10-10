//Generate all different permuatations

  vector<vector<int>>ans;
    void fn(vector<int>v,vector<int>&t,vector<bool>&vis){
        int n=v.size();
        if(t.size()==n){
            ans.push_back(t);
            return;
        }
        for(int i=0;i<n;i++){
            if(vis[i]==1)
                continue;
            vis[i]=1;
            t.push_back(v[i]);
            fn(v,t,vis);
            t.pop_back();
            vis[i]=0;
        }
    }

    vector<vector<int>> permute(vector<int>& v) {
        vector<int>t;
        vector<bool>vis(v.size(),false);
        fn(v,t,vis);
        return ans;
    }
