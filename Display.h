#pragma once
class Display
{
	int Width;
	int Height;
	int NumberOfColoursSupport;

public:
	Display(const int width, const int height, const int numberOfColoursSupport)
	{
		this->Width = width;
		this->Height = height;
		this->NumberOfColoursSupport = numberOfColoursSupport;
	}

	int GetDisplayWidth() const
	{
		return this->Width;
	}

	void SetDisplayWidth(const int newWidth)
	{
		this->Width = newWidth;
	}

	int GetDisplayHeight() const
	{
		return this->Height;
	}

	void SetDisplayHeight(const int newHeight)
	{
		this->Height = newHeight;
	}

	int GetNumberOfColoursSupport() const
	{
		return this->NumberOfColoursSupport;
	}

	void SetNumberOfColoursSupport(const int numberOfColours)
	{
		this->NumberOfColoursSupport = numberOfColours;
	}

};

