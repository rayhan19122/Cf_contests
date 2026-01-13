import java.util.Scanner;

public class A_Dubstep {

    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        String s2=s.replace("WUB", " ");
        //The trim() method removes any leading or trailing spaces from a string.
        String result = s2.trim().replaceAll(" {2,}", " ");
        //regular expression 2 or more spaces will be replaced by single space.
        System.out.println(result);
        sc.close();
    }
}