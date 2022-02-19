import java.io.*;

class Program {
	public static void main(String[] args) throws IOException{
		int n,flag;
		System.out.printf("Enter Limit : ");
		InputStreamReader inp = new InputStreamReader(System.in);
		BufferedReader br =  new BufferedReader(inp);
		n = Integer.parseInt(br.readLine());

		for(int i = 1; i < 2*n; i++){
			flag = 1;
			for(int j = 1; j < n*2; j++){
				if(j > (n-i) && j < (n+i) && i <= n){
					if(flag == 1){
						flag = 0;
						System.out.print("1\t");
					}
					else {
						flag = 1;
						System.out.print("\t");
					}
				}
				else if(i>n && j > (i-n) && j < (2*n-(i-n))){
					if(flag == 1){
						flag = 0;
						System.out.print("1\t");
					}
					else {
						flag = 1;
						System.out.print("\t");
					}
				}
				else {
					System.out.printf("\t");
				}	
				
			}
			System.out.printf("\n");
		}
	}
}
