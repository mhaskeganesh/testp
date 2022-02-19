class Demo {
	public static void main(String[] args) {
		char c1 = 'E', c2 = 'a';
		for(int i = 0; i < 4; i++) {
			for(int j = 0; j < 4; j++) {
				if(j >= i) {
					if(j % 2 == 0) {
						System.out.print(c1 + " ");
						c1--;
					} else {
						System.out.print(c2 + " ");
						c2++;
					}
				} else {
					System.out.print("  ");
				}
			}
			System.out.println();
		}
	}
}
