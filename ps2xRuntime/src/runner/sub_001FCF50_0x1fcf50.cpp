#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FCF50
// Address: 0x1fcf50 - 0x1fd000
void sub_001FCF50_0x1fcf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FCF50_0x1fcf50");
#endif

    switch (ctx->pc) {
        case 0x1fcf50u: goto label_1fcf50;
        case 0x1fcf54u: goto label_1fcf54;
        case 0x1fcf58u: goto label_1fcf58;
        case 0x1fcf5cu: goto label_1fcf5c;
        case 0x1fcf60u: goto label_1fcf60;
        case 0x1fcf64u: goto label_1fcf64;
        case 0x1fcf68u: goto label_1fcf68;
        case 0x1fcf6cu: goto label_1fcf6c;
        case 0x1fcf70u: goto label_1fcf70;
        case 0x1fcf74u: goto label_1fcf74;
        case 0x1fcf78u: goto label_1fcf78;
        case 0x1fcf7cu: goto label_1fcf7c;
        case 0x1fcf80u: goto label_1fcf80;
        case 0x1fcf84u: goto label_1fcf84;
        case 0x1fcf88u: goto label_1fcf88;
        case 0x1fcf8cu: goto label_1fcf8c;
        case 0x1fcf90u: goto label_1fcf90;
        case 0x1fcf94u: goto label_1fcf94;
        case 0x1fcf98u: goto label_1fcf98;
        case 0x1fcf9cu: goto label_1fcf9c;
        case 0x1fcfa0u: goto label_1fcfa0;
        case 0x1fcfa4u: goto label_1fcfa4;
        case 0x1fcfa8u: goto label_1fcfa8;
        case 0x1fcfacu: goto label_1fcfac;
        case 0x1fcfb0u: goto label_1fcfb0;
        case 0x1fcfb4u: goto label_1fcfb4;
        case 0x1fcfb8u: goto label_1fcfb8;
        case 0x1fcfbcu: goto label_1fcfbc;
        case 0x1fcfc0u: goto label_1fcfc0;
        case 0x1fcfc4u: goto label_1fcfc4;
        case 0x1fcfc8u: goto label_1fcfc8;
        case 0x1fcfccu: goto label_1fcfcc;
        case 0x1fcfd0u: goto label_1fcfd0;
        case 0x1fcfd4u: goto label_1fcfd4;
        case 0x1fcfd8u: goto label_1fcfd8;
        case 0x1fcfdcu: goto label_1fcfdc;
        case 0x1fcfe0u: goto label_1fcfe0;
        case 0x1fcfe4u: goto label_1fcfe4;
        case 0x1fcfe8u: goto label_1fcfe8;
        case 0x1fcfecu: goto label_1fcfec;
        case 0x1fcff0u: goto label_1fcff0;
        case 0x1fcff4u: goto label_1fcff4;
        case 0x1fcff8u: goto label_1fcff8;
        case 0x1fcffcu: goto label_1fcffc;
        default: break;
    }

    ctx->pc = 0x1fcf50u;

label_1fcf50:
    // 0x1fcf50: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1fcf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1fcf54:
    // 0x1fcf54: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1fcf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1fcf58:
    // 0x1fcf58: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1fcf58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1fcf5c:
    // 0x1fcf5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fcf5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1fcf60:
    // 0x1fcf60: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1fcf60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fcf64:
    // 0x1fcf64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fcf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fcf68:
    // 0x1fcf68: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1fcf68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fcf6c:
    // 0x1fcf6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fcf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fcf70:
    // 0x1fcf70: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1fcf70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fcf74:
    // 0x1fcf74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fcf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fcf78:
    // 0x1fcf78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fcf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fcf7c:
    // 0x1fcf7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fcf7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fcf80:
    // 0x1fcf80: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x1fcf80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fcf84:
    // 0x1fcf84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fcf84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fcf88:
    // 0x1fcf88: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1fcf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1fcf8c:
    // 0x1fcf8c: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x1fcf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1fcf90:
    // 0x1fcf90: 0xc0a456c  jal         func_2915B0
label_1fcf94:
    if (ctx->pc == 0x1FCF94u) {
        ctx->pc = 0x1FCF94u;
            // 0x1fcf94: 0x26460030  addiu       $a2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x1FCF98u;
        goto label_1fcf98;
    }
    ctx->pc = 0x1FCF90u;
    SET_GPR_U32(ctx, 31, 0x1FCF98u);
    ctx->pc = 0x1FCF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCF90u;
            // 0x1fcf94: 0x26460030  addiu       $a2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2915B0u;
    if (runtime->hasFunction(0x2915B0u)) {
        auto targetFn = runtime->lookupFunction(0x2915B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCF98u; }
        if (ctx->pc != 0x1FCF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002915B0_0x2915b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCF98u; }
        if (ctx->pc != 0x1FCF98u) { return; }
    }
    ctx->pc = 0x1FCF98u;
label_1fcf98:
    // 0x1fcf98: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1fcf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1fcf9c:
    // 0x1fcf9c: 0xafb0007c  sw          $s0, 0x7C($sp)
    ctx->pc = 0x1fcf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 16));
label_1fcfa0:
    // 0x1fcfa0: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x1fcfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_1fcfa4:
    // 0x1fcfa4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1fcfa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fcfa8:
    // 0x1fcfa8: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1fcfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1fcfac:
    // 0x1fcfac: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1fcfacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fcfb0:
    // 0x1fcfb0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fcfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fcfb4:
    // 0x1fcfb4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1fcfb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fcfb8:
    // 0x1fcfb8: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x1fcfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_1fcfbc:
    // 0x1fcfbc: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x1fcfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
label_1fcfc0:
    // 0x1fcfc0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1fcfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1fcfc4:
    // 0x1fcfc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fcfc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fcfc8:
    // 0x1fcfc8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1fcfc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1fcfcc:
    // 0x1fcfcc: 0x320f809  jalr        $t9
label_1fcfd0:
    if (ctx->pc == 0x1FCFD0u) {
        ctx->pc = 0x1FCFD0u;
            // 0x1fcfd0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1FCFD4u;
        goto label_1fcfd4;
    }
    ctx->pc = 0x1FCFCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FCFD4u);
        ctx->pc = 0x1FCFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCFCCu;
            // 0x1fcfd0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FCFD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FCFD4u; }
            if (ctx->pc != 0x1FCFD4u) { return; }
        }
        }
    }
    ctx->pc = 0x1FCFD4u;
label_1fcfd4:
    // 0x1fcfd4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1fcfd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1fcfd8:
    // 0x1fcfd8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1fcfd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fcfdc:
    // 0x1fcfdc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fcfdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fcfe0:
    // 0x1fcfe0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fcfe0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fcfe4:
    // 0x1fcfe4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fcfe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fcfe8:
    // 0x1fcfe8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fcfe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fcfec:
    // 0x1fcfec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fcfecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fcff0:
    // 0x1fcff0: 0x3e00008  jr          $ra
label_1fcff4:
    if (ctx->pc == 0x1FCFF4u) {
        ctx->pc = 0x1FCFF4u;
            // 0x1fcff4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1FCFF8u;
        goto label_1fcff8;
    }
    ctx->pc = 0x1FCFF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCFF0u;
            // 0x1fcff4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FCFF8u;
label_1fcff8:
    // 0x1fcff8: 0x0  nop
    ctx->pc = 0x1fcff8u;
    // NOP
label_1fcffc:
    // 0x1fcffc: 0x0  nop
    ctx->pc = 0x1fcffcu;
    // NOP
}
