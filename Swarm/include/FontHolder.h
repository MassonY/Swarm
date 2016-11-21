////////////////////////////////////////////////////////////
// < Fichier : "FontHolder.h"> 
// < Author : Yohan "HadesFufu" Masson >
////////////////////////////////////////////////////////////

#ifndef FONTHOLDER_H
#define FONTHOLDER_H


#include "Singleton.h"
#include "Log.h"
#include <memory>

class FontHolder : public Singleton<FontHolder>
{
	friend class Singleton<FontHolder>;
public:
	////////////////////////////////////////////////////////////
    // getFont Func
	// @effect : not as textureHolder put the extension in the name of the file.
    ////////////////////////////////////////////////////////////
	sf::Font* getFont(const std::string& asName);

private:
	////////////////////////////////////////////////////////////
    // Constructor
    ////////////////////////////////////////////////////////////
	FontHolder();
	FontHolder(const FontHolder&) = delete;

	////////////////////////////////////////////////////////////
    // Desctructor
    ////////////////////////////////////////////////////////////
	~FontHolder();

private:
	////////////////////////////////////////////////////////////
    // Container
    ////////////////////////////////////////////////////////////
	std::map<std::string, std::unique_ptr<sf::Font>> m_Fonts;

	////////////////////////////////////////////////////////////
    // Constant Path
    ////////////////////////////////////////////////////////////
	const std::string								 m_Font_Path;
};

#endif 