#if !defined(CONFIG_SIGN_CLASSIFICATION_H)
#define CONFIG_SIGN_CLASSIFICATION_H

#define DEBUG_WRITE_SIGN_CROPS false

#define SIGN_CLASSIFICATION_BATCH_SIZE 4
#define SIGN_CLASSIFICATION_N_CLASSES 15
#define SIGN_CLASSIFICATION_FORCE_REBUILD_ENGINE false
#define SIGN_CLASSIFICATION_MODEL \
    "models/traffic_sign/traffic_sign_classification_resnet18_64.uff"
#define SIGN_CLASSIFICATION_TENSORRT_PLAN \
    "models/traffic_sign/traffic_sign_classification_resnet18_64.engine"
#define SIGN_CLASSIFICATION_CLASS_LIST \
    "models/traffic_sign/classes.txt"
#define SIGN_CLASSIFICATION_USE_FP_16 true
#define SIGN_CLASSIFICATION_INPUT_WIDTH 64
#define SIGN_CLASSIFICATION_INPUT_HEIGHT 64
#define SIGN_CLASSIFICATION_INPUT_NODE "data"
#define SIGN_CLASSIFICATION_OUTPUT_NODE "dense/Softmax"

#define MIN_TRAFFIC_SIGN_SIZE 40
#define SIGN_CLASSIFICATION_THRESH 0.8

#endif // CONFIG_SIGN_CLASSIFICATION_H
