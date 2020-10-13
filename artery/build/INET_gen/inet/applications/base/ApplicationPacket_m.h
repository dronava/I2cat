//
// Generated file, do not edit! Created by nedtool 5.6 from /home/aniol/Downloads/artery/extern/inet/src/inet/applications/base/ApplicationPacket.msg.
//

#ifndef __INET_APPLICATIONPACKET_M_H
#define __INET_APPLICATIONPACKET_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0506
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif


namespace inet {

/**
 * Class generated from <tt>/home/aniol/Downloads/artery/extern/inet/src/inet/applications/base/ApplicationPacket.msg:24</tt> by nedtool.
 * <pre>
 * //
 * // Generic application packet
 * //
 * packet ApplicationPacket
 * {
 *     long sequenceNumber;
 * }
 * </pre>
 */
class ApplicationPacket : public ::omnetpp::cPacket
{
  protected:
    long sequenceNumber;

  private:
    void copy(const ApplicationPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ApplicationPacket&);

  public:
    ApplicationPacket(const char *name=nullptr, short kind=0);
    ApplicationPacket(const ApplicationPacket& other);
    virtual ~ApplicationPacket();
    ApplicationPacket& operator=(const ApplicationPacket& other);
    virtual ApplicationPacket *dup() const override {return new ApplicationPacket(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual long getSequenceNumber() const;
    virtual void setSequenceNumber(long sequenceNumber);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const ApplicationPacket& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, ApplicationPacket& obj) {obj.parsimUnpack(b);}

} // namespace inet

#endif // ifndef __INET_APPLICATIONPACKET_M_H

