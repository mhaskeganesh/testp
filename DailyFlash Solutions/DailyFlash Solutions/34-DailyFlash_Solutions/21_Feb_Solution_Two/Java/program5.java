
import java.io.*;
import java.util.*;

class Program {

    static boolean isPrime(int n) {

        for(int i = 2; i <= n/2; i++){
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args)throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        List<Integer> arr = new ArrayList<>();

        for(int i = 2; i < n; i++) {
            if(isPrime(i)){
                arr.add(i);
            }
        }
        for(int i = 0; i < arr.size() - 1; i++){
            for(int j = i + 1; j < arr.size(); j++){
                if(arr.get(i) + arr.get(j) == n){
                    System.out.println(arr.get(i) + " + " + arr.get(j) + " = " + n);
                }
            }
        }

    }
}