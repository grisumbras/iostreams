// (C) Copyright Jonathan Turkanis 2003.
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt.)

// See http://www.boost.org/libs/iostreams for documentation.

#ifndef BOOST_IOSTREAMS_IS_FILTER_HPP_INCLUDED
#define BOOST_IOSTREAMS_IS_FILTER_HPP_INCLUDED

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
# pragma once
#endif              

#include <boost/iostreams/categories.hpp>
#include <boost/iostreams/detail/has_trait.hpp>

namespace boost { namespace iostreams {

template<typename T>
struct is_filter
    : detail::has_trait<T, filter_tag>
    { };

} } // End namespaces iostreams, boost.

#endif // #ifndef BOOST_IOSTREAMS_IS_FILTER_HPP_INCLUDED