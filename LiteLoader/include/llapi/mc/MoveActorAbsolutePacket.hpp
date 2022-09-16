/**
 * @file  MoveActorAbsolutePacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveActorAbsolutePacket.
 *
 */
class MoveActorAbsolutePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEACTORABSOLUTEPACKET
public:
    class MoveActorAbsolutePacket& operator=(class MoveActorAbsolutePacket const &) = delete;
    MoveActorAbsolutePacket(class MoveActorAbsolutePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   943004529
     */
    virtual ~MoveActorAbsolutePacket();
    /**
     * @vftbl  1
     * @symbol ?getId@MoveActorAbsolutePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   1838101259
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@MoveActorAbsolutePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1621872056
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@MoveActorAbsolutePacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   262257615
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@MoveActorAbsolutePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -250118113
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0MoveActorAbsolutePacket@@QEAA@XZ
     * @hash   1970146719
     */
    MCAPI MoveActorAbsolutePacket();
    /**
     * @symbol ??0MoveActorAbsolutePacket@@QEAA@AEBVMoveActorAbsoluteData@@@Z
     * @hash   542957756
     */
    MCAPI MoveActorAbsolutePacket(class MoveActorAbsoluteData const &);

};