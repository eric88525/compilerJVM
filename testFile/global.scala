object global
{
	val a = false
	val b = 19

	def globall(): boolean
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
		bool = globall()
		println(bool)
	}
}
