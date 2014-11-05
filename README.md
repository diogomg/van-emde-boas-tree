van emde boas tree
==================

Suite test [![Build Status](https://travis-ci.org/diogomg/van-emde-boas-tree.svg?branch=master)](https://travis-ci.org/diogomg/van-emde-boas-tree)

A fast priority queue/tree/sort struct in a particular case. The vEB tree support operations in O(loglog u) time when it stores n unique keys, each an integer in the range 0 to u.

Operations
----------

- Insert      O(loglogu)
- Delete      O(loglogu)
- Member      O(loglogu)
- Minimum     O(1)
- Maximum     O(1)

Space
-----
O(n)
