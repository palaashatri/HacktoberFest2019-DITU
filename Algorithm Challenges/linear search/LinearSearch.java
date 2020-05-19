import java.util.*;

public class LinearSearch {
   public static void main(String args[]){
      Scanner sc = new Scanner(System.in);

      //Size of the array
      int n = sc.nextInt();

      int a[] = new int[n];
      //Getting the values in the array by user
      for(int i = 0;i<n;i++)
         a[i] = sc.nextInt();

      //The value to be searched
      int key = sc.nextInt();

      for (int i = 0 ;i<n; i++){
         if(a[i] == key)
            System.out.println("Element found index is :"+ i);
         else
            System.out.println("Element not found");
      }
   }
}
