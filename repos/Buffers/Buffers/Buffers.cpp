#include <cstddef>
#include <iostream>

class Buffer
{
public:
	Buffer();
	~Buffer();
	Buffer(int size);

	//resize the buffer
	//if the size is greater than the current size
	//resize the buffer and copy the old buffer into new buffer
	//destroy old buffer
	//if the size is smaller than the current size, copy as much of the old buffer as possible
	//into new buffer and destroy the old buffer
	//size = the size of the new buffer
	void resize(int size);

private:
	char* buffer;
	int currentSize;
};

class aitRogueMap
{
public:
	//load the text file "path"
	void loadMap(std::string path);

private:
	char *map;
};

Buffer::Buffer()
{
	buffer = NULL;
	currentSize = 0;
}

Buffer::Buffer(int size)
{
	buffer = new char[size];
	currentSize = size;
}

Buffer::~Buffer()
{
	if (buffer != NULL)
	{
		delete[] buffer;
		buffer = NULL;
		currentSize = 0;
	}
	
}

void Buffer::resize(int size)
{
	//resize the buffer
	char* oldBuffer = buffer;
	buffer = new char[size];

	//copy data
	if (size >= currentSize)
	{
		memcpy(buffer, oldBuffer, size * sizeof(char))
		/*for (int i = 0; i < size; i++)
		{
			buffer[i] = oldBuffer[i];
		}*/
	}
	else
	{
		memcpy(buffer, oldBuffer, currentSize * sizeof(char));
		/*for (int i = 0; i < currentSize; i++)
		{
			buffer[i] = oldBuffer[i];
		}*/
	}
	
	currentSize = size;

	//destroy old buffer
	delete[] oldBuffer;
	oldBuffer = NULL;
}

int main()
{
	Buffer buf;

	Buffer otherBuf(400);

	otherBuf.resize(600);

 	return 1;
}