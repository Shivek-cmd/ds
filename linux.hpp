#include "btree.hpp"

//for any OS we can add , delete ,search files
class linux{
public:
    BTree linux_btree;
    linux(){
        //every new OS will have it's btree object
        linux_btree = BTree(3);
    }
    //operations on the file
    void add_file(string, double);
    BTreeNode * search_file(string , double);
    void show_files();
    void  remove(File );
};


void linux :: add_file(string name, double size){
    File temp=File(name , size);
    linux_btree.insert(temp);
}

BTreeNode* linux::search_file(string name, double size){
    File temp = File(name, size);
    return linux_btree.search(temp);
}

void linux::show_files(){
    linux_btree.traverse();
}

void linux::remove(File file){
    linux_btree.remove(file);
}
