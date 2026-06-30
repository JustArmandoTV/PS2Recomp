#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00251820
// Address: 0x251820 - 0x2518a0
void sub_00251820_0x251820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251820_0x251820");
#endif

    switch (ctx->pc) {
        case 0x251860u: goto label_251860;
        default: break;
    }

    ctx->pc = 0x251820u;

    // 0x251820: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x251820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x251824: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x251824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x251828: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x251828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25182c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25182cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x251830: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x251830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251834: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x251834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x251838: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x251838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25183c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x25183cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x251840: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x251840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x251844: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x251844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x251848: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x251848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x25184c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25184Cu;
    {
        const bool branch_taken_0x25184c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x251850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25184Cu;
            // 0x251850: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25184c) {
            ctx->pc = 0x251860u;
            goto label_251860;
        }
    }
    ctx->pc = 0x251854u;
    // 0x251854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x251854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251858: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x251858u;
    SET_GPR_U32(ctx, 31, 0x251860u);
    ctx->pc = 0x25185Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251858u;
            // 0x25185c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251860u; }
        if (ctx->pc != 0x251860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251860u; }
        if (ctx->pc != 0x251860u) { return; }
    }
    ctx->pc = 0x251860u;
label_251860:
    // 0x251860: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x251860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x251864: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x251864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x251868: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x251868u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x25186c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x25186cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x251870: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x251870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x251874: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x251874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x251878: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x251878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x25187c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x25187cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x251880: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x251880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x251884: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x251884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x251888: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x251888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25188c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25188cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251890: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x251890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251894: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x251894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251898: 0x3e00008  jr          $ra
    ctx->pc = 0x251898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25189Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251898u;
            // 0x25189c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2518A0u;
}
