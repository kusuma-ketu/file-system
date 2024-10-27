struct Inode {
    int size;
    int blocks[10];
    char owner[32];
    char permissions[10];
};

struct DirectoryEntry {
    char name[32];
    int inode_number;
};

struct Directory {
    struct DirectoryEntry entires[100];
};

