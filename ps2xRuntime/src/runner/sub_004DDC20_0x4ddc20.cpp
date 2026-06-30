#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DDC20
// Address: 0x4ddc20 - 0x4de030
void sub_004DDC20_0x4ddc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DDC20_0x4ddc20");
#endif

    switch (ctx->pc) {
        case 0x4ddc20u: goto label_4ddc20;
        case 0x4ddc24u: goto label_4ddc24;
        case 0x4ddc28u: goto label_4ddc28;
        case 0x4ddc2cu: goto label_4ddc2c;
        case 0x4ddc30u: goto label_4ddc30;
        case 0x4ddc34u: goto label_4ddc34;
        case 0x4ddc38u: goto label_4ddc38;
        case 0x4ddc3cu: goto label_4ddc3c;
        case 0x4ddc40u: goto label_4ddc40;
        case 0x4ddc44u: goto label_4ddc44;
        case 0x4ddc48u: goto label_4ddc48;
        case 0x4ddc4cu: goto label_4ddc4c;
        case 0x4ddc50u: goto label_4ddc50;
        case 0x4ddc54u: goto label_4ddc54;
        case 0x4ddc58u: goto label_4ddc58;
        case 0x4ddc5cu: goto label_4ddc5c;
        case 0x4ddc60u: goto label_4ddc60;
        case 0x4ddc64u: goto label_4ddc64;
        case 0x4ddc68u: goto label_4ddc68;
        case 0x4ddc6cu: goto label_4ddc6c;
        case 0x4ddc70u: goto label_4ddc70;
        case 0x4ddc74u: goto label_4ddc74;
        case 0x4ddc78u: goto label_4ddc78;
        case 0x4ddc7cu: goto label_4ddc7c;
        case 0x4ddc80u: goto label_4ddc80;
        case 0x4ddc84u: goto label_4ddc84;
        case 0x4ddc88u: goto label_4ddc88;
        case 0x4ddc8cu: goto label_4ddc8c;
        case 0x4ddc90u: goto label_4ddc90;
        case 0x4ddc94u: goto label_4ddc94;
        case 0x4ddc98u: goto label_4ddc98;
        case 0x4ddc9cu: goto label_4ddc9c;
        case 0x4ddca0u: goto label_4ddca0;
        case 0x4ddca4u: goto label_4ddca4;
        case 0x4ddca8u: goto label_4ddca8;
        case 0x4ddcacu: goto label_4ddcac;
        case 0x4ddcb0u: goto label_4ddcb0;
        case 0x4ddcb4u: goto label_4ddcb4;
        case 0x4ddcb8u: goto label_4ddcb8;
        case 0x4ddcbcu: goto label_4ddcbc;
        case 0x4ddcc0u: goto label_4ddcc0;
        case 0x4ddcc4u: goto label_4ddcc4;
        case 0x4ddcc8u: goto label_4ddcc8;
        case 0x4ddcccu: goto label_4ddccc;
        case 0x4ddcd0u: goto label_4ddcd0;
        case 0x4ddcd4u: goto label_4ddcd4;
        case 0x4ddcd8u: goto label_4ddcd8;
        case 0x4ddcdcu: goto label_4ddcdc;
        case 0x4ddce0u: goto label_4ddce0;
        case 0x4ddce4u: goto label_4ddce4;
        case 0x4ddce8u: goto label_4ddce8;
        case 0x4ddcecu: goto label_4ddcec;
        case 0x4ddcf0u: goto label_4ddcf0;
        case 0x4ddcf4u: goto label_4ddcf4;
        case 0x4ddcf8u: goto label_4ddcf8;
        case 0x4ddcfcu: goto label_4ddcfc;
        case 0x4ddd00u: goto label_4ddd00;
        case 0x4ddd04u: goto label_4ddd04;
        case 0x4ddd08u: goto label_4ddd08;
        case 0x4ddd0cu: goto label_4ddd0c;
        case 0x4ddd10u: goto label_4ddd10;
        case 0x4ddd14u: goto label_4ddd14;
        case 0x4ddd18u: goto label_4ddd18;
        case 0x4ddd1cu: goto label_4ddd1c;
        case 0x4ddd20u: goto label_4ddd20;
        case 0x4ddd24u: goto label_4ddd24;
        case 0x4ddd28u: goto label_4ddd28;
        case 0x4ddd2cu: goto label_4ddd2c;
        case 0x4ddd30u: goto label_4ddd30;
        case 0x4ddd34u: goto label_4ddd34;
        case 0x4ddd38u: goto label_4ddd38;
        case 0x4ddd3cu: goto label_4ddd3c;
        case 0x4ddd40u: goto label_4ddd40;
        case 0x4ddd44u: goto label_4ddd44;
        case 0x4ddd48u: goto label_4ddd48;
        case 0x4ddd4cu: goto label_4ddd4c;
        case 0x4ddd50u: goto label_4ddd50;
        case 0x4ddd54u: goto label_4ddd54;
        case 0x4ddd58u: goto label_4ddd58;
        case 0x4ddd5cu: goto label_4ddd5c;
        case 0x4ddd60u: goto label_4ddd60;
        case 0x4ddd64u: goto label_4ddd64;
        case 0x4ddd68u: goto label_4ddd68;
        case 0x4ddd6cu: goto label_4ddd6c;
        case 0x4ddd70u: goto label_4ddd70;
        case 0x4ddd74u: goto label_4ddd74;
        case 0x4ddd78u: goto label_4ddd78;
        case 0x4ddd7cu: goto label_4ddd7c;
        case 0x4ddd80u: goto label_4ddd80;
        case 0x4ddd84u: goto label_4ddd84;
        case 0x4ddd88u: goto label_4ddd88;
        case 0x4ddd8cu: goto label_4ddd8c;
        case 0x4ddd90u: goto label_4ddd90;
        case 0x4ddd94u: goto label_4ddd94;
        case 0x4ddd98u: goto label_4ddd98;
        case 0x4ddd9cu: goto label_4ddd9c;
        case 0x4ddda0u: goto label_4ddda0;
        case 0x4ddda4u: goto label_4ddda4;
        case 0x4ddda8u: goto label_4ddda8;
        case 0x4dddacu: goto label_4dddac;
        case 0x4dddb0u: goto label_4dddb0;
        case 0x4dddb4u: goto label_4dddb4;
        case 0x4dddb8u: goto label_4dddb8;
        case 0x4dddbcu: goto label_4dddbc;
        case 0x4dddc0u: goto label_4dddc0;
        case 0x4dddc4u: goto label_4dddc4;
        case 0x4dddc8u: goto label_4dddc8;
        case 0x4dddccu: goto label_4dddcc;
        case 0x4dddd0u: goto label_4dddd0;
        case 0x4dddd4u: goto label_4dddd4;
        case 0x4dddd8u: goto label_4dddd8;
        case 0x4ddddcu: goto label_4ddddc;
        case 0x4ddde0u: goto label_4ddde0;
        case 0x4ddde4u: goto label_4ddde4;
        case 0x4ddde8u: goto label_4ddde8;
        case 0x4dddecu: goto label_4dddec;
        case 0x4dddf0u: goto label_4dddf0;
        case 0x4dddf4u: goto label_4dddf4;
        case 0x4dddf8u: goto label_4dddf8;
        case 0x4dddfcu: goto label_4dddfc;
        case 0x4dde00u: goto label_4dde00;
        case 0x4dde04u: goto label_4dde04;
        case 0x4dde08u: goto label_4dde08;
        case 0x4dde0cu: goto label_4dde0c;
        case 0x4dde10u: goto label_4dde10;
        case 0x4dde14u: goto label_4dde14;
        case 0x4dde18u: goto label_4dde18;
        case 0x4dde1cu: goto label_4dde1c;
        case 0x4dde20u: goto label_4dde20;
        case 0x4dde24u: goto label_4dde24;
        case 0x4dde28u: goto label_4dde28;
        case 0x4dde2cu: goto label_4dde2c;
        case 0x4dde30u: goto label_4dde30;
        case 0x4dde34u: goto label_4dde34;
        case 0x4dde38u: goto label_4dde38;
        case 0x4dde3cu: goto label_4dde3c;
        case 0x4dde40u: goto label_4dde40;
        case 0x4dde44u: goto label_4dde44;
        case 0x4dde48u: goto label_4dde48;
        case 0x4dde4cu: goto label_4dde4c;
        case 0x4dde50u: goto label_4dde50;
        case 0x4dde54u: goto label_4dde54;
        case 0x4dde58u: goto label_4dde58;
        case 0x4dde5cu: goto label_4dde5c;
        case 0x4dde60u: goto label_4dde60;
        case 0x4dde64u: goto label_4dde64;
        case 0x4dde68u: goto label_4dde68;
        case 0x4dde6cu: goto label_4dde6c;
        case 0x4dde70u: goto label_4dde70;
        case 0x4dde74u: goto label_4dde74;
        case 0x4dde78u: goto label_4dde78;
        case 0x4dde7cu: goto label_4dde7c;
        case 0x4dde80u: goto label_4dde80;
        case 0x4dde84u: goto label_4dde84;
        case 0x4dde88u: goto label_4dde88;
        case 0x4dde8cu: goto label_4dde8c;
        case 0x4dde90u: goto label_4dde90;
        case 0x4dde94u: goto label_4dde94;
        case 0x4dde98u: goto label_4dde98;
        case 0x4dde9cu: goto label_4dde9c;
        case 0x4ddea0u: goto label_4ddea0;
        case 0x4ddea4u: goto label_4ddea4;
        case 0x4ddea8u: goto label_4ddea8;
        case 0x4ddeacu: goto label_4ddeac;
        case 0x4ddeb0u: goto label_4ddeb0;
        case 0x4ddeb4u: goto label_4ddeb4;
        case 0x4ddeb8u: goto label_4ddeb8;
        case 0x4ddebcu: goto label_4ddebc;
        case 0x4ddec0u: goto label_4ddec0;
        case 0x4ddec4u: goto label_4ddec4;
        case 0x4ddec8u: goto label_4ddec8;
        case 0x4ddeccu: goto label_4ddecc;
        case 0x4dded0u: goto label_4dded0;
        case 0x4dded4u: goto label_4dded4;
        case 0x4dded8u: goto label_4dded8;
        case 0x4ddedcu: goto label_4ddedc;
        case 0x4ddee0u: goto label_4ddee0;
        case 0x4ddee4u: goto label_4ddee4;
        case 0x4ddee8u: goto label_4ddee8;
        case 0x4ddeecu: goto label_4ddeec;
        case 0x4ddef0u: goto label_4ddef0;
        case 0x4ddef4u: goto label_4ddef4;
        case 0x4ddef8u: goto label_4ddef8;
        case 0x4ddefcu: goto label_4ddefc;
        case 0x4ddf00u: goto label_4ddf00;
        case 0x4ddf04u: goto label_4ddf04;
        case 0x4ddf08u: goto label_4ddf08;
        case 0x4ddf0cu: goto label_4ddf0c;
        case 0x4ddf10u: goto label_4ddf10;
        case 0x4ddf14u: goto label_4ddf14;
        case 0x4ddf18u: goto label_4ddf18;
        case 0x4ddf1cu: goto label_4ddf1c;
        case 0x4ddf20u: goto label_4ddf20;
        case 0x4ddf24u: goto label_4ddf24;
        case 0x4ddf28u: goto label_4ddf28;
        case 0x4ddf2cu: goto label_4ddf2c;
        case 0x4ddf30u: goto label_4ddf30;
        case 0x4ddf34u: goto label_4ddf34;
        case 0x4ddf38u: goto label_4ddf38;
        case 0x4ddf3cu: goto label_4ddf3c;
        case 0x4ddf40u: goto label_4ddf40;
        case 0x4ddf44u: goto label_4ddf44;
        case 0x4ddf48u: goto label_4ddf48;
        case 0x4ddf4cu: goto label_4ddf4c;
        case 0x4ddf50u: goto label_4ddf50;
        case 0x4ddf54u: goto label_4ddf54;
        case 0x4ddf58u: goto label_4ddf58;
        case 0x4ddf5cu: goto label_4ddf5c;
        case 0x4ddf60u: goto label_4ddf60;
        case 0x4ddf64u: goto label_4ddf64;
        case 0x4ddf68u: goto label_4ddf68;
        case 0x4ddf6cu: goto label_4ddf6c;
        case 0x4ddf70u: goto label_4ddf70;
        case 0x4ddf74u: goto label_4ddf74;
        case 0x4ddf78u: goto label_4ddf78;
        case 0x4ddf7cu: goto label_4ddf7c;
        case 0x4ddf80u: goto label_4ddf80;
        case 0x4ddf84u: goto label_4ddf84;
        case 0x4ddf88u: goto label_4ddf88;
        case 0x4ddf8cu: goto label_4ddf8c;
        case 0x4ddf90u: goto label_4ddf90;
        case 0x4ddf94u: goto label_4ddf94;
        case 0x4ddf98u: goto label_4ddf98;
        case 0x4ddf9cu: goto label_4ddf9c;
        case 0x4ddfa0u: goto label_4ddfa0;
        case 0x4ddfa4u: goto label_4ddfa4;
        case 0x4ddfa8u: goto label_4ddfa8;
        case 0x4ddfacu: goto label_4ddfac;
        case 0x4ddfb0u: goto label_4ddfb0;
        case 0x4ddfb4u: goto label_4ddfb4;
        case 0x4ddfb8u: goto label_4ddfb8;
        case 0x4ddfbcu: goto label_4ddfbc;
        case 0x4ddfc0u: goto label_4ddfc0;
        case 0x4ddfc4u: goto label_4ddfc4;
        case 0x4ddfc8u: goto label_4ddfc8;
        case 0x4ddfccu: goto label_4ddfcc;
        case 0x4ddfd0u: goto label_4ddfd0;
        case 0x4ddfd4u: goto label_4ddfd4;
        case 0x4ddfd8u: goto label_4ddfd8;
        case 0x4ddfdcu: goto label_4ddfdc;
        case 0x4ddfe0u: goto label_4ddfe0;
        case 0x4ddfe4u: goto label_4ddfe4;
        case 0x4ddfe8u: goto label_4ddfe8;
        case 0x4ddfecu: goto label_4ddfec;
        case 0x4ddff0u: goto label_4ddff0;
        case 0x4ddff4u: goto label_4ddff4;
        case 0x4ddff8u: goto label_4ddff8;
        case 0x4ddffcu: goto label_4ddffc;
        case 0x4de000u: goto label_4de000;
        case 0x4de004u: goto label_4de004;
        case 0x4de008u: goto label_4de008;
        case 0x4de00cu: goto label_4de00c;
        case 0x4de010u: goto label_4de010;
        case 0x4de014u: goto label_4de014;
        case 0x4de018u: goto label_4de018;
        case 0x4de01cu: goto label_4de01c;
        case 0x4de020u: goto label_4de020;
        case 0x4de024u: goto label_4de024;
        case 0x4de028u: goto label_4de028;
        case 0x4de02cu: goto label_4de02c;
        default: break;
    }

    ctx->pc = 0x4ddc20u;

label_4ddc20:
    // 0x4ddc20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4ddc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_4ddc24:
    // 0x4ddc24: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4ddc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4ddc28:
    // 0x4ddc28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ddc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4ddc2c:
    // 0x4ddc2c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x4ddc2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
label_4ddc30:
    // 0x4ddc30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ddc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ddc34:
    // 0x4ddc34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ddc34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ddc38:
    // 0x4ddc38: 0xc137844  jal         func_4DE110
label_4ddc3c:
    if (ctx->pc == 0x4DDC3Cu) {
        ctx->pc = 0x4DDC3Cu;
            // 0x4ddc3c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x4DDC40u;
        goto label_4ddc40;
    }
    ctx->pc = 0x4DDC38u;
    SET_GPR_U32(ctx, 31, 0x4DDC40u);
    ctx->pc = 0x4DDC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDC38u;
            // 0x4ddc3c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DE110u;
    if (runtime->hasFunction(0x4DE110u)) {
        auto targetFn = runtime->lookupFunction(0x4DE110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDC40u; }
        if (ctx->pc != 0x4DDC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DE110_0x4de110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDC40u; }
        if (ctx->pc != 0x4DDC40u) { return; }
    }
    ctx->pc = 0x4DDC40u;
label_4ddc40:
    // 0x4ddc40: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4ddc40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4ddc44:
    // 0x4ddc44: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ddc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ddc48:
    // 0x4ddc48: 0x24632f20  addiu       $v1, $v1, 0x2F20
    ctx->pc = 0x4ddc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12064));
label_4ddc4c:
    // 0x4ddc4c: 0x24422f58  addiu       $v0, $v0, 0x2F58
    ctx->pc = 0x4ddc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12120));
label_4ddc50:
    // 0x4ddc50: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ddc50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4ddc54:
    // 0x4ddc54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ddc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ddc58:
    // 0x4ddc58: 0xc137840  jal         func_4DE100
label_4ddc5c:
    if (ctx->pc == 0x4DDC5Cu) {
        ctx->pc = 0x4DDC5Cu;
            // 0x4ddc5c: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4DDC60u;
        goto label_4ddc60;
    }
    ctx->pc = 0x4DDC58u;
    SET_GPR_U32(ctx, 31, 0x4DDC60u);
    ctx->pc = 0x4DDC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDC58u;
            // 0x4ddc5c: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DE100u;
    if (runtime->hasFunction(0x4DE100u)) {
        auto targetFn = runtime->lookupFunction(0x4DE100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDC60u; }
        if (ctx->pc != 0x4DDC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DE100_0x4de100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDC60u; }
        if (ctx->pc != 0x4DDC60u) { return; }
    }
    ctx->pc = 0x4DDC60u;
label_4ddc60:
    // 0x4ddc60: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4ddc60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4ddc64:
    // 0x4ddc64: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4ddc64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4ddc68:
    // 0x4ddc68: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ddc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ddc6c:
    // 0x4ddc6c: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4ddc6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_4ddc70:
    // 0x4ddc70: 0x24422e70  addiu       $v0, $v0, 0x2E70
    ctx->pc = 0x4ddc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11888));
label_4ddc74:
    // 0x4ddc74: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4ddc74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4ddc78:
    // 0x4ddc78: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ddc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ddc7c:
    // 0x4ddc7c: 0x24422ea8  addiu       $v0, $v0, 0x2EA8
    ctx->pc = 0x4ddc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11944));
label_4ddc80:
    // 0x4ddc80: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4ddc80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4ddc84:
    // 0x4ddc84: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4ddc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4ddc88:
    // 0x4ddc88: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x4ddc88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_4ddc8c:
    // 0x4ddc8c: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x4ddc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
label_4ddc90:
    // 0x4ddc90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4ddc90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4ddc94:
    // 0x4ddc94: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x4ddc94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_4ddc98:
    // 0x4ddc98: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x4ddc98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_4ddc9c:
    // 0x4ddc9c: 0x3c0240d0  lui         $v0, 0x40D0
    ctx->pc = 0x4ddc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16592 << 16));
label_4ddca0:
    // 0x4ddca0: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x4ddca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_4ddca4:
    // 0x4ddca4: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x4ddca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_4ddca8:
    // 0x4ddca8: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x4ddca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_4ddcac:
    // 0x4ddcac: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x4ddcacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_4ddcb0:
    // 0x4ddcb0: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x4ddcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_4ddcb4:
    // 0x4ddcb4: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x4ddcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_4ddcb8:
    // 0x4ddcb8: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x4ddcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_4ddcbc:
    // 0x4ddcbc: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x4ddcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_4ddcc0:
    // 0x4ddcc0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ddcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ddcc4:
    // 0x4ddcc4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4ddcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4ddcc8:
    // 0x4ddcc8: 0xc0a7a88  jal         func_29EA20
label_4ddccc:
    if (ctx->pc == 0x4DDCCCu) {
        ctx->pc = 0x4DDCCCu;
            // 0x4ddccc: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->pc = 0x4DDCD0u;
        goto label_4ddcd0;
    }
    ctx->pc = 0x4DDCC8u;
    SET_GPR_U32(ctx, 31, 0x4DDCD0u);
    ctx->pc = 0x4DDCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDCC8u;
            // 0x4ddccc: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDCD0u; }
        if (ctx->pc != 0x4DDCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDCD0u; }
        if (ctx->pc != 0x4DDCD0u) { return; }
    }
    ctx->pc = 0x4DDCD0u;
label_4ddcd0:
    // 0x4ddcd0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4ddcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4ddcd4:
    // 0x4ddcd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ddcd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ddcd8:
    // 0x4ddcd8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_4ddcdc:
    if (ctx->pc == 0x4DDCDCu) {
        ctx->pc = 0x4DDCDCu;
            // 0x4ddcdc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4DDCE0u;
        goto label_4ddce0;
    }
    ctx->pc = 0x4DDCD8u;
    {
        const bool branch_taken_0x4ddcd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DDCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDCD8u;
            // 0x4ddcdc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ddcd8) {
            ctx->pc = 0x4DDCF4u;
            goto label_4ddcf4;
        }
    }
    ctx->pc = 0x4DDCE0u;
label_4ddce0:
    // 0x4ddce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ddce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ddce4:
    // 0x4ddce4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4ddce4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4ddce8:
    // 0x4ddce8: 0xc0804bc  jal         func_2012F0
label_4ddcec:
    if (ctx->pc == 0x4DDCECu) {
        ctx->pc = 0x4DDCECu;
            // 0x4ddcec: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4DDCF0u;
        goto label_4ddcf0;
    }
    ctx->pc = 0x4DDCE8u;
    SET_GPR_U32(ctx, 31, 0x4DDCF0u);
    ctx->pc = 0x4DDCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDCE8u;
            // 0x4ddcec: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDCF0u; }
        if (ctx->pc != 0x4DDCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDCF0u; }
        if (ctx->pc != 0x4DDCF0u) { return; }
    }
    ctx->pc = 0x4DDCF0u;
label_4ddcf0:
    // 0x4ddcf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ddcf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ddcf4:
    // 0x4ddcf4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x4ddcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_4ddcf8:
    // 0x4ddcf8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4ddcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4ddcfc:
    // 0x4ddcfc: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x4ddcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_4ddd00:
    // 0x4ddd00: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x4ddd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4ddd04:
    // 0x4ddd04: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x4ddd04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_4ddd08:
    // 0x4ddd08: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x4ddd08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_4ddd0c:
    // 0x4ddd0c: 0xc0a3830  jal         func_28E0C0
label_4ddd10:
    if (ctx->pc == 0x4DDD10u) {
        ctx->pc = 0x4DDD10u;
            // 0x4ddd10: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x4DDD14u;
        goto label_4ddd14;
    }
    ctx->pc = 0x4DDD0Cu;
    SET_GPR_U32(ctx, 31, 0x4DDD14u);
    ctx->pc = 0x4DDD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDD0Cu;
            // 0x4ddd10: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDD14u; }
        if (ctx->pc != 0x4DDD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDD14u; }
        if (ctx->pc != 0x4DDD14u) { return; }
    }
    ctx->pc = 0x4DDD14u;
label_4ddd14:
    // 0x4ddd14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ddd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ddd18:
    // 0x4ddd18: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x4ddd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4ddd1c:
    // 0x4ddd1c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4ddd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4ddd20:
    // 0x4ddd20: 0xc0a7a88  jal         func_29EA20
label_4ddd24:
    if (ctx->pc == 0x4DDD24u) {
        ctx->pc = 0x4DDD24u;
            // 0x4ddd24: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x4DDD28u;
        goto label_4ddd28;
    }
    ctx->pc = 0x4DDD20u;
    SET_GPR_U32(ctx, 31, 0x4DDD28u);
    ctx->pc = 0x4DDD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDD20u;
            // 0x4ddd24: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDD28u; }
        if (ctx->pc != 0x4DDD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDD28u; }
        if (ctx->pc != 0x4DDD28u) { return; }
    }
    ctx->pc = 0x4DDD28u;
label_4ddd28:
    // 0x4ddd28: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x4ddd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4ddd2c:
    // 0x4ddd2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ddd2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ddd30:
    // 0x4ddd30: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4ddd34:
    if (ctx->pc == 0x4DDD34u) {
        ctx->pc = 0x4DDD34u;
            // 0x4ddd34: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4DDD38u;
        goto label_4ddd38;
    }
    ctx->pc = 0x4DDD30u;
    {
        const bool branch_taken_0x4ddd30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DDD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDD30u;
            // 0x4ddd34: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ddd30) {
            ctx->pc = 0x4DDD48u;
            goto label_4ddd48;
        }
    }
    ctx->pc = 0x4DDD38u;
label_4ddd38:
    // 0x4ddd38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ddd38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ddd3c:
    // 0x4ddd3c: 0xc082940  jal         func_20A500
label_4ddd40:
    if (ctx->pc == 0x4DDD40u) {
        ctx->pc = 0x4DDD40u;
            // 0x4ddd40: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DDD44u;
        goto label_4ddd44;
    }
    ctx->pc = 0x4DDD3Cu;
    SET_GPR_U32(ctx, 31, 0x4DDD44u);
    ctx->pc = 0x4DDD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDD3Cu;
            // 0x4ddd40: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A500u;
    if (runtime->hasFunction(0x20A500u)) {
        auto targetFn = runtime->lookupFunction(0x20A500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDD44u; }
        if (ctx->pc != 0x4DDD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A500_0x20a500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDD44u; }
        if (ctx->pc != 0x4DDD44u) { return; }
    }
    ctx->pc = 0x4DDD44u;
label_4ddd44:
    // 0x4ddd44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ddd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ddd48:
    // 0x4ddd48: 0xae240090  sw          $a0, 0x90($s1)
    ctx->pc = 0x4ddd48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 4));
label_4ddd4c:
    // 0x4ddd4c: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x4ddd4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_4ddd50:
    // 0x4ddd50: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_4ddd54:
    if (ctx->pc == 0x4DDD54u) {
        ctx->pc = 0x4DDD54u;
            // 0x4ddd54: 0x3c023fc0  lui         $v0, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
        ctx->pc = 0x4DDD58u;
        goto label_4ddd58;
    }
    ctx->pc = 0x4DDD50u;
    {
        const bool branch_taken_0x4ddd50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ddd50) {
            ctx->pc = 0x4DDD54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDD50u;
            // 0x4ddd54: 0x3c023fc0  lui         $v0, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DDD94u;
            goto label_4ddd94;
        }
    }
    ctx->pc = 0x4DDD58u;
label_4ddd58:
    // 0x4ddd58: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x4ddd58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_4ddd5c:
    // 0x4ddd5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4ddd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4ddd60:
    // 0x4ddd60: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x4ddd60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_4ddd64:
    // 0x4ddd64: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x4ddd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_4ddd68:
    // 0x4ddd68: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4ddd68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4ddd6c:
    // 0x4ddd6c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_4ddd70:
    if (ctx->pc == 0x4DDD70u) {
        ctx->pc = 0x4DDD74u;
        goto label_4ddd74;
    }
    ctx->pc = 0x4DDD6Cu;
    {
        const bool branch_taken_0x4ddd6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ddd6c) {
            ctx->pc = 0x4DDD90u;
            goto label_4ddd90;
        }
    }
    ctx->pc = 0x4DDD74u;
label_4ddd74:
    // 0x4ddd74: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_4ddd78:
    if (ctx->pc == 0x4DDD78u) {
        ctx->pc = 0x4DDD7Cu;
        goto label_4ddd7c;
    }
    ctx->pc = 0x4DDD74u;
    {
        const bool branch_taken_0x4ddd74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ddd74) {
            ctx->pc = 0x4DDD90u;
            goto label_4ddd90;
        }
    }
    ctx->pc = 0x4DDD7Cu;
label_4ddd7c:
    // 0x4ddd7c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4ddd7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ddd80:
    // 0x4ddd80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ddd80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ddd84:
    // 0x4ddd84: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4ddd84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4ddd88:
    // 0x4ddd88: 0x320f809  jalr        $t9
label_4ddd8c:
    if (ctx->pc == 0x4DDD8Cu) {
        ctx->pc = 0x4DDD8Cu;
            // 0x4ddd8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4DDD90u;
        goto label_4ddd90;
    }
    ctx->pc = 0x4DDD88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DDD90u);
        ctx->pc = 0x4DDD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDD88u;
            // 0x4ddd8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DDD90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DDD90u; }
            if (ctx->pc != 0x4DDD90u) { return; }
        }
        }
    }
    ctx->pc = 0x4DDD90u;
label_4ddd90:
    // 0x4ddd90: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x4ddd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_4ddd94:
    // 0x4ddd94: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4ddd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4ddd98:
    // 0x4ddd98: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x4ddd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_4ddd9c:
    // 0x4ddd9c: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4ddd9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_4ddda0:
    // 0x4ddda0: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x4ddda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_4ddda4:
    // 0x4ddda4: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x4ddda4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_4ddda8:
    // 0x4ddda8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x4ddda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_4dddac:
    // 0x4dddac: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x4dddacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_4dddb0:
    // 0x4dddb0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dddb4:
    // 0x4dddb4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4dddb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4dddb8:
    // 0x4dddb8: 0xc0a7a88  jal         func_29EA20
label_4dddbc:
    if (ctx->pc == 0x4DDDBCu) {
        ctx->pc = 0x4DDDBCu;
            // 0x4dddbc: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->pc = 0x4DDDC0u;
        goto label_4dddc0;
    }
    ctx->pc = 0x4DDDB8u;
    SET_GPR_U32(ctx, 31, 0x4DDDC0u);
    ctx->pc = 0x4DDDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDDB8u;
            // 0x4dddbc: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDDC0u; }
        if (ctx->pc != 0x4DDDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDDC0u; }
        if (ctx->pc != 0x4DDDC0u) { return; }
    }
    ctx->pc = 0x4DDDC0u;
label_4dddc0:
    // 0x4dddc0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4dddc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4dddc4:
    // 0x4dddc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4dddc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dddc8:
    // 0x4dddc8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_4dddcc:
    if (ctx->pc == 0x4DDDCCu) {
        ctx->pc = 0x4DDDCCu;
            // 0x4dddcc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4DDDD0u;
        goto label_4dddd0;
    }
    ctx->pc = 0x4DDDC8u;
    {
        const bool branch_taken_0x4dddc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DDDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDDC8u;
            // 0x4dddcc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dddc8) {
            ctx->pc = 0x4DDDE4u;
            goto label_4ddde4;
        }
    }
    ctx->pc = 0x4DDDD0u;
label_4dddd0:
    // 0x4dddd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4dddd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dddd4:
    // 0x4dddd4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4dddd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4dddd8:
    // 0x4dddd8: 0xc0804bc  jal         func_2012F0
label_4ddddc:
    if (ctx->pc == 0x4DDDDCu) {
        ctx->pc = 0x4DDDDCu;
            // 0x4ddddc: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4DDDE0u;
        goto label_4ddde0;
    }
    ctx->pc = 0x4DDDD8u;
    SET_GPR_U32(ctx, 31, 0x4DDDE0u);
    ctx->pc = 0x4DDDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDDD8u;
            // 0x4ddddc: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDDE0u; }
        if (ctx->pc != 0x4DDDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDDE0u; }
        if (ctx->pc != 0x4DDDE0u) { return; }
    }
    ctx->pc = 0x4DDDE0u;
label_4ddde0:
    // 0x4ddde0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ddde0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ddde4:
    // 0x4ddde4: 0x3c0240d0  lui         $v0, 0x40D0
    ctx->pc = 0x4ddde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16592 << 16));
label_4ddde8:
    // 0x4ddde8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4ddde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4dddec:
    // 0x4dddec: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x4dddecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_4dddf0:
    // 0x4dddf0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x4dddf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4dddf4:
    // 0x4dddf4: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x4dddf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_4dddf8:
    // 0x4dddf8: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x4dddf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_4dddfc:
    // 0x4dddfc: 0xc0a3830  jal         func_28E0C0
label_4dde00:
    if (ctx->pc == 0x4DDE00u) {
        ctx->pc = 0x4DDE00u;
            // 0x4dde00: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x4DDE04u;
        goto label_4dde04;
    }
    ctx->pc = 0x4DDDFCu;
    SET_GPR_U32(ctx, 31, 0x4DDE04u);
    ctx->pc = 0x4DDE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDDFCu;
            // 0x4dde00: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDE04u; }
        if (ctx->pc != 0x4DDE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDE04u; }
        if (ctx->pc != 0x4DDE04u) { return; }
    }
    ctx->pc = 0x4DDE04u;
label_4dde04:
    // 0x4dde04: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dde04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dde08:
    // 0x4dde08: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x4dde08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4dde0c:
    // 0x4dde0c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4dde0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4dde10:
    // 0x4dde10: 0xc0a7a88  jal         func_29EA20
label_4dde14:
    if (ctx->pc == 0x4DDE14u) {
        ctx->pc = 0x4DDE14u;
            // 0x4dde14: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x4DDE18u;
        goto label_4dde18;
    }
    ctx->pc = 0x4DDE10u;
    SET_GPR_U32(ctx, 31, 0x4DDE18u);
    ctx->pc = 0x4DDE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDE10u;
            // 0x4dde14: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDE18u; }
        if (ctx->pc != 0x4DDE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDE18u; }
        if (ctx->pc != 0x4DDE18u) { return; }
    }
    ctx->pc = 0x4DDE18u;
label_4dde18:
    // 0x4dde18: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x4dde18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4dde1c:
    // 0x4dde1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4dde1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dde20:
    // 0x4dde20: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4dde24:
    if (ctx->pc == 0x4DDE24u) {
        ctx->pc = 0x4DDE24u;
            // 0x4dde24: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4DDE28u;
        goto label_4dde28;
    }
    ctx->pc = 0x4DDE20u;
    {
        const bool branch_taken_0x4dde20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DDE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDE20u;
            // 0x4dde24: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dde20) {
            ctx->pc = 0x4DDE38u;
            goto label_4dde38;
        }
    }
    ctx->pc = 0x4DDE28u;
label_4dde28:
    // 0x4dde28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4dde28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dde2c:
    // 0x4dde2c: 0xc082940  jal         func_20A500
label_4dde30:
    if (ctx->pc == 0x4DDE30u) {
        ctx->pc = 0x4DDE30u;
            // 0x4dde30: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DDE34u;
        goto label_4dde34;
    }
    ctx->pc = 0x4DDE2Cu;
    SET_GPR_U32(ctx, 31, 0x4DDE34u);
    ctx->pc = 0x4DDE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDE2Cu;
            // 0x4dde30: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A500u;
    if (runtime->hasFunction(0x20A500u)) {
        auto targetFn = runtime->lookupFunction(0x20A500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDE34u; }
        if (ctx->pc != 0x4DDE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A500_0x20a500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDE34u; }
        if (ctx->pc != 0x4DDE34u) { return; }
    }
    ctx->pc = 0x4DDE34u;
label_4dde34:
    // 0x4dde34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4dde34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dde38:
    // 0x4dde38: 0xae240094  sw          $a0, 0x94($s1)
    ctx->pc = 0x4dde38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 4));
label_4dde3c:
    // 0x4dde3c: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x4dde3cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_4dde40:
    // 0x4dde40: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_4dde44:
    if (ctx->pc == 0x4DDE44u) {
        ctx->pc = 0x4DDE44u;
            // 0x4dde44: 0x8fa20098  lw          $v0, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->pc = 0x4DDE48u;
        goto label_4dde48;
    }
    ctx->pc = 0x4DDE40u;
    {
        const bool branch_taken_0x4dde40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dde40) {
            ctx->pc = 0x4DDE44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDE40u;
            // 0x4dde44: 0x8fa20098  lw          $v0, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DDE84u;
            goto label_4dde84;
        }
    }
    ctx->pc = 0x4DDE48u;
label_4dde48:
    // 0x4dde48: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x4dde48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_4dde4c:
    // 0x4dde4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4dde4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4dde50:
    // 0x4dde50: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x4dde50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_4dde54:
    // 0x4dde54: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x4dde54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_4dde58:
    // 0x4dde58: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4dde58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4dde5c:
    // 0x4dde5c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_4dde60:
    if (ctx->pc == 0x4DDE60u) {
        ctx->pc = 0x4DDE64u;
        goto label_4dde64;
    }
    ctx->pc = 0x4DDE5Cu;
    {
        const bool branch_taken_0x4dde5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4dde5c) {
            ctx->pc = 0x4DDE80u;
            goto label_4dde80;
        }
    }
    ctx->pc = 0x4DDE64u;
label_4dde64:
    // 0x4dde64: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_4dde68:
    if (ctx->pc == 0x4DDE68u) {
        ctx->pc = 0x4DDE6Cu;
        goto label_4dde6c;
    }
    ctx->pc = 0x4DDE64u;
    {
        const bool branch_taken_0x4dde64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dde64) {
            ctx->pc = 0x4DDE80u;
            goto label_4dde80;
        }
    }
    ctx->pc = 0x4DDE6Cu;
label_4dde6c:
    // 0x4dde6c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4dde6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4dde70:
    // 0x4dde70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4dde70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dde74:
    // 0x4dde74: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4dde74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4dde78:
    // 0x4dde78: 0x320f809  jalr        $t9
label_4dde7c:
    if (ctx->pc == 0x4DDE7Cu) {
        ctx->pc = 0x4DDE7Cu;
            // 0x4dde7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4DDE80u;
        goto label_4dde80;
    }
    ctx->pc = 0x4DDE78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DDE80u);
        ctx->pc = 0x4DDE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDE78u;
            // 0x4dde7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DDE80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DDE80u; }
            if (ctx->pc != 0x4DDE80u) { return; }
        }
        }
    }
    ctx->pc = 0x4DDE80u;
label_4dde80:
    // 0x4dde80: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x4dde80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_4dde84:
    // 0x4dde84: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x4dde84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_4dde88:
    // 0x4dde88: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x4dde88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_4dde8c:
    // 0x4dde8c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x4dde8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_4dde90:
    // 0x4dde90: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_4dde94:
    if (ctx->pc == 0x4DDE94u) {
        ctx->pc = 0x4DDE94u;
            // 0x4dde94: 0x8fa30094  lw          $v1, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->pc = 0x4DDE98u;
        goto label_4dde98;
    }
    ctx->pc = 0x4DDE90u;
    {
        const bool branch_taken_0x4dde90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4dde90) {
            ctx->pc = 0x4DDE94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDE90u;
            // 0x4dde94: 0x8fa30094  lw          $v1, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DDEA8u;
            goto label_4ddea8;
        }
    }
    ctx->pc = 0x4DDE98u;
label_4dde98:
    // 0x4dde98: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4dde98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4dde9c:
    // 0x4dde9c: 0xc0a728c  jal         func_29CA30
label_4ddea0:
    if (ctx->pc == 0x4DDEA0u) {
        ctx->pc = 0x4DDEA0u;
            // 0x4ddea0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4DDEA4u;
        goto label_4ddea4;
    }
    ctx->pc = 0x4DDE9Cu;
    SET_GPR_U32(ctx, 31, 0x4DDEA4u);
    ctx->pc = 0x4DDEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDE9Cu;
            // 0x4ddea0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDEA4u; }
        if (ctx->pc != 0x4DDEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDEA4u; }
        if (ctx->pc != 0x4DDEA4u) { return; }
    }
    ctx->pc = 0x4DDEA4u;
label_4ddea4:
    // 0x4ddea4: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x4ddea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_4ddea8:
    // 0x4ddea8: 0x8e250090  lw          $a1, 0x90($s1)
    ctx->pc = 0x4ddea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_4ddeac:
    // 0x4ddeac: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x4ddeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_4ddeb0:
    // 0x4ddeb0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x4ddeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4ddeb4:
    // 0x4ddeb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4ddeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4ddeb8:
    // 0x4ddeb8: 0xafa40094  sw          $a0, 0x94($sp)
    ctx->pc = 0x4ddeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
label_4ddebc:
    // 0x4ddebc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ddebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4ddec0:
    // 0x4ddec0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x4ddec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_4ddec4:
    // 0x4ddec4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x4ddec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_4ddec8:
    // 0x4ddec8: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x4ddec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_4ddecc:
    // 0x4ddecc: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x4ddeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_4dded0:
    // 0x4dded0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x4dded0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_4dded4:
    // 0x4dded4: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_4dded8:
    if (ctx->pc == 0x4DDED8u) {
        ctx->pc = 0x4DDED8u;
            // 0x4dded8: 0x8fa40094  lw          $a0, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->pc = 0x4DDEDCu;
        goto label_4ddedc;
    }
    ctx->pc = 0x4DDED4u;
    {
        const bool branch_taken_0x4dded4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4dded4) {
            ctx->pc = 0x4DDED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDED4u;
            // 0x4dded8: 0x8fa40094  lw          $a0, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DDEECu;
            goto label_4ddeec;
        }
    }
    ctx->pc = 0x4DDEDCu;
label_4ddedc:
    // 0x4ddedc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4ddedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4ddee0:
    // 0x4ddee0: 0xc0a728c  jal         func_29CA30
label_4ddee4:
    if (ctx->pc == 0x4DDEE4u) {
        ctx->pc = 0x4DDEE4u;
            // 0x4ddee4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4DDEE8u;
        goto label_4ddee8;
    }
    ctx->pc = 0x4DDEE0u;
    SET_GPR_U32(ctx, 31, 0x4DDEE8u);
    ctx->pc = 0x4DDEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDEE0u;
            // 0x4ddee4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDEE8u; }
        if (ctx->pc != 0x4DDEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDEE8u; }
        if (ctx->pc != 0x4DDEE8u) { return; }
    }
    ctx->pc = 0x4DDEE8u;
label_4ddee8:
    // 0x4ddee8: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x4ddee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_4ddeec:
    // 0x4ddeec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ddeecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ddef0:
    // 0x4ddef0: 0x8e280094  lw          $t0, 0x94($s1)
    ctx->pc = 0x4ddef0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_4ddef4:
    // 0x4ddef4: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x4ddef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4ddef8:
    // 0x4ddef8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x4ddef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_4ddefc:
    // 0x4ddefc: 0x24870001  addiu       $a3, $a0, 0x1
    ctx->pc = 0x4ddefcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4ddf00:
    // 0x4ddf00: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4ddf00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4ddf04:
    // 0x4ddf04: 0xafa70094  sw          $a3, 0x94($sp)
    ctx->pc = 0x4ddf04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 7));
label_4ddf08:
    // 0x4ddf08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4ddf08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4ddf0c:
    // 0x4ddf0c: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x4ddf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
label_4ddf10:
    // 0x4ddf10: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4ddf10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4ddf14:
    // 0x4ddf14: 0xc0a7a88  jal         func_29EA20
label_4ddf18:
    if (ctx->pc == 0x4DDF18u) {
        ctx->pc = 0x4DDF18u;
            // 0x4ddf18: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x4DDF1Cu;
        goto label_4ddf1c;
    }
    ctx->pc = 0x4DDF14u;
    SET_GPR_U32(ctx, 31, 0x4DDF1Cu);
    ctx->pc = 0x4DDF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDF14u;
            // 0x4ddf18: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDF1Cu; }
        if (ctx->pc != 0x4DDF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDF1Cu; }
        if (ctx->pc != 0x4DDF1Cu) { return; }
    }
    ctx->pc = 0x4DDF1Cu;
label_4ddf1c:
    // 0x4ddf1c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x4ddf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4ddf20:
    // 0x4ddf20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ddf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ddf24:
    // 0x4ddf24: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4ddf28:
    if (ctx->pc == 0x4DDF28u) {
        ctx->pc = 0x4DDF28u;
            // 0x4ddf28: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4DDF2Cu;
        goto label_4ddf2c;
    }
    ctx->pc = 0x4DDF24u;
    {
        const bool branch_taken_0x4ddf24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DDF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDF24u;
            // 0x4ddf28: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ddf24) {
            ctx->pc = 0x4DDF3Cu;
            goto label_4ddf3c;
        }
    }
    ctx->pc = 0x4DDF2Cu;
label_4ddf2c:
    // 0x4ddf2c: 0x8fa60094  lw          $a2, 0x94($sp)
    ctx->pc = 0x4ddf2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_4ddf30:
    // 0x4ddf30: 0xc081c54  jal         func_207150
label_4ddf34:
    if (ctx->pc == 0x4DDF34u) {
        ctx->pc = 0x4DDF34u;
            // 0x4ddf34: 0x8fa50090  lw          $a1, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x4DDF38u;
        goto label_4ddf38;
    }
    ctx->pc = 0x4DDF30u;
    SET_GPR_U32(ctx, 31, 0x4DDF38u);
    ctx->pc = 0x4DDF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDF30u;
            // 0x4ddf34: 0x8fa50090  lw          $a1, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207150u;
    if (runtime->hasFunction(0x207150u)) {
        auto targetFn = runtime->lookupFunction(0x207150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDF38u; }
        if (ctx->pc != 0x4DDF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00207150_0x207150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDF38u; }
        if (ctx->pc != 0x4DDF38u) { return; }
    }
    ctx->pc = 0x4DDF38u;
label_4ddf38:
    // 0x4ddf38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ddf38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ddf3c:
    // 0x4ddf3c: 0xae240060  sw          $a0, 0x60($s1)
    ctx->pc = 0x4ddf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 4));
label_4ddf40:
    // 0x4ddf40: 0xc0b61c4  jal         func_2D8710
label_4ddf44:
    if (ctx->pc == 0x4DDF44u) {
        ctx->pc = 0x4DDF44u;
            // 0x4ddf44: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4DDF48u;
        goto label_4ddf48;
    }
    ctx->pc = 0x4DDF40u;
    SET_GPR_U32(ctx, 31, 0x4DDF48u);
    ctx->pc = 0x4DDF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDF40u;
            // 0x4ddf44: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8710u;
    if (runtime->hasFunction(0x2D8710u)) {
        auto targetFn = runtime->lookupFunction(0x2D8710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDF48u; }
        if (ctx->pc != 0x4DDF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8710_0x2d8710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDF48u; }
        if (ctx->pc != 0x4DDF48u) { return; }
    }
    ctx->pc = 0x4DDF48u;
label_4ddf48:
    // 0x4ddf48: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4ddf48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ddf4c:
    // 0x4ddf4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ddf4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4ddf50:
    // 0x4ddf50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ddf50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ddf54:
    // 0x4ddf54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ddf54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ddf58:
    // 0x4ddf58: 0x3e00008  jr          $ra
label_4ddf5c:
    if (ctx->pc == 0x4DDF5Cu) {
        ctx->pc = 0x4DDF5Cu;
            // 0x4ddf5c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4DDF60u;
        goto label_4ddf60;
    }
    ctx->pc = 0x4DDF58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DDF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDF58u;
            // 0x4ddf5c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DDF60u;
label_4ddf60:
    // 0x4ddf60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ddf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4ddf64:
    // 0x4ddf64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ddf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4ddf68:
    // 0x4ddf68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ddf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ddf6c:
    // 0x4ddf6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ddf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ddf70:
    // 0x4ddf70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ddf70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ddf74:
    // 0x4ddf74: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_4ddf78:
    if (ctx->pc == 0x4DDF78u) {
        ctx->pc = 0x4DDF78u;
            // 0x4ddf78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DDF7Cu;
        goto label_4ddf7c;
    }
    ctx->pc = 0x4DDF74u;
    {
        const bool branch_taken_0x4ddf74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DDF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDF74u;
            // 0x4ddf78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ddf74) {
            ctx->pc = 0x4DE014u;
            goto label_4de014;
        }
    }
    ctx->pc = 0x4DDF7Cu;
label_4ddf7c:
    // 0x4ddf7c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4ddf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4ddf80:
    // 0x4ddf80: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ddf80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ddf84:
    // 0x4ddf84: 0x24632f20  addiu       $v1, $v1, 0x2F20
    ctx->pc = 0x4ddf84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12064));
label_4ddf88:
    // 0x4ddf88: 0x24422f58  addiu       $v0, $v0, 0x2F58
    ctx->pc = 0x4ddf88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12120));
label_4ddf8c:
    // 0x4ddf8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ddf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4ddf90:
    // 0x4ddf90: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_4ddf94:
    if (ctx->pc == 0x4DDF94u) {
        ctx->pc = 0x4DDF94u;
            // 0x4ddf94: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4DDF98u;
        goto label_4ddf98;
    }
    ctx->pc = 0x4DDF90u;
    {
        const bool branch_taken_0x4ddf90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DDF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDF90u;
            // 0x4ddf94: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ddf90) {
            ctx->pc = 0x4DDFFCu;
            goto label_4ddffc;
        }
    }
    ctx->pc = 0x4DDF98u;
label_4ddf98:
    // 0x4ddf98: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4ddf98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4ddf9c:
    // 0x4ddf9c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ddf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ddfa0:
    // 0x4ddfa0: 0x24632ed0  addiu       $v1, $v1, 0x2ED0
    ctx->pc = 0x4ddfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11984));
label_4ddfa4:
    // 0x4ddfa4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x4ddfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_4ddfa8:
    // 0x4ddfa8: 0x24422f08  addiu       $v0, $v0, 0x2F08
    ctx->pc = 0x4ddfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12040));
label_4ddfac:
    // 0x4ddfac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ddfacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4ddfb0:
    // 0x4ddfb0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4ddfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_4ddfb4:
    // 0x4ddfb4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4ddfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_4ddfb8:
    // 0x4ddfb8: 0xc0407c0  jal         func_101F00
label_4ddfbc:
    if (ctx->pc == 0x4DDFBCu) {
        ctx->pc = 0x4DDFBCu;
            // 0x4ddfbc: 0x24a5d7e0  addiu       $a1, $a1, -0x2820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957024));
        ctx->pc = 0x4DDFC0u;
        goto label_4ddfc0;
    }
    ctx->pc = 0x4DDFB8u;
    SET_GPR_U32(ctx, 31, 0x4DDFC0u);
    ctx->pc = 0x4DDFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDFB8u;
            // 0x4ddfbc: 0x24a5d7e0  addiu       $a1, $a1, -0x2820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDFC0u; }
        if (ctx->pc != 0x4DDFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDFC0u; }
        if (ctx->pc != 0x4DDFC0u) { return; }
    }
    ctx->pc = 0x4DDFC0u;
label_4ddfc0:
    // 0x4ddfc0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4ddfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4ddfc4:
    // 0x4ddfc4: 0xc0a8cf8  jal         func_2A33E0
label_4ddfc8:
    if (ctx->pc == 0x4DDFC8u) {
        ctx->pc = 0x4DDFC8u;
            // 0x4ddfc8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4DDFCCu;
        goto label_4ddfcc;
    }
    ctx->pc = 0x4DDFC4u;
    SET_GPR_U32(ctx, 31, 0x4DDFCCu);
    ctx->pc = 0x4DDFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDFC4u;
            // 0x4ddfc8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDFCCu; }
        if (ctx->pc != 0x4DDFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDFCCu; }
        if (ctx->pc != 0x4DDFCCu) { return; }
    }
    ctx->pc = 0x4DDFCCu;
label_4ddfcc:
    // 0x4ddfcc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4ddfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_4ddfd0:
    // 0x4ddfd0: 0xc137824  jal         func_4DE090
label_4ddfd4:
    if (ctx->pc == 0x4DDFD4u) {
        ctx->pc = 0x4DDFD4u;
            // 0x4ddfd4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4DDFD8u;
        goto label_4ddfd8;
    }
    ctx->pc = 0x4DDFD0u;
    SET_GPR_U32(ctx, 31, 0x4DDFD8u);
    ctx->pc = 0x4DDFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDFD0u;
            // 0x4ddfd4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DE090u;
    if (runtime->hasFunction(0x4DE090u)) {
        auto targetFn = runtime->lookupFunction(0x4DE090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDFD8u; }
        if (ctx->pc != 0x4DDFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DE090_0x4de090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDFD8u; }
        if (ctx->pc != 0x4DDFD8u) { return; }
    }
    ctx->pc = 0x4DDFD8u;
label_4ddfd8:
    // 0x4ddfd8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4ddfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_4ddfdc:
    // 0x4ddfdc: 0xc137824  jal         func_4DE090
label_4ddfe0:
    if (ctx->pc == 0x4DDFE0u) {
        ctx->pc = 0x4DDFE0u;
            // 0x4ddfe0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4DDFE4u;
        goto label_4ddfe4;
    }
    ctx->pc = 0x4DDFDCu;
    SET_GPR_U32(ctx, 31, 0x4DDFE4u);
    ctx->pc = 0x4DDFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDFDCu;
            // 0x4ddfe0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DE090u;
    if (runtime->hasFunction(0x4DE090u)) {
        auto targetFn = runtime->lookupFunction(0x4DE090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDFE4u; }
        if (ctx->pc != 0x4DDFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DE090_0x4de090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDFE4u; }
        if (ctx->pc != 0x4DDFE4u) { return; }
    }
    ctx->pc = 0x4DDFE4u;
label_4ddfe4:
    // 0x4ddfe4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4ddfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_4ddfe8:
    // 0x4ddfe8: 0xc13780c  jal         func_4DE030
label_4ddfec:
    if (ctx->pc == 0x4DDFECu) {
        ctx->pc = 0x4DDFECu;
            // 0x4ddfec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DDFF0u;
        goto label_4ddff0;
    }
    ctx->pc = 0x4DDFE8u;
    SET_GPR_U32(ctx, 31, 0x4DDFF0u);
    ctx->pc = 0x4DDFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDFE8u;
            // 0x4ddfec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4DE030u;
    if (runtime->hasFunction(0x4DE030u)) {
        auto targetFn = runtime->lookupFunction(0x4DE030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDFF0u; }
        if (ctx->pc != 0x4DDFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004DE030_0x4de030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDFF0u; }
        if (ctx->pc != 0x4DDFF0u) { return; }
    }
    ctx->pc = 0x4DDFF0u;
label_4ddff0:
    // 0x4ddff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ddff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ddff4:
    // 0x4ddff4: 0xc0ae1c0  jal         func_2B8700
label_4ddff8:
    if (ctx->pc == 0x4DDFF8u) {
        ctx->pc = 0x4DDFF8u;
            // 0x4ddff8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DDFFCu;
        goto label_4ddffc;
    }
    ctx->pc = 0x4DDFF4u;
    SET_GPR_U32(ctx, 31, 0x4DDFFCu);
    ctx->pc = 0x4DDFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDFF4u;
            // 0x4ddff8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDFFCu; }
        if (ctx->pc != 0x4DDFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DDFFCu; }
        if (ctx->pc != 0x4DDFFCu) { return; }
    }
    ctx->pc = 0x4DDFFCu;
label_4ddffc:
    // 0x4ddffc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4ddffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4de000:
    // 0x4de000: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4de000u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4de004:
    // 0x4de004: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4de008:
    if (ctx->pc == 0x4DE008u) {
        ctx->pc = 0x4DE008u;
            // 0x4de008: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DE00Cu;
        goto label_4de00c;
    }
    ctx->pc = 0x4DE004u;
    {
        const bool branch_taken_0x4de004 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4de004) {
            ctx->pc = 0x4DE008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE004u;
            // 0x4de008: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DE018u;
            goto label_4de018;
        }
    }
    ctx->pc = 0x4DE00Cu;
label_4de00c:
    // 0x4de00c: 0xc0400a8  jal         func_1002A0
label_4de010:
    if (ctx->pc == 0x4DE010u) {
        ctx->pc = 0x4DE010u;
            // 0x4de010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DE014u;
        goto label_4de014;
    }
    ctx->pc = 0x4DE00Cu;
    SET_GPR_U32(ctx, 31, 0x4DE014u);
    ctx->pc = 0x4DE010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE00Cu;
            // 0x4de010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE014u; }
        if (ctx->pc != 0x4DE014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DE014u; }
        if (ctx->pc != 0x4DE014u) { return; }
    }
    ctx->pc = 0x4DE014u;
label_4de014:
    // 0x4de014: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4de014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4de018:
    // 0x4de018: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4de018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4de01c:
    // 0x4de01c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4de01cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4de020:
    // 0x4de020: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4de020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4de024:
    // 0x4de024: 0x3e00008  jr          $ra
label_4de028:
    if (ctx->pc == 0x4DE028u) {
        ctx->pc = 0x4DE028u;
            // 0x4de028: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DE02Cu;
        goto label_4de02c;
    }
    ctx->pc = 0x4DE024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DE028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DE024u;
            // 0x4de028: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DE02Cu;
label_4de02c:
    // 0x4de02c: 0x0  nop
    ctx->pc = 0x4de02cu;
    // NOP
}
