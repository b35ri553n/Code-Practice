// https://www.interviewbit.com/problems/merge-intervals/

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 
bool cmp(Interval i1, Interval i2) {
    return (i1.start < i2.start);
}
 
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // to handle cases like newInterval = [10, 8]
    if(newInterval.start > newInterval.end) {
        int temp = newInterval.start;
        newInterval.start = newInterval.end;
        newInterval.end = temp;
    }
    
    int ns = newInterval.start, ne = newInterval.end;
    // new vector to be returned
    vector<Interval> niv;
    
    // vector of all intervals which merge with newInterval
    vector<Interval> miv;
    for(int i = 0; i < intervals.size(); i++) {
        if(max(ns, intervals[i].start) < min(ne, intervals[i].end))
            miv.push_back(intervals[i]);
        // non-overlapping intervals are part of solution
        else niv.push_back(intervals[i]);
    }
    
    //merged interval => mi
    Interval mi(ns, ne);
    if(miv.size() != 0) {
        // vector of all starts and ends in merging intervals
        vector<int> s, e;
        for(int i = 0; i < miv.size(); i++) {
            s.push_back(miv[i].start);
            e.push_back(miv[i].end);
        }
        // condense all merged intervals into one interval
        if(*min_element(s.begin(), s.end()) < ns) mi.start = *min_element(s.begin(), s.end());
        if(*max_element(e.begin(), e.end()) > ne) mi.end = *max_element(e.begin(), e.end());
    }
    
    niv.push_back(mi);
    
    // sort before returning
    sort(niv.begin(), niv.end(), cmp);
    return niv;
}
