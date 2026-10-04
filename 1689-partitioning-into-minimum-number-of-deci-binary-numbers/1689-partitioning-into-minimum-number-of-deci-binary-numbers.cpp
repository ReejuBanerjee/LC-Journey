class Solution {
public:
    int minPartitions(string n) {
        int maximum = 0;
        for(int i=0; i<n.length(); i++){
            maximum = max(maximum,n[i]-'0');
        }
        return maximum;
    }
};