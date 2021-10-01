import java.util.*;

public class KadanesAlgorithm
{
    private static int kadaneAlgorithmSolution(ArrayList<Integer> list, int n)
    {
        int maxSum = 0;
        int currentSum = 0;
        for (int i = 0; i < n; i++) {
            currentSum = currentSum + list.get(i);
            if (currentSum > maxSum)
                maxSum = currentSum;
            if (currentSum < 0)
                currentSum = list.get(i);

        }
        return maxSum;
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> list = new ArrayList<Integer>();
        for (int i = 0; i < n; i++) {
            list.add(sc.nextInt());
        }
        System.out.println(kadaneAlgorithmSolution(list, n));
    }
}
