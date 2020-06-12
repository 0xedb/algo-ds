class RandomizedSet {
private: 
    vector<int> vec;
    unordered_map<int, int> mp;
public:
    /** Initialize your data structure here. */
    RandomizedSet() {
        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(mp.find(val) != mp.end())
            return false;
        
        vec.push_back(val);
        mp.insert({val, vec.size() - 1});
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(mp.find(val) == mp.end())
            return false;
        
        const auto pos = mp[val];
        vec[pos] = vec[vec.size() - 1];
        mp[vec[pos]] = pos;
        vec.pop_back();
        mp.erase(val);
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() { 
        std::random_device rd;  
        std::mt19937 gen(rd()); 
        std::uniform_int_distribution<> dis(0, vec.size() - 1);
        
        return vec[dis(gen)];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
