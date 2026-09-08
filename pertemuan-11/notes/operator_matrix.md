# Operator Design Matrix

| Operator | Mutates lhs? | Typical form | Return |
|---|---:|---|---|
| `=` | yes | member | `T&` |
| `+=` `-=` `*=` | yes | member | `T&` |
| `+` `-` | no | often non-member | `T` |
| `==` `!=` | no | often non-member | `bool` |
| `<<` `>>` | stream state | non-member | stream reference |
| `[]` | access | member | `T&` / `const T&` |
| `++x` | yes | member | usually `T&` |
| `x++` | yes | member with dummy `int` | usually `T` |
| `()` | depends | member | domain result |

Rule: prefer meaning that matches built-in intuition; prefer named functions when an operator would be ambiguous.
