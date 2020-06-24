//
// Created by Chunel on 2020/5/24.
// 同步管理的逻辑处理
//

#ifndef CHUNELCAISS_SYNCMANAGEPROC_H
#define CHUNELCAISS_SYNCMANAGEPROC_H

#include "../ManageProc.h"

class SyncManageProc : public ManageProc  {
public:
    SyncManageProc(unsigned int maxSize, CAISS_ALGO_TYPE algoType) : ManageProc(maxSize, algoType) {
    }

    ~SyncManageProc() override = default;

    CAISS_RET_TYPE train(void *handle, const char *dataPath, unsigned int maxDataSize, CAISS_BOOL normalize,
                         unsigned int maxIndexSize, float precision, unsigned int fastRank,
                         unsigned int realRank, unsigned int step, unsigned int maxEpoch,
                         unsigned int showSpan) override ;

    CAISS_RET_TYPE search(void *handle, void *info, CAISS_SEARCH_TYPE searchType, unsigned int topK, CAISS_SEARCH_CALLBACK searchCBFunc, const void *cbParams) override ;
    CAISS_RET_TYPE getResultSize(void *handle, unsigned int &size) override ;
    CAISS_RET_TYPE getResult(void *handle, char *result, unsigned int size) override ;
};


#endif //CHUNELCAISS_SYNCMANAGEPROC_H
