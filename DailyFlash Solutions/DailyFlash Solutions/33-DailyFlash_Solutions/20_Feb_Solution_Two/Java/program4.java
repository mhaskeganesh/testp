import java.io.BufferedReader;
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
		int k = 0;
		for(int i = 0; i < n*2; i+=2){
			k = i;
			for(int j = 0; j < n*2; j+=2){
				if(j < i){
					System.out.printf("\t");
				}
				else{
					System.out.print(program.main(k));
					System.out.print("\t");
					k++;
				}
			}
			
			System.out.printf("\n");
		}
	}
}
class program {
	public static char[]  main(int n) throws IOException {
		int temp, i = 0;
		char bin[] = {'0', '0', '0','0'};
		while(n!=0) {
			temp = n%10;
			i = 3;
			while(i>=0) {
				bin[i] = (char)((temp % 2) + 48);
				temp = temp / 2;
				i--;
			}
			n = n/10;
		}
		return bin;
	}
}	
