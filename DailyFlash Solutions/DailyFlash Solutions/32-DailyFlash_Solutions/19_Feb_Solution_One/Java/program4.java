import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Program {

	public static void main(String[] args) throws IOException{	

		int n;
		InputStreamReader inp = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(inp);
		System.out.printf("Enter Number :");
		n = Integer.parseInt(br.readLine());
		char a, b = 'a';
		a = (char)((n%2==0)?((n/2)*(n/2)):(((n+1)/2)*((n+1)/2)));
		a = (char)(a + 'A');
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(j < i){
					System.out.printf("\t");
				}
				else{
					System.out.printf("%c\t",(j%2==0)?(a--):(b++));
				}
			}
			System.out.printf("\n");
		}
	}
}
