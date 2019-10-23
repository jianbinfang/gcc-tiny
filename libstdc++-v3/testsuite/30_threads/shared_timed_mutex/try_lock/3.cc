// { dg-do run { target *-*-freebsd* *-*-dragonfly* *-*-netbsd* *-*-linux* *-*-solaris* *-*-cygwin *-*-rtems* *-*-darwin* powerpc-ibm-aix* } }
// { dg-options " -std=gnu++14 -pthread" { target *-*-freebsd* *-*-dragonfly* *-*-netbsd* *-*-linux* powerpc-ibm-aix* } }
// { dg-options " -std=gnu++14 -pthreads" { target *-*-solaris* } }
// { dg-options " -std=gnu++14 " { target *-*-cygwin *-*-rtems* *-*-darwin* } }
// { dg-require-cstdint "" }
// { dg-require-gthreads "" }

// Copyright (C) 2013-2015 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.


#include <shared_mutex>
#include <thread>
#include <system_error>
#include <testsuite_hooks.h>

int main()
{
  bool test __attribute__((unused)) = true;
  typedef std::shared_timed_mutex mutex_type;

  try
    {
      mutex_type m;
      m.lock();
      bool b;

      std::thread t([&] {
        try
          {
            using namespace std::chrono;
            auto timeout = 100ms;
            auto start = system_clock::now();
            b = m.try_lock_for(timeout);
            auto t = system_clock::now() - start;
            VERIFY( !b );
            VERIFY( t >= timeout );

            start = system_clock::now();
            b = m.try_lock_until(start + timeout);
            t = system_clock::now() - start;
            VERIFY( !b );
            VERIFY( t >= timeout );
          }
        catch (const std::system_error& e)
          {
            VERIFY( false );
          }
      });
      t.join();
      m.unlock();
    }
  catch (const std::system_error& e)
    {
      VERIFY( false );
    }
  catch (...)
    {
      VERIFY( false );
    }
}
