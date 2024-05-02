
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
class Box {
    int l = 0, b = 0, h = 0;

public:
    // Constructors
    Box() {}
    Box(int a, int d, int c)  {
        l = a; 
        b = d;
        h = c;
    }
    
    // Getters
    int getLength() { return l; }
    int getBreadth() { return b; }
    int getHeight() { return h; }
    
    // Calculate Volume
    long long CalculateVolume() { return (long long)l * b * h; }
    
    // Operator Overloading
    bool operator< (Box& e) {
        if (this->l < e.l) return true;
        if (this->b < e.b && (this->l == e.l)) return true;
        if (this->h < e.h && this->l == e.l && this->b == e.b) return true;
        return false;
    }

     friend ostream& operator<< (ostream& out, Box& B) {
        out << B.l << " " << B.b << " " << B.h;
        return out;
    }
};




// Box();
// Box(int,int,int);
// Box(Box);
	

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

