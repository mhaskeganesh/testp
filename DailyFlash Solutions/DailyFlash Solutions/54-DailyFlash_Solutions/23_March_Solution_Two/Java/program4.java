import  java.io.*;

class Program {
	public static void main(String ... kanif) throws IOException { 
		int n, k = 1, inc = 0;
		System.out.printf("Enter Number : ");
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		k = 6;
		inc = -1;
		int m = 0, l;
		for(int i = n; i >= 1; i--){
			k = k + inc;
			l = k;
			for(int j = 1; j < n+i; j++){
				if(j > n - i){
					System.out.printf("%d\t",l);
					l = l + m;
				}
				else
					System.out.printf("\t");
			}
			m++;
			inc = inc + 2;
			System.out.printf("\n");
		}
	}	
}