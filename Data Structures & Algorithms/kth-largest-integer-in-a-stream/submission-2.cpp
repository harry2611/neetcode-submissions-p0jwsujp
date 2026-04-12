class KthLargest {
    int size;
    priority_queue<int, vector<int>, greater <int>> pq;
public:
    KthLargest(int k, vector<int>& nums) {
        
        size = k; 

        for(int i =0; i<nums.size(); i++){
            if(pq.size() < k){
                pq.push(nums[i]);
            }else if(nums[i] > pq.top()){
                pq.pop();
                pq.push(nums[i]);
            }
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size()> size){
            pq.pop();
        }
        return pq.top();
        
        
    }
};
