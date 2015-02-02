//
//  TopScene.h
//  Sprite
//
//  Created by MAEDAHAJIME on 2015/02/02.
//
//

#ifndef __Sprite__TopScene__
#define __Sprite__TopScene__

#include "cocos2d.h"

class TopScene : public cocos2d::Layer
{
public:
    
    virtual bool init();
    
    static cocos2d::Scene* createScene();
    
    CREATE_FUNC(TopScene);
};


#endif /* defined(__Label__Top__) */
