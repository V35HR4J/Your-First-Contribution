public class ArrayFromPermutation {
    public int[] buildArray(int[] nums) {
        int[] solution = new int[nums.length];

        for (int i = 0; i < nums.length; i++){
            solution[i] = nums[nums[i]];
        }

        return solution;
    }
}