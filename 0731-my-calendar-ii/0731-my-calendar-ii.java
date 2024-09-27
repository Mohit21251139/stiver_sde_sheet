class MyCalendarTwo {
    private List<int[]> book,over;
    public MyCalendarTwo() {
        book = new ArrayList<>();
        over = new ArrayList<>();
    }
    
    public boolean book(int start, int end) {
        for (int[] o: over){
            if (start< o[1] && end> o[0])return false;
        }
        for (int[] b : book){
            if (start < b[1] && end> b[0]){

                over.add(new int[]{Math.max(start,b[0]),Math.min(end,b[1])});
            }
        }
        book.add(new int[]{start,end});
        return true;
    }
}

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo obj = new MyCalendarTwo();
 * boolean param_1 = obj.book(start,end);
 */