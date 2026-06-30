#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002518A0
// Address: 0x2518a0 - 0x251920
void sub_002518A0_0x2518a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002518A0_0x2518a0");
#endif

    switch (ctx->pc) {
        case 0x2518e0u: goto label_2518e0;
        default: break;
    }

    ctx->pc = 0x2518a0u;

    // 0x2518a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2518a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2518a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2518a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2518a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2518a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2518ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2518acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2518b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2518b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2518b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2518b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2518b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2518b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2518bc: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2518bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2518c0: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x2518c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2518c4: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x2518c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x2518c8: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x2518c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x2518cc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2518CCu;
    {
        const bool branch_taken_0x2518cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2518D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2518CCu;
            // 0x2518d0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2518cc) {
            ctx->pc = 0x2518E0u;
            goto label_2518e0;
        }
    }
    ctx->pc = 0x2518D4u;
    // 0x2518d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2518d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2518d8: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x2518D8u;
    SET_GPR_U32(ctx, 31, 0x2518E0u);
    ctx->pc = 0x2518DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2518D8u;
            // 0x2518dc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2518E0u; }
        if (ctx->pc != 0x2518E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2518E0u; }
        if (ctx->pc != 0x2518E0u) { return; }
    }
    ctx->pc = 0x2518E0u;
label_2518e0:
    // 0x2518e0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2518e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2518e4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2518e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2518e8: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x2518e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2518ec: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2518ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2518f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2518f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2518f4: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2518f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2518f8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2518f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2518fc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2518fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x251900: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x251900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x251904: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x251904u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x251908: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x251908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25190c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25190cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251910: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x251910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251914: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x251914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251918: 0x3e00008  jr          $ra
    ctx->pc = 0x251918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25191Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251918u;
            // 0x25191c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x251920u;
}
