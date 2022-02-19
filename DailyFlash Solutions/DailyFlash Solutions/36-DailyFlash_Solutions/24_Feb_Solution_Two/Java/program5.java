
import java.io.*;

class Program {
	public static void main(String ... kbd) throws IOException{
		System.out.printf("Enter Number : ");
		String num;
		InputStreamReader inp = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(inp);
		num = br.readLine();

		int i = 0, flag = 1, j, count = 0;
		while(i != num.length()){
			count = 0;
			flag = 1;
			for(j = i - 1; j >= 0; j--){
				if(num.charAt(i) == num.charAt(j)){
					flag = 0;
				}
			}
			if(flag == 0){
				i++;
				continue;
			}
			j = i;		
			while(num.length() != j){
				if(num.charAt(j) == num.charAt(i))
					count++;
				j++;
			}
			System.out.printf("Frequency of %d : %d\n", num.charAt(i) - 48, count);
			i++;
		}
	}
}