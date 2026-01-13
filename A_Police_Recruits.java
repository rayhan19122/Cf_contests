import java.util.Scanner;

public class A_Police_Recruits {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int cnt = 0;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        /* for (int i = 0; i < n; i++) {
            System.out.println(arr[i]+" ");
        } */
        for (int i = 0; i < n; i++) {
            if (arr[i] == -1) {
                if (sum > 0) {
                    sum +=arr[i];
                } else
                    cnt++;
            } else {
                sum +=arr[i];
            }
        }
        System.out.println(cnt);
        sc.close();
    }
}