#include "bar.hpp"

#include <ostream>

#include "foo.hpp"

namespace bar {

    void say_stuff(std::ostream& stream) {
        foo::say_hello(stream);
        stream << "Stuff\n";
    }

} // namespace bar
