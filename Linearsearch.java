import java.util.*;
public class Main{
    public static void main(String args[]){
        System.out.print("Enter the size of array: ");
        Scanner sc= new Scanner(System.in);
        int size= sc.nextInt();
        int arr[]= new int[size];
        System.out.println("Enter elements of array: ");
        for(int i=0; i<size; i++){
            arr[i]= sc.nextInt();
        }
        System.out.print("Enter element to be searched: ");
        int key= sc.nextInt();
        int found=0;
        for(int i=0; i<size; i++){
            if(key==arr[i]){
                found=1;
                System.out.print("Element has been found at "+(i+1)+" position.");
            }
        }
        if(found==0){
            System.out.print("Element has not been found!");
        }
    }
}
