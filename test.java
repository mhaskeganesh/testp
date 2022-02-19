import java.util.*;
public class test{

    public static int[] getFib(int n){   
        int f[] = new int[n];
        int i;
        f[0] = 1;
        f[1] = 1;
     
        for (i = 2; i < n; i++){
            f[i] = f[i-1] + f[i-2];
        }

        return f;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        StringBuffer str = new StringBuffer( sc.nextLine());
        int[] fib = test.getFib(str.length());
        int ptr = 0;
        int sum = 0;
        for(int i = 0; i < str.length(); i++){
            if(Character.isAlphabetic(str.charAt(i))){
                str.insert(i+1,fib[ptr]);
                sum = sum + fib[ptr];
                ptr++;
            }
        }

        str = str.insert(0,sum);
        System.out.println(str);
    }
}