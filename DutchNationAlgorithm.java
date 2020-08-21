//This algorithms helps to sort an array of 0's 1's and 2's in single pass and in O(N) time-complexity and O(N) space-complexity....
public class DutchNationAlgorithm{
    public static void dutchNationAlgorithm(int nums[]){
        int low=0;
        int mid=0;
        int high=nums.length-1;
        int temp;
        while(mid<=high){
            switch(nums[mid]){
                case 0:
                     temp=nums[low];
                     nums[low]=nums[mid];
                     nums[mid]=temp;
                     low++;
                     mid++;
                     break;
                case 1:
                     mid++;
                     break;
                case 2:
                    temp=nums[mid];
                    nums[mid]=nums[high];
                    nums[high]=temp;
                    high--;
                    break;
            }
            
        }

    
    }
     public static void main(String []args){
        int a[]={0,1,1,0,1,2,1,2,0,0,0,1};
        dutchNationAlgorithm(a);
        for(int i=0;i<a.length;i++)
            System.out.println(a[i]);
     }
}
