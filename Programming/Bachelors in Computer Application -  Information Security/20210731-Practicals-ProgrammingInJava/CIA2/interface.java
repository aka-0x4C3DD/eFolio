interface LivingBeing
{
	void status();
}

interface Animal extends LivingBeing
{
	void eat();
	void move();
}

class Dog implements Animal
{
	public void status ()
	{
		System.outprintln("Allow");
	}
	public void move ()
	{
		System.out.println("Dog is Moving as it is alive");
	}
	public void eat()
	{
		System.out.println("Dog having his treats");
	}
}

class inheritanceInterface
{
	Animal d=new Dog();
	d.status();
	d.move();
	d.eat();
}