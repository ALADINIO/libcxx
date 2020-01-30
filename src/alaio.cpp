#pragma once

/**
 * Define specific things for the alaio system
 */

extern "C" {
   void alaio_assert(unsigned int, const char*);
   void __cxa_pure_virtual() { alaio_assert(false, "pure virtual method called"); }
}
