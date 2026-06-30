#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029EA20
// Address: 0x29ea20 - 0x29ead0
void sub_0029EA20_0x29ea20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EA20_0x29ea20");
#endif

    switch (ctx->pc) {
        case 0x29ea20u: goto label_29ea20;
        case 0x29ea24u: goto label_29ea24;
        case 0x29ea28u: goto label_29ea28;
        case 0x29ea2cu: goto label_29ea2c;
        case 0x29ea30u: goto label_29ea30;
        case 0x29ea34u: goto label_29ea34;
        case 0x29ea38u: goto label_29ea38;
        case 0x29ea3cu: goto label_29ea3c;
        case 0x29ea40u: goto label_29ea40;
        case 0x29ea44u: goto label_29ea44;
        case 0x29ea48u: goto label_29ea48;
        case 0x29ea4cu: goto label_29ea4c;
        case 0x29ea50u: goto label_29ea50;
        case 0x29ea54u: goto label_29ea54;
        case 0x29ea58u: goto label_29ea58;
        case 0x29ea5cu: goto label_29ea5c;
        case 0x29ea60u: goto label_29ea60;
        case 0x29ea64u: goto label_29ea64;
        case 0x29ea68u: goto label_29ea68;
        case 0x29ea6cu: goto label_29ea6c;
        case 0x29ea70u: goto label_29ea70;
        case 0x29ea74u: goto label_29ea74;
        case 0x29ea78u: goto label_29ea78;
        case 0x29ea7cu: goto label_29ea7c;
        case 0x29ea80u: goto label_29ea80;
        case 0x29ea84u: goto label_29ea84;
        case 0x29ea88u: goto label_29ea88;
        case 0x29ea8cu: goto label_29ea8c;
        case 0x29ea90u: goto label_29ea90;
        case 0x29ea94u: goto label_29ea94;
        case 0x29ea98u: goto label_29ea98;
        case 0x29ea9cu: goto label_29ea9c;
        case 0x29eaa0u: goto label_29eaa0;
        case 0x29eaa4u: goto label_29eaa4;
        case 0x29eaa8u: goto label_29eaa8;
        case 0x29eaacu: goto label_29eaac;
        case 0x29eab0u: goto label_29eab0;
        case 0x29eab4u: goto label_29eab4;
        case 0x29eab8u: goto label_29eab8;
        case 0x29eabcu: goto label_29eabc;
        case 0x29eac0u: goto label_29eac0;
        case 0x29eac4u: goto label_29eac4;
        case 0x29eac8u: goto label_29eac8;
        case 0x29eaccu: goto label_29eacc;
        default: break;
    }

    ctx->pc = 0x29ea20u;

label_29ea20:
    // 0x29ea20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29ea20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29ea24:
    // 0x29ea24: 0x28a12001  slti        $at, $a1, 0x2001
    ctx->pc = 0x29ea24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8193) ? 1 : 0);
label_29ea28:
    // 0x29ea28: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
label_29ea2c:
    if (ctx->pc == 0x29EA2Cu) {
        ctx->pc = 0x29EA2Cu;
            // 0x29ea2c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x29EA30u;
        goto label_29ea30;
    }
    ctx->pc = 0x29EA28u;
    {
        const bool branch_taken_0x29ea28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EA28u;
            // 0x29ea2c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ea28) {
            ctx->pc = 0x29EAB0u;
            goto label_29eab0;
        }
    }
    ctx->pc = 0x29EA30u;
label_29ea30:
    // 0x29ea30: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x29ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_29ea34:
    // 0x29ea34: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
label_29ea38:
    if (ctx->pc == 0x29EA38u) {
        ctx->pc = 0x29EA38u;
            // 0x29ea38: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x29EA3Cu;
        goto label_29ea3c;
    }
    ctx->pc = 0x29EA34u;
    {
        const bool branch_taken_0x29ea34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ea34) {
            ctx->pc = 0x29EA38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29EA34u;
            // 0x29ea38: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29EAB4u;
            goto label_29eab4;
        }
    }
    ctx->pc = 0x29EA3Cu;
label_29ea3c:
    // 0x29ea3c: 0x28a10201  slti        $at, $a1, 0x201
    ctx->pc = 0x29ea3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)513) ? 1 : 0);
label_29ea40:
    // 0x29ea40: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_29ea44:
    if (ctx->pc == 0x29EA44u) {
        ctx->pc = 0x29EA44u;
            // 0x29ea44: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->pc = 0x29EA48u;
        goto label_29ea48;
    }
    ctx->pc = 0x29EA40u;
    {
        const bool branch_taken_0x29ea40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ea40) {
            ctx->pc = 0x29EA44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29EA40u;
            // 0x29ea44: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29EA54u;
            goto label_29ea54;
        }
    }
    ctx->pc = 0x29EA48u;
label_29ea48:
    // 0x29ea48: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x29ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_29ea4c:
    // 0x29ea4c: 0x10000005  b           . + 4 + (0x5 << 2)
label_29ea50:
    if (ctx->pc == 0x29EA50u) {
        ctx->pc = 0x29EA50u;
            // 0x29ea50: 0x804500f0  lb          $a1, 0xF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 240)));
        ctx->pc = 0x29EA54u;
        goto label_29ea54;
    }
    ctx->pc = 0x29EA4Cu;
    {
        const bool branch_taken_0x29ea4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EA4Cu;
            // 0x29ea50: 0x804500f0  lb          $a1, 0xF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ea4c) {
            ctx->pc = 0x29EA64u;
            goto label_29ea64;
        }
    }
    ctx->pc = 0x29EA54u;
label_29ea54:
    // 0x29ea54: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x29ea54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
label_29ea58:
    // 0x29ea58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_29ea5c:
    // 0x29ea5c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29ea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_29ea60:
    // 0x29ea60: 0x8c4502f4  lw          $a1, 0x2F4($v0)
    ctx->pc = 0x29ea60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 756)));
label_29ea64:
    // 0x29ea64: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x29ea64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_29ea68:
    // 0x29ea68: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x29ea68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_29ea6c:
    // 0x29ea6c: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x29ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_29ea70:
    // 0x29ea70: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_29ea74:
    if (ctx->pc == 0x29EA74u) {
        ctx->pc = 0x29EA74u;
            // 0x29ea74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29EA78u;
        goto label_29ea78;
    }
    ctx->pc = 0x29EA70u;
    {
        const bool branch_taken_0x29ea70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ea70) {
            ctx->pc = 0x29EA74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29EA70u;
            // 0x29ea74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29EA90u;
            goto label_29ea90;
        }
    }
    ctx->pc = 0x29EA78u;
label_29ea78:
    // 0x29ea78: 0x8cc30028  lw          $v1, 0x28($a2)
    ctx->pc = 0x29ea78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_29ea7c:
    // 0x29ea7c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29ea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_29ea80:
    // 0x29ea80: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x29ea80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
label_29ea84:
    // 0x29ea84: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x29ea84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_29ea88:
    // 0x29ea88: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29ea88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29ea8c:
    // 0x29ea8c: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x29ea8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
label_29ea90:
    // 0x29ea90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_29ea94:
    if (ctx->pc == 0x29EA94u) {
        ctx->pc = 0x29EA98u;
        goto label_29ea98;
    }
    ctx->pc = 0x29EA90u;
    {
        const bool branch_taken_0x29ea90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ea90) {
            ctx->pc = 0x29EAA0u;
            goto label_29eaa0;
        }
    }
    ctx->pc = 0x29EA98u;
label_29ea98:
    // 0x29ea98: 0x1000000b  b           . + 4 + (0xB << 2)
label_29ea9c:
    if (ctx->pc == 0x29EA9Cu) {
        ctx->pc = 0x29EA9Cu;
            // 0x29ea9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x29EAA0u;
        goto label_29eaa0;
    }
    ctx->pc = 0x29EA98u;
    {
        const bool branch_taken_0x29ea98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EA98u;
            // 0x29ea9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ea98) {
            ctx->pc = 0x29EAC8u;
            goto label_29eac8;
        }
    }
    ctx->pc = 0x29EAA0u;
label_29eaa0:
    // 0x29eaa0: 0xc0a79c0  jal         func_29E700
label_29eaa4:
    if (ctx->pc == 0x29EAA4u) {
        ctx->pc = 0x29EAA8u;
        goto label_29eaa8;
    }
    ctx->pc = 0x29EAA0u;
    SET_GPR_U32(ctx, 31, 0x29EAA8u);
    ctx->pc = 0x29E700u;
    if (runtime->hasFunction(0x29E700u)) {
        auto targetFn = runtime->lookupFunction(0x29E700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EAA8u; }
        if (ctx->pc != 0x29EAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E700_0x29e700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EAA8u; }
        if (ctx->pc != 0x29EAA8u) { return; }
    }
    ctx->pc = 0x29EAA8u;
label_29eaa8:
    // 0x29eaa8: 0x10000006  b           . + 4 + (0x6 << 2)
label_29eaac:
    if (ctx->pc == 0x29EAACu) {
        ctx->pc = 0x29EAB0u;
        goto label_29eab0;
    }
    ctx->pc = 0x29EAA8u;
    {
        const bool branch_taken_0x29eaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29eaa8) {
            ctx->pc = 0x29EAC4u;
            goto label_29eac4;
        }
    }
    ctx->pc = 0x29EAB0u;
label_29eab0:
    // 0x29eab0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x29eab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_29eab4:
    // 0x29eab4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29eab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29eab8:
    // 0x29eab8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x29eab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_29eabc:
    // 0x29eabc: 0x320f809  jalr        $t9
label_29eac0:
    if (ctx->pc == 0x29EAC0u) {
        ctx->pc = 0x29EAC4u;
        goto label_29eac4;
    }
    ctx->pc = 0x29EABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29EAC4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x29EAC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29EAC4u; }
            if (ctx->pc != 0x29EAC4u) { return; }
        }
        }
    }
    ctx->pc = 0x29EAC4u;
label_29eac4:
    // 0x29eac4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29eac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29eac8:
    // 0x29eac8: 0x3e00008  jr          $ra
label_29eacc:
    if (ctx->pc == 0x29EACCu) {
        ctx->pc = 0x29EACCu;
            // 0x29eacc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x29EAD0u;
        goto label_fallthrough_0x29eac8;
    }
    ctx->pc = 0x29EAC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EAC8u;
            // 0x29eacc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x29eac8:
    ctx->pc = 0x29EAD0u;
}
