# Singly Linked List Operations in C

## Overview

Welcome to the Singly Linked List Operations in C repository! This C program provides a practical implementation of various operations on singly linked lists, making it an excellent resource for junior developers looking to enhance their understanding of memory management, pointers, and data structures.

## Table of Contents

- [Why Use This Script](#why-use-this-script)
- [Prerequisites](#prerequisites)
- [Languages and Utilities Used](#languages-and-utilities-used)
- [Environments Used](#environments-used)
- [Memory Management and Pointers](#memory-management-and-pointers)
- [Adding Nodes](#adding-nodes)
- [Deleting Nodes](#deleting-nodes)
- [Insert at Beginning](#insert-at-beginning)
- [Insert at End](#insert-at-end)
- [Insert at Index](#insert-at-index)
- [Deleting Nodes](#deleting-nodes)
- [Print List](#print-list)
- [Usage](#usage)

## Why Use This Script

Singly linked lists are fundamental data structures with real-world applications in software development. This C program not only demonstrates the implementation of common operations on singly linked lists but also provides a practical context for junior developers to deepen their understanding of memory management and pointers.

## Prerequisites

Before using this C program, ensure that you have the following:

- A C compiler installed on your system.
- Basic understanding of C programming, including memory management concepts.

## Languages and Utilities Used

- **C**
- **Visual Studio Code**

[<img  alt="C Logo Icon" width="45px" src="https://upload.wikimedia.org/wikipedia/commons/1/18/C_Programming_Language.svg" />][C]
[<img alt="Visual Code Icon" width="45px" src="https://upload.wikimedia.org/wikipedia/commons/9/9a/Visual_Studio_Code_1.35_icon.svg" />][vscode]

[C]: https://learn.microsoft.com/en-us/cpp/c-language/
[vscode]: https://code.visualstudio.com/

## Environments Used

- **Windows**

[<img align="left" alt="Microsoft Icon" width="35px" src="https://upload.wikimedia.org/wikipedia/commons/3/34/Windows_logo_-_2012_derivative.svg" />][windows]

[windows]: https://www.microsoft.com/
<br /><br />

## Memory Management and Pointers

This repository places a strong emphasis on memory management and pointers, critical concepts for any C developer. Throughout the code, you'll encounter dynamic memory allocation, pointer manipulation, and proper deallocation techniques. Understanding these aspects is crucial for building robust and efficient C programs.

## Adding Nodes

### Insert at Beginning

Insert a new node with a given number at the beginning of the list.

```c
void insert_at_beginning(int number, node **address_of_head);
```

### Insert at End

Insert a new node with a given number at the end of the list.

```c
void insert_at_end(int number, node **address_of_head);
```

### Insert at Index

Insert a new node with a given number at a specified index in the list.

```c
void insert_at_index(int index, int number, node **address_of_head);
```

## Deleting Nodes

Delete the entire list.

```c
void delete_list(node **address_of_head);
```

## Print List


Print the elements of the list.

```c
void print_list(node *first);
```

## Usage

The main function in the provided C code demonstrates the usage of these doubly linked list operations.

 <div align="center">
<br/>
<img src="https://github.com/infinity-set/doubly_linked_list/assets/142350896/ced11689-d579-4086-a979-380d2e7edb88" height="100%" width="100%" alt="Main function code displayed in C"/>
<br />   
 </div>

 <div align="center">
<br/>
<img src="https://github.com/infinity-set/doubly_linked_list/assets/142350896/134ddec2-ee95-4a41-b70c-2b32682be3c0" height="100%" width="100%" alt="Output of the execution displayed."/>
<br />   
 </div>

<br />   
Feel free to explore and modify the code based on your requirements!

#

⬅️ **[Home](https://github.com/infinity-set)**






