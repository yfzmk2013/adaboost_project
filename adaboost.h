//
// Created by yanhao on 17-1-18.
//

#ifndef _ADABOOST_H_
#define _ADABOOST_H_
#define MAX_FEATURE 100
#define MAX_SAMPLES 500
//#define DEBUG
struct Sample {
    //样本的权重
    double weight;
    //特征样本，样本的维数 <=MAX_FEATURE
    double feature[MAX_FEATURE];
    //样本的标签
    int indicate;
};
struct SampleHeader {
    //样本总数量
    int samplesNum;
    //样本特征的维数
    int featureNum;

    //double feature[MAX_SAMPLES][MAX_FEATURE];
    struct Sample samples[MAX_SAMPLES];

};

//分类器
struct Stump {
    int left;
    int right;
    double alpha;
    int fIdx;
    double ft;
};

struct Classifier {
    struct Stump stump;
    struct Classifier *next;
};


struct ClassifierHeader {
    int classifierNum;
    struct Classifier *classifier;
};
struct IdxHeader {
    int samplesNum;
    int featureNum;

    double feature[MAX_FEATURE][MAX_SAMPLES];

};

#endif
