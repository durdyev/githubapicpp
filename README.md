# GITHub API C++ implementation
This is a C++ implementation of GITHub API. This API was built for my goals, 
may be not full api. But you can change source code for your goals under Apache 2.0 License.

Doxygen documentation available here https://codedocs.xyz/durdyev/githubapicpp/ 

### Dependecies

You need to install CURL and RapidJSON
### Installation

```sh
$ cmake .
$ make
$ sudo make install
```

### Example

```C++
#include <iostream>
#include <githubapicpp/GitHubAPI.h>

int main(void)
{
    githubapicpp::GitHubAPI api("your_client_id",
                                "your_secret");
    githubapicpp::User user = api.getUser("durdyev");
    std::cout << user.getName() << std::endl;
    return 0;
}
```
