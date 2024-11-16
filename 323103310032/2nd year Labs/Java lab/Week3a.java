class Box {
	double width, height, depth;

	Box(double width, double height, double depth) {
		this.width = width;
		this.height = height;
		this.depth = depth;
	}

	double getVolume() {
		return width * height * depth;
	}
}

class Week3a {
	public static void main(String[] args) {
		Box b1 = new Box(1.4, 2.25, 1.25);

		double x = b1.getVolume();

		System.out.println("Volume of the Box is" + " " + x);
	}
}
