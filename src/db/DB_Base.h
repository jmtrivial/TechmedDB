#ifndef DB_BASE_H
#define DB_BASE_H

#include <iostream>
#include <QtSql\qsqldatabase.h>
#include <QtSql\qsqlquery>
#include <QtSql\qsqltablemodel>
#include <qstring.h>
#include "DataBaseInteractor.h"

class DB_Base
{
protected:
	QSqlDatabase *m_DataBasePtr;
	QString m_TABLENAME;
	
public:
	DB_Base();
	virtual ~DB_Base() = 0;

	QSqlQuery GetFromDB( QString Querry );
};

#endif // DB_BASE_H