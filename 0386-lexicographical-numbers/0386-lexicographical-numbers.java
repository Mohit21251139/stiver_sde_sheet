class Solution {
        private List<Integer> ans = new ArrayList<>();

  public void sol(int curr,int n){
    if (curr > n){
        return;
    }
    ans.add(curr);
     for (int i = 0; i < 10; i++) {
            sol(curr * 10 + i, n);
        }
  }
    public List<Integer> lexicalOrder(int n) {
         for (int i = 1; i < 10; i++) {
            sol(i, n);
        }
        return ans;
    }
}