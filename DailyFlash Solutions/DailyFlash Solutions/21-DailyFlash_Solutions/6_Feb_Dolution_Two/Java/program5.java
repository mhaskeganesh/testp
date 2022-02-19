
import java.io.*;
class Program {
	
	public static void main(String[] args) throws IOException{

		int n[] = new int[5];
		System.out.printf("Enter Numbers : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n[0] = Integer.parseInt(br.readLine());
	
		for(int i = 1; i < 5; i++){
			n[i] = Integer.parseInt(br.readLine());
			if(n[i-1] > n[i]){
				System.out.printf("Loop exited with %d\n", n[i]);
				break;
			}
		}	

	}
}