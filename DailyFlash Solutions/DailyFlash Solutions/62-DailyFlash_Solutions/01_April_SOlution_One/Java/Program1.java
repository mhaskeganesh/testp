import java.io.*;
import java.util.*;

class StringRead{


	public static void main(String ... nk)throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the String : ");
		String s = br.readLine();


		StringTokenizer tz = new StringTokenizer(s," ");
		String[] s_arr = new String[tz.countTokens()];


		int i = 0;
		int len =0;
		int max=0;

		while(tz.hasMoreTokens()){

			s_arr[i] = tz.nextToken();
			i++;
		}

		int ind=0;
		for(int j=0; j<i; j++){
			len=s_arr[j].length();
			if(len>max){
				ind=j;
				max=len;
			}
		}
				

		System.out.println("\nLongest String is : " + s_arr[ind]);


	}



}
