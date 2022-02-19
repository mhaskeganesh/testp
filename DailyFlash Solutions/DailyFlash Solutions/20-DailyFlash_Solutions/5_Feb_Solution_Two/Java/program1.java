import java.io.*;
class Program{

	public static void main(String[] args) throws IOException{
		
		int n = 0, a = 0, b = 1, c;
		System.out.printf("Enter Limit : ");
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		try{
			n = Integer.parseInt(br.readLine());
		}
		catch(NumberFormatException ne){
			System.exit(0);
		}
		if(n<=0)
			System.exit(0);
		else if(n == 1)
			System.out.printf("0");
		else if(n == 2)
			System.out.printf("0 1");
		else {
			c = a + b;
			System.out.printf("0 1 ");
			for(int i = 3; i <= n; i++){
				System.out.printf("%d ", c);
				a = b;
				b = c;
				c = a + b;
			}
			System.out.printf("\n");
		}
	}
}