import java.util.Scanner;

class Demo {
	public static void main(String[] args) {
		
		for(int i = 0; i < 5; i++) {
			for(int j = 0; j < 3; j++) {
				if(i < 3) {
					if(j < 2 - i)
						System.out.print(" ");
					else
						System.out.print("0");
				} else {
					if(j <  i - 2)
						System.out.print(" ");
					else
						System.out.print("0");
				}
			}
			System.out.println();
		}
	}
}
