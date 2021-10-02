import java.util.Arrays;
import java.util.Scanner;

public class CyclicSort {
    public static void main(String[] args) {
        int[] arr = new int[10];
        Scanner in = new Scanner(System.in);

        for (int i = 0; i < arr.length; i++) {
            arr[i] = in.nextInt();
        }
        System.out.println("before sorting : " + Arrays.toString(arr));
        cyclicSort(arr);
        System.out.println("after sorting : " + Arrays.toString(arr));
    }

    static void cyclicSort(int[] arr) {
        int i = 0;
        while (i < arr.length) {
            int correctI = arr[i] - 1;
            if (arr[i] != arr[correctI]) {
                swap(arr, i, correctI);
            } else {
                i++;
            }
        }
    }

    static void swap(int[] arr, int first, int second) {
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }
}