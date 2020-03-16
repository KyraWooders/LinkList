| Kyra Wooders |
| :---     |
| s198061 |
| Code Design and Data Structures Assessment |
| Double-Linked List |

## I. Requirements

- **Statement**: Create a double link list.

## II. Design Documentation

### Type 'UnorderedList'


#### Method insertFirst()
Type: Void

Description: inserts the node first

#### Method insertLast()
Type: Void

Description: inserts the node last

### Type 'Node'


#### Field info
Type: typename T

Description: holds info of the node

#### Field next
Type: Node<T>

Description: makes the next node

### Type 'List'


#### Field front
Type: typename T

Description: the front of the list

#### Field back
Type: typename T

Description: the back of the list

#### Method insertFirst()
Type: Void

Description: inserts the node first

#### Method insertLast()
Type: Void

Description: inserts the node last

#### Method isEmpty()
Type: Bool

Description: if the list is empty

#### Field m_count
Type: int

Description: the lengh of the list

#### Field m_first
Type: Node<T>

Description: the first node

#### Field m_last
Type: Node<T>

Description: the last node


### Type 'Iterator'


## License

MIT License - Copyright (c) 2018 Academy of Interactive Entertainment

For more information, see the [license][lic] file.

Third party works are attributed under [thirdparty.md][3p].

[lic]:license.md
[3p]:thirdparty.md
[raylib]:https://github.com/raysan5/raylib
