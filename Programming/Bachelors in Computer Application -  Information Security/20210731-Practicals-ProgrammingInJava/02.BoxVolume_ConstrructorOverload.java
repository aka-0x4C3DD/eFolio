class BoX
{
	int width,height,length;
	BoX()
	{
		width=10;
		height=10;
		length=10;
	}
	
	BoX(int w,int h,int l)
	{
		width=w;
		height=h;
		length=l;
	}
	BoX(BoX c)
	{
		width=c.width;
		height=c.height;
		length=c.length;
	}

	float volume()
	{
		return(width*height*length);
	}
}

class Constructor_overload
{
	public static void main(String args[])
	{
		BoX c1=new BoX();
		BoX c2=new BoX(20,30,40);
		BoX c3=new BoX(c1);
		System.out.println(c1.volume());
		System.out.println(c2.volume());
		System.out.println(c3.volume());
	}
}