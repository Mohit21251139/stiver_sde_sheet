class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        if(n != m)return false;
       vector<int> count1(26,0);
       vector<int> count2(26,0);
       vector<bool> check1(26,false);
       vector<bool> check2(26,false);
       for (int i =0;i<n;i++){
        int temp = word1[i] -'a';
        count1[temp]++;
        check1[temp]= true;
       }
        for (int i =0;i<m;i++){
        int temp = word2[i] -'a';
        count2[temp]++;
        check2[temp]= true;
       }

     sort(count1.begin(),count1.end());
     sort(count2.begin(),count2.end());
     return count1 == count2 && check1 == check2;
    }
};