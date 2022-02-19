
import java.io.*;
class Program {
	
	public static void main(String[] args) throws IOException{
	
		int n = 0;
		System.out.printf("Enter Numbers : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		for(int i = 1; i<=10; i++){
			n = Integer.parseInt(br.readLine());
			if(n<0)
				break;
		}
	
	}
}
