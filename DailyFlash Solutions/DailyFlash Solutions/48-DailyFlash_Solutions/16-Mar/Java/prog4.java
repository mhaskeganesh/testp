class Demo {
	public static void main(String[] args) {
		for(int i = 0; i < 4; i++) {
			for(int j = 0; j < 7 - i; j++) {
				if(j < i) {
					System.out.print(" ");
				} else {
					if(i == 3) {
						System.out.print(j + 2);
						continue;
					}
					System.out.print(j + 1);
				}
			}
			System.out.println();
		}
	}
}
