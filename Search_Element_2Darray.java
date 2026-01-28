import java.util.*;
public class Main{
    public static void main(String args[]){
        System.out.print("Enter size of row: ");
        Scanner sc= new Scanner(System.in);
        int row= sc.nextInt();
        System.out.print("Enter size of column: ");
        int column= sc.nextInt();
        System.out.println("Enter the elements of array: ");
        int arr[][]= new int[row][column];
        for(int i=0; i<row; i++){
            for(int j=0; j<column; j++){
                arr[i][j]= sc.nextInt();
            }
            System.out.println();
        }
        System.out.print("Enter the element to be searched: ");
        int key= sc.nextInt();
        int found=0;
        for(int i=0;i<row;i++){
            for(int j=0; j<column; j++){
                if(key==arr[i][j]){
                    found=1;
                    System.out.print("Element has been found! at "+i+1+","+j+1+" position.");
                }
            }
        }
        if(found==0){
            System.out.print("Element has not been found!");
        }
    }
}
