#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("test.bd");
db.setUserName("sioud");//inserer nom de l'utilisateur
db.setPassword("sioud");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;

//dfs



    return  test;
}

