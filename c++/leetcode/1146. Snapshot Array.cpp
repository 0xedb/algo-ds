class SnapshotArray {
private: 
    unordered_map<int, map<int, int>> arr;
    int snapid;
public:
    SnapshotArray(int length) {
        snapid = 0; 
    }
    
    void set(int index, int val) { 
        arr[index][snapid] = val;        
    }
    
    int snap() { 
        return snapid++;
    }
    
    int get(int index, int snap_id) { 
        auto it = arr[index].upper_bound(snap_id);
        return it == begin(arr[index]) ? 0 : prev(it) -> second;
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */
