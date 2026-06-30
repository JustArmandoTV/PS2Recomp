#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00224A80
// Address: 0x224a80 - 0x224ac0
void sub_00224A80_0x224a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224A80_0x224a80");
#endif

    switch (ctx->pc) {
        case 0x224a80u: goto label_224a80;
        case 0x224a84u: goto label_224a84;
        case 0x224a88u: goto label_224a88;
        case 0x224a8cu: goto label_224a8c;
        case 0x224a90u: goto label_224a90;
        case 0x224a94u: goto label_224a94;
        case 0x224a98u: goto label_224a98;
        case 0x224a9cu: goto label_224a9c;
        case 0x224aa0u: goto label_224aa0;
        case 0x224aa4u: goto label_224aa4;
        case 0x224aa8u: goto label_224aa8;
        case 0x224aacu: goto label_224aac;
        case 0x224ab0u: goto label_224ab0;
        case 0x224ab4u: goto label_224ab4;
        case 0x224ab8u: goto label_224ab8;
        case 0x224abcu: goto label_224abc;
        default: break;
    }

    ctx->pc = 0x224a80u;

label_224a80:
    // 0x224a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_224a84:
    // 0x224a84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x224a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_224a88:
    // 0x224a88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x224a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_224a8c:
    // 0x224a8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x224a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_224a90:
    // 0x224a90: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x224a90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_224a94:
    // 0x224a94: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x224a94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_224a98:
    // 0x224a98: 0x320f809  jalr        $t9
label_224a9c:
    if (ctx->pc == 0x224A9Cu) {
        ctx->pc = 0x224A9Cu;
            // 0x224a9c: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->pc = 0x224AA0u;
        goto label_224aa0;
    }
    ctx->pc = 0x224A98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x224AA0u);
        ctx->pc = 0x224A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224A98u;
            // 0x224a9c: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x224AA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x224AA0u; }
            if (ctx->pc != 0x224AA0u) { return; }
        }
        }
    }
    ctx->pc = 0x224AA0u;
label_224aa0:
    // 0x224aa0: 0xc08923c  jal         func_2248F0
label_224aa4:
    if (ctx->pc == 0x224AA4u) {
        ctx->pc = 0x224AA4u;
            // 0x224aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x224AA8u;
        goto label_224aa8;
    }
    ctx->pc = 0x224AA0u;
    SET_GPR_U32(ctx, 31, 0x224AA8u);
    ctx->pc = 0x224AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224AA0u;
            // 0x224aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2248F0u;
    if (runtime->hasFunction(0x2248F0u)) {
        auto targetFn = runtime->lookupFunction(0x2248F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224AA8u; }
        if (ctx->pc != 0x224AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002248F0_0x2248f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224AA8u; }
        if (ctx->pc != 0x224AA8u) { return; }
    }
    ctx->pc = 0x224AA8u;
label_224aa8:
    // 0x224aa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x224aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_224aac:
    // 0x224aac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x224aacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_224ab0:
    // 0x224ab0: 0x3e00008  jr          $ra
label_224ab4:
    if (ctx->pc == 0x224AB4u) {
        ctx->pc = 0x224AB4u;
            // 0x224ab4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x224AB8u;
        goto label_224ab8;
    }
    ctx->pc = 0x224AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224AB0u;
            // 0x224ab4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x224AB8u;
label_224ab8:
    // 0x224ab8: 0x0  nop
    ctx->pc = 0x224ab8u;
    // NOP
label_224abc:
    // 0x224abc: 0x0  nop
    ctx->pc = 0x224abcu;
    // NOP
}
