double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int i = 0, j = 0, k = 0;
    int merSize = nums1Size + nums2Size;
    int merged[merSize];
    while (i < nums1Size && j < nums2Size) {
        if (nums1[i] < nums2[j])
            merged[k++] = nums1[i++];
        else
            merged[k++] = nums2[j++];
    }
    while (i < nums1Size)
        merged[k++] = nums1[i++];
    while (j < nums2Size)
        merged[k++] = nums2[j++];
    
    double median;
    if (merSize % 2 == 0) {
        int p = merSize / 2;
        median = (double)(merged[p - 1] + merged[p]) / 2.0;
    } else {
        int n = merSize / 2;
        median = merged[n];
    }
    
    return median;
}
