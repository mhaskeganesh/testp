class Demo {
	public static void main(String[] args) {
		for(int i = 0; i < 7; i++) {
			if(i < 4) {
				for(int j = 0; j < 4 + i; j++) {
					if(j < 3 - i)
						System.out.print(" ");
					else {
						if(i % 2 == 0) {
							if(j % 2 == 1)
								System.out.print("1");
							else
								System.out.print(" ");
						} else {
							if(j % 2 == 0)
								System.out.print("1");
							else
								System.out.print(" ");
						}

					}
				}
			}
			else {
				for(int j = 0; j < 10 - i; j++) {
					if(j < i - 3)
						System.out.print(" ");
					else {
						if(i % 2 == 0) {
							if(j % 2 == 1)
								System.out.print("1");
							else
								System.out.print(" ");
						} else {
							if(j % 2 == 0)
								System.out.print("1");
							else
								System.out.print(" ");
						}
					}
				}	
			}
			System.out.print("\n");
		}
	}
}
