#include <mysql.h>

MYSQL *mysql_init(MYSQL *)

	MYSQL *mysql_real_connect(MYSQL *connection,
			const char *server_host,
			const char *sql_user_name,
			const char *sql_password,
			const char *db_name,
			unsigned int port)number,
	const char*unix_socket_name,
	unsigned int flags);


