#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DDF70
// Address: 0x1ddf70 - 0x1de210
void sub_001DDF70_0x1ddf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDF70_0x1ddf70");
#endif

    switch (ctx->pc) {
        case 0x1ddf70u: goto label_1ddf70;
        case 0x1ddf74u: goto label_1ddf74;
        case 0x1ddf78u: goto label_1ddf78;
        case 0x1ddf7cu: goto label_1ddf7c;
        case 0x1ddf80u: goto label_1ddf80;
        case 0x1ddf84u: goto label_1ddf84;
        case 0x1ddf88u: goto label_1ddf88;
        case 0x1ddf8cu: goto label_1ddf8c;
        case 0x1ddf90u: goto label_1ddf90;
        case 0x1ddf94u: goto label_1ddf94;
        case 0x1ddf98u: goto label_1ddf98;
        case 0x1ddf9cu: goto label_1ddf9c;
        case 0x1ddfa0u: goto label_1ddfa0;
        case 0x1ddfa4u: goto label_1ddfa4;
        case 0x1ddfa8u: goto label_1ddfa8;
        case 0x1ddfacu: goto label_1ddfac;
        case 0x1ddfb0u: goto label_1ddfb0;
        case 0x1ddfb4u: goto label_1ddfb4;
        case 0x1ddfb8u: goto label_1ddfb8;
        case 0x1ddfbcu: goto label_1ddfbc;
        case 0x1ddfc0u: goto label_1ddfc0;
        case 0x1ddfc4u: goto label_1ddfc4;
        case 0x1ddfc8u: goto label_1ddfc8;
        case 0x1ddfccu: goto label_1ddfcc;
        case 0x1ddfd0u: goto label_1ddfd0;
        case 0x1ddfd4u: goto label_1ddfd4;
        case 0x1ddfd8u: goto label_1ddfd8;
        case 0x1ddfdcu: goto label_1ddfdc;
        case 0x1ddfe0u: goto label_1ddfe0;
        case 0x1ddfe4u: goto label_1ddfe4;
        case 0x1ddfe8u: goto label_1ddfe8;
        case 0x1ddfecu: goto label_1ddfec;
        case 0x1ddff0u: goto label_1ddff0;
        case 0x1ddff4u: goto label_1ddff4;
        case 0x1ddff8u: goto label_1ddff8;
        case 0x1ddffcu: goto label_1ddffc;
        case 0x1de000u: goto label_1de000;
        case 0x1de004u: goto label_1de004;
        case 0x1de008u: goto label_1de008;
        case 0x1de00cu: goto label_1de00c;
        case 0x1de010u: goto label_1de010;
        case 0x1de014u: goto label_1de014;
        case 0x1de018u: goto label_1de018;
        case 0x1de01cu: goto label_1de01c;
        case 0x1de020u: goto label_1de020;
        case 0x1de024u: goto label_1de024;
        case 0x1de028u: goto label_1de028;
        case 0x1de02cu: goto label_1de02c;
        case 0x1de030u: goto label_1de030;
        case 0x1de034u: goto label_1de034;
        case 0x1de038u: goto label_1de038;
        case 0x1de03cu: goto label_1de03c;
        case 0x1de040u: goto label_1de040;
        case 0x1de044u: goto label_1de044;
        case 0x1de048u: goto label_1de048;
        case 0x1de04cu: goto label_1de04c;
        case 0x1de050u: goto label_1de050;
        case 0x1de054u: goto label_1de054;
        case 0x1de058u: goto label_1de058;
        case 0x1de05cu: goto label_1de05c;
        case 0x1de060u: goto label_1de060;
        case 0x1de064u: goto label_1de064;
        case 0x1de068u: goto label_1de068;
        case 0x1de06cu: goto label_1de06c;
        case 0x1de070u: goto label_1de070;
        case 0x1de074u: goto label_1de074;
        case 0x1de078u: goto label_1de078;
        case 0x1de07cu: goto label_1de07c;
        case 0x1de080u: goto label_1de080;
        case 0x1de084u: goto label_1de084;
        case 0x1de088u: goto label_1de088;
        case 0x1de08cu: goto label_1de08c;
        case 0x1de090u: goto label_1de090;
        case 0x1de094u: goto label_1de094;
        case 0x1de098u: goto label_1de098;
        case 0x1de09cu: goto label_1de09c;
        case 0x1de0a0u: goto label_1de0a0;
        case 0x1de0a4u: goto label_1de0a4;
        case 0x1de0a8u: goto label_1de0a8;
        case 0x1de0acu: goto label_1de0ac;
        case 0x1de0b0u: goto label_1de0b0;
        case 0x1de0b4u: goto label_1de0b4;
        case 0x1de0b8u: goto label_1de0b8;
        case 0x1de0bcu: goto label_1de0bc;
        case 0x1de0c0u: goto label_1de0c0;
        case 0x1de0c4u: goto label_1de0c4;
        case 0x1de0c8u: goto label_1de0c8;
        case 0x1de0ccu: goto label_1de0cc;
        case 0x1de0d0u: goto label_1de0d0;
        case 0x1de0d4u: goto label_1de0d4;
        case 0x1de0d8u: goto label_1de0d8;
        case 0x1de0dcu: goto label_1de0dc;
        case 0x1de0e0u: goto label_1de0e0;
        case 0x1de0e4u: goto label_1de0e4;
        case 0x1de0e8u: goto label_1de0e8;
        case 0x1de0ecu: goto label_1de0ec;
        case 0x1de0f0u: goto label_1de0f0;
        case 0x1de0f4u: goto label_1de0f4;
        case 0x1de0f8u: goto label_1de0f8;
        case 0x1de0fcu: goto label_1de0fc;
        case 0x1de100u: goto label_1de100;
        case 0x1de104u: goto label_1de104;
        case 0x1de108u: goto label_1de108;
        case 0x1de10cu: goto label_1de10c;
        case 0x1de110u: goto label_1de110;
        case 0x1de114u: goto label_1de114;
        case 0x1de118u: goto label_1de118;
        case 0x1de11cu: goto label_1de11c;
        case 0x1de120u: goto label_1de120;
        case 0x1de124u: goto label_1de124;
        case 0x1de128u: goto label_1de128;
        case 0x1de12cu: goto label_1de12c;
        case 0x1de130u: goto label_1de130;
        case 0x1de134u: goto label_1de134;
        case 0x1de138u: goto label_1de138;
        case 0x1de13cu: goto label_1de13c;
        case 0x1de140u: goto label_1de140;
        case 0x1de144u: goto label_1de144;
        case 0x1de148u: goto label_1de148;
        case 0x1de14cu: goto label_1de14c;
        case 0x1de150u: goto label_1de150;
        case 0x1de154u: goto label_1de154;
        case 0x1de158u: goto label_1de158;
        case 0x1de15cu: goto label_1de15c;
        case 0x1de160u: goto label_1de160;
        case 0x1de164u: goto label_1de164;
        case 0x1de168u: goto label_1de168;
        case 0x1de16cu: goto label_1de16c;
        case 0x1de170u: goto label_1de170;
        case 0x1de174u: goto label_1de174;
        case 0x1de178u: goto label_1de178;
        case 0x1de17cu: goto label_1de17c;
        case 0x1de180u: goto label_1de180;
        case 0x1de184u: goto label_1de184;
        case 0x1de188u: goto label_1de188;
        case 0x1de18cu: goto label_1de18c;
        case 0x1de190u: goto label_1de190;
        case 0x1de194u: goto label_1de194;
        case 0x1de198u: goto label_1de198;
        case 0x1de19cu: goto label_1de19c;
        case 0x1de1a0u: goto label_1de1a0;
        case 0x1de1a4u: goto label_1de1a4;
        case 0x1de1a8u: goto label_1de1a8;
        case 0x1de1acu: goto label_1de1ac;
        case 0x1de1b0u: goto label_1de1b0;
        case 0x1de1b4u: goto label_1de1b4;
        case 0x1de1b8u: goto label_1de1b8;
        case 0x1de1bcu: goto label_1de1bc;
        case 0x1de1c0u: goto label_1de1c0;
        case 0x1de1c4u: goto label_1de1c4;
        case 0x1de1c8u: goto label_1de1c8;
        case 0x1de1ccu: goto label_1de1cc;
        case 0x1de1d0u: goto label_1de1d0;
        case 0x1de1d4u: goto label_1de1d4;
        case 0x1de1d8u: goto label_1de1d8;
        case 0x1de1dcu: goto label_1de1dc;
        case 0x1de1e0u: goto label_1de1e0;
        case 0x1de1e4u: goto label_1de1e4;
        case 0x1de1e8u: goto label_1de1e8;
        case 0x1de1ecu: goto label_1de1ec;
        case 0x1de1f0u: goto label_1de1f0;
        case 0x1de1f4u: goto label_1de1f4;
        case 0x1de1f8u: goto label_1de1f8;
        case 0x1de1fcu: goto label_1de1fc;
        case 0x1de200u: goto label_1de200;
        case 0x1de204u: goto label_1de204;
        case 0x1de208u: goto label_1de208;
        case 0x1de20cu: goto label_1de20c;
        default: break;
    }

    ctx->pc = 0x1ddf70u;

label_1ddf70:
    // 0x1ddf70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ddf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ddf74:
    // 0x1ddf74: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ddf74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ddf78:
    // 0x1ddf78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ddf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1ddf7c:
    // 0x1ddf7c: 0x2442cf10  addiu       $v0, $v0, -0x30F0
    ctx->pc = 0x1ddf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954768));
label_1ddf80:
    // 0x1ddf80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ddf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ddf84:
    // 0x1ddf84: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1ddf84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ddf88:
    // 0x1ddf88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ddf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ddf8c:
    // 0x1ddf8c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ddf8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ddf90:
    // 0x1ddf90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ddf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ddf94:
    // 0x1ddf94: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x1ddf94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_1ddf98:
    // 0x1ddf98: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1ddf98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
label_1ddf9c:
    // 0x1ddf9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ddf9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ddfa0:
    // 0x1ddfa0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1ddfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_1ddfa4:
    // 0x1ddfa4: 0x24a5cfe0  addiu       $a1, $a1, -0x3020
    ctx->pc = 0x1ddfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954976));
label_1ddfa8:
    // 0x1ddfa8: 0xa080001c  sb          $zero, 0x1C($a0)
    ctx->pc = 0x1ddfa8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 0));
label_1ddfac:
    // 0x1ddfac: 0xc04a508  jal         func_129420
label_1ddfb0:
    if (ctx->pc == 0x1DDFB0u) {
        ctx->pc = 0x1DDFB0u;
            // 0x1ddfb0: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x1DDFB4u;
        goto label_1ddfb4;
    }
    ctx->pc = 0x1DDFACu;
    SET_GPR_U32(ctx, 31, 0x1DDFB4u);
    ctx->pc = 0x1DDFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDFACu;
            // 0x1ddfb0: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDFB4u; }
        if (ctx->pc != 0x1DDFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDFB4u; }
        if (ctx->pc != 0x1DDFB4u) { return; }
    }
    ctx->pc = 0x1DDFB4u;
label_1ddfb4:
    // 0x1ddfb4: 0x8e390030  lw          $t9, 0x30($s1)
    ctx->pc = 0x1ddfb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1ddfb8:
    // 0x1ddfb8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1ddfb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1ddfbc:
    // 0x1ddfbc: 0x320f809  jalr        $t9
label_1ddfc0:
    if (ctx->pc == 0x1DDFC0u) {
        ctx->pc = 0x1DDFC0u;
            // 0x1ddfc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DDFC4u;
        goto label_1ddfc4;
    }
    ctx->pc = 0x1DDFBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DDFC4u);
        ctx->pc = 0x1DDFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDFBCu;
            // 0x1ddfc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DDFC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DDFC4u; }
            if (ctx->pc != 0x1DDFC4u) { return; }
        }
        }
    }
    ctx->pc = 0x1DDFC4u;
label_1ddfc4:
    // 0x1ddfc4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ddfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ddfc8:
    // 0x1ddfc8: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x1ddfc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_1ddfcc:
    // 0x1ddfcc: 0x2442d0d0  addiu       $v0, $v0, -0x2F30
    ctx->pc = 0x1ddfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955216));
label_1ddfd0:
    // 0x1ddfd0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1ddfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1ddfd4:
    // 0x1ddfd4: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x1ddfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_1ddfd8:
    // 0x1ddfd8: 0xc0778a0  jal         func_1DE280
label_1ddfdc:
    if (ctx->pc == 0x1DDFDCu) {
        ctx->pc = 0x1DDFDCu;
            // 0x1ddfdc: 0xae320044  sw          $s2, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 18));
        ctx->pc = 0x1DDFE0u;
        goto label_1ddfe0;
    }
    ctx->pc = 0x1DDFD8u;
    SET_GPR_U32(ctx, 31, 0x1DDFE0u);
    ctx->pc = 0x1DDFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDFD8u;
            // 0x1ddfdc: 0xae320044  sw          $s2, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE280u;
    if (runtime->hasFunction(0x1DE280u)) {
        auto targetFn = runtime->lookupFunction(0x1DE280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDFE0u; }
        if (ctx->pc != 0x1DDFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE280_0x1de280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DDFE0u; }
        if (ctx->pc != 0x1DDFE0u) { return; }
    }
    ctx->pc = 0x1DDFE0u;
label_1ddfe0:
    // 0x1ddfe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ddfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ddfe4:
    // 0x1ddfe4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ddfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ddfe8:
    // 0x1ddfe8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ddfe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ddfec:
    // 0x1ddfec: 0xa203005a  sb          $v1, 0x5A($s0)
    ctx->pc = 0x1ddfecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 3));
label_1ddff0:
    // 0x1ddff0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1ddff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1ddff4:
    // 0x1ddff4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1ddff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1ddff8:
    // 0x1ddff8: 0xc04cbd8  jal         func_132F60
label_1ddffc:
    if (ctx->pc == 0x1DDFFCu) {
        ctx->pc = 0x1DDFFCu;
            // 0x1ddffc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1DE000u;
        goto label_1de000;
    }
    ctx->pc = 0x1DDFF8u;
    SET_GPR_U32(ctx, 31, 0x1DE000u);
    ctx->pc = 0x1DDFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DDFF8u;
            // 0x1ddffc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE000u; }
        if (ctx->pc != 0x1DE000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE000u; }
        if (ctx->pc != 0x1DE000u) { return; }
    }
    ctx->pc = 0x1DE000u;
label_1de000:
    // 0x1de000: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1de000u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1de004:
    // 0x1de004: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1de004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1de008:
    // 0x1de008: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1de008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1de00c:
    // 0x1de00c: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x1de00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_1de010:
    // 0x1de010: 0xc04cbd8  jal         func_132F60
label_1de014:
    if (ctx->pc == 0x1DE014u) {
        ctx->pc = 0x1DE014u;
            // 0x1de014: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1DE018u;
        goto label_1de018;
    }
    ctx->pc = 0x1DE010u;
    SET_GPR_U32(ctx, 31, 0x1DE018u);
    ctx->pc = 0x1DE014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE010u;
            // 0x1de014: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE018u; }
        if (ctx->pc != 0x1DE018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE018u; }
        if (ctx->pc != 0x1DE018u) { return; }
    }
    ctx->pc = 0x1DE018u;
label_1de018:
    // 0x1de018: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1de018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1de01c:
    // 0x1de01c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1de01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de020:
    // 0x1de020: 0xc04a576  jal         func_1295D8
label_1de024:
    if (ctx->pc == 0x1DE024u) {
        ctx->pc = 0x1DE024u;
            // 0x1de024: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x1DE028u;
        goto label_1de028;
    }
    ctx->pc = 0x1DE020u;
    SET_GPR_U32(ctx, 31, 0x1DE028u);
    ctx->pc = 0x1DE024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE020u;
            // 0x1de024: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE028u; }
        if (ctx->pc != 0x1DE028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE028u; }
        if (ctx->pc != 0x1DE028u) { return; }
    }
    ctx->pc = 0x1DE028u;
label_1de028:
    // 0x1de028: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1de028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1de02c:
    // 0x1de02c: 0xc07789c  jal         func_1DE270
label_1de030:
    if (ctx->pc == 0x1DE030u) {
        ctx->pc = 0x1DE030u;
            // 0x1de030: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->pc = 0x1DE034u;
        goto label_1de034;
    }
    ctx->pc = 0x1DE02Cu;
    SET_GPR_U32(ctx, 31, 0x1DE034u);
    ctx->pc = 0x1DE030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE02Cu;
            // 0x1de030: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE270u;
    if (runtime->hasFunction(0x1DE270u)) {
        auto targetFn = runtime->lookupFunction(0x1DE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE034u; }
        if (ctx->pc != 0x1DE034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE270_0x1de270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE034u; }
        if (ctx->pc != 0x1DE034u) { return; }
    }
    ctx->pc = 0x1DE034u;
label_1de034:
    // 0x1de034: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1de034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1de038:
    // 0x1de038: 0xc077898  jal         func_1DE260
label_1de03c:
    if (ctx->pc == 0x1DE03Cu) {
        ctx->pc = 0x1DE03Cu;
            // 0x1de03c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->pc = 0x1DE040u;
        goto label_1de040;
    }
    ctx->pc = 0x1DE038u;
    SET_GPR_U32(ctx, 31, 0x1DE040u);
    ctx->pc = 0x1DE03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE038u;
            // 0x1de03c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE260u;
    if (runtime->hasFunction(0x1DE260u)) {
        auto targetFn = runtime->lookupFunction(0x1DE260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE040u; }
        if (ctx->pc != 0x1DE040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DE260_0x1de260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE040u; }
        if (ctx->pc != 0x1DE040u) { return; }
    }
    ctx->pc = 0x1DE040u;
label_1de040:
    // 0x1de040: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1de040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1de044:
    // 0x1de044: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1de044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1de048:
    // 0x1de048: 0xa6030058  sh          $v1, 0x58($s0)
    ctx->pc = 0x1de048u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 88), (uint16_t)GPR_U32(ctx, 3));
label_1de04c:
    // 0x1de04c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1de04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1de050:
    // 0x1de050: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x1de050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_1de054:
    // 0x1de054: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1de054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de058:
    // 0x1de058: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1de058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_1de05c:
    // 0x1de05c: 0x26040104  addiu       $a0, $s0, 0x104
    ctx->pc = 0x1de05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
label_1de060:
    // 0x1de060: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x1de060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_1de064:
    // 0x1de064: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1de064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1de068:
    // 0x1de068: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x1de068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
label_1de06c:
    // 0x1de06c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1de06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de070:
    // 0x1de070: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1de070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_1de074:
    // 0x1de074: 0xa6000054  sh          $zero, 0x54($s0)
    ctx->pc = 0x1de074u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 84), (uint16_t)GPR_U32(ctx, 0));
label_1de078:
    // 0x1de078: 0xa6000056  sh          $zero, 0x56($s0)
    ctx->pc = 0x1de078u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 86), (uint16_t)GPR_U32(ctx, 0));
label_1de07c:
    // 0x1de07c: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x1de07cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_1de080:
    // 0x1de080: 0xae060068  sw          $a2, 0x68($s0)
    ctx->pc = 0x1de080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 6));
label_1de084:
    // 0x1de084: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x1de084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_1de088:
    // 0x1de088: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x1de088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_1de08c:
    // 0x1de08c: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x1de08cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_1de090:
    // 0x1de090: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x1de090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
label_1de094:
    // 0x1de094: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x1de094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_1de098:
    // 0x1de098: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x1de098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
label_1de09c:
    // 0x1de09c: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x1de09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_1de0a0:
    // 0x1de0a0: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x1de0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
label_1de0a4:
    // 0x1de0a4: 0xa200005b  sb          $zero, 0x5B($s0)
    ctx->pc = 0x1de0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 91), (uint8_t)GPR_U32(ctx, 0));
label_1de0a8:
    // 0x1de0a8: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x1de0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_1de0ac:
    // 0x1de0ac: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x1de0acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_1de0b0:
    // 0x1de0b0: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x1de0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_1de0b4:
    // 0x1de0b4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x1de0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_1de0b8:
    // 0x1de0b8: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x1de0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
label_1de0bc:
    // 0x1de0bc: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x1de0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_1de0c0:
    // 0x1de0c0: 0xa20000d0  sb          $zero, 0xD0($s0)
    ctx->pc = 0x1de0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 208), (uint8_t)GPR_U32(ctx, 0));
label_1de0c4:
    // 0x1de0c4: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1de0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_1de0c8:
    // 0x1de0c8: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1de0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_1de0cc:
    // 0x1de0cc: 0xa20000e5  sb          $zero, 0xE5($s0)
    ctx->pc = 0x1de0ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 229), (uint8_t)GPR_U32(ctx, 0));
label_1de0d0:
    // 0x1de0d0: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1de0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
label_1de0d4:
    // 0x1de0d4: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x1de0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
label_1de0d8:
    // 0x1de0d8: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x1de0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
label_1de0dc:
    // 0x1de0dc: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x1de0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
label_1de0e0:
    // 0x1de0e0: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x1de0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
label_1de0e4:
    // 0x1de0e4: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x1de0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
label_1de0e8:
    // 0x1de0e8: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x1de0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
label_1de0ec:
    // 0x1de0ec: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x1de0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_1de0f0:
    // 0x1de0f0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1de0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_1de0f4:
    // 0x1de0f4: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x1de0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
label_1de0f8:
    // 0x1de0f8: 0xc04a576  jal         func_1295D8
label_1de0fc:
    if (ctx->pc == 0x1DE0FCu) {
        ctx->pc = 0x1DE0FCu;
            // 0x1de0fc: 0xae00009c  sw          $zero, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
        ctx->pc = 0x1DE100u;
        goto label_1de100;
    }
    ctx->pc = 0x1DE0F8u;
    SET_GPR_U32(ctx, 31, 0x1DE100u);
    ctx->pc = 0x1DE0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE0F8u;
            // 0x1de0fc: 0xae00009c  sw          $zero, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE100u; }
        if (ctx->pc != 0x1DE100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE100u; }
        if (ctx->pc != 0x1DE100u) { return; }
    }
    ctx->pc = 0x1DE100u;
label_1de100:
    // 0x1de100: 0x26040108  addiu       $a0, $s0, 0x108
    ctx->pc = 0x1de100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 264));
label_1de104:
    // 0x1de104: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1de104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de108:
    // 0x1de108: 0xc04a576  jal         func_1295D8
label_1de10c:
    if (ctx->pc == 0x1DE10Cu) {
        ctx->pc = 0x1DE10Cu;
            // 0x1de10c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1DE110u;
        goto label_1de110;
    }
    ctx->pc = 0x1DE108u;
    SET_GPR_U32(ctx, 31, 0x1DE110u);
    ctx->pc = 0x1DE10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE108u;
            // 0x1de10c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE110u; }
        if (ctx->pc != 0x1DE110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE110u; }
        if (ctx->pc != 0x1DE110u) { return; }
    }
    ctx->pc = 0x1DE110u;
label_1de110:
    // 0x1de110: 0x2604010c  addiu       $a0, $s0, 0x10C
    ctx->pc = 0x1de110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 268));
label_1de114:
    // 0x1de114: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1de114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de118:
    // 0x1de118: 0xc04a576  jal         func_1295D8
label_1de11c:
    if (ctx->pc == 0x1DE11Cu) {
        ctx->pc = 0x1DE11Cu;
            // 0x1de11c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1DE120u;
        goto label_1de120;
    }
    ctx->pc = 0x1DE118u;
    SET_GPR_U32(ctx, 31, 0x1DE120u);
    ctx->pc = 0x1DE11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE118u;
            // 0x1de11c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE120u; }
        if (ctx->pc != 0x1DE120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE120u; }
        if (ctx->pc != 0x1DE120u) { return; }
    }
    ctx->pc = 0x1DE120u;
label_1de120:
    // 0x1de120: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x1de120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_1de124:
    // 0x1de124: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1de124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de128:
    // 0x1de128: 0xc04a576  jal         func_1295D8
label_1de12c:
    if (ctx->pc == 0x1DE12Cu) {
        ctx->pc = 0x1DE12Cu;
            // 0x1de12c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1DE130u;
        goto label_1de130;
    }
    ctx->pc = 0x1DE128u;
    SET_GPR_U32(ctx, 31, 0x1DE130u);
    ctx->pc = 0x1DE12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE128u;
            // 0x1de12c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE130u; }
        if (ctx->pc != 0x1DE130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE130u; }
        if (ctx->pc != 0x1DE130u) { return; }
    }
    ctx->pc = 0x1DE130u;
label_1de130:
    // 0x1de130: 0x26040114  addiu       $a0, $s0, 0x114
    ctx->pc = 0x1de130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 276));
label_1de134:
    // 0x1de134: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1de134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de138:
    // 0x1de138: 0xc04a576  jal         func_1295D8
label_1de13c:
    if (ctx->pc == 0x1DE13Cu) {
        ctx->pc = 0x1DE13Cu;
            // 0x1de13c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1DE140u;
        goto label_1de140;
    }
    ctx->pc = 0x1DE138u;
    SET_GPR_U32(ctx, 31, 0x1DE140u);
    ctx->pc = 0x1DE13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE138u;
            // 0x1de13c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE140u; }
        if (ctx->pc != 0x1DE140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE140u; }
        if (ctx->pc != 0x1DE140u) { return; }
    }
    ctx->pc = 0x1DE140u;
label_1de140:
    // 0x1de140: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1de140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1de144:
    // 0x1de144: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1de144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1de148:
    // 0x1de148: 0x246344b0  addiu       $v1, $v1, 0x44B0
    ctx->pc = 0x1de148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17584));
label_1de14c:
    // 0x1de14c: 0x244244d8  addiu       $v0, $v0, 0x44D8
    ctx->pc = 0x1de14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17624));
label_1de150:
    // 0x1de150: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1de150u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1de154:
    // 0x1de154: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x1de154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
label_1de158:
    // 0x1de158: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x1de158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_1de15c:
    // 0x1de15c: 0x26240170  addiu       $a0, $s1, 0x170
    ctx->pc = 0x1de15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
label_1de160:
    // 0x1de160: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1de160u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1de164:
    // 0x1de164: 0xc04cbd8  jal         func_132F60
label_1de168:
    if (ctx->pc == 0x1DE168u) {
        ctx->pc = 0x1DE168u;
            // 0x1de168: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1DE16Cu;
        goto label_1de16c;
    }
    ctx->pc = 0x1DE164u;
    SET_GPR_U32(ctx, 31, 0x1DE16Cu);
    ctx->pc = 0x1DE168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE164u;
            // 0x1de168: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE16Cu; }
        if (ctx->pc != 0x1DE16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE16Cu; }
        if (ctx->pc != 0x1DE16Cu) { return; }
    }
    ctx->pc = 0x1DE16Cu;
label_1de16c:
    // 0x1de16c: 0xa2200164  sb          $zero, 0x164($s1)
    ctx->pc = 0x1de16cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 356), (uint8_t)GPR_U32(ctx, 0));
label_1de170:
    // 0x1de170: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1de170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1de174:
    // 0x1de174: 0xa2200165  sb          $zero, 0x165($s1)
    ctx->pc = 0x1de174u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 357), (uint8_t)GPR_U32(ctx, 0));
label_1de178:
    // 0x1de178: 0xa2200188  sb          $zero, 0x188($s1)
    ctx->pc = 0x1de178u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 392), (uint8_t)GPR_U32(ctx, 0));
label_1de17c:
    // 0x1de17c: 0xa2200124  sb          $zero, 0x124($s1)
    ctx->pc = 0x1de17cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 292), (uint8_t)GPR_U32(ctx, 0));
label_1de180:
    // 0x1de180: 0xa2200166  sb          $zero, 0x166($s1)
    ctx->pc = 0x1de180u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 358), (uint8_t)GPR_U32(ctx, 0));
label_1de184:
    // 0x1de184: 0xa6200160  sh          $zero, 0x160($s1)
    ctx->pc = 0x1de184u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 352), (uint16_t)GPR_U32(ctx, 0));
label_1de188:
    // 0x1de188: 0xa6200162  sh          $zero, 0x162($s1)
    ctx->pc = 0x1de188u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 354), (uint16_t)GPR_U32(ctx, 0));
label_1de18c:
    // 0x1de18c: 0xae20018c  sw          $zero, 0x18C($s1)
    ctx->pc = 0x1de18cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 396), GPR_U32(ctx, 0));
label_1de190:
    // 0x1de190: 0xae20011c  sw          $zero, 0x11C($s1)
    ctx->pc = 0x1de190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 0));
label_1de194:
    // 0x1de194: 0xae200190  sw          $zero, 0x190($s1)
    ctx->pc = 0x1de194u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 0));
label_1de198:
    // 0x1de198: 0xae200120  sw          $zero, 0x120($s1)
    ctx->pc = 0x1de198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
label_1de19c:
    // 0x1de19c: 0xa2200169  sb          $zero, 0x169($s1)
    ctx->pc = 0x1de19cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 361), (uint8_t)GPR_U32(ctx, 0));
label_1de1a0:
    // 0x1de1a0: 0xa2200167  sb          $zero, 0x167($s1)
    ctx->pc = 0x1de1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 359), (uint8_t)GPR_U32(ctx, 0));
label_1de1a4:
    // 0x1de1a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1de1a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1de1a8:
    // 0x1de1a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1de1a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1de1ac:
    // 0x1de1ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1de1acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1de1b0:
    // 0x1de1b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1de1b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1de1b4:
    // 0x1de1b4: 0x3e00008  jr          $ra
label_1de1b8:
    if (ctx->pc == 0x1DE1B8u) {
        ctx->pc = 0x1DE1B8u;
            // 0x1de1b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1DE1BCu;
        goto label_1de1bc;
    }
    ctx->pc = 0x1DE1B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE1B4u;
            // 0x1de1b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DE1BCu;
label_1de1bc:
    // 0x1de1bc: 0x0  nop
    ctx->pc = 0x1de1bcu;
    // NOP
label_1de1c0:
    // 0x1de1c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1de1c4:
    // 0x1de1c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1de1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1de1c8:
    // 0x1de1c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1de1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1de1cc:
    // 0x1de1cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1de1ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1de1d0:
    // 0x1de1d0: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_1de1d4:
    if (ctx->pc == 0x1DE1D4u) {
        ctx->pc = 0x1DE1D4u;
            // 0x1de1d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE1D8u;
        goto label_1de1d8;
    }
    ctx->pc = 0x1DE1D0u;
    {
        const bool branch_taken_0x1de1d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de1d0) {
            ctx->pc = 0x1DE1D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE1D0u;
            // 0x1de1d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DE1FCu;
            goto label_1de1fc;
        }
    }
    ctx->pc = 0x1DE1D8u;
label_1de1d8:
    // 0x1de1d8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1de1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1de1dc:
    // 0x1de1dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1de1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1de1e0:
    // 0x1de1e0: 0x2463d0d0  addiu       $v1, $v1, -0x2F30
    ctx->pc = 0x1de1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955216));
label_1de1e4:
    // 0x1de1e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1de1e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1de1e8:
    // 0x1de1e8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1de1ec:
    if (ctx->pc == 0x1DE1ECu) {
        ctx->pc = 0x1DE1ECu;
            // 0x1de1ec: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1DE1F0u;
        goto label_1de1f0;
    }
    ctx->pc = 0x1DE1E8u;
    {
        const bool branch_taken_0x1de1e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1DE1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE1E8u;
            // 0x1de1ec: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de1e8) {
            ctx->pc = 0x1DE1F8u;
            goto label_1de1f8;
        }
    }
    ctx->pc = 0x1DE1F0u;
label_1de1f0:
    // 0x1de1f0: 0xc0400a8  jal         func_1002A0
label_1de1f4:
    if (ctx->pc == 0x1DE1F4u) {
        ctx->pc = 0x1DE1F8u;
        goto label_1de1f8;
    }
    ctx->pc = 0x1DE1F0u;
    SET_GPR_U32(ctx, 31, 0x1DE1F8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE1F8u; }
        if (ctx->pc != 0x1DE1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE1F8u; }
        if (ctx->pc != 0x1DE1F8u) { return; }
    }
    ctx->pc = 0x1DE1F8u;
label_1de1f8:
    // 0x1de1f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1de1f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1de1fc:
    // 0x1de1fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1de1fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1de200:
    // 0x1de200: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1de200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1de204:
    // 0x1de204: 0x3e00008  jr          $ra
label_1de208:
    if (ctx->pc == 0x1DE208u) {
        ctx->pc = 0x1DE208u;
            // 0x1de208: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1DE20Cu;
        goto label_1de20c;
    }
    ctx->pc = 0x1DE204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE204u;
            // 0x1de208: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DE20Cu;
label_1de20c:
    // 0x1de20c: 0x0  nop
    ctx->pc = 0x1de20cu;
    // NOP
}
