class Box 
{
    int length;
    int width;
    int height;
    Box()
    {
        length=10;
        width=10;
        height=10;
    }
    Box(int l,int w,int h)
    {
        length=l;
        width=w;
        height=h;
    }
    Box(Box obj)
    {
        length=obj.length;
        width=obj.width;
        height=obj.height;
    }
    int volume()
    {
        return(length*width*height);
    }
}
public class constructoroverloading
{
    public static void main(String args[])
    {
        Box c1=new Box();
        System.out.println("Volume= "+c1.volume());
        
        Box c2=new Box(20,20,20);
        System.out.println("Volume= "+c2.volume());
        
        Box c3=new Box(30,30,30);
        Box c4=new Box(c3);
        System.out.println("Volume= "+c4.volume());
    }
}