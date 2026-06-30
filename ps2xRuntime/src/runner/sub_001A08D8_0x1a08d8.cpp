#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A08D8
// Address: 0x1a08d8 - 0x1a0908
void sub_001A08D8_0x1a08d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A08D8_0x1a08d8");
#endif

    ctx->pc = 0x1a08d8u;

    // 0x1a08d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a08d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a08dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a08dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a08e0: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x1a08e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1a08e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A08E4u;
    {
        const bool branch_taken_0x1a08e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A08E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A08E4u;
            // 0x1a08e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a08e4) {
            ctx->pc = 0x1A08F8u;
            goto label_1a08f8;
        }
    }
    ctx->pc = 0x1A08ECu;
    // 0x1a08ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a08ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a08f0: 0x8060148  j           func_180520
    ctx->pc = 0x1A08F0u;
    ctx->pc = 0x1A08F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A08F0u;
            // 0x1a08f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180520u;
    {
        auto targetFn = runtime->lookupFunction(0x180520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A08F8u;
label_1a08f8:
    // 0x1a08f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a08f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a08fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A08FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A08FCu;
            // 0x1a0900: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0904u;
    // 0x1a0904: 0x0  nop
    ctx->pc = 0x1a0904u;
    // NOP
}
