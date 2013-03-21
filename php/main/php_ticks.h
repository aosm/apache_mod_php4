/*
   +----------------------------------------------------------------------+
   | PHP Version 4                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2007 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Author: Stig Bakken <ssb@fast.no>                                    |
   +----------------------------------------------------------------------+
*/

/* $Id: php_ticks.h,v 1.8.8.1.8.2 2007/01/01 09:46:50 sebastian Exp $ */

#ifndef PHP_TICKS_H
#define PHP_TICKS_H

int php_startup_ticks(TSRMLS_D);
void php_shutdown_ticks(TSRMLS_D);
void php_run_ticks(int count);
PHPAPI void php_add_tick_function(void (*func)(int));
PHPAPI void php_remove_tick_function(void (*func)(int));

#endif

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 */