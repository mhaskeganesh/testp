import java.io.*;
import java.util.*;

class OctaDecimal {

	public static void main(String[] args)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		double num , num1 , cnt = 0 , dec =0 ; 
		System.out.println("Eneter a binary number : ");
		num = Double.parseDouble(br.readLine());
		while(num > 0){

			num1 = num % 10 ;
			num = num / 10 ;
			if(num1 == 1)
				dec += Math.pow(2,cnt) ;
			cnt++ ;
		}
		Formatter f = new Formatter();
		System.out.println("Corresponding octal number is  : ");
		f.format("%o",dec);
	}
}
