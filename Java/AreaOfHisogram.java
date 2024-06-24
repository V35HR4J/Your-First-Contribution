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
    public static int maxAreaOfHistogram(int[] input) {
        int maxArea = Integer.MIN_VALUE, area = 0, i = 0;
        Deque<Integer> stack = new LinkedList<>();
        for (i = 0; i < input.length;) {
            if (stack.isEmpty() || input[stack.getFirst()] <= input[i]) {
                stack.offerFirst(i++);
            } else {
                int top = stack.pollFirst();
                if (stack.isEmpty()) {
                    area = input[top] * i;
                } else {
                    area = input[top] * (i - stack.peekFirst() - 1);
                }
                if (area > maxArea) {
                    maxArea = area;
                }
            }
        }
        while (!stack.isEmpty()) {
            int top = stack.pollFirst();
            if (stack.isEmpty()) {
                area = input[top] * i;
            } else {
                area = input[top] * (i - stack.peekFirst() - 1);
            }
            if (area > maxArea) {
                maxArea = area;
            }
        }
        return maxArea;
    }
}
