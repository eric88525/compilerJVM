object global
{
	val a = false
	val b = 19

	def add(): boolean
	{
		if(b>50)
			println("big")
		if (b<20)
			println("small")

		return a
	}
	def main ()
	{
		var bool
		bool = add()
		println(bool)
	}
}