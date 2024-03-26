import java.util.Scanner;

class Fibon{
    public static int fib(int n){
       if (n == 0)
           return 0 ;

        if (n == 1)
            return 1;   

        return fib(n-1) + fib(n-2);
    }
}

public class fibonacci {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number for fibonacci series : ");
        int a = sc.nextInt();
        Fibon f1 = new Fibon();
        int b = f1.fib(a);
        System.out.printf("Sum of fibonacci series at %d is %d",a,b);

    }
}
