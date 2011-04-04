/*************************************************************************
                           ${file_base}  -  description
                             -------------------
    début                : ...
    copyright            : (C) 2011 par Arnaud Lahache
*************************************************************************/

//---------- Interface de la classe <${file_base}> (fichier ${file_name}) ------
#if ! defined ( ${include_guard_symbol} )
#define ${include_guard_symbol}

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <${file_base}>
//
//
//------------------------------------------------------------------------ 

class ${file_base} : public Ancetre
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
	// type Méthode ( liste des paramètres );
	// Mode d'emploi :
	//
	// Contrat :
	//


//------------------------------------------------- Surcharge d'opérateurs
	${file_base} & operator = ( const ${file_base} & un${file_base} );
	// Mode d'emploi :
	//
	// Contrat :
	//


//-------------------------------------------- Constructeurs - destructeur
	${file_base} ( const ${file_base} & un${file_base} );
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

    ${file_base} ( );
	// Mode d'emploi :
	//
	// Contrat :
	//

    virtual ~${file_base} ( );
	// Mode d'emploi :
	//
	// Contrat :
	//

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//--------------------------- Autres définitions dépendantes de <${file_base}>

#endif // ${include_guard_symbol}

