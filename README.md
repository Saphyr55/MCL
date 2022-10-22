
# Minimal Console Logger (MCL)


## How to use

```cpp
#include <mcl/Logger.hpp>
```

```cpp
std::string error = "error";
std::string debug = "debug";
std::string info = "info";
std::string warning = "warning";
```

```cpp
mcl::Log::Warning() << "this is a " << warning;
mcl::Log::Debug() << "this is a " << debug;
mcl::Log::Info() << "this is an " << info;
mcl::Log::Error() << "this is an " << error;
```


## Result

![console result](https://github.com/Saphyr55/MCL/blob/master/res/result.png)


## Authors

- [@Saphyr55](https://www.github.com/Saphyr55)

