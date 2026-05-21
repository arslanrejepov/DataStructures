#include <iostream>

using namespace std;

class ArrayList{
    private:
        int* data;
        int size, capacity;

    public:
        ArrayList(){
            size = 0;
            capacity = 2;
            data = new int[capacity];
        }
        void pushback(int value){
            data[size] = value;
            size++;
        }
        int pop_back(){
            if (size == 0){
                cout<<"ArrayList is empty!"<<endl;
                return -1;
            }
            size--;
            return data[size];
        }
        int get(int index){
            if(index < 0 || index >= size){
                cout << "Index out of bounds!" << endl;
                return -1; // or throw an exception
            }
            return data[index];
        }
        int size(){
            return size;
        }
        void set(int index, int value){
            if(index < 0 || index >= size){
                cout << "Index out of bounds\n";
                return;
            }
            data[index] = value;
        }
        int capacity(){
            return capacity;
        }
        void insert(int index, int value){
            if(index < 0 || index > size){
                cout << "Index out of bounds\n";
                return;
            }

            if(size == capacity){
                int* newData = new int[capacity * 2];
                for(int i = 0; i < size; i++){
                    newData[i] = data[i];
                }
                delete[] data;
                data = newData;
                capacity *= 2;
            }

            for(int i = size - 1; i >= index; i--){
                data[i + 1] = data[i];
            }

            data[index] = value;
            size++;

        }
        void remove(int index){
            if(index < 0 || index >= size){
                cout << "Index out of bounds\n";
                return;
            }

            for(int i = index; i < size - 1; i++){
                data[i] = data[i + 1];
            }

            size--;
        }
        ~ArrayList(){
            delete[] data;
        }
};