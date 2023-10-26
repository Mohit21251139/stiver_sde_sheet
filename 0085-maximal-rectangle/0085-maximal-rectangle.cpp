class Solution {
public:
   int f(vector<int > &mat){
	stack<int > st;
	int maxAns = 0;
	int n = mat.size();
	for (int i = 0;i<=n;i++){
       while (!st.empty() && (i ==n || mat[st.top() ] >= mat[i])){
		   int height = mat[st.top()];
		   st.pop();
		   int width;
		   if (st.empty()){
			   width = i;
		   }
		   else{
			   width = i- st.top()-1 ;
			  
		   }
		    maxAns = max(maxAns,width*height);

	   }
	   st.push(i);
	}
	return maxAns;

}
    int maximalRectangle(vector<vector<char>>& mat) {
         int maxA= 0;
         int n = mat.size();
         int m = mat[0].size();
	 vector <int > height(m,0);
	 for (int i = 0;i< n;i++){
          for (int j = 0;j<m;j++){
			  if (mat[i][j] == '1')height[j]++;
			  else height[j] =0;
 		  }
		   int area  = f(height);
		   maxA = max(maxA,area);  
	 }
	 return maxA;
    }
};