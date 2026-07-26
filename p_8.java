public class p_8{
    public static void main(String args[]){
        int [] n ={11,20,13,14,51,6};
        int temp;
        
        for(int i=0; i<n.length; i++){
             for(int j=i+1; j<n.length; j++){
                if(n[i]>n[j]){
                    temp = n[i];
                    n[i] = n[j];
                    n[j]=temp;
                }
             }
        }
       
         System.out.print("Array in ascending order: ");
         for(int i=0; i<n.length; i++){
            System.out.print(n[i] + " ");
         }
        }

    }
