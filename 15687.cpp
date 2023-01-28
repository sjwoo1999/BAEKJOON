class Rectangle {
	int width;
	int height;
public:
	int get_width() { return width; }
	int get_height() { return height; }
	void set_width(int width) { this->width = width; }
	void set_height(int height) { this->height = height; }
	int area() { return width * height; }
	int perimeter() { return 2 * (width+height); }
	bool is_square() { return width == height; }
};