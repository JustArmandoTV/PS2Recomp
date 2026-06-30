#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026AA60
// Address: 0x26aa60 - 0x26aae0
void sub_0026AA60_0x26aa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026AA60_0x26aa60");
#endif

    switch (ctx->pc) {
        case 0x26aa60u: goto label_26aa60;
        case 0x26aa64u: goto label_26aa64;
        case 0x26aa68u: goto label_26aa68;
        case 0x26aa6cu: goto label_26aa6c;
        case 0x26aa70u: goto label_26aa70;
        case 0x26aa74u: goto label_26aa74;
        case 0x26aa78u: goto label_26aa78;
        case 0x26aa7cu: goto label_26aa7c;
        case 0x26aa80u: goto label_26aa80;
        case 0x26aa84u: goto label_26aa84;
        case 0x26aa88u: goto label_26aa88;
        case 0x26aa8cu: goto label_26aa8c;
        case 0x26aa90u: goto label_26aa90;
        case 0x26aa94u: goto label_26aa94;
        case 0x26aa98u: goto label_26aa98;
        case 0x26aa9cu: goto label_26aa9c;
        case 0x26aaa0u: goto label_26aaa0;
        case 0x26aaa4u: goto label_26aaa4;
        case 0x26aaa8u: goto label_26aaa8;
        case 0x26aaacu: goto label_26aaac;
        case 0x26aab0u: goto label_26aab0;
        case 0x26aab4u: goto label_26aab4;
        case 0x26aab8u: goto label_26aab8;
        case 0x26aabcu: goto label_26aabc;
        case 0x26aac0u: goto label_26aac0;
        case 0x26aac4u: goto label_26aac4;
        case 0x26aac8u: goto label_26aac8;
        case 0x26aaccu: goto label_26aacc;
        case 0x26aad0u: goto label_26aad0;
        case 0x26aad4u: goto label_26aad4;
        case 0x26aad8u: goto label_26aad8;
        case 0x26aadcu: goto label_26aadc;
        default: break;
    }

    ctx->pc = 0x26aa60u;

label_26aa60:
    // 0x26aa60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26aa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_26aa64:
    // 0x26aa64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26aa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_26aa68:
    // 0x26aa68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26aa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_26aa6c:
    // 0x26aa6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26aa6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_26aa70:
    // 0x26aa70: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x26aa70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26aa74:
    // 0x26aa74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26aa74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_26aa78:
    // 0x26aa78: 0x80a30004  lb          $v1, 0x4($a1)
    ctx->pc = 0x26aa78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
label_26aa7c:
    // 0x26aa7c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_26aa80:
    if (ctx->pc == 0x26AA80u) {
        ctx->pc = 0x26AA80u;
            // 0x26aa80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26AA84u;
        goto label_26aa84;
    }
    ctx->pc = 0x26AA7Cu;
    {
        const bool branch_taken_0x26aa7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26AA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AA7Cu;
            // 0x26aa80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aa7c) {
            ctx->pc = 0x26AAC8u;
            goto label_26aac8;
        }
    }
    ctx->pc = 0x26AA84u;
label_26aa84:
    // 0x26aa84: 0x82030064  lb          $v1, 0x64($s0)
    ctx->pc = 0x26aa84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
label_26aa88:
    // 0x26aa88: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_26aa8c:
    if (ctx->pc == 0x26AA8Cu) {
        ctx->pc = 0x26AA90u;
        goto label_26aa90;
    }
    ctx->pc = 0x26AA88u;
    {
        const bool branch_taken_0x26aa88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26aa88) {
            ctx->pc = 0x26AAC8u;
            goto label_26aac8;
        }
    }
    ctx->pc = 0x26AA90u;
label_26aa90:
    // 0x26aa90: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26aa90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_26aa94:
    // 0x26aa94: 0x8e450070  lw          $a1, 0x70($s2)
    ctx->pc = 0x26aa94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_26aa98:
    // 0x26aa98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x26aa98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_26aa9c:
    // 0x26aa9c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x26aa9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_26aaa0:
    // 0x26aaa0: 0x320f809  jalr        $t9
label_26aaa4:
    if (ctx->pc == 0x26AAA4u) {
        ctx->pc = 0x26AAA4u;
            // 0x26aaa4: 0x26510070  addiu       $s1, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->pc = 0x26AAA8u;
        goto label_26aaa8;
    }
    ctx->pc = 0x26AAA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26AAA8u);
        ctx->pc = 0x26AAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AAA0u;
            // 0x26aaa4: 0x26510070  addiu       $s1, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26AAA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26AAA8u; }
            if (ctx->pc != 0x26AAA8u) { return; }
        }
        }
    }
    ctx->pc = 0x26AAA8u;
label_26aaa8:
    // 0x26aaa8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26aaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_26aaac:
    // 0x26aaac: 0x8e450074  lw          $a1, 0x74($s2)
    ctx->pc = 0x26aaacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_26aab0:
    // 0x26aab0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x26aab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_26aab4:
    // 0x26aab4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x26aab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_26aab8:
    // 0x26aab8: 0x320f809  jalr        $t9
label_26aabc:
    if (ctx->pc == 0x26AABCu) {
        ctx->pc = 0x26AABCu;
            // 0x26aabc: 0x26500074  addiu       $s0, $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
        ctx->pc = 0x26AAC0u;
        goto label_26aac0;
    }
    ctx->pc = 0x26AAB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26AAC0u);
        ctx->pc = 0x26AABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AAB8u;
            // 0x26aabc: 0x26500074  addiu       $s0, $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26AAC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26AAC0u; }
            if (ctx->pc != 0x26AAC0u) { return; }
        }
        }
    }
    ctx->pc = 0x26AAC0u;
label_26aac0:
    // 0x26aac0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x26aac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_26aac4:
    // 0x26aac4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x26aac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_26aac8:
    // 0x26aac8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26aac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_26aacc:
    // 0x26aacc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26aaccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26aad0:
    // 0x26aad0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26aad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26aad4:
    // 0x26aad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26aad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26aad8:
    // 0x26aad8: 0x3e00008  jr          $ra
label_26aadc:
    if (ctx->pc == 0x26AADCu) {
        ctx->pc = 0x26AADCu;
            // 0x26aadc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x26AAE0u;
        goto label_fallthrough_0x26aad8;
    }
    ctx->pc = 0x26AAD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AAD8u;
            // 0x26aadc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x26aad8:
    ctx->pc = 0x26AAE0u;
}
