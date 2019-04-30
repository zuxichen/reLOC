/*============================================================================*/
/*                                                                            */
/*                                                                            */
/*                              reLOC 0.20-kruh                               */
/*                                                                            */
/*                      (C) Copyright 2019 Pavel Surynek                      */
/*                http://www.surynek.com | <pavel@surynek.com>                */
/*                                                                            */
/*                                                                            */
/*============================================================================*/
<<<<<<< HEAD
/* compress_test.h / 0.20-kruh_055                                            */
=======
/* compress_test.h / 0.20-kruh_056                                            */
>>>>>>> f57c68398eae7b055f31a50698a3a79978214a2b
/*----------------------------------------------------------------------------*/
//
// Compression tools for relocation problem solutions - testing program.
//
/*----------------------------------------------------------------------------*/


#ifndef __COMPRESS_TEST_H__
#define __COMPRESS_TEST_H__

#include "reloc.h"

using namespace sReloc;


/*----------------------------------------------------------------------------*/

namespace sReloc
{


/*----------------------------------------------------------------------------*/

    void test_solution_compression_1(void);
    void test_solution_compression_2(void);

    void test_solution_deflation_1(void);

    void test_bibox_compression_1(const sString &filename);
    void test_bibox_compression_2(const sString &filename);

    void test_parallel_1(const sString &filename);
    void test_parallel_2(const sString &filename);
    void test_parallel_3(const sString &filename);


/*----------------------------------------------------------------------------*/

} // namespace sReloc


#endif /* __COMPRESS_TEST_H__ */
