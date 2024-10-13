#include <bits/stdc++.h>
class node{
   public:
   int data;
   int row;
   int col;
   node(int data,int i ,int j){
    this-> data = data;
    this -> row = i;
    this-> col = j;
   }
   
};
class comparsion{
    public:
    bool operator()(node* a,node* b){
        return  a-> data > b-> data;
    }
};
class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int mini = INT_MAX,maxi = INT_MIN;
    priority_queue <node*,vector<node*>,comparsion> pq;

    // putting starting first element in min heap of each list and tracking min/max value
    int k = nums.size();
    for (int i = 0;i<k;i++){

        int element = nums[i][0];
        mini = min(mini,element);
        maxi =max(maxi,element);
        pq.push(new node(element,i,0));
    }
    
    int start  = mini ,end = maxi; 
   // process ranges
    while (!pq.empty()){
        //mini fetch
        node* temp = pq.top();
        pq.pop();

        mini = temp -> data;
        //range and ans updataion 

        if (maxi -mini < end -start){
            start = mini;
            end = maxi;
        }
        //next element exists
        if(temp->col +1< nums[temp -> row].size()){
            
            maxi = max(maxi,nums[temp-> row][temp-> col+1]);
            pq.push(new node(nums[temp-> row][temp-> col+1],temp-> row ,temp -> col+1 ));
        }
        else{
            //next element does not exists
            break;
        }

    }
    
    return {start ,end} ;
    }
};