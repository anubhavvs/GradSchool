class Class {
    public static void main(String[] args) {
        int[][] arr = { {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5},
                {1, 2, 3, 4, 5}, {1, 2, 3, 4, 6}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}};

        int max = arr[0][0]+arr[0][1]+arr[0][2]+arr[0][3]+arr[0][4];
        int index = 0;
        for(int i=0; i<10; i++) {
            int sum = arr[i][0]+arr[i][1]+arr[i][2]+arr[i][3]+arr[i][4];
            if(sum > max) {
                max = sum;
                index = i;
            }
        }
        System.out.println("Class Topper: "+(index+1)+"th student with "+max+" marks.");
    }
}