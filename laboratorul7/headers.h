#pragma once
template < class T >
class Vector {
private:
    T* vector;
    int current_size;
    int max_size;
public:
    Vector() {
        this->current_size = 1;
        this->max_size = 1;
        vector = new T[this->current_size];
    }
    void expand() {

        int new_size = this->current_size * 2;
        T* tmp = new T[new_size];
        for (int i = 0; i < this->current_size; i++)
            tmp[i] = vector[i];
        delete[] vector;
        vector = tmp;
    }

     void push(const T& value);
    T& pop();
    int count();
    void remove(int index);
    const T& get(int index);
    void insert(const T& value, int index);
    void set(const T& value, int index);
    void sort(bool(*funct_ptr)(T a, T b));
    void print();
    int firstIndexOf(bool(*funcy_prt)(T a, T b),const T& object);


};


template<class T>
 void Vector<T>::push(const T& value) {
     if (current_size+1 >= max_size) {
         expand();
     }
     this->vector[this->current_size] = value;
     this->current_size++;


}



 template<class T>
 T& Vector<T>::pop() {
     this->current_size--;
     return this->vector[this->current_size];
 }



  template<class T>
  void Vector<T>::insert(const T& value, int index) {
      if (this->current_size + 1 >= this->max_size)
      {
          expand();
      }
      for (int i = this->current_size - 1; i >= index; i--)
      {
          this->vector[i + 1] = this->vector[i];
      }
      this->vector[index] = value;
      this->current_size++;
  }




  template<class T>
  void Vector<T>::remove(int index) {
      for (int i = index; i < current_size- 1; i++)
          this->vector[i] = this->vector[i + 1];

      this->current_size--;
  }




  template<class T>
  void Vector<T>::print() {
      for (int i = 1; i < this->current_size; i++) {
          printf("%d ", this->vector[i]);
      }
      printf("\n");
  }

