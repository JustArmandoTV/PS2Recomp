#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004224B0
// Address: 0x4224b0 - 0x4224d0
void sub_004224B0_0x4224b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004224B0_0x4224b0");
#endif

    ctx->pc = 0x4224b0u;

    // 0x4224b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4224b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4224b4: 0x2485ff9c  addiu       $a1, $a0, -0x64
    ctx->pc = 0x4224b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
    // 0x4224b8: 0x2442bc68  addiu       $v0, $v0, -0x4398
    ctx->pc = 0x4224b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949992));
    // 0x4224bc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4224bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4224c0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4224c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4224c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4224c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4224c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4224C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4224CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4224C8u;
            // 0x4224cc: 0xac650cd0  sw          $a1, 0xCD0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3280), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4224D0u;
}
