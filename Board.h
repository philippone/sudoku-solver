


class Board{
	private:
		int n;
		vector< vector<Cell> > cells;
		void parseBoard(string description);
		
	public:
		Board(string description);
		bool isSolved();
		void printBoard();

};