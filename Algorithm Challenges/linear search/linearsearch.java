import java.util.*;
class linearsearch
{
     System.out.println("enter the no. of elements in the array");
     int n=sc.nextInt();
     int arr[]=new int[n];
     int flag=0;
     System.out.println("enter elements of the array")
     for(int i=0;i<n;i++)
     {
          arr[i]=sc.nextInt();
     }
     System.out.println("enter item to be searched");
     int x=sc.nextInt();
     for(int i = 0; i < n; i++) 
    { 
        if(arr[i] == x) 
            flag++;
            break;
    }
    if(flag==0)
    System.out.prinln("item not found!");
    else
    System.out.println("item found");
}
