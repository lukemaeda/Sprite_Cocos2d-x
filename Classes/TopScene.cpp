//
//  TopScene.cpp
//  Sprite
//
//  Created by MAEDAHAJIME on 2015/02/02.
//
//

#include "TopScene.h"

// 名前空間 #define USING_NS_CC using namespace cocos2d
USING_NS_CC;

Scene* TopScene::createScene()
{
    // 「シーン」は自動解放オブジェクトです
    auto scene = Scene::create();
    
    // 「レイアウト」は自動解放オブジェクトです
    auto layer = TopScene::create();
    
    // シーンに子としてレイヤーを追加
    scene->addChild(layer);
    
    // シーンを返す
    return scene;
}


// 「INIT」初期化
bool TopScene::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    //画面サイズを取得
    Size winSize = Director::getInstance()->getVisibleSize();
    // バックグランドカラー（ブルー）
    auto background = LayerColor::create(Color4B::BLUE, winSize.width, winSize.height);
    // Layerにバックグランドを追加
    this->addChild(background);
        
    //_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
    
    //画像CCSpriteクラスを初期化しています。
    auto sprite = Sprite::create("Icon-152.png");
    
    //位置を設定
    sprite->setPosition(Vec2(680,400));
    
    //画面に追加をしています。
    this->addChild(sprite);
    
    return true;
}
