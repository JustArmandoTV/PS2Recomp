#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022B460
// Address: 0x22b460 - 0x22b4d0
void sub_0022B460_0x22b460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B460_0x22b460");
#endif

    switch (ctx->pc) {
        case 0x22b498u: goto label_22b498;
        default: break;
    }

    ctx->pc = 0x22b460u;

    // 0x22b460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22b460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22b464: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22b464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22b468: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22b468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22b46c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22b46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22b470: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x22b470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x22b474: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22b474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b478: 0x8c85005c  lw          $a1, 0x5C($a0)
    ctx->pc = 0x22b478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x22b47c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x22b47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x22b480: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x22b480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x22b484: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22B484u;
    {
        const bool branch_taken_0x22b484 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x22B488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B484u;
            // 0x22b488: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b484) {
            ctx->pc = 0x22B498u;
            goto label_22b498;
        }
    }
    ctx->pc = 0x22B48Cu;
    // 0x22b48c: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x22b48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x22b490: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x22B490u;
    SET_GPR_U32(ctx, 31, 0x22B498u);
    ctx->pc = 0x22B494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B490u;
            // 0x22b494: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B498u; }
        if (ctx->pc != 0x22B498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B498u; }
        if (ctx->pc != 0x22B498u) { return; }
    }
    ctx->pc = 0x22B498u;
label_22b498:
    // 0x22b498: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x22b498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x22b49c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x22b49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x22b4a0: 0xae23005c  sw          $v1, 0x5C($s1)
    ctx->pc = 0x22b4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 3));
    // 0x22b4a4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x22b4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22b4a8: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x22b4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x22b4ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22b4b0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x22b4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x22b4b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22b4b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b4b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22b4b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b4bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22b4bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x22B4C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B4C0u;
            // 0x22b4c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22B4C8u;
    // 0x22b4c8: 0x0  nop
    ctx->pc = 0x22b4c8u;
    // NOP
    // 0x22b4cc: 0x0  nop
    ctx->pc = 0x22b4ccu;
    // NOP
}
