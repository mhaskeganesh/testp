import java.io.*;


class Program3{
	
	public static void main(String args[])throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int num = Integer.parseInt(br.readLine());

		int rev =0;
		while(num!=0){

			rev = rev*10+(num%10);

			num = num/10;
		}

		int temp = rev;

		while(temp!=0){
	
			int rem = temp%10;

			switch(rem){

				case 0:
					System.out.printf("zero  ");
					break;
				case 1:
					System.out.printf("one  ");
					break;
				case 2:
					System.out.printf("two  ");
					break;
				case 3:
					System.out.printf("three  ");
					break;
				case 4:
					System.out.printf("four  ");
					break;
				case 5:
					System.out.printf("five  ");
					break;
				case 6:
					System.out.printf("six  ");
					break;
				case 7:
					System.out.printf("seven  ");
					break;
				case 8:
					System.out.printf("eight  ");
					break;
				case 9:
					System.out.printf("nine  ");
					break;

			}
			temp = temp/10;
		}
		
	}	

}	
