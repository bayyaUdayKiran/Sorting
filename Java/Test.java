import java.util.*;
import Lib.*;
public class Test {
    public static void main(String[] args) {
        Utility.startTick();
        int arr[] = {98, 54, 890, 432, 56, 12 ,67, 99};
        System.out.println("pivot index: " + Utility.hPartition(arr, 0, 7));
        System.out.println(Arrays.toString(arr));
        Utility.stopTick();
        Utility.elps();
       

    }
       

    
}
