#include<iostream>

namespace xeniagear{
namespace application{

class IGraphicBackend{
public:
	static IGraphicBackend& getInstance();
	void print(void);
//private:
	IGraphicBackend();
};


} // namespace application
} // namespace xeniagear
