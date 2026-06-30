#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FFB20
// Address: 0x1ffb20 - 0x1ffd20
void sub_001FFB20_0x1ffb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FFB20_0x1ffb20");
#endif

    switch (ctx->pc) {
        case 0x1ffb20u: goto label_1ffb20;
        case 0x1ffb24u: goto label_1ffb24;
        case 0x1ffb28u: goto label_1ffb28;
        case 0x1ffb2cu: goto label_1ffb2c;
        case 0x1ffb30u: goto label_1ffb30;
        case 0x1ffb34u: goto label_1ffb34;
        case 0x1ffb38u: goto label_1ffb38;
        case 0x1ffb3cu: goto label_1ffb3c;
        case 0x1ffb40u: goto label_1ffb40;
        case 0x1ffb44u: goto label_1ffb44;
        case 0x1ffb48u: goto label_1ffb48;
        case 0x1ffb4cu: goto label_1ffb4c;
        case 0x1ffb50u: goto label_1ffb50;
        case 0x1ffb54u: goto label_1ffb54;
        case 0x1ffb58u: goto label_1ffb58;
        case 0x1ffb5cu: goto label_1ffb5c;
        case 0x1ffb60u: goto label_1ffb60;
        case 0x1ffb64u: goto label_1ffb64;
        case 0x1ffb68u: goto label_1ffb68;
        case 0x1ffb6cu: goto label_1ffb6c;
        case 0x1ffb70u: goto label_1ffb70;
        case 0x1ffb74u: goto label_1ffb74;
        case 0x1ffb78u: goto label_1ffb78;
        case 0x1ffb7cu: goto label_1ffb7c;
        case 0x1ffb80u: goto label_1ffb80;
        case 0x1ffb84u: goto label_1ffb84;
        case 0x1ffb88u: goto label_1ffb88;
        case 0x1ffb8cu: goto label_1ffb8c;
        case 0x1ffb90u: goto label_1ffb90;
        case 0x1ffb94u: goto label_1ffb94;
        case 0x1ffb98u: goto label_1ffb98;
        case 0x1ffb9cu: goto label_1ffb9c;
        case 0x1ffba0u: goto label_1ffba0;
        case 0x1ffba4u: goto label_1ffba4;
        case 0x1ffba8u: goto label_1ffba8;
        case 0x1ffbacu: goto label_1ffbac;
        case 0x1ffbb0u: goto label_1ffbb0;
        case 0x1ffbb4u: goto label_1ffbb4;
        case 0x1ffbb8u: goto label_1ffbb8;
        case 0x1ffbbcu: goto label_1ffbbc;
        case 0x1ffbc0u: goto label_1ffbc0;
        case 0x1ffbc4u: goto label_1ffbc4;
        case 0x1ffbc8u: goto label_1ffbc8;
        case 0x1ffbccu: goto label_1ffbcc;
        case 0x1ffbd0u: goto label_1ffbd0;
        case 0x1ffbd4u: goto label_1ffbd4;
        case 0x1ffbd8u: goto label_1ffbd8;
        case 0x1ffbdcu: goto label_1ffbdc;
        case 0x1ffbe0u: goto label_1ffbe0;
        case 0x1ffbe4u: goto label_1ffbe4;
        case 0x1ffbe8u: goto label_1ffbe8;
        case 0x1ffbecu: goto label_1ffbec;
        case 0x1ffbf0u: goto label_1ffbf0;
        case 0x1ffbf4u: goto label_1ffbf4;
        case 0x1ffbf8u: goto label_1ffbf8;
        case 0x1ffbfcu: goto label_1ffbfc;
        case 0x1ffc00u: goto label_1ffc00;
        case 0x1ffc04u: goto label_1ffc04;
        case 0x1ffc08u: goto label_1ffc08;
        case 0x1ffc0cu: goto label_1ffc0c;
        case 0x1ffc10u: goto label_1ffc10;
        case 0x1ffc14u: goto label_1ffc14;
        case 0x1ffc18u: goto label_1ffc18;
        case 0x1ffc1cu: goto label_1ffc1c;
        case 0x1ffc20u: goto label_1ffc20;
        case 0x1ffc24u: goto label_1ffc24;
        case 0x1ffc28u: goto label_1ffc28;
        case 0x1ffc2cu: goto label_1ffc2c;
        case 0x1ffc30u: goto label_1ffc30;
        case 0x1ffc34u: goto label_1ffc34;
        case 0x1ffc38u: goto label_1ffc38;
        case 0x1ffc3cu: goto label_1ffc3c;
        case 0x1ffc40u: goto label_1ffc40;
        case 0x1ffc44u: goto label_1ffc44;
        case 0x1ffc48u: goto label_1ffc48;
        case 0x1ffc4cu: goto label_1ffc4c;
        case 0x1ffc50u: goto label_1ffc50;
        case 0x1ffc54u: goto label_1ffc54;
        case 0x1ffc58u: goto label_1ffc58;
        case 0x1ffc5cu: goto label_1ffc5c;
        case 0x1ffc60u: goto label_1ffc60;
        case 0x1ffc64u: goto label_1ffc64;
        case 0x1ffc68u: goto label_1ffc68;
        case 0x1ffc6cu: goto label_1ffc6c;
        case 0x1ffc70u: goto label_1ffc70;
        case 0x1ffc74u: goto label_1ffc74;
        case 0x1ffc78u: goto label_1ffc78;
        case 0x1ffc7cu: goto label_1ffc7c;
        case 0x1ffc80u: goto label_1ffc80;
        case 0x1ffc84u: goto label_1ffc84;
        case 0x1ffc88u: goto label_1ffc88;
        case 0x1ffc8cu: goto label_1ffc8c;
        case 0x1ffc90u: goto label_1ffc90;
        case 0x1ffc94u: goto label_1ffc94;
        case 0x1ffc98u: goto label_1ffc98;
        case 0x1ffc9cu: goto label_1ffc9c;
        case 0x1ffca0u: goto label_1ffca0;
        case 0x1ffca4u: goto label_1ffca4;
        case 0x1ffca8u: goto label_1ffca8;
        case 0x1ffcacu: goto label_1ffcac;
        case 0x1ffcb0u: goto label_1ffcb0;
        case 0x1ffcb4u: goto label_1ffcb4;
        case 0x1ffcb8u: goto label_1ffcb8;
        case 0x1ffcbcu: goto label_1ffcbc;
        case 0x1ffcc0u: goto label_1ffcc0;
        case 0x1ffcc4u: goto label_1ffcc4;
        case 0x1ffcc8u: goto label_1ffcc8;
        case 0x1ffcccu: goto label_1ffccc;
        case 0x1ffcd0u: goto label_1ffcd0;
        case 0x1ffcd4u: goto label_1ffcd4;
        case 0x1ffcd8u: goto label_1ffcd8;
        case 0x1ffcdcu: goto label_1ffcdc;
        case 0x1ffce0u: goto label_1ffce0;
        case 0x1ffce4u: goto label_1ffce4;
        case 0x1ffce8u: goto label_1ffce8;
        case 0x1ffcecu: goto label_1ffcec;
        case 0x1ffcf0u: goto label_1ffcf0;
        case 0x1ffcf4u: goto label_1ffcf4;
        case 0x1ffcf8u: goto label_1ffcf8;
        case 0x1ffcfcu: goto label_1ffcfc;
        case 0x1ffd00u: goto label_1ffd00;
        case 0x1ffd04u: goto label_1ffd04;
        case 0x1ffd08u: goto label_1ffd08;
        case 0x1ffd0cu: goto label_1ffd0c;
        case 0x1ffd10u: goto label_1ffd10;
        case 0x1ffd14u: goto label_1ffd14;
        case 0x1ffd18u: goto label_1ffd18;
        case 0x1ffd1cu: goto label_1ffd1c;
        default: break;
    }

    ctx->pc = 0x1ffb20u;

label_1ffb20:
    // 0x1ffb20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ffb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ffb24:
    // 0x1ffb24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ffb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ffb28:
    // 0x1ffb28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ffb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ffb2c:
    // 0x1ffb2c: 0x8c851c40  lw          $a1, 0x1C40($a0)
    ctx->pc = 0x1ffb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7232)));
label_1ffb30:
    // 0x1ffb30: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
label_1ffb34:
    if (ctx->pc == 0x1FFB34u) {
        ctx->pc = 0x1FFB34u;
            // 0x1ffb34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FFB38u;
        goto label_1ffb38;
    }
    ctx->pc = 0x1FFB30u;
    {
        const bool branch_taken_0x1ffb30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFB30u;
            // 0x1ffb34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffb30) {
            ctx->pc = 0x1FFB84u;
            goto label_1ffb84;
        }
    }
    ctx->pc = 0x1FFB38u;
label_1ffb38:
    // 0x1ffb38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ffb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ffb3c:
    // 0x1ffb3c: 0xc0a7a48  jal         func_29E920
label_1ffb40:
    if (ctx->pc == 0x1FFB40u) {
        ctx->pc = 0x1FFB40u;
            // 0x1ffb40: 0x8c44ea40  lw          $a0, -0x15C0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
        ctx->pc = 0x1FFB44u;
        goto label_1ffb44;
    }
    ctx->pc = 0x1FFB3Cu;
    SET_GPR_U32(ctx, 31, 0x1FFB44u);
    ctx->pc = 0x1FFB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFB3Cu;
            // 0x1ffb40: 0x8c44ea40  lw          $a0, -0x15C0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E920u;
    if (runtime->hasFunction(0x29E920u)) {
        auto targetFn = runtime->lookupFunction(0x29E920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFB44u; }
        if (ctx->pc != 0x1FFB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E920_0x29e920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFB44u; }
        if (ctx->pc != 0x1FFB44u) { return; }
    }
    ctx->pc = 0x1FFB44u;
label_1ffb44:
    // 0x1ffb44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ffb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ffb48:
    // 0x1ffb48: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ffb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1ffb4c:
    // 0x1ffb4c: 0xc0a7a48  jal         func_29E920
label_1ffb50:
    if (ctx->pc == 0x1FFB50u) {
        ctx->pc = 0x1FFB50u;
            // 0x1ffb50: 0x8e051c44  lw          $a1, 0x1C44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7236)));
        ctx->pc = 0x1FFB54u;
        goto label_1ffb54;
    }
    ctx->pc = 0x1FFB4Cu;
    SET_GPR_U32(ctx, 31, 0x1FFB54u);
    ctx->pc = 0x1FFB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFB4Cu;
            // 0x1ffb50: 0x8e051c44  lw          $a1, 0x1C44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7236)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E920u;
    if (runtime->hasFunction(0x29E920u)) {
        auto targetFn = runtime->lookupFunction(0x29E920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFB54u; }
        if (ctx->pc != 0x1FFB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E920_0x29e920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFB54u; }
        if (ctx->pc != 0x1FFB54u) { return; }
    }
    ctx->pc = 0x1FFB54u;
label_1ffb54:
    // 0x1ffb54: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ffb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ffb58:
    // 0x1ffb58: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ffb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1ffb5c:
    // 0x1ffb5c: 0xc0a7a48  jal         func_29E920
label_1ffb60:
    if (ctx->pc == 0x1FFB60u) {
        ctx->pc = 0x1FFB60u;
            // 0x1ffb60: 0x8e051c48  lw          $a1, 0x1C48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7240)));
        ctx->pc = 0x1FFB64u;
        goto label_1ffb64;
    }
    ctx->pc = 0x1FFB5Cu;
    SET_GPR_U32(ctx, 31, 0x1FFB64u);
    ctx->pc = 0x1FFB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFB5Cu;
            // 0x1ffb60: 0x8e051c48  lw          $a1, 0x1C48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7240)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E920u;
    if (runtime->hasFunction(0x29E920u)) {
        auto targetFn = runtime->lookupFunction(0x29E920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFB64u; }
        if (ctx->pc != 0x1FFB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E920_0x29e920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFB64u; }
        if (ctx->pc != 0x1FFB64u) { return; }
    }
    ctx->pc = 0x1FFB64u;
label_1ffb64:
    // 0x1ffb64: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ffb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ffb68:
    // 0x1ffb68: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ffb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1ffb6c:
    // 0x1ffb6c: 0xc0a7a48  jal         func_29E920
label_1ffb70:
    if (ctx->pc == 0x1FFB70u) {
        ctx->pc = 0x1FFB70u;
            // 0x1ffb70: 0x8e051c4c  lw          $a1, 0x1C4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7244)));
        ctx->pc = 0x1FFB74u;
        goto label_1ffb74;
    }
    ctx->pc = 0x1FFB6Cu;
    SET_GPR_U32(ctx, 31, 0x1FFB74u);
    ctx->pc = 0x1FFB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFB6Cu;
            // 0x1ffb70: 0x8e051c4c  lw          $a1, 0x1C4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7244)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E920u;
    if (runtime->hasFunction(0x29E920u)) {
        auto targetFn = runtime->lookupFunction(0x29E920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFB74u; }
        if (ctx->pc != 0x1FFB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E920_0x29e920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFB74u; }
        if (ctx->pc != 0x1FFB74u) { return; }
    }
    ctx->pc = 0x1FFB74u;
label_1ffb74:
    // 0x1ffb74: 0xae001c40  sw          $zero, 0x1C40($s0)
    ctx->pc = 0x1ffb74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7232), GPR_U32(ctx, 0));
label_1ffb78:
    // 0x1ffb78: 0xae001c44  sw          $zero, 0x1C44($s0)
    ctx->pc = 0x1ffb78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7236), GPR_U32(ctx, 0));
label_1ffb7c:
    // 0x1ffb7c: 0xae001c48  sw          $zero, 0x1C48($s0)
    ctx->pc = 0x1ffb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7240), GPR_U32(ctx, 0));
label_1ffb80:
    // 0x1ffb80: 0xae001c4c  sw          $zero, 0x1C4C($s0)
    ctx->pc = 0x1ffb80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7244), GPR_U32(ctx, 0));
label_1ffb84:
    // 0x1ffb84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ffb84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ffb88:
    // 0x1ffb88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ffb88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ffb8c:
    // 0x1ffb8c: 0x3e00008  jr          $ra
label_1ffb90:
    if (ctx->pc == 0x1FFB90u) {
        ctx->pc = 0x1FFB90u;
            // 0x1ffb90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1FFB94u;
        goto label_1ffb94;
    }
    ctx->pc = 0x1FFB8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFB8Cu;
            // 0x1ffb90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FFB94u;
label_1ffb94:
    // 0x1ffb94: 0x0  nop
    ctx->pc = 0x1ffb94u;
    // NOP
label_1ffb98:
    // 0x1ffb98: 0x0  nop
    ctx->pc = 0x1ffb98u;
    // NOP
label_1ffb9c:
    // 0x1ffb9c: 0x0  nop
    ctx->pc = 0x1ffb9cu;
    // NOP
label_1ffba0:
    // 0x1ffba0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ffba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1ffba4:
    // 0x1ffba4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1ffba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1ffba8:
    // 0x1ffba8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ffba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1ffbac:
    // 0x1ffbac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ffbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1ffbb0:
    // 0x1ffbb0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1ffbb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ffbb4:
    // 0x1ffbb4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ffbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ffbb8:
    // 0x1ffbb8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1ffbb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ffbbc:
    // 0x1ffbbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ffbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ffbc0:
    // 0x1ffbc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ffbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ffbc4:
    // 0x1ffbc4: 0x12a0004a  beqz        $s5, . + 4 + (0x4A << 2)
label_1ffbc8:
    if (ctx->pc == 0x1FFBC8u) {
        ctx->pc = 0x1FFBC8u;
            // 0x1ffbc8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1FFBCCu;
        goto label_1ffbcc;
    }
    ctx->pc = 0x1FFBC4u;
    {
        const bool branch_taken_0x1ffbc4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFBC4u;
            // 0x1ffbc8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffbc4) {
            ctx->pc = 0x1FFCF0u;
            goto label_1ffcf0;
        }
    }
    ctx->pc = 0x1FFBCCu;
label_1ffbcc:
    // 0x1ffbcc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ffbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ffbd0:
    // 0x1ffbd0: 0x2442e040  addiu       $v0, $v0, -0x1FC0
    ctx->pc = 0x1ffbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959168));
label_1ffbd4:
    // 0x1ffbd4: 0xc07fec8  jal         func_1FFB20
label_1ffbd8:
    if (ctx->pc == 0x1FFBD8u) {
        ctx->pc = 0x1FFBD8u;
            // 0x1ffbd8: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1FFBDCu;
        goto label_1ffbdc;
    }
    ctx->pc = 0x1FFBD4u;
    SET_GPR_U32(ctx, 31, 0x1FFBDCu);
    ctx->pc = 0x1FFBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFBD4u;
            // 0x1ffbd8: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB20u;
    goto label_1ffb20;
    ctx->pc = 0x1FFBDCu;
label_1ffbdc:
    // 0x1ffbdc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ffbdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffbe0:
    // 0x1ffbe0: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x1ffbe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ffbe4:
    // 0x1ffbe4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ffbe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffbe8:
    // 0x1ffbe8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1ffbe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ffbec:
    // 0x1ffbec: 0x0  nop
    ctx->pc = 0x1ffbecu;
    // NOP
label_1ffbf0:
    // 0x1ffbf0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ffbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ffbf4:
    // 0x1ffbf4: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_1ffbf8:
    if (ctx->pc == 0x1FFBF8u) {
        ctx->pc = 0x1FFBFCu;
        goto label_1ffbfc;
    }
    ctx->pc = 0x1FFBF4u;
    {
        const bool branch_taken_0x1ffbf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffbf4) {
            ctx->pc = 0x1FFC40u;
            goto label_1ffc40;
        }
    }
    ctx->pc = 0x1FFBFCu;
label_1ffbfc:
    // 0x1ffbfc: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x1ffbfcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1ffc00:
    // 0x1ffc00: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1ffc04:
    if (ctx->pc == 0x1FFC04u) {
        ctx->pc = 0x1FFC08u;
        goto label_1ffc08;
    }
    ctx->pc = 0x1FFC00u;
    {
        const bool branch_taken_0x1ffc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffc00) {
            ctx->pc = 0x1FFC40u;
            goto label_1ffc40;
        }
    }
    ctx->pc = 0x1FFC08u;
label_1ffc08:
    // 0x1ffc08: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x1ffc08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_1ffc0c:
    // 0x1ffc0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ffc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ffc10:
    // 0x1ffc10: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x1ffc10u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_1ffc14:
    // 0x1ffc14: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1ffc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1ffc18:
    // 0x1ffc18: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ffc18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1ffc1c:
    // 0x1ffc1c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1ffc20:
    if (ctx->pc == 0x1FFC20u) {
        ctx->pc = 0x1FFC24u;
        goto label_1ffc24;
    }
    ctx->pc = 0x1FFC1Cu;
    {
        const bool branch_taken_0x1ffc1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffc1c) {
            ctx->pc = 0x1FFC40u;
            goto label_1ffc40;
        }
    }
    ctx->pc = 0x1FFC24u;
label_1ffc24:
    // 0x1ffc24: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1ffc28:
    if (ctx->pc == 0x1FFC28u) {
        ctx->pc = 0x1FFC2Cu;
        goto label_1ffc2c;
    }
    ctx->pc = 0x1FFC24u;
    {
        const bool branch_taken_0x1ffc24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffc24) {
            ctx->pc = 0x1FFC40u;
            goto label_1ffc40;
        }
    }
    ctx->pc = 0x1FFC2Cu;
label_1ffc2c:
    // 0x1ffc2c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ffc2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ffc30:
    // 0x1ffc30: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1ffc30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1ffc34:
    // 0x1ffc34: 0x320f809  jalr        $t9
label_1ffc38:
    if (ctx->pc == 0x1FFC38u) {
        ctx->pc = 0x1FFC38u;
            // 0x1ffc38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FFC3Cu;
        goto label_1ffc3c;
    }
    ctx->pc = 0x1FFC34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FFC3Cu);
        ctx->pc = 0x1FFC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFC34u;
            // 0x1ffc38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FFC3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FFC3Cu; }
            if (ctx->pc != 0x1FFC3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1FFC3Cu;
label_1ffc3c:
    // 0x1ffc3c: 0x0  nop
    ctx->pc = 0x1ffc3cu;
    // NOP
label_1ffc40:
    // 0x1ffc40: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ffc40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ffc44:
    // 0x1ffc44: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x1ffc44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
label_1ffc48:
    // 0x1ffc48: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_1ffc4c:
    if (ctx->pc == 0x1FFC4Cu) {
        ctx->pc = 0x1FFC4Cu;
            // 0x1ffc4c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x1FFC50u;
        goto label_1ffc50;
    }
    ctx->pc = 0x1FFC48u;
    {
        const bool branch_taken_0x1ffc48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFC48u;
            // 0x1ffc4c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffc48) {
            ctx->pc = 0x1FFBF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ffbf0;
        }
    }
    ctx->pc = 0x1FFC50u;
label_1ffc50:
    // 0x1ffc50: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ffc50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1ffc54:
    // 0x1ffc54: 0x2a620008  slti        $v0, $s3, 0x8
    ctx->pc = 0x1ffc54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
label_1ffc58:
    // 0x1ffc58: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_1ffc5c:
    if (ctx->pc == 0x1FFC5Cu) {
        ctx->pc = 0x1FFC5Cu;
            // 0x1ffc5c: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x1FFC60u;
        goto label_1ffc60;
    }
    ctx->pc = 0x1FFC58u;
    {
        const bool branch_taken_0x1ffc58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFC58u;
            // 0x1ffc5c: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffc58) {
            ctx->pc = 0x1FFBE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ffbe4;
        }
    }
    ctx->pc = 0x1FFC60u;
label_1ffc60:
    // 0x1ffc60: 0x26a21c34  addiu       $v0, $s5, 0x1C34
    ctx->pc = 0x1ffc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 7220));
label_1ffc64:
    // 0x1ffc64: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1ffc68:
    if (ctx->pc == 0x1FFC68u) {
        ctx->pc = 0x1FFC6Cu;
        goto label_1ffc6c;
    }
    ctx->pc = 0x1FFC64u;
    {
        const bool branch_taken_0x1ffc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffc64) {
            ctx->pc = 0x1FFCA4u;
            goto label_1ffca4;
        }
    }
    ctx->pc = 0x1FFC6Cu;
label_1ffc6c:
    // 0x1ffc6c: 0x8ea31c3c  lw          $v1, 0x1C3C($s5)
    ctx->pc = 0x1ffc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 7228)));
label_1ffc70:
    // 0x1ffc70: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ffc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1ffc74:
    // 0x1ffc74: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ffc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1ffc78:
    // 0x1ffc78: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1ffc7c:
    if (ctx->pc == 0x1FFC7Cu) {
        ctx->pc = 0x1FFC80u;
        goto label_1ffc80;
    }
    ctx->pc = 0x1FFC78u;
    {
        const bool branch_taken_0x1ffc78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffc78) {
            ctx->pc = 0x1FFCA4u;
            goto label_1ffca4;
        }
    }
    ctx->pc = 0x1FFC80u;
label_1ffc80:
    // 0x1ffc80: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ffc80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ffc84:
    // 0x1ffc84: 0x8ea31c3c  lw          $v1, 0x1C3C($s5)
    ctx->pc = 0x1ffc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 7228)));
label_1ffc88:
    // 0x1ffc88: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ffc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1ffc8c:
    // 0x1ffc8c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1ffc8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1ffc90:
    // 0x1ffc90: 0x8ea51c34  lw          $a1, 0x1C34($s5)
    ctx->pc = 0x1ffc90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 7220)));
label_1ffc94:
    // 0x1ffc94: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x1ffc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_1ffc98:
    // 0x1ffc98: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x1ffc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_1ffc9c:
    // 0x1ffc9c: 0xc0a7ab4  jal         func_29EAD0
label_1ffca0:
    if (ctx->pc == 0x1FFCA0u) {
        ctx->pc = 0x1FFCA0u;
            // 0x1ffca0: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x1FFCA4u;
        goto label_1ffca4;
    }
    ctx->pc = 0x1FFC9Cu;
    SET_GPR_U32(ctx, 31, 0x1FFCA4u);
    ctx->pc = 0x1FFCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFC9Cu;
            // 0x1ffca0: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFCA4u; }
        if (ctx->pc != 0x1FFCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFCA4u; }
        if (ctx->pc != 0x1FFCA4u) { return; }
    }
    ctx->pc = 0x1FFCA4u;
label_1ffca4:
    // 0x1ffca4: 0x52a00009  beql        $s5, $zero, . + 4 + (0x9 << 2)
label_1ffca8:
    if (ctx->pc == 0x1FFCA8u) {
        ctx->pc = 0x1FFCA8u;
            // 0x1ffca8: 0x14143c  dsll32      $v0, $s4, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
        ctx->pc = 0x1FFCACu;
        goto label_1ffcac;
    }
    ctx->pc = 0x1FFCA4u;
    {
        const bool branch_taken_0x1ffca4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffca4) {
            ctx->pc = 0x1FFCA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFCA4u;
            // 0x1ffca8: 0x14143c  dsll32      $v0, $s4, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FFCCCu;
            goto label_1ffccc;
        }
    }
    ctx->pc = 0x1FFCACu;
label_1ffcac:
    // 0x1ffcac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ffcacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ffcb0:
    // 0x1ffcb0: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1ffcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1ffcb4:
    // 0x1ffcb4: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_1ffcb8:
    if (ctx->pc == 0x1FFCB8u) {
        ctx->pc = 0x1FFCB8u;
            // 0x1ffcb8: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1FFCBCu;
        goto label_1ffcbc;
    }
    ctx->pc = 0x1FFCB4u;
    {
        const bool branch_taken_0x1ffcb4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFCB4u;
            // 0x1ffcb8: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffcb4) {
            ctx->pc = 0x1FFCC8u;
            goto label_1ffcc8;
        }
    }
    ctx->pc = 0x1FFCBCu;
label_1ffcbc:
    // 0x1ffcbc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ffcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ffcc0:
    // 0x1ffcc0: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1ffcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1ffcc4:
    // 0x1ffcc4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1ffcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1ffcc8:
    // 0x1ffcc8: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x1ffcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
label_1ffccc:
    // 0x1ffccc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ffcccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1ffcd0:
    // 0x1ffcd0: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_1ffcd4:
    if (ctx->pc == 0x1FFCD4u) {
        ctx->pc = 0x1FFCD4u;
            // 0x1ffcd4: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FFCD8u;
        goto label_1ffcd8;
    }
    ctx->pc = 0x1FFCD0u;
    {
        const bool branch_taken_0x1ffcd0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ffcd0) {
            ctx->pc = 0x1FFCD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFCD0u;
            // 0x1ffcd4: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FFCF4u;
            goto label_1ffcf4;
        }
    }
    ctx->pc = 0x1FFCD8u;
label_1ffcd8:
    // 0x1ffcd8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ffcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ffcdc:
    // 0x1ffcdc: 0x96a60004  lhu         $a2, 0x4($s5)
    ctx->pc = 0x1ffcdcu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_1ffce0:
    // 0x1ffce0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ffce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1ffce4:
    // 0x1ffce4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1ffce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ffce8:
    // 0x1ffce8: 0xc0a7ab4  jal         func_29EAD0
label_1ffcec:
    if (ctx->pc == 0x1FFCECu) {
        ctx->pc = 0x1FFCECu;
            // 0x1ffcec: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x1FFCF0u;
        goto label_1ffcf0;
    }
    ctx->pc = 0x1FFCE8u;
    SET_GPR_U32(ctx, 31, 0x1FFCF0u);
    ctx->pc = 0x1FFCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFCE8u;
            // 0x1ffcec: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFCF0u; }
        if (ctx->pc != 0x1FFCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFCF0u; }
        if (ctx->pc != 0x1FFCF0u) { return; }
    }
    ctx->pc = 0x1FFCF0u;
label_1ffcf0:
    // 0x1ffcf0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1ffcf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ffcf4:
    // 0x1ffcf4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1ffcf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1ffcf8:
    // 0x1ffcf8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ffcf8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ffcfc:
    // 0x1ffcfc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ffcfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ffd00:
    // 0x1ffd00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ffd00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ffd04:
    // 0x1ffd04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ffd04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ffd08:
    // 0x1ffd08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ffd08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ffd0c:
    // 0x1ffd0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ffd0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ffd10:
    // 0x1ffd10: 0x3e00008  jr          $ra
label_1ffd14:
    if (ctx->pc == 0x1FFD14u) {
        ctx->pc = 0x1FFD14u;
            // 0x1ffd14: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1FFD18u;
        goto label_1ffd18;
    }
    ctx->pc = 0x1FFD10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFD10u;
            // 0x1ffd14: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FFD18u;
label_1ffd18:
    // 0x1ffd18: 0x0  nop
    ctx->pc = 0x1ffd18u;
    // NOP
label_1ffd1c:
    // 0x1ffd1c: 0x0  nop
    ctx->pc = 0x1ffd1cu;
    // NOP
}
