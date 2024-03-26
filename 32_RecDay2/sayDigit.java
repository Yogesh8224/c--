import java.util.Scanner;

class Print{
    public static void SayDigi(int n ,String arr[]){
        if (n==0){
            return;
        }

        int digit = n%10;
        n = n / 10;
        SayDigi(n , arr);
        System.out.print(arr[digit]+" ");

    }
}

public class sayDigit {
    
    // public static void SayDigit(int n ,String arr[]){
    //     if (n==0){
    //         return;
    //     }

    //     int digit = n%10;
    //     n = n / 10;
    //     SayDigit(n , arr);
    //     System.out.print(arr[digit]+" ");

    // }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String arr[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
        Print p1 = new Print();
        p1.SayDigi(n, arr);
     //   SayDigit(n, arr);
    }
}
