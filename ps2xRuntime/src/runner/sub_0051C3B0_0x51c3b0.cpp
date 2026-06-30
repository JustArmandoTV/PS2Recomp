#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051C3B0
// Address: 0x51c3b0 - 0x51c400
void sub_0051C3B0_0x51c3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051C3B0_0x51c3b0");
#endif

    ctx->pc = 0x51c3b0u;

    // 0x51c3b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x51c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x51c3b4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x51c3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x51c3b8: 0x2442fa50  addiu       $v0, $v0, -0x5B0
    ctx->pc = 0x51c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965840));
    // 0x51c3bc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x51c3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x51c3c0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x51c3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x51c3c4: 0x24a5fa20  addiu       $a1, $a1, -0x5E0
    ctx->pc = 0x51c3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965792));
    // 0x51c3c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x51c3cc: 0x2463fa2c  addiu       $v1, $v1, -0x5D4
    ctx->pc = 0x51c3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965804));
    // 0x51c3d0: 0xac44e418  sw          $a0, -0x1BE8($v0)
    ctx->pc = 0x51c3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960152), GPR_U32(ctx, 4));
    // 0x51c3d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x51c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x51c3d8: 0x24422fa0  addiu       $v0, $v0, 0x2FA0
    ctx->pc = 0x51c3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12192));
    // 0x51c3dc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x51c3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x51c3e0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x51c3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x51c3e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x51c3e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51c3e8: 0xa080000c  sb          $zero, 0xC($a0)
    ctx->pc = 0x51c3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x51c3ec: 0xa080000d  sb          $zero, 0xD($a0)
    ctx->pc = 0x51c3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x51c3f0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x51c3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x51c3f4: 0x3e00008  jr          $ra
    ctx->pc = 0x51C3F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C3F4u;
            // 0x51c3f8: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C3FCu;
    // 0x51c3fc: 0x0  nop
    ctx->pc = 0x51c3fcu;
    // NOP
}
