class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        int i = 0;
        int j = 0;
        int k = n-1;
        
        while (i<=k){
            if (arr[i] == 0){
                swap(arr[j],arr[i]);
                i++;
                j++;
            }
            else if (arr[i] == 2){
                swap(arr[k],arr[i]);
                k--;
            }
            else{
                i++;
            }
        }
    }
    
};