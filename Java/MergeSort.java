package sorting;

public class MergeSort {

	public void sort(int a[],int l,int r)
	{
		if(l<r)
		{
			int m=l+(r-l)/2;
			sort(a,l,m);
			sort(a,m+1,r);
			merge(a,l,m,r);
		}
	}
	public void merge(int a[],int l, int m,int r)
	{
		//declare size of two temporary subarrays
		int n1= m-l+1;
		int n2=	r-m;	
		//create two temporary arrays
		int L[]=new int[n1];
		int R[]=new int[n2];
		
		//copying elements to temporary arrays
		for(int i=0;i<n1;i++)
		{
			L[i]=a[l+i];
		}
		for(int j=0;j<n2;j++)
		{
			R[j]=a[m+1+j];
		}
		int i=0,j=0;
		int k=l;
		while(i<n1 && j<n2)
		{
			if(L[i]<=R[j])
			{
				a[k]=L[i++];
			}
			else
			{
				a[k]=R[j++];
			}
			k++;
		}
		//copying remaining elements from L[]
		while(i<n1)
		{
			a[k++]=L[i++];
		}
		//copying remaining elements from R[]
		while(j<n2)
		{
			a[k++]=R[j++];
		}	
	}
	public void display(int a[])
	{
		int n=a.length;
		for(int i=0;i<n;i++)
		{
			System.out.print(a[i]+" ");
			
		}
	}
	public static void main(String args[])
	{
		int a[]= {-8,7,2,10,56,30,38,25,10,-1};
		MergeSort ob=new MergeSort();
		System.out.println("Original Array");
		ob.display(a);
		ob.sort(a, 0, a.length-1);
		System.out.println();
		System.out.println("Sorted Array");
		ob.display(a);
	}
}
