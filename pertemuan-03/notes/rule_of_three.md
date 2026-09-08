# Rule of Three

Bila class mengelola resource manual dan membutuhkan destructor kustom, evaluasi juga copy constructor dan copy assignment operator. Ketiganya harus membentuk satu ownership policy yang konsisten.

- destructor: release resource tepat sekali;
- copy constructor: object baru mendapat resource independen bila copy diizinkan;
- copy assignment: ganti resource target secara aman, tangani self-assignment, return `*this`.

Rule of Three bukan alasan menulis raw pointer pada production code. Standard-library RAII type sering memungkinkan Rule of Zero.
