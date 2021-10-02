import java.util.*;

public class LargestSumContiguousSubarray
{
    private static int maxSumSubArray(ArrayList<Integer> list)
    {
        int maxSum = 0;
        int currSum = 0;

        for (int i = 0; i < list.size(); i++) {
            currSum = currSum + list.get(i);
            if (currSum > maxSum)
                maxSum = currSum;
            if (currSum < 0)
                currSum = 0;
        }

        return maxSum;
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> list = new ArrayList<Integer>();
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            list.add(sc.nextInt());
        }

        System.out.println(maxSumSubArray(list));
    }
}
