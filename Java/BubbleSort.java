import java.util.Arrays;

import Lib.*;
public class BubbleSort{
    public static void main(String[] args) {
        Utility.startTick();
        int arr[] = {2, 56, 876, 10, 1, 4};
        Sort.bubbleSort(arr);
        System.out.println(Arrays.toString(arr));
        Utility.stopTick();
        Utility.elps();
        
    }

}