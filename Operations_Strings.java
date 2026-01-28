import java.util.*;
public class Main{
    public static void main(String args[]){
       //concatenation
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter a name: ");
        String name1= sc.nextLine();
        System.out.print("Enter another name: ");
        String name2=sc.nextLine();
        String fullName1= name1 + name2;
        System.out.println(fullName1);
        System.out.println("YOU CAN ALSO MAKE THIS LOOK AS:");
        String fullName2= name1 +"@"+ name2;
        System.out.println(fullName2);
        //length of string
        int length1= name1.length();
        System.out.println("THE LENGTH OF"+" "+name1+" "+"is:" +length1);
        //Printing characters of string
        for(int i=0; i< name1.length(); i++){
            System.out.println(name1.charAt(i));
        }
        //Comparing 2 strings
        if(name1.compareTo(name2)==0){
            System.out.println("the two strings are equal" );
        }
        else{
            System.out.println("the two strings are unequal");
        }
        //usage of substring
        System.out.print("Enter a sentence.");
        String sentence= sc.nextLine();
        String substring1= sentence.substring(3,sentence.length());
        System.out.print(substring1);
    }
}
