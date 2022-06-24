#include<bits/stdc++.h>
class LFUCache {
public:
    set<vector<int>>st; // to sort the elements according to frequency  and time 
    int t=1;
    unordered_map<int,int>mp; // to get the key 
    unordered_map<int,int>freq; // to get the frequency
    unordered_map<int,set<vector<int>>::iterator>index; // to store and get the index of the element stored in set
    int c=0;
    
    LFUCache(int capacity) {
        c=capacity;
    }
    
    int get(int key) {
        if(mp.find(key)==mp.end()) return -1;
        put(key,mp[key]);
        return mp[key];
    }
    
    void put(int key, int value) {
         if(c==0){
            return;
        }
        
        if(mp.find(key)==mp.end()){
            
            if(mp.size()==c){
                auto it=*st.begin();
                mp.erase(it[2]);
                freq.erase(it[2]);
                st.erase(st.begin());
                index.erase(it[2]);
            }
            
            mp[key]=value;
            freq[key]++;
            st.insert({freq[key],t++,key});
            auto it=st.find({freq[key],t-1,key});
            index[key]=it;
        }else{
            
            st.erase(index[key]);
            freq[key]++;
            mp[key]=value;
            st.insert({freq[key],t++,key});
            auto it=st.find({freq[key],t-1,key});
            index[key]=it;
        }
        
        
    }
};
