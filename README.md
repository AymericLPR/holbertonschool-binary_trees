
Bibliothèque d'arbres binaires

Ce dépôt contient une bibliothèque C pour la création, la manipulation et la parcours d'arbres binaires. Il inclut un fichier header binary_trees.h qui définit la structure de données pour un nœud d'un arbre binaire ainsi que plusieurs fonctions pour créer, parcourir et manipuler des arbres binaires.

Structure de données

La structure binary_tree_s définit un nœud d'un arbre binaire avec les champs suivants:

n: un entier pour stocker la valeur du nœud.
parent: un pointeur vers le nœud parent.
left: un pointeur vers le nœud fils gauche.
right: un pointeur vers le nœud fils droit.
Fonctions

Les fonctions suivantes sont définies dans binary_trees.h:

binary_tree_node(binary_tree_t *parent, int value): crée un nouveau nœud avec la valeur donnée et l'attache au nœud parent donné.
binary_tree_insert_left(binary_tree_t *parent, int value): crée un nouveau nœud avec la valeur donnée et l'attache comme fils gauche au nœud parent donné.
binary_tree_insert_right(binary_tree_t *parent, int value): crée un nouveau nœud avec la valeur donnée et l'attache comme fils droit au nœud parent donné.
binary_tree_delete(binary_tree_t *tree): supprime entièrement l'arbre donné.
binary_tree_is_leaf(const binary_tree_t *node): renvoie 1 si le nœud donné est une feuille, 0 sinon.
binary_tree_is_root(const binary_tree_t *node): renvoie 1 si le nœud donné est la racine de l'arbre, 0 sinon.
binary_tree_preorder(const binary_tree_t *tree, void (*func)(int)): effectue un parcours préfixe de l'arbre donné en utilisant la fonction donnée pour traiter chaque valeur.
binary_tree_inorder(const binary_tree_t *tree, void (*func)(int)): effectue un parcours central de l'arbre donné en utilisant la fonction donnée pour traiter chaque valeur.
binary_tree_postorder(const binary_tree_t *tree, void (*func)(int)): effectue un parcours suffixe de l'arbre donné en utilisant



Adam Diallo
je veux l'entièreté su
binary_tree_s: structure de données pour un noeud d'arbre binaire

binary_tree_node(binary_tree_t *parent, int value) : Crée un nouveau nœud avec la valeur donnée et l'attache au nœud parent donné.
binary_tree_insert_left(binary_tree_t *parent, int value) :Crée un nouveau nœud avec la valeur donnée et l'attache comme fils gauche au nœud parent donné.
binary_tree_insert_right(binary_tree_t *parent, int value) :Crée un nouveau nœud avec la valeur donnée et l'attache comme fils droit au nœud parent donné.
binary_tree_delete(binary_tree_t *tree) :supprime entièrement l'arbre donné.
binary_tree_is_leaf(const binary_tree_t *node) :renvoie 1 si le nœud donné est une feuille, 0 sinon.
binary_tree_is_root(const binary_tree_t *node) :renvoie 1 si le nœud donné est la racine de l'arbre, 0 sin



Adam Diallo
met moi l'entièreté de mon readme.md sous forme de fichier
Je suis désolé, mais je ne peux pas créer un fichier pour vous étant donné que je n'ai pas l'accès à un système de fichier. Mais je vous encourage à créer un fichier README.md dans votre dépôt git, et copiez-collez le contenu généré par mes réponses ci-dessus. Il suffit d'ouvrir le fichier README.md dans l'éditeur de texte de votre choix, copier le contenu généré et le coller dans le fichier, puis enregistrer les modifications.



