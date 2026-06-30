#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051C1D0
// Address: 0x51c1d0 - 0x51c210
void sub_0051C1D0_0x51c1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051C1D0_0x51c1d0");
#endif

    ctx->pc = 0x51c1d0u;

    // 0x51c1d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x51c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x51c1d4: 0x24424a48  addiu       $v0, $v0, 0x4A48
    ctx->pc = 0x51c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19016));
    // 0x51c1d8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x51c1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x51c1dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51c1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x51c1e0: 0xac44e428  sw          $a0, -0x1BD8($v0)
    ctx->pc = 0x51c1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960168), GPR_U32(ctx, 4));
    // 0x51c1e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x51c1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x51c1e8: 0x24424a60  addiu       $v0, $v0, 0x4A60
    ctx->pc = 0x51c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19040));
    // 0x51c1ec: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x51c1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x51c1f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x51c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x51c1f4: 0x244249f0  addiu       $v0, $v0, 0x49F0
    ctx->pc = 0x51c1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18928));
    // 0x51c1f8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x51c1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x51c1fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x51c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x51c200: 0x244249fc  addiu       $v0, $v0, 0x49FC
    ctx->pc = 0x51c200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18940));
    // 0x51c204: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x51c204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x51c208: 0x3e00008  jr          $ra
    ctx->pc = 0x51C208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C208u;
            // 0x51c20c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C210u;
}
