import java.util.*;
class sorting
{
   int arr[];
   System.out.println("enter the size of the array");
   int n=sc.nextInt();
   arr=new int[n];
   for(int i=0;i<n;i++)
   {
     arr[i]=sc.nextInt();
   }
   System.out.println("array before sorting");
    for(int i=0;i<n;i++)
   {
     System.out.println(arr[i]);
   }    
    for (int i = 1; i < n; ++i) 
    { 
         int key = arr[i]; 
         int j = i - 1; 
  
          while (j >= 0 && arr[j] > key)
          { 
                arr[j + 1] = arr[j]; 
                j = j - 1; 
          } 
            arr[j + 1] = key; 
    }
    System.out.println("array after sorting");
    for(int i=0;i<n;i++)
   {
     System.out.println(arr[i]);
   } 
}
