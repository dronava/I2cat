//
// Generated file, do not edit! Created by nedtool 5.6 from /home/aniol/Downloads/artery/src/artery/utility/AsioData.msg.
//

#ifndef __ASIODATA_M_H
#define __ASIODATA_M_H

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
#include <array>
#include <cstdint>
typedef std::array<uint8_t, 1024> AsioBuffer;
typedef std::size_t AsioLength;
// }}

/**
 * Class generated from <tt>/home/aniol/Downloads/artery/src/artery/utility/AsioData.msg:24</tt> by nedtool.
 * <pre>
 * message AsioData
 * {
 *     AsioBuffer Buffer;
 *     int Length;
 * }
 * </pre>
 */
class AsioData : public ::omnetpp::cMessage
{
  protected:
    AsioBuffer Buffer;
    int Length;

  private:
    void copy(const AsioData& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const AsioData&);

  public:
    AsioData(const char *name=nullptr, short kind=0);
    AsioData(const AsioData& other);
    virtual ~AsioData();
    AsioData& operator=(const AsioData& other);
    virtual AsioData *dup() const override {return new AsioData(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual AsioBuffer& getBuffer();
    virtual const AsioBuffer& getBuffer() const {return const_cast<AsioData*>(this)->getBuffer();}
    virtual void setBuffer(const AsioBuffer& Buffer);
    virtual int getLength() const;
    virtual void setLength(int Length);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const AsioData& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, AsioData& obj) {obj.parsimUnpack(b);}


#endif // ifndef __ASIODATA_M_H

