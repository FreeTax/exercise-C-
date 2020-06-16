#include <iostream>

class Buffer {
public:
    Buffer(int size) : size(size) {
        buffer.reset(new char[size]);
    }

    void setCharAt(int pos, char value) {
        if( pos>=0 && pos < size )
            buffer.get()[pos] = value;
    }
    char getCharAt(int pos){
        if( pos>=0 && pos < size )
            return buffer.get()[pos];
        else
            return '\0';
    }
    int getSize() const { return size; }
private:
    std::unique_ptr<char> buffer;
    int size;
};


int main() {
    Buffer *b1= new Buffer(10);
    b1->setCharAt(8,'a');
    std::cout<<b1->getCharAt(8)<<std::endl;
}
