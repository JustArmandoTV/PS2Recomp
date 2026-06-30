#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051C830
// Address: 0x51c830 - 0x51c890
void sub_0051C830_0x51c830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051C830_0x51c830");
#endif

    switch (ctx->pc) {
        case 0x51c870u: goto label_51c870;
        default: break;
    }

    ctx->pc = 0x51c830u;

    // 0x51c830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51c830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51c834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51c834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51c838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51c838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51c83c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51c83cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51c840: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x51C840u;
    {
        const bool branch_taken_0x51c840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x51c840) {
            ctx->pc = 0x51C844u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51C840u;
            // 0x51c844: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51C874u;
            goto label_51c874;
        }
    }
    ctx->pc = 0x51C848u;
    // 0x51c848: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c84c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x51c84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x51c850: 0x24425af8  addiu       $v0, $v0, 0x5AF8
    ctx->pc = 0x51c850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23288));
    // 0x51c854: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x51c854u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x51c858: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x51c858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x51c85c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x51c85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x51c860: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x51C860u;
    {
        const bool branch_taken_0x51c860 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x51C864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C860u;
            // 0x51c864: 0xac400c78  sw          $zero, 0xC78($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51c860) {
            ctx->pc = 0x51C870u;
            goto label_51c870;
        }
    }
    ctx->pc = 0x51C868u;
    // 0x51c868: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x51C868u;
    SET_GPR_U32(ctx, 31, 0x51C870u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C870u; }
        if (ctx->pc != 0x51C870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C870u; }
        if (ctx->pc != 0x51C870u) { return; }
    }
    ctx->pc = 0x51C870u;
label_51c870:
    // 0x51c870: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51c870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51c874:
    // 0x51c874: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51c874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51c878: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51c878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51c87c: 0x3e00008  jr          $ra
    ctx->pc = 0x51C87Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C87Cu;
            // 0x51c880: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C884u;
    // 0x51c884: 0x0  nop
    ctx->pc = 0x51c884u;
    // NOP
    // 0x51c888: 0x0  nop
    ctx->pc = 0x51c888u;
    // NOP
    // 0x51c88c: 0x0  nop
    ctx->pc = 0x51c88cu;
    // NOP
}
