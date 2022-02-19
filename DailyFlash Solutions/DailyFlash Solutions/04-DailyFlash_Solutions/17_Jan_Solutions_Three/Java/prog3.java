import java.util.Scanner;
class Demo{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Sex : ");
		char sex = sc.next().charAt(0);
		System.out.print("Age : ");
		int age = sc.nextInt();
		if((sex == 'M' || sex == 'F' || sex == 'm' || sex == 'f') && (age >= 20 && age <= 60)){
			if(sex == 'F' || sex == 'f'|| (sex == 'M' || sex == 'm' && age > 40 && age <= 60)) {
				System.out.println("Work in arban areas.");
			} else if(sex == 'M' || sex == 'm' && (age >= 20 && age <= 40)) {
				System.out.println("Work anywhere.");
			} 
		} else {
			System.out.println("Error.");
		}
	}
}
