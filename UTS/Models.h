struct Patient{
    char date[100];
    char name[255];
};

struct Node{
    Patien c;
    Node *left, *right;
};