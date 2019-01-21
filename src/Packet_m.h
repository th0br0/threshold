//
// Generated file, do not edit! Created by nedtool 5.4 from Packet.msg.
//

#if defined(__clang__)
#pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __PACKET_M_H
#define __PACKET_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0504
#if (MSGC_VERSION != OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

/**
 * Class generated from <tt>Packet.msg:16</tt> by nedtool.
 * <pre>
 * packet Packet
 * {
 *     int srcAddr \@packetData;
 *     int packetType = 0; // 0 = honest, 1 = spam
 * }
 * </pre>
 */
class Packet : public ::omnetpp::cPacket {
 protected:
  int srcAddr;
  int packetType;

 private:
  void copy(const Packet& other);

 protected:
  // protected and unimplemented operator==(), to prevent accidental usage
  bool operator==(const Packet&);

 public:
  Packet(const char* name = nullptr, short kind = 0);
  Packet(const Packet& other);
  virtual ~Packet();
  Packet& operator=(const Packet& other);
  virtual Packet* dup() const override { return new Packet(*this); }
  virtual void parsimPack(omnetpp::cCommBuffer* b) const override;
  virtual void parsimUnpack(omnetpp::cCommBuffer* b) override;

  // field getter/setter methods
  virtual int getSrcAddr() const;
  virtual void setSrcAddr(int srcAddr);
  virtual int getPacketType() const;
  virtual void setPacketType(int packetType);
};

inline void doParsimPacking(omnetpp::cCommBuffer* b, const Packet& obj) {
  obj.parsimPack(b);
}
inline void doParsimUnpacking(omnetpp::cCommBuffer* b, Packet& obj) {
  obj.parsimUnpack(b);
}

#endif  // ifndef __PACKET_M_H
