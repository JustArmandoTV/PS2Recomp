#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00401820
// Address: 0x401820 - 0x401870
void sub_00401820_0x401820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00401820_0x401820");
#endif

    switch (ctx->pc) {
        case 0x401858u: goto label_401858;
        default: break;
    }

    ctx->pc = 0x401820u;

    // 0x401820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x401820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x401824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x401824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x401828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x401828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x40182c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x40182cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x401830: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x401830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401834: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x401834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x401838: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x401838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x40183c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x40183cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x401840: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x401840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x401844: 0x83a7002c  lb          $a3, 0x2C($sp)
    ctx->pc = 0x401844u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x401848: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x401848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x40184c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x40184cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401850: 0xc1007ec  jal         func_401FB0
    ctx->pc = 0x401850u;
    SET_GPR_U32(ctx, 31, 0x401858u);
    ctx->pc = 0x401854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x401850u;
            // 0x401854: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x401FB0u;
    if (runtime->hasFunction(0x401FB0u)) {
        auto targetFn = runtime->lookupFunction(0x401FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401858u; }
        if (ctx->pc != 0x401858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00401FB0_0x401fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401858u; }
        if (ctx->pc != 0x401858u) { return; }
    }
    ctx->pc = 0x401858u;
label_401858:
    // 0x401858: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x401858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40185c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40185cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x401860: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x401860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x401864: 0x3e00008  jr          $ra
    ctx->pc = 0x401864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x401868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401864u;
            // 0x401868: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40186Cu;
    // 0x40186c: 0x0  nop
    ctx->pc = 0x40186cu;
    // NOP
}
