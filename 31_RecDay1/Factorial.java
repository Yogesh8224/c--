import java.util.Scanner;

class Factor{
public static int factorial(int n){
    if (n == 0)
       return 1;
    return n * factorial(n-1);
}
}

public class Factorial{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number for find factorial of number : ");
        int n = sc.nextInt();
        int a = Factor.factorial(5);
        System.out.printf("Factorial of %d is %d",n,a);
        
    }
}