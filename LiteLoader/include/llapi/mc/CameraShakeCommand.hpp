/**
 * @file  CameraShakeCommand.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CameraShakeCommand.
 *
 */
class CameraShakeCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAMERASHAKECOMMAND
public:
    class CameraShakeCommand& operator=(class CameraShakeCommand const &) = delete;
    CameraShakeCommand(class CameraShakeCommand const &) = delete;
    CameraShakeCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -173750284
     */
    virtual ~CameraShakeCommand();
    /**
     * @vftbl  1
     * @symbol ?execute@CameraShakeCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   -878156631
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?setup@CameraShakeCommand@@SAXAEAVCommandRegistry@@@Z
     * @hash   -1634103252
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @symbol ?_executeAdd@CameraShakeCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   -629870924
     */
    MCAPI void _executeAdd(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?_executeStop@CameraShakeCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   -1192941471
     */
    MCAPI void _executeStop(class CommandOrigin const &, class CommandOutput &) const;

private:

};