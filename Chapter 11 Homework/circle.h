
class circle
{
	public:
		void print() const;
		void setRadius(double);
		void setCenter(double, double);
		void getCenter(double&, double&);
		double getRadius();
		double area();

		circle();
		circle(double, double, double);

	private:
		double xCoordinate;
		double yCoordinate;
		double radius;

};