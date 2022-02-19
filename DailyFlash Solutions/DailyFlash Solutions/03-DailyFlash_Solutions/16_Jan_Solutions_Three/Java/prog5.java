import java.io.*;
class Demo{
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Input : ");
		int p = Integer.parseInt(br.readLine());
		int c = Integer.parseInt(br.readLine());
		int m = Integer.parseInt(br.readLine());
		int b = Integer.parseInt(br.readLine());
		int comp = Integer.parseInt(br.readLine());
		float per = (p+c+m+b+comp)/5;
		if(p>=0 && c>=0 && m>=0 && b>=0 && comp>=0 && p<=100 && c<=100 && m<=100 && b<=100 && comp<=100){
			if(per>=90){
				System.out.println("Grade A");
			}else if(per>=80 && per<90){
				System.out.println("Grade B");
			}else if(per>=70 && per<80){
				System.out.println("Grade C");
			}else if(per>=60 && per<70){
				System.out.println("Grade D");
			}else if(per>=40 && per<60){
				System.out.println("Grade E");
			}else if(per<40){
				System.out.println("Grade F");
			}
		} else {
			System.out.println("Enter valid marks");
		}
	}
}
