class Ride {
	private:
		int startX, startY;
		int endX, endY;
		int earliestStart, lastestFinish;
		
		int rideLength;
		
	public:
		Ride(int sx, int sy, int ex, int ey, int es, int lf);
		int Length();
}