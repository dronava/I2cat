//
// Generated file, do not edit! Created by nedtool 5.6 from /home/aniol/Downloads/artery/extern/inet/src/inet/transportlayer/rtp/reports.msg.
//

#ifndef __INET__RTP_REPORTS_M_H
#define __INET__RTP_REPORTS_M_H

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
namespace rtp {

/**
 * Class generated from <tt>/home/aniol/Downloads/artery/extern/inet/src/inet/transportlayer/rtp/reports.msg:17</tt> by nedtool.
 * <pre>
 * //
 * // Represents an RTP sender report as contained
 * // in an ~RTCPSenderReportPacket.
 * //
 * class SenderReport
 * {
 *     \@customize(true);
 * 
 *     // The ntp time stamp.
 *     uint64 NTPTimeStamp;
 * 
 *     // The rtp time stamp.
 *     uint32 RTPTimeStamp;
 * 
 *     // The number of packets sent.
 *     uint32 packetCount;
 * 
 *     // The number of (payload) bytes sent.
 *     uint32 byteCount;
 * }
 * </pre>
 *
 * SenderReport_Base is only useful if it gets subclassed, and SenderReport is derived from it.
 * The minimum code to be written for SenderReport is the following:
 *
 * <pre>
 * class SenderReport : public SenderReport_Base
 * {
 *   private:
 *     void copy(const SenderReport& other) { ... }

 *   public:
 *     SenderReport() : SenderReport_Base() {}
 *     SenderReport(const SenderReport& other) : SenderReport_Base(other) {copy(other);}
 *     SenderReport& operator=(const SenderReport& other) {if (this==&other) return *this; SenderReport_Base::operator=(other); copy(other); return *this;}
 *     virtual SenderReport *dup() const override {return new SenderReport(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from SenderReport_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(SenderReport)
 * </pre>
 */
class SenderReport_Base : public ::omnetpp::cObject
{
  protected:
    uint64_t NTPTimeStamp;
    uint32_t RTPTimeStamp;
    uint32_t packetCount;
    uint32_t byteCount;

  private:
    void copy(const SenderReport_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SenderReport_Base&);
    // make constructors protected to avoid instantiation
    SenderReport_Base();
    SenderReport_Base(const SenderReport_Base& other);
    // make assignment operator protected to force the user override it
    SenderReport_Base& operator=(const SenderReport_Base& other);

  public:
    virtual ~SenderReport_Base();
    virtual SenderReport_Base *dup() const override {throw omnetpp::cRuntimeError("You forgot to manually add a dup() function to class SenderReport");}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual uint64_t getNTPTimeStamp() const;
    virtual void setNTPTimeStamp(uint64_t NTPTimeStamp);
    virtual uint32_t getRTPTimeStamp() const;
    virtual void setRTPTimeStamp(uint32_t RTPTimeStamp);
    virtual uint32_t getPacketCount() const;
    virtual void setPacketCount(uint32_t packetCount);
    virtual uint32_t getByteCount() const;
    virtual void setByteCount(uint32_t byteCount);
};

/**
 * Class generated from <tt>/home/aniol/Downloads/artery/extern/inet/src/inet/transportlayer/rtp/reports.msg:38</tt> by nedtool.
 * <pre>
 * //
 * // Rrepresents an RTP receiver report stored
 * // in an RTPSenderReportPacket or RTPReceiverReport.
 * //
 * class ReceptionReport
 * {
 *     \@customize(true);
 * 
 *     // The ssrc identifier of the sender this ~ReceptionReport is for.
 *     uint32 ssrc;
 * 
 *     // The fraction lost.
 *     uint8 fractionLost;
 * 
 *     // The number of packets expected minus the number of packets received.
 *     int packetsLostCumulative;
 * 
 *     // The extended highest sequence number received.
 *     uint32 sequenceNumber;
 * 
 *     // The interarrival jitter.
 *     int jitter;
 * 
 *     // The rtp time stamp of the last ~SenderReport received from this source.
 *     int lastSR;
 * 
 *     // The delay since the last ~SenderReport from this sender has been
 *     // received in units of 1/65536 seconds.
 *     int delaySinceLastSR;
 * }
 * </pre>
 *
 * ReceptionReport_Base is only useful if it gets subclassed, and ReceptionReport is derived from it.
 * The minimum code to be written for ReceptionReport is the following:
 *
 * <pre>
 * class ReceptionReport : public ReceptionReport_Base
 * {
 *   private:
 *     void copy(const ReceptionReport& other) { ... }

 *   public:
 *     ReceptionReport() : ReceptionReport_Base() {}
 *     ReceptionReport(const ReceptionReport& other) : ReceptionReport_Base(other) {copy(other);}
 *     ReceptionReport& operator=(const ReceptionReport& other) {if (this==&other) return *this; ReceptionReport_Base::operator=(other); copy(other); return *this;}
 *     virtual ReceptionReport *dup() const override {return new ReceptionReport(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from ReceptionReport_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(ReceptionReport)
 * </pre>
 */
class ReceptionReport_Base : public ::omnetpp::cObject
{
  protected:
    uint32_t ssrc;
    uint8_t fractionLost;
    int packetsLostCumulative;
    uint32_t sequenceNumber;
    int jitter;
    int lastSR;
    int delaySinceLastSR;

  private:
    void copy(const ReceptionReport_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ReceptionReport_Base&);
    // make constructors protected to avoid instantiation
    ReceptionReport_Base();
    ReceptionReport_Base(const ReceptionReport_Base& other);
    // make assignment operator protected to force the user override it
    ReceptionReport_Base& operator=(const ReceptionReport_Base& other);

  public:
    virtual ~ReceptionReport_Base();
    virtual ReceptionReport_Base *dup() const override {throw omnetpp::cRuntimeError("You forgot to manually add a dup() function to class ReceptionReport");}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual uint32_t getSsrc() const;
    virtual void setSsrc(uint32_t ssrc);
    virtual uint8_t getFractionLost() const;
    virtual void setFractionLost(uint8_t fractionLost);
    virtual int getPacketsLostCumulative() const;
    virtual void setPacketsLostCumulative(int packetsLostCumulative);
    virtual uint32_t getSequenceNumber() const;
    virtual void setSequenceNumber(uint32_t sequenceNumber);
    virtual int getJitter() const;
    virtual void setJitter(int jitter);
    virtual int getLastSR() const;
    virtual void setLastSR(int lastSR);
    virtual int getDelaySinceLastSR() const;
    virtual void setDelaySinceLastSR(int delaySinceLastSR);
};

} // namespace rtp
} // namespace inet

#endif // ifndef __INET__RTP_REPORTS_M_H

