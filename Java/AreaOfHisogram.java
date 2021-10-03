public class AreaOfHistogram{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the number of bars in histogram");
        int length = scanner.nextInt();
        int[] input = new int[length];
        System.out.printf("Enter the elements");
        for (int i = 0; i < length; i++) {
            input[i] = scanner.nextInt();
        }
        System.out.println("Maximum Area of Histogram is " + maxAreaOfHistogram(input));
    }
}
