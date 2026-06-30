#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00387860
// Address: 0x387860 - 0x387880
void sub_00387860_0x387860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387860_0x387860");
#endif

    ctx->pc = 0x387860u;

    // 0x387860: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x387860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x387864: 0x2485ff9c  addiu       $a1, $a0, -0x64
    ctx->pc = 0x387864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
    // 0x387868: 0x24427ab0  addiu       $v0, $v0, 0x7AB0
    ctx->pc = 0x387868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31408));
    // 0x38786c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x38786cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x387870: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x387870u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x387874: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x387874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387878: 0x3e00008  jr          $ra
    ctx->pc = 0x387878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38787Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x387878u;
            // 0x38787c: 0xac656118  sw          $a1, 0x6118($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24856), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x387880u;
}
