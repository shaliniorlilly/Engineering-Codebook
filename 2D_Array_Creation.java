import java.util.*;
public class Main{
    public static void main(String args[]){
        System.out.print("Enter the size of row of 2D array: ");
        Scanner sc= new Scanner(System.in);
        int sizeOfRow= sc.nextInt();
        System.out.print("Enter the size of column of 2D array: ");
        int sizeOfColumn= sc.nextInt();
        int arr[][]= new int[sizeOfRow][sizeOfColumn];
        System.out.println("Enter elements of array: ");
        for(int i=0; i<sizeOfRow; i++){
            for(int j=0; j<sizeOfColumn; j++){
            arr[i][j]= sc.nextInt();}
        }
       for(int i=0; i<sizeOfRow; i++){
           for(int j=0; j<sizeOfColumn; j++){
               System.out.print(arr[i][j]+ " ");
           }
       }
    }
}
