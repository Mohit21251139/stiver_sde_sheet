class MyCalendarTwo {
public:
   vector<pair<int,int>> booking,overlapping;
    MyCalendarTwo() {
        
    }
    
    bool book(int s, int e) {
        for (auto& [start,end]: overlapping){
            if (s< end && e> start)return false;
        }
        for (auto& [start,end] : booking){
            if (s< end && e > start)overlapping.push_back({max(s, start), min(e, end)});
        }
        booking.emplace_back(s,e);
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */