
class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>> q;
        if (a>0){
        q.push({a,'a'});

        }
          if (b>0){
        q.push({b,'b'});

        }
           if (c>0){
        q.push({c,'c'});

        }
        string ans = "";

      while (!q.empty()){
         pair<int,char> pq = q.top();
         q.pop();
         int cnt = pq.first;
         char ch = pq.second;
         if (ans.length() >=2 && ans[ans.length() -1] == ch && ans[ans.length() -2] == ch){
           if (q.empty()){
            break;
           }
           pair<int ,char> pq1 = q.top();
           q.pop();
           int cnt1 = pq1.first;
           char ch1 = pq1.second;
           cnt1 = cnt1 -1;
           ans += ch1;
           if (cnt1 > 0){
            q.push({cnt1,ch1});
           }
         } 
         else{
             cnt = cnt -1;
         ans += ch;
        
         }
          if (cnt > 0){
            q.push({cnt,ch});

         }
        
      }
      return ans;

    }
};