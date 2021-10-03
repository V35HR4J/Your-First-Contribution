class BubbleSort
{
    public void bubbleSort(int arr[])
    {
        int n = arr.length;
        for (int i = 0; i < n-1; i++)
            for (int j = 0; j < n-i-1; j++)
                if (arr[j] > arr[j+1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
    }
     void displayArray(int arr[])
    {
        int n = arr.length;
        for (int i=0; i<n; ++i)
            System.out.print(arr[i] + " ");
        System.out.println();
    }
    public static void main(String args[])
    {
        BubbleSort ob1 = new BubbleSort();
        int arr[] = {35, 5, 76, 89, 100, 11, 14};
        ob1.bubbleSort(arr);
        System.out.println("This is Bubble Sorted array");
        ob1.displayArray(arr);
    }
}