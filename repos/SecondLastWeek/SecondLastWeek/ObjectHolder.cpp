//#include <iostream>
//
//template <typename T>
//class ObjHolder
//{
//public:
//	ObjHolder(int size);
//	~ObjHolder();
//
//	//get Object
//	T getObj() const;
//
//	//set the object
//	void setObj(T ObjParam);
//
//private:
//	T theObj;
//};
//
//template <typename T>
//ObjHolder<T>::ObjHolder(int size)
//{
//	theObj = new T[size];
//}
//
//template <typename T>
//ObjHolder<T>::~ObjHolder()
//{
//	delete[] theObj;
//}
//
////get the object
//template <typename T>
//T ObjHolder<T>::getObj() const
//{
//	return theObj;
//}
//
////set the object
//template <typename T>
//void ObjHolder<T>::setObj(T objParam)
//{
//	theObj = objParam;
//}
//
//int main()
//{
//	ObjHolder<int> myObj;
//	myObj.setObj(5);
//	int j = myObj.getObj();
//
//	return 1;
//}
