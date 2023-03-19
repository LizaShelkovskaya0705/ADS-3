// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int l = 0;
  int r = size - 1;
  int kolichestvo = 0;
  while (r >= l) {
    int middle = (r + l) / 2;
    if (*(arr + middle) == value) {
      kolichestvo += 1;
      int newmiddle = middle;
      while ((*(arr + middle + 1)) == value) {
        kolichestvo += 1;
        middle += 1;
      }
      while ((*(arr + newmiddle - 1)) == value) {
        kolichestvo += 1;
        newmiddle -= 1;
      }
      return kolichestvo;
    } else if (*(arr + middle) > value) {
      r = middle -1;
    } else {
      l = middle + 1;
    }
  }
  return kolichestvo;
}
