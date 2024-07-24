class Solution {
public:
    string convertToTitle(int columnNumber) {
    string title;
    
    while (columnNumber > 0) {
        columnNumber--;
        char ch = 'A' + (columnNumber % 26);
        title = ch + title;
        columnNumber /= 26;
    }
    
    return title;
}
};
