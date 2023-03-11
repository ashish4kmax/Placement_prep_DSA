class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int z=0;
        int o=0;
        int t=0;
        for(int i=0;i<n;i++) {
            if(a[i]==0) {
                z++;
            }
            else if(a[i]==1) {
                o++;
            }
            else {
                t++;
            }
        }
        
        for(int i=0;i<n;i++) {
            if(i<z) {
                a[i]=0;
            }
            else if(i<o+z) {
                a[i]=1;
            }
            else {
                a[i]=2;
            }
        }
    }
    
};
