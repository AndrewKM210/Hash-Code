class Ride {
	public:
		int idRide;
		int startX, startY;
		int endX, endY;
		int earliestStart, lastestFinish;
		int length;
		int lastestStart;
		
		Ride();
		void init(int idr, int sx, int sy, int ex, int ey, int es, int lf);
		int GetLastestStartTime();
};