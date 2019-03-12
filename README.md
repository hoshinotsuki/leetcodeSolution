# leetcodeSolution
| 题号                                 | 解答                                                         |
| ------------------------------------ | ------------------------------------------------------------ |
| [1]两数之和                          | 1. [umap.find(target - nums[i])](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/1.two-sum.0.cpp)<br />2. [umap.count(target-nums[i]) ](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/1.two-sum.1.cpp)👍 |
| [46]全排列                           | 1. [递归. 分层布局。1.交换第一个数字。2.第一个数固定。后面的排列。3.交换归位。 ](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/46.%E5%85%A8%E6%8E%92%E5%88%97.cpp)<br />2. [递归。回溯。填空格法。访问数组标记。](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/46.%E5%85%A8%E6%8E%92%E5%88%97.0.cpp) |
| [47]全排列ii                         | [set。去重。递归。交换。](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/47.%E5%85%A8%E6%8E%92%E5%88%97-ii.cpp) |
| [51]n皇后                            | [回溯。排序。基于条件对string进行排序。H](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/51.n%E7%9A%87%E5%90%8E.cpp) |
| [52] N皇后 II                        | [回溯。计数。跟51题一样。](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/52.n%E7%9A%87%E5%90%8E-ii.cpp) |
| [77] 组合                            | 1. [公式法：C(K,N)=C(K-1,N-1)+C(K,N-1)。](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/77.%E7%BB%84%E5%90%88.0.cpp)<br />2. [回溯法。递归+循环。M](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/77.%E7%BB%84%E5%90%88.cpp) |
| [94] 二叉树的中序遍历                | 1. [中序遍历。递归。E](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/94.binary-tree-inorder-traversal.cpp)<br />2. [中序遍历。1个栈。M。](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/94.binary-tree-inorder-traversal.0.cpp)👍<br />3. [中序遍历。O1,非递归+不用栈。线索二叉树。H。](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/94.binary-tree-inorder-traversal.1.cpp) |
| [104] 二叉树的最大深度               | [dfs.递归。E](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/104.maximum-depth-of-binary-tree.cpp) |
| [105] 从前序与中序遍历序列构造二叉树 | [递归。二分查找。mid.start.end. pos=distance(.begin,find( , , ))](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/105.construct-binary-tree-from-preorder-and-inorder-traversal.cpp) |
| [111] 二叉树的最小深度               | [dfs.递归。E](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/111.minimum-depth-of-binary-tree.cpp) |
| [138] 复制带随机指针的链表           | [链表/复制原始(copy,link,next)/复制随机(copy,next)/分离。M](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/138.copy-list-with-random-pointer.cpp) |
| [144] 二叉树的前序遍历               | 1. [递归](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/144.binary-tree-preorder-traversal.cpp)<br />2. [迭代+栈](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/144.binary-tree-preorder-traversal.0.cpp)👍 |
| [145] 二叉树的后序遍历               | 1. [递归](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/145.binary-tree-postorder-traversal.cpp)<br />2. [迭代+1个栈](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/145.binary-tree-postorder-traversal.0.cpp)👍<br />3. [迭代+2个栈](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/145.binary-tree-postorder-traversal.1.cpp) |
| [169] 求众数                         | 1. [快排。找中位数。O(nlogn)](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/169.%E6%B1%82%E4%BC%97%E6%95%B0.0.cpp)<br />2. [不修改数组的方法O(n)](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/169.%E6%B1%82%E4%BC%97%E6%95%B0.cpp) 👍 |
| [215] 数组中的第K个最大元素          | 1. [O(nlogn)。快排sort()。reverse()。会修改数组。](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/215.%E6%95%B0%E7%BB%84%E4%B8%AD%E7%9A%84%E7%AC%ACk%E4%B8%AA%E6%9C%80%E5%A4%A7%E5%85%83%E7%B4%A0.cpp)<br />2.[O(n)。快排in-place partition/one way。会修改数组。](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/215.%E6%95%B0%E7%BB%84%E4%B8%AD%E7%9A%84%E7%AC%ACk%E4%B8%AA%E6%9C%80%E5%A4%A7%E5%85%83%E7%B4%A02.cpp)<br />3. |
| [297] 二叉树的序列化与反序列化       | 1. [bfs/queue/stringstream](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/297.serialize-and-deserialize-binary-tree.0.cpp)<br />2. [dfs递归/stringstream in(str)/obj.str()返回值](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/297.serialize-and-deserialize-binary-tree.cpp) |
| [426]把二叉搜索树转化为有序双向链表  | [分治法。递归。指针引用。中序遍历。M](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/426.Convert%20Binary%20Search%20Tree%20to%20Sorted%20Doubly%20Linked%20List%20.cpp) |
| [463] 岛屿的周长                     | 1. [岛屿边界处：在数组最左边，或者左边格子没有岛屿](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/463.%E5%B2%9B%E5%B1%BF%E7%9A%84%E5%91%A8%E9%95%BF.cpp)<br />2. [先假设算4个边，判断左边和上边是否有岛屿](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/463.island-perimeter.cpp) 👍 |
| [700] 二叉搜索树的查找               | 1. [递归。BST。E](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/700.search-in-a-binary-search-tree.cpp)<br />2. [迭代。BST。E。](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/700.search-in-a-binary-search-tree.0.cpp) |
| [701] 二叉搜索树的插入               | 1. [递归。BST。](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/701.insert-into-a-binary-search-tree.cpp)<br />2. [迭代。BST。break。](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/701.insert-into-a-binary-search-tree.0.cpp) |
| [705] 设计哈希集合                   | [ hashset。二维数组。value=0或者1.代表集合中是否存在。E。](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/705.design-hashset.cpp) |
| [706] 设计哈希映射                   | [hashmap。key-value。映射。初值为-1。E。](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/706.design-hashmap.cpp) |
| [804] 国际摩尔斯密码                 | [ unordered_set。hash。E。](https://github.com/hoshinotsuki/leetcodeSolution/blob/master/804.unique-morse-code-words.cpp) |
|                                      |                                                              |
|                                      |                                                              |
|                                      |                                                              |
|                                      |                                                              |
|                                      |                                                              |
|                                      |                                                              |
|                                      |                                                              |
|                                      |                                                              |
