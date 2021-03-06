
/*
  +------------------------------------------------------------------------+
  | Phalcon Framework                                                      |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2014 Phalcon Team (http://www.phalconphp.com)       |
  +------------------------------------------------------------------------+
  | This source file is subject to the New BSD License that is bundled     |
  | with this package in the file docs/LICENSE.txt.                        |
  |                                                                        |
  | If you did not receive a copy of the license and are unable to         |
  | obtain it through the world-wide-web, please send an email             |
  | to license@phalconphp.com so we can send you a copy immediately.       |
  +------------------------------------------------------------------------+
  | Authors: Andres Gutierrez <andres@phalconphp.com>                      |
  |          Eduar Carvajal <eduar@phalconphp.com>                         |
  |          ZhuZongXin <dreamsxin@qq.com>                                 |
  +------------------------------------------------------------------------+
*/

#ifndef PHALCON_PROCESS_SHAREDMEMORY_H
#define PHALCON_PROCESS_SHAREDMEMORY_H

#include "php_phalcon.h"

extern int phalcon_sharedmemory_handle;
#define phalcon_sharedmemory_handle_name "sharedmemory"

extern zend_class_entry *phalcon_process_sharedmemory_ce;

PHALCON_INIT_CLASS(Phalcon_Process_Sharedmemory);

#endif /* PHALCON_PROCESS_SHAREDMEMORY_H */
