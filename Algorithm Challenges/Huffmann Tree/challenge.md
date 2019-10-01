# Implement Huffmann Tree in the favorite language of your choice!

**What is Huffmann Tree?**
Huffman coding tree or Huffman tree is a full binary tree in which each leaf of the tree corresponds to a letter in the given alphabet.

Define the weighted path length of a leaf to be its weight times its depth. The Huffman tree is the binary tree with minimum external path weight, i.e., the one with the minimum sum of weighted path lengths for the given set of leaves. So the goal is to build a tree with the minimum external path weight.

Huffman coding assigns codes to characters such that the length of the code depends on the relative frequency or weight of the corresponding character. Huffman codes are of variable-length, and prefix-free (no code is prefix of any other). Any prefix-free binary code can be visualized as a binary tree with the encoded characters stored at the leaves.

A simple algorithm:
1. Prepare a collection of n initial Huffman trees, each of which is a single leaf node. Put the n trees onto a priority queue organized by weight (frequency).
2. Remove the first two trees (the ones with lowest weight). Join these two trees to create a new tree whose root has the two trees as children, and whose weight is the sum of the weights of the two children trees.
3. Put this new tree into the priority queue.
4. Repeat steps 2-3 until all of the partial Huffman trees have been combined into one.

*It's a greedy algorithm: at each iteration, the algorithm makes a "greedy" decision to merge the two subtrees with least weight. Does it give the desired result?*

Lemma: Let x and y be the two least frequent characters. There is an optimal code tree in which x and y are siblings whose depth is at least as any other leaf nodes in the tree.
Theorem: Huffman codes are optimal prefix-free binary codes (The greedy algorithm builds the Huffman tree with the minimum external path weight for a given set of letters).

