#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051C810
// Address: 0x51c810 - 0x51c830
void sub_0051C810_0x51c810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051C810_0x51c810");
#endif

    ctx->pc = 0x51c810u;

    // 0x51c810: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c814: 0x24425af8  addiu       $v0, $v0, 0x5AF8
    ctx->pc = 0x51c814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23288));
    // 0x51c818: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x51c818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x51c81c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x51c81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x51c820: 0xac440c78  sw          $a0, 0xC78($v0)
    ctx->pc = 0x51c820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3192), GPR_U32(ctx, 4));
    // 0x51c824: 0x3e00008  jr          $ra
    ctx->pc = 0x51C824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C824u;
            // 0x51c828: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C82Cu;
    // 0x51c82c: 0x0  nop
    ctx->pc = 0x51c82cu;
    // NOP
}
