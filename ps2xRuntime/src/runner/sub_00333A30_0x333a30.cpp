#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00333A30
// Address: 0x333a30 - 0x333be0
void sub_00333A30_0x333a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333A30_0x333a30");
#endif

    switch (ctx->pc) {
        case 0x333a30u: goto label_333a30;
        case 0x333a34u: goto label_333a34;
        case 0x333a38u: goto label_333a38;
        case 0x333a3cu: goto label_333a3c;
        case 0x333a40u: goto label_333a40;
        case 0x333a44u: goto label_333a44;
        case 0x333a48u: goto label_333a48;
        case 0x333a4cu: goto label_333a4c;
        case 0x333a50u: goto label_333a50;
        case 0x333a54u: goto label_333a54;
        case 0x333a58u: goto label_333a58;
        case 0x333a5cu: goto label_333a5c;
        case 0x333a60u: goto label_333a60;
        case 0x333a64u: goto label_333a64;
        case 0x333a68u: goto label_333a68;
        case 0x333a6cu: goto label_333a6c;
        case 0x333a70u: goto label_333a70;
        case 0x333a74u: goto label_333a74;
        case 0x333a78u: goto label_333a78;
        case 0x333a7cu: goto label_333a7c;
        case 0x333a80u: goto label_333a80;
        case 0x333a84u: goto label_333a84;
        case 0x333a88u: goto label_333a88;
        case 0x333a8cu: goto label_333a8c;
        case 0x333a90u: goto label_333a90;
        case 0x333a94u: goto label_333a94;
        case 0x333a98u: goto label_333a98;
        case 0x333a9cu: goto label_333a9c;
        case 0x333aa0u: goto label_333aa0;
        case 0x333aa4u: goto label_333aa4;
        case 0x333aa8u: goto label_333aa8;
        case 0x333aacu: goto label_333aac;
        case 0x333ab0u: goto label_333ab0;
        case 0x333ab4u: goto label_333ab4;
        case 0x333ab8u: goto label_333ab8;
        case 0x333abcu: goto label_333abc;
        case 0x333ac0u: goto label_333ac0;
        case 0x333ac4u: goto label_333ac4;
        case 0x333ac8u: goto label_333ac8;
        case 0x333accu: goto label_333acc;
        case 0x333ad0u: goto label_333ad0;
        case 0x333ad4u: goto label_333ad4;
        case 0x333ad8u: goto label_333ad8;
        case 0x333adcu: goto label_333adc;
        case 0x333ae0u: goto label_333ae0;
        case 0x333ae4u: goto label_333ae4;
        case 0x333ae8u: goto label_333ae8;
        case 0x333aecu: goto label_333aec;
        case 0x333af0u: goto label_333af0;
        case 0x333af4u: goto label_333af4;
        case 0x333af8u: goto label_333af8;
        case 0x333afcu: goto label_333afc;
        case 0x333b00u: goto label_333b00;
        case 0x333b04u: goto label_333b04;
        case 0x333b08u: goto label_333b08;
        case 0x333b0cu: goto label_333b0c;
        case 0x333b10u: goto label_333b10;
        case 0x333b14u: goto label_333b14;
        case 0x333b18u: goto label_333b18;
        case 0x333b1cu: goto label_333b1c;
        case 0x333b20u: goto label_333b20;
        case 0x333b24u: goto label_333b24;
        case 0x333b28u: goto label_333b28;
        case 0x333b2cu: goto label_333b2c;
        case 0x333b30u: goto label_333b30;
        case 0x333b34u: goto label_333b34;
        case 0x333b38u: goto label_333b38;
        case 0x333b3cu: goto label_333b3c;
        case 0x333b40u: goto label_333b40;
        case 0x333b44u: goto label_333b44;
        case 0x333b48u: goto label_333b48;
        case 0x333b4cu: goto label_333b4c;
        case 0x333b50u: goto label_333b50;
        case 0x333b54u: goto label_333b54;
        case 0x333b58u: goto label_333b58;
        case 0x333b5cu: goto label_333b5c;
        case 0x333b60u: goto label_333b60;
        case 0x333b64u: goto label_333b64;
        case 0x333b68u: goto label_333b68;
        case 0x333b6cu: goto label_333b6c;
        case 0x333b70u: goto label_333b70;
        case 0x333b74u: goto label_333b74;
        case 0x333b78u: goto label_333b78;
        case 0x333b7cu: goto label_333b7c;
        case 0x333b80u: goto label_333b80;
        case 0x333b84u: goto label_333b84;
        case 0x333b88u: goto label_333b88;
        case 0x333b8cu: goto label_333b8c;
        case 0x333b90u: goto label_333b90;
        case 0x333b94u: goto label_333b94;
        case 0x333b98u: goto label_333b98;
        case 0x333b9cu: goto label_333b9c;
        case 0x333ba0u: goto label_333ba0;
        case 0x333ba4u: goto label_333ba4;
        case 0x333ba8u: goto label_333ba8;
        case 0x333bacu: goto label_333bac;
        case 0x333bb0u: goto label_333bb0;
        case 0x333bb4u: goto label_333bb4;
        case 0x333bb8u: goto label_333bb8;
        case 0x333bbcu: goto label_333bbc;
        case 0x333bc0u: goto label_333bc0;
        case 0x333bc4u: goto label_333bc4;
        case 0x333bc8u: goto label_333bc8;
        case 0x333bccu: goto label_333bcc;
        case 0x333bd0u: goto label_333bd0;
        case 0x333bd4u: goto label_333bd4;
        case 0x333bd8u: goto label_333bd8;
        case 0x333bdcu: goto label_333bdc;
        default: break;
    }

    ctx->pc = 0x333a30u;

label_333a30:
    // 0x333a30: 0x3e00008  jr          $ra
label_333a34:
    if (ctx->pc == 0x333A34u) {
        ctx->pc = 0x333A38u;
        goto label_333a38;
    }
    ctx->pc = 0x333A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x333A38u;
label_333a38:
    // 0x333a38: 0x0  nop
    ctx->pc = 0x333a38u;
    // NOP
label_333a3c:
    // 0x333a3c: 0x0  nop
    ctx->pc = 0x333a3cu;
    // NOP
label_333a40:
    // 0x333a40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x333a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_333a44:
    // 0x333a44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x333a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_333a48:
    // 0x333a48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x333a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_333a4c:
    // 0x333a4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x333a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_333a50:
    // 0x333a50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x333a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_333a54:
    // 0x333a54: 0x8c850778  lw          $a1, 0x778($a0)
    ctx->pc = 0x333a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1912)));
label_333a58:
    // 0x333a58: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_333a5c:
    if (ctx->pc == 0x333A5Cu) {
        ctx->pc = 0x333A5Cu;
            // 0x333a5c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x333A60u;
        goto label_333a60;
    }
    ctx->pc = 0x333A58u;
    {
        const bool branch_taken_0x333a58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x333A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333A58u;
            // 0x333a5c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333a58) {
            ctx->pc = 0x333A68u;
            goto label_333a68;
        }
    }
    ctx->pc = 0x333A60u;
label_333a60:
    // 0x333a60: 0x10000042  b           . + 4 + (0x42 << 2)
label_333a64:
    if (ctx->pc == 0x333A64u) {
        ctx->pc = 0x333A64u;
            // 0x333a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x333A68u;
        goto label_333a68;
    }
    ctx->pc = 0x333A60u;
    {
        const bool branch_taken_0x333a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333A60u;
            // 0x333a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333a60) {
            ctx->pc = 0x333B6Cu;
            goto label_333b6c;
        }
    }
    ctx->pc = 0x333A68u;
label_333a68:
    // 0x333a68: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x333a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_333a6c:
    // 0x333a6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x333a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_333a70:
    // 0x333a70: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x333a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_333a74:
    // 0x333a74: 0xc0ab89c  jal         func_2AE270
label_333a78:
    if (ctx->pc == 0x333A78u) {
        ctx->pc = 0x333A78u;
            // 0x333a78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x333A7Cu;
        goto label_333a7c;
    }
    ctx->pc = 0x333A74u;
    SET_GPR_U32(ctx, 31, 0x333A7Cu);
    ctx->pc = 0x333A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333A74u;
            // 0x333a78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333A7Cu; }
        if (ctx->pc != 0x333A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333A7Cu; }
        if (ctx->pc != 0x333A7Cu) { return; }
    }
    ctx->pc = 0x333A7Cu;
label_333a7c:
    // 0x333a7c: 0xc0cce1c  jal         func_333870
label_333a80:
    if (ctx->pc == 0x333A80u) {
        ctx->pc = 0x333A80u;
            // 0x333a80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x333A84u;
        goto label_333a84;
    }
    ctx->pc = 0x333A7Cu;
    SET_GPR_U32(ctx, 31, 0x333A84u);
    ctx->pc = 0x333A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333A7Cu;
            // 0x333a80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x333870u;
    if (runtime->hasFunction(0x333870u)) {
        auto targetFn = runtime->lookupFunction(0x333870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333A84u; }
        if (ctx->pc != 0x333A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00333870_0x333870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333A84u; }
        if (ctx->pc != 0x333A84u) { return; }
    }
    ctx->pc = 0x333A84u;
label_333a84:
    // 0x333a84: 0xc0ccda0  jal         func_333680
label_333a88:
    if (ctx->pc == 0x333A88u) {
        ctx->pc = 0x333A88u;
            // 0x333a88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x333A8Cu;
        goto label_333a8c;
    }
    ctx->pc = 0x333A84u;
    SET_GPR_U32(ctx, 31, 0x333A8Cu);
    ctx->pc = 0x333A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333A84u;
            // 0x333a88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x333680u;
    if (runtime->hasFunction(0x333680u)) {
        auto targetFn = runtime->lookupFunction(0x333680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333A8Cu; }
        if (ctx->pc != 0x333A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00333680_0x333680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333A8Cu; }
        if (ctx->pc != 0x333A8Cu) { return; }
    }
    ctx->pc = 0x333A8Cu;
label_333a8c:
    // 0x333a8c: 0xc0ccc00  jal         func_333000
label_333a90:
    if (ctx->pc == 0x333A90u) {
        ctx->pc = 0x333A90u;
            // 0x333a90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x333A94u;
        goto label_333a94;
    }
    ctx->pc = 0x333A8Cu;
    SET_GPR_U32(ctx, 31, 0x333A94u);
    ctx->pc = 0x333A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333A8Cu;
            // 0x333a90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x333000u;
    if (runtime->hasFunction(0x333000u)) {
        auto targetFn = runtime->lookupFunction(0x333000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333A94u; }
        if (ctx->pc != 0x333A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00333000_0x333000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333A94u; }
        if (ctx->pc != 0x333A94u) { return; }
    }
    ctx->pc = 0x333A94u;
label_333a94:
    // 0x333a94: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x333a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_333a98:
    // 0x333a98: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x333a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_333a9c:
    // 0x333a9c: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x333a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_333aa0:
    // 0x333aa0: 0x8c91000c  lw          $s1, 0xC($a0)
    ctx->pc = 0x333aa0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_333aa4:
    // 0x333aa4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_333aa8:
    if (ctx->pc == 0x333AA8u) {
        ctx->pc = 0x333AA8u;
            // 0x333aa8: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x333AACu;
        goto label_333aac;
    }
    ctx->pc = 0x333AA4u;
    {
        const bool branch_taken_0x333aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x333AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333AA4u;
            // 0x333aa8: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333aa4) {
            ctx->pc = 0x333AC8u;
            goto label_333ac8;
        }
    }
    ctx->pc = 0x333AACu;
label_333aac:
    // 0x333aac: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x333aacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_333ab0:
    // 0x333ab0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x333ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_333ab4:
    // 0x333ab4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x333ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_333ab8:
    // 0x333ab8: 0x0  nop
    ctx->pc = 0x333ab8u;
    // NOP
label_333abc:
    // 0x333abc: 0x0  nop
    ctx->pc = 0x333abcu;
    // NOP
label_333ac0:
    // 0x333ac0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_333ac4:
    if (ctx->pc == 0x333AC4u) {
        ctx->pc = 0x333AC8u;
        goto label_333ac8;
    }
    ctx->pc = 0x333AC0u;
    {
        const bool branch_taken_0x333ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x333ac0) {
            ctx->pc = 0x333AACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_333aac;
        }
    }
    ctx->pc = 0x333AC8u;
label_333ac8:
    // 0x333ac8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x333ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_333acc:
    // 0x333acc: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x333accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_333ad0:
    // 0x333ad0: 0x8c50a348  lw          $s0, -0x5CB8($v0)
    ctx->pc = 0x333ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
label_333ad4:
    // 0x333ad4: 0x24632568  addiu       $v1, $v1, 0x2568
    ctx->pc = 0x333ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9576));
label_333ad8:
    // 0x333ad8: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x333ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_333adc:
    // 0x333adc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x333adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_333ae0:
    // 0x333ae0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x333ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_333ae4:
    // 0x333ae4: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x333ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_333ae8:
    // 0x333ae8: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x333ae8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_333aec:
    // 0x333aec: 0xc043be4  jal         func_10EF90
label_333af0:
    if (ctx->pc == 0x333AF0u) {
        ctx->pc = 0x333AF0u;
            // 0x333af0: 0x24c6d328  addiu       $a2, $a2, -0x2CD8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955816));
        ctx->pc = 0x333AF4u;
        goto label_333af4;
    }
    ctx->pc = 0x333AECu;
    SET_GPR_U32(ctx, 31, 0x333AF4u);
    ctx->pc = 0x333AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333AECu;
            // 0x333af0: 0x24c6d328  addiu       $a2, $a2, -0x2CD8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333AF4u; }
        if (ctx->pc != 0x333AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333AF4u; }
        if (ctx->pc != 0x333AF4u) { return; }
    }
    ctx->pc = 0x333AF4u;
label_333af4:
    // 0x333af4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x333af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_333af8:
    // 0x333af8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x333af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_333afc:
    // 0x333afc: 0x264607b0  addiu       $a2, $s2, 0x7B0
    ctx->pc = 0x333afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1968));
label_333b00:
    // 0x333b00: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x333b00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_333b04:
    // 0x333b04: 0xc0aa5d8  jal         func_2A9760
label_333b08:
    if (ctx->pc == 0x333B08u) {
        ctx->pc = 0x333B08u;
            // 0x333b08: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x333B0Cu;
        goto label_333b0c;
    }
    ctx->pc = 0x333B04u;
    SET_GPR_U32(ctx, 31, 0x333B0Cu);
    ctx->pc = 0x333B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333B04u;
            // 0x333b08: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333B0Cu; }
        if (ctx->pc != 0x333B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333B0Cu; }
        if (ctx->pc != 0x333B0Cu) { return; }
    }
    ctx->pc = 0x333B0Cu;
label_333b0c:
    // 0x333b0c: 0x56200002  bnel        $s1, $zero, . + 4 + (0x2 << 2)
label_333b10:
    if (ctx->pc == 0x333B10u) {
        ctx->pc = 0x333B10u;
            // 0x333b10: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x333B14u;
        goto label_333b14;
    }
    ctx->pc = 0x333B0Cu;
    {
        const bool branch_taken_0x333b0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x333b0c) {
            ctx->pc = 0x333B10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x333B0Cu;
            // 0x333b10: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x333B18u;
            goto label_333b18;
        }
    }
    ctx->pc = 0x333B14u;
label_333b14:
    // 0x333b14: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x333b14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_333b18:
    // 0x333b18: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x333b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_333b1c:
    // 0x333b1c: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x333b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_333b20:
    // 0x333b20: 0x24422568  addiu       $v0, $v0, 0x2568
    ctx->pc = 0x333b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9576));
label_333b24:
    // 0x333b24: 0x8e470968  lw          $a3, 0x968($s2)
    ctx->pc = 0x333b24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
label_333b28:
    // 0x333b28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x333b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_333b2c:
    // 0x333b2c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x333b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_333b30:
    // 0x333b30: 0x80480000  lb          $t0, 0x0($v0)
    ctx->pc = 0x333b30u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_333b34:
    // 0x333b34: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x333b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_333b38:
    // 0x333b38: 0xc043be4  jal         func_10EF90
label_333b3c:
    if (ctx->pc == 0x333B3Cu) {
        ctx->pc = 0x333B3Cu;
            // 0x333b3c: 0x24c6d330  addiu       $a2, $a2, -0x2CD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955824));
        ctx->pc = 0x333B40u;
        goto label_333b40;
    }
    ctx->pc = 0x333B38u;
    SET_GPR_U32(ctx, 31, 0x333B40u);
    ctx->pc = 0x333B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333B38u;
            // 0x333b3c: 0x24c6d330  addiu       $a2, $a2, -0x2CD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333B40u; }
        if (ctx->pc != 0x333B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333B40u; }
        if (ctx->pc != 0x333B40u) { return; }
    }
    ctx->pc = 0x333B40u;
label_333b40:
    // 0x333b40: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x333b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_333b44:
    // 0x333b44: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x333b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_333b48:
    // 0x333b48: 0x264607b4  addiu       $a2, $s2, 0x7B4
    ctx->pc = 0x333b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1972));
label_333b4c:
    // 0x333b4c: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x333b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_333b50:
    // 0x333b50: 0xc0aa5d8  jal         func_2A9760
label_333b54:
    if (ctx->pc == 0x333B54u) {
        ctx->pc = 0x333B54u;
            // 0x333b54: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x333B58u;
        goto label_333b58;
    }
    ctx->pc = 0x333B50u;
    SET_GPR_U32(ctx, 31, 0x333B58u);
    ctx->pc = 0x333B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333B50u;
            // 0x333b54: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333B58u; }
        if (ctx->pc != 0x333B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333B58u; }
        if (ctx->pc != 0x333B58u) { return; }
    }
    ctx->pc = 0x333B58u;
label_333b58:
    // 0x333b58: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x333b58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_333b5c:
    // 0x333b5c: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x333b5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_333b60:
    // 0x333b60: 0x320f809  jalr        $t9
label_333b64:
    if (ctx->pc == 0x333B64u) {
        ctx->pc = 0x333B64u;
            // 0x333b64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x333B68u;
        goto label_333b68;
    }
    ctx->pc = 0x333B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x333B68u);
        ctx->pc = 0x333B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333B60u;
            // 0x333b64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x333B68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x333B68u; }
            if (ctx->pc != 0x333B68u) { return; }
        }
        }
    }
    ctx->pc = 0x333B68u;
label_333b68:
    // 0x333b68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x333b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_333b6c:
    // 0x333b6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x333b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_333b70:
    // 0x333b70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x333b70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_333b74:
    // 0x333b74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x333b74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_333b78:
    // 0x333b78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x333b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_333b7c:
    // 0x333b7c: 0x3e00008  jr          $ra
label_333b80:
    if (ctx->pc == 0x333B80u) {
        ctx->pc = 0x333B80u;
            // 0x333b80: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x333B84u;
        goto label_333b84;
    }
    ctx->pc = 0x333B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333B7Cu;
            // 0x333b80: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x333B84u;
label_333b84:
    // 0x333b84: 0x0  nop
    ctx->pc = 0x333b84u;
    // NOP
label_333b88:
    // 0x333b88: 0x0  nop
    ctx->pc = 0x333b88u;
    // NOP
label_333b8c:
    // 0x333b8c: 0x0  nop
    ctx->pc = 0x333b8cu;
    // NOP
label_333b90:
    // 0x333b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x333b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_333b94:
    // 0x333b94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x333b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_333b98:
    // 0x333b98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x333b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_333b9c:
    // 0x333b9c: 0xc0effb8  jal         func_3BFEE0
label_333ba0:
    if (ctx->pc == 0x333BA0u) {
        ctx->pc = 0x333BA0u;
            // 0x333ba0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x333BA4u;
        goto label_333ba4;
    }
    ctx->pc = 0x333B9Cu;
    SET_GPR_U32(ctx, 31, 0x333BA4u);
    ctx->pc = 0x333BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333B9Cu;
            // 0x333ba0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BFEE0u;
    if (runtime->hasFunction(0x3BFEE0u)) {
        auto targetFn = runtime->lookupFunction(0x3BFEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333BA4u; }
        if (ctx->pc != 0x333BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BFEE0_0x3bfee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333BA4u; }
        if (ctx->pc != 0x333BA4u) { return; }
    }
    ctx->pc = 0x333BA4u;
label_333ba4:
    // 0x333ba4: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x333ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_333ba8:
    // 0x333ba8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x333ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_333bac:
    // 0x333bac: 0xc460d408  lwc1        $f0, -0x2BF8($v1)
    ctx->pc = 0x333bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_333bb0:
    // 0x333bb0: 0xe4406598  swc1        $f0, 0x6598($v0)
    ctx->pc = 0x333bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 26008), bits); }
label_333bb4:
    // 0x333bb4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x333bb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_333bb8:
    // 0x333bb8: 0x8f3900ac  lw          $t9, 0xAC($t9)
    ctx->pc = 0x333bb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 172)));
label_333bbc:
    // 0x333bbc: 0x320f809  jalr        $t9
label_333bc0:
    if (ctx->pc == 0x333BC0u) {
        ctx->pc = 0x333BC0u;
            // 0x333bc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x333BC4u;
        goto label_333bc4;
    }
    ctx->pc = 0x333BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x333BC4u);
        ctx->pc = 0x333BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333BBCu;
            // 0x333bc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x333BC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x333BC4u; }
            if (ctx->pc != 0x333BC4u) { return; }
        }
        }
    }
    ctx->pc = 0x333BC4u;
label_333bc4:
    // 0x333bc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x333bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_333bc8:
    // 0x333bc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x333bc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_333bcc:
    // 0x333bcc: 0x3e00008  jr          $ra
label_333bd0:
    if (ctx->pc == 0x333BD0u) {
        ctx->pc = 0x333BD0u;
            // 0x333bd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x333BD4u;
        goto label_333bd4;
    }
    ctx->pc = 0x333BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333BCCu;
            // 0x333bd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x333BD4u;
label_333bd4:
    // 0x333bd4: 0x0  nop
    ctx->pc = 0x333bd4u;
    // NOP
label_333bd8:
    // 0x333bd8: 0x0  nop
    ctx->pc = 0x333bd8u;
    // NOP
label_333bdc:
    // 0x333bdc: 0x0  nop
    ctx->pc = 0x333bdcu;
    // NOP
}
