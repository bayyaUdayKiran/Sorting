import java.util.Arrays;
import Lib.*;

public class MergeSort {
    public static void main(String[] args) {

        int arr[] = {10, 15, 20, 40, 8, 11, 55};
        Sort.mergeSort(arr, 0, 6);
        System.out.println(Arrays.toString(arr));    
    }
    
}
