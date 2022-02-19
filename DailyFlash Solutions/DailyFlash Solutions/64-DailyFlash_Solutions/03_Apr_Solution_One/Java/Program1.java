import java.io.*;
import java.util.*;

class StringRead{


	public static void main(String ... nk)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the String : ");
		String s = br.readLine();
		int vow = 0;	

		String v = "AEIOUaeiou";

		for(int i = 0; i < s.length(); i++)
			for(int j = 0; j < v.length(); j++)
				if(charAt(i) == charAt(j))
					vow++;
	
		System.out.printf("The Count of Vowels is %d\n",vow);

	}
}
