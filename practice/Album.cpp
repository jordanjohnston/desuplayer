#include "album.h"

using std::vector;
using std::wstring;

Album::Album()
{
	m_title = L"";
	m_artistName = L"";
	m_trackList = vector<Song>();
}

Album::Album(const wstring& title, const wstring& artistName, vector<Song> trackList)
	:m_title(title), m_artistName(artistName), m_trackList(trackList)
{
}

Album::Album(const wstring& title, const wstring& artistName)
	:m_title(title), m_artistName(artistName)
{
	m_trackList = vector<Song>();
}

Album::~Album()
{
}

wstring Album::getTitle() const
{
	return m_title;
}

void Album::setTitle(const wstring& title)
{
	m_title = title;
}

wstring Album::getArtistName() const
{
	return m_artistName;
}

void Album::setArtistName(const wstring& artistName)
{
	m_artistName = artistName;
}

vector<Song> Album::getTrackList() const
{
	return m_trackList;
}

Song Album::getTrackAt(int pos) const
{
	if (pos < 0 || pos > m_trackList.size() - 1)
		return Song();

	return m_trackList.at(pos);
}

void Album::setTrackAt(int pos, Song song)
{
	m_trackList.push_back(song);
}
