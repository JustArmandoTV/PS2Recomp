#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BF580
// Address: 0x2bf580 - 0x2bf5a0
void sub_002BF580_0x2bf580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF580_0x2bf580");
#endif

    ctx->pc = 0x2bf580u;

    // 0x2bf580: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bf580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bf584: 0x2485ff9c  addiu       $a1, $a0, -0x64
    ctx->pc = 0x2bf584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
    // 0x2bf588: 0x24421ad0  addiu       $v0, $v0, 0x1AD0
    ctx->pc = 0x2bf588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6864));
    // 0x2bf58c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2bf58cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2bf590: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2bf590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2bf594: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2bf594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf598: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF598u;
            // 0x2bf59c: 0xac650d30  sw          $a1, 0xD30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3376), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BF5A0u;
}
