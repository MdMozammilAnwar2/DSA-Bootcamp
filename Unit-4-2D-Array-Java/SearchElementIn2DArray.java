class SearchElementIn2DArray{
    public static void main(String[] args) {
        int[][] arr={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
        boolean result=searchElement(arr,3,4,9);
        if(result){
            System.out.println("Yah, element found");
        }
        else{
            System.out.println("Sorry, given element is not there in the array");
        }
    }
    public static boolean searchElement(int arr[][],int row,int col,int target){
        for(int i=0;i<row;i++){
            for (int j=0;j<col;j++){
                if(arr[i][j]==target){
                    return true;
                }
            }
        }
        return false;
    }
}
