class ArraySum {
    public static int iterativeSum(int[] arr) {
        int sum = 0;
        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }
        return sum;
    }

    public static int recursiveSum(int[] arr) {
        return recursiveSum(arr, 0)
    }
    public static int recursiveSum(int[] arr, int index) {
        if (index == arr.length)
            return 0;
        return arr[index] + recursiveSum(arr, index + 1);
    }
}

class Test {
   public static void main(String[] arg) {
      int[] arr = {1,2,3,4};
      System.out.println(ArraySum.iterativeSum(arr));
      System.out.println(ArraySum.recursiveSum(arr));
   } 
} 
