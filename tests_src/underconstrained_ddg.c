char str1[2];
void f1(char *str1) {
        str1[0] = 'b';
}
int main(void) {
        str1[0] = 'a';
        f1(str1);
        int b = str1[0] == 'a';
        return 0;
}

