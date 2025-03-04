class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m = 0;
        int size = flowerbed.size(); 
        
        for (int i = 0; i < size; i++) {
           
            if (flowerbed[i] == 0) {
                
                if ((i == 0 && (size == 1 || flowerbed[i + 1] == 0)) ||
                    (i == size - 1 && flowerbed[i - 1] == 0) ||
                    (i > 0 && i < size - 1 && flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0)) {
                    
                    flowerbed[i] = 1; 
                    m++;  
                }
            }
            if (m >= n) {
                return true;
            }
        }
        
        return m >= n; 
    }
};
