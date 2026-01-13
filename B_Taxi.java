import java.util.Scanner;

public class B_Taxi {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int one=0,two=0,three=0,four=0;
        for(int i=0;i<n;i++){
            int x=sc.nextInt();
            if(x==1) one++;
            else if(x==2) two++;
            else if(x==3) three++;
            else four++;
        }
        if(one<=three){
           int to=two*2;
            if(to%4==0) System.out.println(four+three+to/4);
            else System.out.println(four+three+to/4+1);
        }else{
            int rest_one=one-three;
            int to=two*2+rest_one*1;
            if(to%4==0) System.out.println(four+three+to/4);
            else System.out.println(four+three+to/4+1);
        }
        sc.close();
    }

}