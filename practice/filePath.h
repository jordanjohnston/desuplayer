#ifndef FILEPATH_H
#define FILEPATH_H

#include <string>

#include "songFormat.h"

class FilePath
{
public:
	FilePath();
	FilePath(std::wstring wideFilePath, std::string u8FilePath);
	~FilePath();

	template <class Archive>
	void save(Archive& archive) const
	{
		archive(wideFilePath, u8FilePath, format, fileName);
	}

	template <class Archive>
	void load(Archive& archive)
	{
		archive(wideFilePath, u8FilePath, format, fileName);
	}

	std::wstring wideFilePath;
	std::string u8FilePath;
	std::wstring fileName;
	SongFormat format;

};

#endif // !FILEPATH_H
