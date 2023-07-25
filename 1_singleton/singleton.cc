#include "singleton.h"

using xeniagear::application::IGraphicBackend;
using std::cout;
using std::endl;

namespace xeniagear{
namespace application{

	static IGraphicBackend* g_instance = nullptr;
	IGraphicBackend::IGraphicBackend(){}
	IGraphicBackend& IGraphicBackend::getInstance(){
		if(g_instance == nullptr){
			g_instance = new IGraphicBackend();
			printf("Creating new IGraphicBackend instance\n");
		}
		return *g_instance;
	}

	void IGraphicBackend::print(void){
		cout<<"In IGraphicBackend::print"<<endl;
	}

} // namespace application
} // namespace xeniagear
