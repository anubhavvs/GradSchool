class Patterns {
	void pattern(int count) {
		int n=1;
		for (int i=count;i>0;i--) {
			for(int j=1;j<=i;j++) {
				System.out.print(j*n+" ");
			}
			System.out.println();
			n++;
		}
	}
	public static void main(String args[]) {
		Patterns obj = new Patterns();
		obj.pattern(Integer.parseInt(args[0]));
	}
}