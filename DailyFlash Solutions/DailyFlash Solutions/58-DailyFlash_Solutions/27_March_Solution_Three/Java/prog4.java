class Demo {
	public static void main(String[] args) {
		int num = 1;
		for(int i = 0; i < 7; i++) {
			if(i < 4) {
				for(int j = 0; j < i + 1; j++) {
					if(j == 0)
						System.out.print("H");
					if(j == 1)
						System.out.print("O");
					if(j == 2)
						System.out.print("M");
					if(j == 3)
						System.out.print("E");
				}
			} else {
				for(int j = 0; j < 7 - i; j++) {
					
					if(j == 0)
						System.out.print("H");
					if(j == 1)
						System.out.print("O");
					  if(j == 2)
                                                System.out.print("M");
                                        if(j == 3)
                                                System.out.print("E");
                                

				}
			}
			System.out.println();
		}
	}
}
