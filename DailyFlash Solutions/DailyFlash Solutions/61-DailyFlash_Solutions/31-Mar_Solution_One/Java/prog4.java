import java.util.Scanner;

class Demo {
	public static void main(String[] args) {
		
		for(int i = 0; i < 5; i++) {
			for(int j = 0; j < 3; j++) {
				if(i < 3) {
					if(j < 2 - i)
						System.out.print("\t");
					else
						System.out.print((10 * i + j) + "\t");
				} else {
					if(j <  i - 2)
						System.out.print("\t");
					else
						System.out.print((10 * i + j) + "\t");
				}
			}
			System.out.println();
		}
	}
}
