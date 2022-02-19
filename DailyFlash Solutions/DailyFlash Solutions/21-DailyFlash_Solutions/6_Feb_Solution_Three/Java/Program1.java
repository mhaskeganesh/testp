import java.io.*;


class Program1{

	
	public static void main(String args[])throws IOException{



		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int a=0,b=1,c;

		int num = Integer.parseInt(br.readLine());

		System.out.printf("Febonacci series : ");
		System.out.printf("%d\t",a);
		System.out.printf("%d\t",b);

		for(int i=0;i<num-2;i++){
		
			c = a+b;
			System.out.printf("%d\t",c);

			a=b;
			b=c;
		}
	}	

}	
