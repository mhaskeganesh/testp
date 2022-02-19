import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Program {

	public static void main(String[] args) throws IOException{	

		int n;
		System.out.println("Enter Number : ");
		InputStreamReader inp = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(inp);
		n = Integer.parseInt(br.readLine());
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(j % 2 == 0){
					System.out.printf("white-black\t");
				}
				else{
					System.out.print("black-white\t");
				}
			}
			
			System.out.printf("\n");
		}
	}
}
