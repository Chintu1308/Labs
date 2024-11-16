//Write a program to implement a new ArrayList class. It should contain add(), get(), remove(), size() methods. Use dynamic array logic.
import java.util.Arrays;

public class ArrayList {
    private int size = 0;
    private static final int DEFAULT_CAPACITY = 10;
    private Object elements[];

    public ArrayList(){
        elements = new Object[DEFAULT_CAPACITY];
    }

    public void add(Object o){
        if(size == elements.length){
            ensureCapacity();
        }
        elements[size++] = o;
    }

    public Object get(int i){
        if(i >= size || i < 0){
            throw new IndexOutOfBoundsException("Index: "+i+", Size "+i);
        }
        return elements[i];
    }

    public Object remove(int i){
        if(i >= size || i < 0){
            throw new IndexOutOfBoundsException("Index: "+i+", Size "+i);
        }
        Object item = elements[i];
        int numElts = elements.length - ( i + 1 ) ;
        System.arraycopy( elements, i + 1, elements, i, numElts ) ;
        size--;
        return item;
    }

    private void ensureCapacity() {
        int newSize = elements.length * 2;
        elements = Arrays.copyOf(elements, newSize);
    }

    public int size(){
        return size;
    }

    public static void main(String a[]){
        ArrayList list = new ArrayList();
        list.add(new Integer(2));
        list.add(new Integer(5));
        list.add(new Integer(1));
        list.add(new Integer(23));
        list.add(new Integer(14));
        for(int i=0; i<list.size(); i++){
            System.out.print(list.get(i)+" ");
        }
        list.remove(2);
        System.out.println("Element at Index 2:"+list.get(2));
        System.out.println("List Size: "+list.size());
    }
}