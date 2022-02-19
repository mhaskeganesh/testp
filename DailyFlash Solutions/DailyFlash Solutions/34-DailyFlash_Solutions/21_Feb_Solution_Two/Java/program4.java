import java.io.BufferedReader;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Program {

	public static void main(String[] args) throws IOException{	

		int n;
		InputStreamReader inp = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(inp);
		n = 4;
		String a = "CORE";
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(j < i){
					System.out.printf("\t");
				}
				else{
					System.out.print(a.charAt(j) + "\t");
				}
			}
			
			System.out.printf("\n");
		}
	}
}
