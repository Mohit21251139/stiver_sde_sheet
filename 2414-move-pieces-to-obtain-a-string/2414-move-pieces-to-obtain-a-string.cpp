class Solution {
public:
    bool canChange(string start, string target) {
        int n = start.length();
        int i = 0;
        int j =0;
        while (i< n || j< n){
            while (i<n && start[i] == '_')i++;
            while (j<n && target[j] == '_')j++;
            if (i== n && j == n)return true;
            if (i == n || j == n)return false;

            if ((start[i] != target[j]) || (start[i] == 'L' &&  i < j ) || (start[i] == 'R' && i> j))return false;
            i++;
            j++;
        }
        return true;
    }
};