# UML Class Diagram Mapping

| UML | C++ |
|---|---|
| `+` | public |
| `-` | private |
| `#` | protected |
| `name: type` | `type name;` |
| `m(x: T): R` | `R m(T x);` |
| underlined/static | `static` |

Forward engineering: diagram -> header/source.  
Reverse engineering: header/source -> diagram.
