# Shallow vs Deep Copy

Shallow copy menyalin nilai pointer/handle. Ini aman untuk non-owning pointer bila lifetime owner jelas, tetapi berbahaya bila pointer adalah owning resource karena beberapa object dapat merasa memiliki resource yang sama.

Deep copy membuat resource baru dan menyalin konten. Evidence lab: nilai sama, tetapi alamat resource berbeda.
