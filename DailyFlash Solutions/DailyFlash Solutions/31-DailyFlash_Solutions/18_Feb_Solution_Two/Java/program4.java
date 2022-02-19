import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Program {

	public static void main(String[] args) throws IOException{	

		int n;
		InputStreamReader inp = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(inp);
		System.out.printf("Enter Radius :");
		n = Integer.parseInt(br.readLine());
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(j < i){
					System.out.printf("\t");
				}
				else{
					System.out.printf("%d\t",(i+j)*j);
				}
			}
			System.out.printf("\n");
		}
	}
}