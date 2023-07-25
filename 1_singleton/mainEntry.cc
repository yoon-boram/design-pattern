#include "singleton.h"

//namespace xeniagear{
//namespace application{

int main(void){
	xeniagear::application::IGraphicBackend igb = xeniagear::application::IGraphicBackend::getInstance();

	igb.print();

	
	return 0;
}

//}
//}

