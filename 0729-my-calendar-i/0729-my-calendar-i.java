import java.util.ArrayList;
import java.util.List;
class MyCalendar {
    private List<int[]> ans;
    public MyCalendar() {
        ans = new ArrayList<>();
    }
    
    public boolean book(int start, int end) {
        for (int []x : ans){
            if ((start<x[0] && end > x[0] ) || (start == x[0] ) || (start > x[0] && start < x[1])){
                return false;
            }
           
        }
        ans.add(new int[]{start,end});
        return true;
    }
}

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar obj = new MyCalendar();
 * boolean param_1 = obj.book(start,end);
 */