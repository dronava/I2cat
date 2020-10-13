//
// Generated file, do not edit! Created by nedtool 5.6 from /home/aniol/Downloads/artery/extern/veins/src/veins/modules/messages/Mac80211Ack.msg.
//

#ifndef __VEINS_MAC80211ACK_M_H
#define __VEINS_MAC80211ACK_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0506
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
    #include "veins/modules/messages/Mac80211Pkt_m.h"
// }}


namespace veins {

/**
 * Class generated from <tt>/home/aniol/Downloads/artery/extern/veins/src/veins/modules/messages/Mac80211Ack.msg:31</tt> by nedtool.
 * <pre>
 * packet Mac80211Ack extends Mac80211Pkt
 * {
 *     unsigned long messageId; // The ID of the aknowledged packet
 * }
 * </pre>
 */
class Mac80211Ack : public ::veins::Mac80211Pkt
{
  protected:
    unsigned long messageId;

  private:
    void copy(const Mac80211Ack& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Mac80211Ack&);

  public:
    Mac80211Ack(const char *name=nullptr, short kind=0);
    Mac80211Ack(const Mac80211Ack& other);
    virtual ~Mac80211Ack();
    Mac80211Ack& operator=(const Mac80211Ack& other);
    virtual Mac80211Ack *dup() const override {return new Mac80211Ack(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual unsigned long getMessageId() const;
    virtual void setMessageId(unsigned long messageId);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Mac80211Ack& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Mac80211Ack& obj) {obj.parsimUnpack(b);}

} // namespace veins

#endif // ifndef __VEINS_MAC80211ACK_M_H

