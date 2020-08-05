

class Solver{
	
	private:
		queue<Strategy*> strategies;
		Board* board;

	public:
		Solver(Board* board, queue<Strategy*> strategies);
		void solve();
};