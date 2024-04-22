class LRUCache {
public:
    list<int>L;
    unordered_map<int,pair<int,list<int>::iterator>>M;
    int size;
    LRUCache(int capacity) {
        size = capacity;
    }
    
    int get(int key) {
        if(M.find(key)!=M.end())
        {
            int temp = M[key].first;
            L.erase(M[key].second);
            L.push_front(key);
            M[key].second = L.begin();
            return temp;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(M.find(key)!=M.end())
        {
            L.erase(M[key].second);
            L.push_front(key);
            M[key] = {value,L.begin()};
        }
        else
        {
            if(M.size()==size)
            {
                int temp = L.back();
                M.erase(temp);
                L.pop_back();
            }
            L.push_front(key);
            M[key] = {value,L.begin()};
        }
                
    }
};
