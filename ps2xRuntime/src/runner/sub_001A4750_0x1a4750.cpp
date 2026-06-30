#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A4750
// Address: 0x1a4750 - 0x1a47a0
void sub_001A4750_0x1a4750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4750_0x1a4750");
#endif

    ctx->pc = 0x1a4750u;

    // 0x1a4750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4754: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1a4754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a475c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a475cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4760: 0x24851080  addiu       $a1, $a0, 0x1080
    ctx->pc = 0x1a4760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4224));
    // 0x1a4764: 0x8c832074  lw          $v1, 0x2074($a0)
    ctx->pc = 0x1a4764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8308)));
    // 0x1a4768: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x1a4768u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x1a476c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A476Cu;
    {
        const bool branch_taken_0x1a476c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A476Cu;
            // 0x1a4770: 0x8c670000  lw          $a3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a476c) {
            ctx->pc = 0x1A4784u;
            goto label_1a4784;
        }
    }
    ctx->pc = 0x1A4774u;
    // 0x1a4774: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x1a4774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1a4778: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a4778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a477c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A477Cu;
    {
        const bool branch_taken_0x1a477c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A4780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A477Cu;
            // 0x1a4780: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a477c) {
            ctx->pc = 0x1A4798u;
            goto label_1a4798;
        }
    }
    ctx->pc = 0x1A4784u;
label_1a4784:
    // 0x1a4784: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4788: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1a4788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a478c: 0x80691fa  j           func_1A47E8
    ctx->pc = 0x1A478Cu;
    ctx->pc = 0x1A4790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A478Cu;
            // 0x1a4790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A47E8u;
    {
        auto targetFn = runtime->lookupFunction(0x1A47E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A4794u;
    // 0x1a4794: 0x0  nop
    ctx->pc = 0x1a4794u;
    // NOP
label_1a4798:
    // 0x1a4798: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A479Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4798u;
            // 0x1a479c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A47A0u;
}
