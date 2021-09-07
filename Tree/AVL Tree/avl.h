#include <iostream>
#include "node.h"
using namespace std;

class avl
{
public:
    node *root;
    avl();
    int height(node *p);
    int updateHeight(node *p);
    int balanceFactor(node *p);
    node *rInsert(node *p, int key);
    node *llRotation(node *p);
    node *lrRotation(node *p);
    node *rlRotation(node *p);
    node *rrRotation(node *p);
    void display(node *root, int level);
};

avl::avl()
{
    root = NULL;
}

int avl::height(node *p)
{
    if (!p)
        return -1;
    return p->height;
}

int avl::updateHeight(node *p)
{
    return max(height(p->lcl), height(p->rcl)) + 1;
}

int avl::balanceFactor(node *p)
{
    return height(p->lcl) - height(p->rcl);
}

node *avl::rInsert(node *p, int key)
{
    node *t;
    if (!p)
    {
        t = new node;
        t->data = key;
        if(!root)
            root = t;
        return t;
    }
    else
    {
        if (key < p->data)
            p->lcl = rInsert(p->lcl, key); // this probably expands to this.rInsert()
        else if (key > p->data)
            p->rcl = rInsert(p->rcl, key);
    }
    p->height = updateHeight(p);

    // LL Rotation
    if (balanceFactor(p) == 2 && balanceFactor(p->lcl) == 1)
        return llRotation(p);
    // LR Rotation
    else if (balanceFactor(p) == 2 && balanceFactor(p->lcl) == -1)
        return lrRotation(p);
    // RL Rotation
    else if (balanceFactor(p) == -2 && balanceFactor(p->rcl) == 1)
        return rlRotation(p);
    // RR Rotation
    else if (balanceFactor(p) == -2 && balanceFactor(p->rcl) == -1)
        return rrRotation(p);

    return p;
}

node *avl::llRotation(node *p)
{
    node *pl = p->lcl;
    node *plr = pl->rcl;

    pl->rcl = p;
    p->lcl = plr;

    p->height = updateHeight(p);
    pl->height = updateHeight(pl);

    if (root == p)
        root = pl;

    return pl;
}
node *avl::lrRotation(node *p)
{
    node *pl = p->lcl;
    node *plr = pl->rcl;

    pl->rcl = plr->lcl;
    p->lcl = plr->rcl;

    plr->lcl = pl;
    plr->rcl = p;

    p->height = updateHeight(p);
    pl->height = updateHeight(pl);
    plr->height = updateHeight(plr);

    if (p == root)
        root = plr;

    return plr;
}
node *avl::rlRotation(node *p)
{
    return NULL;
}
node *avl::rrRotation(node *p)
{
    return NULL;
}

void avl::display(node *root, int level)
{
    // if root == NULL
    if (!root)
        return;
    display(root->rcl, level + 1);
    for (int i = 0; i < level; i++)
        cout << "    ";
    cout << root->data << "\n";
    display(root->lcl, level + 1);
}