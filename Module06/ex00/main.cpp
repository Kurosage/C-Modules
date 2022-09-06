
#include "Convert.hpp" 
int main(int argc, char *argv[]){
    if (argc == 2){
        	//std::cout << std::fixed << std::setprecision(1); // Precision = 1

        Convert	conv(argv[1]);
        char ch = conv.getChar(); 
        int in = conv.getInt();
        float fl = conv.getFloat();
        double db = conv.getDouble();
        ch = static_cast<char>(conv);
        in = static_cast<int>(conv);
        fl = static_cast<float>(conv);
        db = static_cast<double>(conv);
    }
    else{
        std::cout << "Invalid input arguments\n";
    }
    return 0;
}