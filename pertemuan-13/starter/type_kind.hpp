#pragma once

template <typename T>
struct TypeKind { static constexpr const char* name = "value"; };

// TODO: partial specialization TypeKind<T*> -> "pointer"
