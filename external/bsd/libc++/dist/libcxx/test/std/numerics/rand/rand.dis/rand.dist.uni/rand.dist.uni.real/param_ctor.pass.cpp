//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <random>

// template<class RealType = double>
// class uniform_real_distribution
// {
//     class param_type;

#include <random>
#include <limits>
#include <cassert>

int main()
{
    {
        typedef std::uniform_real_distribution<float> D;
        typedef D::param_type param_type;
        param_type p;
        assert(p.a() == 0);
        assert(p.b() == 1);
    }
    {
        typedef std::uniform_real_distribution<float> D;
        typedef D::param_type param_type;
        param_type p(5);
        assert(p.a() == 5);
        assert(p.b() == 1);
    }
    {
        typedef std::uniform_real_distribution<float> D;
        typedef D::param_type param_type;
        param_type p(5, 10);
        assert(p.a() == 5);
        assert(p.b() == 10);
    }
}
