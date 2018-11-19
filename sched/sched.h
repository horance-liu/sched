#ifndef H82C7978C_7E61_4DFB_AABE_57AAA61DAF81DGGET
#define H82C7978C_7E61_4DFB_AABE_57AAA61DAF81DGGET

#define SCHED_NS sched
#define SCHED_NS_BEGIN namespace SCHED_NS {
#define SCHED_NS_END }
#define USING_SCHED_NS using namespace SCHED_NS;
#define FWD_DECL_SCHED(type) namespace SCHED_NS { struct type; }

#endif
