class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int num1_size = nums1.size();
        int num2_size = nums2.size();
        int total_size = num1_size + num2_size;
        vector<int> sorted_vec;
        int i = 0;
        int j = 0;
        int k = 0;
        int least_size = 0;
        double result = 0;

        while (i!=num1_size && j!=num2_size) {
            if (nums1[i] < nums2[j]) {
                sorted_vec.push_back(nums1[i]);
                i += 1;
            }
            else if (nums1[i] > nums2[j]) {
                sorted_vec.push_back(nums2[j]);
                j += 1;
            }
            else if (nums1[i] == nums2[j]) {
                sorted_vec.push_back(nums2[j]);
                sorted_vec.push_back(nums2[j]);
                i += 1;
                j += 1;
            }
        }
        if (i != num1_size) {
            for (int k = i; k != num1_size; k++) {
                sorted_vec.push_back(nums1[k]);
            }
        }
        else if (j != num2_size) {
            for (int k = j; k != num2_size; k++) {
                sorted_vec.push_back(nums2[k]);
            }
        }
        
        if (num1_size == 0) {
            if (total_size % 2 == 0) {
                int smaller = nums2[(total_size)/2 - 1];
                int larger = nums2[(total_size)/2 ];
                double sum = (smaller + larger);
                result = sum/double(2);
            }
            else {
                result = nums2[num2_size/2];
            }
            return result;
        }
        
        if (num2_size == 0) {
            if (total_size % 2 == 0) {
                int smaller = nums1[(total_size)/2 - 1];
                int larger = nums1[(total_size)/2 ];
                double sum = (smaller + larger);
                result = sum/double(2);
            }
            else {
                result = nums1[num1_size/2];
            }
            return result;
        }
        
        // array now sorted
        if (total_size % 2 == 0) {
            int smaller = sorted_vec[(total_size)/2 - 1];
            int larger = sorted_vec[(total_size)/2 ];
            double sum = (smaller + larger);
            result = sum/double(2);
        }
        else {
            result = sorted_vec[total_size/2];
        }
        return result;
    }
};
