class Stack {               
private:
  int tos; 
  int a[max];

public:
  Stack(int s);
  void push(int adddata);
  void pop();
  void printlist();
};

Stack::Stack(int s) {
  tos=-1;
  max=s;
}
int main(){
	Stack obj;
	obj.Stack(9);
}
