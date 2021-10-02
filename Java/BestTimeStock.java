import java.util.*;

public class BestTimeStock
{
    private static int bestStockSolution(ArrayList<Integer> list, int n)
    {
//         Brute Force approach:
//        int maxProfit = 0;
//        for (int i = 0; i < n; i++) {
//            for (int j = i + 1; j < n; j++) {
//                int profit = list.get(j) - list.get(i);
//                if (profit > maxProfit)
//                    maxProfit = profit;
//            }
//        }
//        return maxProfit;
        // Optimised approach:
        int minPrice = Integer.MAX_VALUE, maxProfit = 0, profit = 0;
        for (int i = 0; i < n; i++) {
            if (list.get(i) < minPrice) // Get minimum element
                minPrice = list.get(i);

            else if (list.get(i) - minPrice > maxProfit)
                maxProfit = list.get(i) - minPrice;
        }
        return maxProfit;
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        ArrayList<Integer> list = new ArrayList<Integer>();
        for (int i = 0; i < n; i++) {
            list.add(sc.nextInt());
        }

        System.out.println(bestStockSolution(list, n));
    }
}
