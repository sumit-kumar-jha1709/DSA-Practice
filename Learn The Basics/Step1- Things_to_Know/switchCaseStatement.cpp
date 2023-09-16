double areaSwitchCase(int ch, vector<double> a) {
	// Write your code here
	float area;
	switch(ch){
        case 1: {
          float radius = a[0];
          return M_PI * radius * radius;
		  break;
        }

        case 2: {
          float length = a[0];
          float breadth = a[1];
          return length * breadth;
          break;
        }
    }
}
