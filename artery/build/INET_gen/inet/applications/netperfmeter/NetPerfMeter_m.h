//
// Generated file, do not edit! Created by nedtool 5.6 from /home/aniol/Downloads/artery/extern/inet/src/inet/applications/netperfmeter/NetPerfMeter.msg.
//

#ifndef __INET_NETPERFMETER_M_H
#define __INET_NETPERFMETER_M_H

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
#include "inet/transportlayer/contract/sctp/SCTPCommand_m.h"
// }}


namespace inet {

/**
 * Class generated from <tt>/home/aniol/Downloads/artery/extern/inet/src/inet/applications/netperfmeter/NetPerfMeter.msg:38</tt> by nedtool.
 * <pre>
 * message NetPerfMeterTransmitTimer
 * {
 *     unsigned int streamID;
 * }
 * </pre>
 */
class NetPerfMeterTransmitTimer : public ::omnetpp::cMessage
{
  protected:
    unsigned int streamID;

  private:
    void copy(const NetPerfMeterTransmitTimer& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const NetPerfMeterTransmitTimer&);

  public:
    NetPerfMeterTransmitTimer(const char *name=nullptr, short kind=0);
    NetPerfMeterTransmitTimer(const NetPerfMeterTransmitTimer& other);
    virtual ~NetPerfMeterTransmitTimer();
    NetPerfMeterTransmitTimer& operator=(const NetPerfMeterTransmitTimer& other);
    virtual NetPerfMeterTransmitTimer *dup() const override {return new NetPerfMeterTransmitTimer(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual unsigned int getStreamID() const;
    virtual void setStreamID(unsigned int streamID);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const NetPerfMeterTransmitTimer& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, NetPerfMeterTransmitTimer& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>/home/aniol/Downloads/artery/extern/inet/src/inet/applications/netperfmeter/NetPerfMeter.msg:44</tt> by nedtool.
 * <pre>
 * message NetPerfMeterDataMessage extends SCTPSimpleMessage
 * {
 * }
 * </pre>
 */
class NetPerfMeterDataMessage : public ::inet::SCTPSimpleMessage
{
  protected:

  private:
    void copy(const NetPerfMeterDataMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const NetPerfMeterDataMessage&);

  public:
    NetPerfMeterDataMessage();
    NetPerfMeterDataMessage(const NetPerfMeterDataMessage& other);
    virtual ~NetPerfMeterDataMessage();
    NetPerfMeterDataMessage& operator=(const NetPerfMeterDataMessage& other);
    virtual NetPerfMeterDataMessage *dup() const override {return new NetPerfMeterDataMessage(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const NetPerfMeterDataMessage& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, NetPerfMeterDataMessage& obj) {obj.parsimUnpack(b);}

} // namespace inet

#endif // ifndef __INET_NETPERFMETER_M_H

