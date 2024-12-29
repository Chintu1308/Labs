public class Array {
    int[] array;
    int size;
    public Array() {
        array = new int[10];
        size = 0;
    }
    public void add(int x){
        if(size == array.length){
            resize();
        }
        array[size] = x;
        size++;
    }
    public int get(int index){
        if(index < 0 || index >= size){
            throw new ArrayIndexOutOfBoundsException("index out of bounds");
        }
        return array[index];
    }
    public void remove(int index){
        if(index < 0 || index >= size){
            throw new ArrayIndexOutOfBoundsException("index out of bounds");
        }
        for(int i = index; i < size-1; i++){
            array[i] = array[i+1];
        }
        size--;
    }
    public int size(){
        return size;
    }
    public void resize(){
        int[] newArray = new int[array.length*2];
        for(int i = 0; i < size; i++){
            newArray[i] = array[i];
        }
        array = newArray;
    }
    public void display(){
        for(int i = 0; i < size; i++){
            System.out.print(array[i] + " ");
        }
    }

    public static void main(String[] args) {
        Array list = new Array();
        list.add(1);
        list.add(2);
        list.add(3);
        list.add(4);
        list.add(5);
        System.out.println(list.get(1));
        list.remove(2);
        System.out.println(list.size());
        list.display();
        System.out.println();
        System.out.println(list.get(2));
    }
}
