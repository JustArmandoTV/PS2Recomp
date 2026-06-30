#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003FFC60
// Address: 0x3ffc60 - 0x3fff60
void sub_003FFC60_0x3ffc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FFC60_0x3ffc60");
#endif

    switch (ctx->pc) {
        case 0x3ffc60u: goto label_3ffc60;
        case 0x3ffc64u: goto label_3ffc64;
        case 0x3ffc68u: goto label_3ffc68;
        case 0x3ffc6cu: goto label_3ffc6c;
        case 0x3ffc70u: goto label_3ffc70;
        case 0x3ffc74u: goto label_3ffc74;
        case 0x3ffc78u: goto label_3ffc78;
        case 0x3ffc7cu: goto label_3ffc7c;
        case 0x3ffc80u: goto label_3ffc80;
        case 0x3ffc84u: goto label_3ffc84;
        case 0x3ffc88u: goto label_3ffc88;
        case 0x3ffc8cu: goto label_3ffc8c;
        case 0x3ffc90u: goto label_3ffc90;
        case 0x3ffc94u: goto label_3ffc94;
        case 0x3ffc98u: goto label_3ffc98;
        case 0x3ffc9cu: goto label_3ffc9c;
        case 0x3ffca0u: goto label_3ffca0;
        case 0x3ffca4u: goto label_3ffca4;
        case 0x3ffca8u: goto label_3ffca8;
        case 0x3ffcacu: goto label_3ffcac;
        case 0x3ffcb0u: goto label_3ffcb0;
        case 0x3ffcb4u: goto label_3ffcb4;
        case 0x3ffcb8u: goto label_3ffcb8;
        case 0x3ffcbcu: goto label_3ffcbc;
        case 0x3ffcc0u: goto label_3ffcc0;
        case 0x3ffcc4u: goto label_3ffcc4;
        case 0x3ffcc8u: goto label_3ffcc8;
        case 0x3ffcccu: goto label_3ffccc;
        case 0x3ffcd0u: goto label_3ffcd0;
        case 0x3ffcd4u: goto label_3ffcd4;
        case 0x3ffcd8u: goto label_3ffcd8;
        case 0x3ffcdcu: goto label_3ffcdc;
        case 0x3ffce0u: goto label_3ffce0;
        case 0x3ffce4u: goto label_3ffce4;
        case 0x3ffce8u: goto label_3ffce8;
        case 0x3ffcecu: goto label_3ffcec;
        case 0x3ffcf0u: goto label_3ffcf0;
        case 0x3ffcf4u: goto label_3ffcf4;
        case 0x3ffcf8u: goto label_3ffcf8;
        case 0x3ffcfcu: goto label_3ffcfc;
        case 0x3ffd00u: goto label_3ffd00;
        case 0x3ffd04u: goto label_3ffd04;
        case 0x3ffd08u: goto label_3ffd08;
        case 0x3ffd0cu: goto label_3ffd0c;
        case 0x3ffd10u: goto label_3ffd10;
        case 0x3ffd14u: goto label_3ffd14;
        case 0x3ffd18u: goto label_3ffd18;
        case 0x3ffd1cu: goto label_3ffd1c;
        case 0x3ffd20u: goto label_3ffd20;
        case 0x3ffd24u: goto label_3ffd24;
        case 0x3ffd28u: goto label_3ffd28;
        case 0x3ffd2cu: goto label_3ffd2c;
        case 0x3ffd30u: goto label_3ffd30;
        case 0x3ffd34u: goto label_3ffd34;
        case 0x3ffd38u: goto label_3ffd38;
        case 0x3ffd3cu: goto label_3ffd3c;
        case 0x3ffd40u: goto label_3ffd40;
        case 0x3ffd44u: goto label_3ffd44;
        case 0x3ffd48u: goto label_3ffd48;
        case 0x3ffd4cu: goto label_3ffd4c;
        case 0x3ffd50u: goto label_3ffd50;
        case 0x3ffd54u: goto label_3ffd54;
        case 0x3ffd58u: goto label_3ffd58;
        case 0x3ffd5cu: goto label_3ffd5c;
        case 0x3ffd60u: goto label_3ffd60;
        case 0x3ffd64u: goto label_3ffd64;
        case 0x3ffd68u: goto label_3ffd68;
        case 0x3ffd6cu: goto label_3ffd6c;
        case 0x3ffd70u: goto label_3ffd70;
        case 0x3ffd74u: goto label_3ffd74;
        case 0x3ffd78u: goto label_3ffd78;
        case 0x3ffd7cu: goto label_3ffd7c;
        case 0x3ffd80u: goto label_3ffd80;
        case 0x3ffd84u: goto label_3ffd84;
        case 0x3ffd88u: goto label_3ffd88;
        case 0x3ffd8cu: goto label_3ffd8c;
        case 0x3ffd90u: goto label_3ffd90;
        case 0x3ffd94u: goto label_3ffd94;
        case 0x3ffd98u: goto label_3ffd98;
        case 0x3ffd9cu: goto label_3ffd9c;
        case 0x3ffda0u: goto label_3ffda0;
        case 0x3ffda4u: goto label_3ffda4;
        case 0x3ffda8u: goto label_3ffda8;
        case 0x3ffdacu: goto label_3ffdac;
        case 0x3ffdb0u: goto label_3ffdb0;
        case 0x3ffdb4u: goto label_3ffdb4;
        case 0x3ffdb8u: goto label_3ffdb8;
        case 0x3ffdbcu: goto label_3ffdbc;
        case 0x3ffdc0u: goto label_3ffdc0;
        case 0x3ffdc4u: goto label_3ffdc4;
        case 0x3ffdc8u: goto label_3ffdc8;
        case 0x3ffdccu: goto label_3ffdcc;
        case 0x3ffdd0u: goto label_3ffdd0;
        case 0x3ffdd4u: goto label_3ffdd4;
        case 0x3ffdd8u: goto label_3ffdd8;
        case 0x3ffddcu: goto label_3ffddc;
        case 0x3ffde0u: goto label_3ffde0;
        case 0x3ffde4u: goto label_3ffde4;
        case 0x3ffde8u: goto label_3ffde8;
        case 0x3ffdecu: goto label_3ffdec;
        case 0x3ffdf0u: goto label_3ffdf0;
        case 0x3ffdf4u: goto label_3ffdf4;
        case 0x3ffdf8u: goto label_3ffdf8;
        case 0x3ffdfcu: goto label_3ffdfc;
        case 0x3ffe00u: goto label_3ffe00;
        case 0x3ffe04u: goto label_3ffe04;
        case 0x3ffe08u: goto label_3ffe08;
        case 0x3ffe0cu: goto label_3ffe0c;
        case 0x3ffe10u: goto label_3ffe10;
        case 0x3ffe14u: goto label_3ffe14;
        case 0x3ffe18u: goto label_3ffe18;
        case 0x3ffe1cu: goto label_3ffe1c;
        case 0x3ffe20u: goto label_3ffe20;
        case 0x3ffe24u: goto label_3ffe24;
        case 0x3ffe28u: goto label_3ffe28;
        case 0x3ffe2cu: goto label_3ffe2c;
        case 0x3ffe30u: goto label_3ffe30;
        case 0x3ffe34u: goto label_3ffe34;
        case 0x3ffe38u: goto label_3ffe38;
        case 0x3ffe3cu: goto label_3ffe3c;
        case 0x3ffe40u: goto label_3ffe40;
        case 0x3ffe44u: goto label_3ffe44;
        case 0x3ffe48u: goto label_3ffe48;
        case 0x3ffe4cu: goto label_3ffe4c;
        case 0x3ffe50u: goto label_3ffe50;
        case 0x3ffe54u: goto label_3ffe54;
        case 0x3ffe58u: goto label_3ffe58;
        case 0x3ffe5cu: goto label_3ffe5c;
        case 0x3ffe60u: goto label_3ffe60;
        case 0x3ffe64u: goto label_3ffe64;
        case 0x3ffe68u: goto label_3ffe68;
        case 0x3ffe6cu: goto label_3ffe6c;
        case 0x3ffe70u: goto label_3ffe70;
        case 0x3ffe74u: goto label_3ffe74;
        case 0x3ffe78u: goto label_3ffe78;
        case 0x3ffe7cu: goto label_3ffe7c;
        case 0x3ffe80u: goto label_3ffe80;
        case 0x3ffe84u: goto label_3ffe84;
        case 0x3ffe88u: goto label_3ffe88;
        case 0x3ffe8cu: goto label_3ffe8c;
        case 0x3ffe90u: goto label_3ffe90;
        case 0x3ffe94u: goto label_3ffe94;
        case 0x3ffe98u: goto label_3ffe98;
        case 0x3ffe9cu: goto label_3ffe9c;
        case 0x3ffea0u: goto label_3ffea0;
        case 0x3ffea4u: goto label_3ffea4;
        case 0x3ffea8u: goto label_3ffea8;
        case 0x3ffeacu: goto label_3ffeac;
        case 0x3ffeb0u: goto label_3ffeb0;
        case 0x3ffeb4u: goto label_3ffeb4;
        case 0x3ffeb8u: goto label_3ffeb8;
        case 0x3ffebcu: goto label_3ffebc;
        case 0x3ffec0u: goto label_3ffec0;
        case 0x3ffec4u: goto label_3ffec4;
        case 0x3ffec8u: goto label_3ffec8;
        case 0x3ffeccu: goto label_3ffecc;
        case 0x3ffed0u: goto label_3ffed0;
        case 0x3ffed4u: goto label_3ffed4;
        case 0x3ffed8u: goto label_3ffed8;
        case 0x3ffedcu: goto label_3ffedc;
        case 0x3ffee0u: goto label_3ffee0;
        case 0x3ffee4u: goto label_3ffee4;
        case 0x3ffee8u: goto label_3ffee8;
        case 0x3ffeecu: goto label_3ffeec;
        case 0x3ffef0u: goto label_3ffef0;
        case 0x3ffef4u: goto label_3ffef4;
        case 0x3ffef8u: goto label_3ffef8;
        case 0x3ffefcu: goto label_3ffefc;
        case 0x3fff00u: goto label_3fff00;
        case 0x3fff04u: goto label_3fff04;
        case 0x3fff08u: goto label_3fff08;
        case 0x3fff0cu: goto label_3fff0c;
        case 0x3fff10u: goto label_3fff10;
        case 0x3fff14u: goto label_3fff14;
        case 0x3fff18u: goto label_3fff18;
        case 0x3fff1cu: goto label_3fff1c;
        case 0x3fff20u: goto label_3fff20;
        case 0x3fff24u: goto label_3fff24;
        case 0x3fff28u: goto label_3fff28;
        case 0x3fff2cu: goto label_3fff2c;
        case 0x3fff30u: goto label_3fff30;
        case 0x3fff34u: goto label_3fff34;
        case 0x3fff38u: goto label_3fff38;
        case 0x3fff3cu: goto label_3fff3c;
        case 0x3fff40u: goto label_3fff40;
        case 0x3fff44u: goto label_3fff44;
        case 0x3fff48u: goto label_3fff48;
        case 0x3fff4cu: goto label_3fff4c;
        case 0x3fff50u: goto label_3fff50;
        case 0x3fff54u: goto label_3fff54;
        case 0x3fff58u: goto label_3fff58;
        case 0x3fff5cu: goto label_3fff5c;
        default: break;
    }

    ctx->pc = 0x3ffc60u;

label_3ffc60:
    // 0x3ffc60: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3ffc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3ffc64:
    // 0x3ffc64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ffc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3ffc68:
    // 0x3ffc68: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3ffc68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ffc6c:
    // 0x3ffc6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ffc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3ffc70:
    // 0x3ffc70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ffc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ffc74:
    // 0x3ffc74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3ffc74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ffc78:
    // 0x3ffc78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ffc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ffc7c:
    // 0x3ffc7c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3ffc7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ffc80:
    // 0x3ffc80: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x3ffc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_3ffc84:
    // 0x3ffc84: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x3ffc84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3ffc88:
    // 0x3ffc88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ffc88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ffc8c:
    // 0x3ffc8c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x3ffc8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_3ffc90:
    // 0x3ffc90: 0x320f809  jalr        $t9
label_3ffc94:
    if (ctx->pc == 0x3FFC94u) {
        ctx->pc = 0x3FFC94u;
            // 0x3ffc94: 0x24a500b0  addiu       $a1, $a1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
        ctx->pc = 0x3FFC98u;
        goto label_3ffc98;
    }
    ctx->pc = 0x3FFC90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FFC98u);
        ctx->pc = 0x3FFC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFC90u;
            // 0x3ffc94: 0x24a500b0  addiu       $a1, $a1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FFC98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FFC98u; }
            if (ctx->pc != 0x3FFC98u) { return; }
        }
        }
    }
    ctx->pc = 0x3FFC98u;
label_3ffc98:
    // 0x3ffc98: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x3ffc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3ffc9c:
    // 0x3ffc9c: 0xc7ad0094  lwc1        $f13, 0x94($sp)
    ctx->pc = 0x3ffc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3ffca0:
    // 0x3ffca0: 0xc7ae0098  lwc1        $f14, 0x98($sp)
    ctx->pc = 0x3ffca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3ffca4:
    // 0x3ffca4: 0xc04cbd8  jal         func_132F60
label_3ffca8:
    if (ctx->pc == 0x3FFCA8u) {
        ctx->pc = 0x3FFCA8u;
            // 0x3ffca8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3FFCACu;
        goto label_3ffcac;
    }
    ctx->pc = 0x3FFCA4u;
    SET_GPR_U32(ctx, 31, 0x3FFCACu);
    ctx->pc = 0x3FFCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFCA4u;
            // 0x3ffca8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FFCACu; }
        if (ctx->pc != 0x3FFCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FFCACu; }
        if (ctx->pc != 0x3FFCACu) { return; }
    }
    ctx->pc = 0x3FFCACu;
label_3ffcac:
    // 0x3ffcac: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x3ffcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3ffcb0:
    // 0x3ffcb0: 0xc7ad00a4  lwc1        $f13, 0xA4($sp)
    ctx->pc = 0x3ffcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3ffcb4:
    // 0x3ffcb4: 0xc7ae00a8  lwc1        $f14, 0xA8($sp)
    ctx->pc = 0x3ffcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3ffcb8:
    // 0x3ffcb8: 0xc04cbd8  jal         func_132F60
label_3ffcbc:
    if (ctx->pc == 0x3FFCBCu) {
        ctx->pc = 0x3FFCBCu;
            // 0x3ffcbc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3FFCC0u;
        goto label_3ffcc0;
    }
    ctx->pc = 0x3FFCB8u;
    SET_GPR_U32(ctx, 31, 0x3FFCC0u);
    ctx->pc = 0x3FFCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFCB8u;
            // 0x3ffcbc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FFCC0u; }
        if (ctx->pc != 0x3FFCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FFCC0u; }
        if (ctx->pc != 0x3FFCC0u) { return; }
    }
    ctx->pc = 0x3FFCC0u;
label_3ffcc0:
    // 0x3ffcc0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3ffcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3ffcc4:
    // 0x3ffcc4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3ffcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3ffcc8:
    // 0x3ffcc8: 0xc04cc90  jal         func_133240
label_3ffccc:
    if (ctx->pc == 0x3FFCCCu) {
        ctx->pc = 0x3FFCCCu;
            // 0x3ffccc: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3FFCD0u;
        goto label_3ffcd0;
    }
    ctx->pc = 0x3FFCC8u;
    SET_GPR_U32(ctx, 31, 0x3FFCD0u);
    ctx->pc = 0x3FFCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFCC8u;
            // 0x3ffccc: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FFCD0u; }
        if (ctx->pc != 0x3FFCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FFCD0u; }
        if (ctx->pc != 0x3FFCD0u) { return; }
    }
    ctx->pc = 0x3FFCD0u;
label_3ffcd0:
    // 0x3ffcd0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x3ffcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ffcd4:
    // 0x3ffcd4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3ffcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3ffcd8:
    // 0x3ffcd8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3ffcd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3ffcdc:
    // 0x3ffcdc: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3ffcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3ffce0:
    // 0x3ffce0: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x3ffce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ffce4:
    // 0x3ffce4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3ffce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3ffce8:
    // 0x3ffce8: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x3ffce8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_3ffcec:
    // 0x3ffcec: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3ffcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3ffcf0:
    // 0x3ffcf0: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x3ffcf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_3ffcf4:
    // 0x3ffcf4: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x3ffcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_3ffcf8:
    // 0x3ffcf8: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x3ffcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ffcfc:
    // 0x3ffcfc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3ffcfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_3ffd00:
    // 0x3ffd00: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3ffd00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_3ffd04:
    // 0x3ffd04: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x3ffd04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3ffd08:
    // 0x3ffd08: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x3ffd08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3ffd0c:
    // 0x3ffd0c: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x3ffd0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3ffd10:
    // 0x3ffd10: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3ffd10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3ffd14:
    // 0x3ffd14: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x3ffd14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_3ffd18:
    // 0x3ffd18: 0xc0a7a88  jal         func_29EA20
label_3ffd1c:
    if (ctx->pc == 0x3FFD1Cu) {
        ctx->pc = 0x3FFD1Cu;
            // 0x3ffd1c: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->pc = 0x3FFD20u;
        goto label_3ffd20;
    }
    ctx->pc = 0x3FFD18u;
    SET_GPR_U32(ctx, 31, 0x3FFD20u);
    ctx->pc = 0x3FFD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFD18u;
            // 0x3ffd1c: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FFD20u; }
        if (ctx->pc != 0x3FFD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FFD20u; }
        if (ctx->pc != 0x3FFD20u) { return; }
    }
    ctx->pc = 0x3FFD20u;
label_3ffd20:
    // 0x3ffd20: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3ffd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3ffd24:
    // 0x3ffd24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ffd24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ffd28:
    // 0x3ffd28: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_3ffd2c:
    if (ctx->pc == 0x3FFD2Cu) {
        ctx->pc = 0x3FFD2Cu;
            // 0x3ffd2c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3FFD30u;
        goto label_3ffd30;
    }
    ctx->pc = 0x3FFD28u;
    {
        const bool branch_taken_0x3ffd28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FFD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFD28u;
            // 0x3ffd2c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffd28) {
            ctx->pc = 0x3FFD48u;
            goto label_3ffd48;
        }
    }
    ctx->pc = 0x3FFD30u;
label_3ffd30:
    // 0x3ffd30: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3ffd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3ffd34:
    // 0x3ffd34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ffd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ffd38:
    // 0x3ffd38: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x3ffd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3ffd3c:
    // 0x3ffd3c: 0xc0804bc  jal         func_2012F0
label_3ffd40:
    if (ctx->pc == 0x3FFD40u) {
        ctx->pc = 0x3FFD40u;
            // 0x3ffd40: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3FFD44u;
        goto label_3ffd44;
    }
    ctx->pc = 0x3FFD3Cu;
    SET_GPR_U32(ctx, 31, 0x3FFD44u);
    ctx->pc = 0x3FFD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFD3Cu;
            // 0x3ffd40: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FFD44u; }
        if (ctx->pc != 0x3FFD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FFD44u; }
        if (ctx->pc != 0x3FFD44u) { return; }
    }
    ctx->pc = 0x3FFD44u;
label_3ffd44:
    // 0x3ffd44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ffd44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ffd48:
    // 0x3ffd48: 0xc04c968  jal         func_1325A0
label_3ffd4c:
    if (ctx->pc == 0x3FFD4Cu) {
        ctx->pc = 0x3FFD4Cu;
            // 0x3ffd4c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3FFD50u;
        goto label_3ffd50;
    }
    ctx->pc = 0x3FFD48u;
    SET_GPR_U32(ctx, 31, 0x3FFD50u);
    ctx->pc = 0x3FFD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFD48u;
            // 0x3ffd4c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FFD50u; }
        if (ctx->pc != 0x3FFD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FFD50u; }
        if (ctx->pc != 0x3FFD50u) { return; }
    }
    ctx->pc = 0x3FFD50u;
label_3ffd50:
    // 0x3ffd50: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3ffd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3ffd54:
    // 0x3ffd54: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3ffd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3ffd58:
    // 0x3ffd58: 0xc04cbe0  jal         func_132F80
label_3ffd5c:
    if (ctx->pc == 0x3FFD5Cu) {
        ctx->pc = 0x3FFD5Cu;
            // 0x3ffd5c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FFD60u;
        goto label_3ffd60;
    }
    ctx->pc = 0x3FFD58u;
    SET_GPR_U32(ctx, 31, 0x3FFD60u);
    ctx->pc = 0x3FFD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFD58u;
            // 0x3ffd5c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FFD60u; }
        if (ctx->pc != 0x3FFD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FFD60u; }
        if (ctx->pc != 0x3FFD60u) { return; }
    }
    ctx->pc = 0x3FFD60u;
label_3ffd60:
    // 0x3ffd60: 0xc040180  jal         func_100600
label_3ffd64:
    if (ctx->pc == 0x3FFD64u) {
        ctx->pc = 0x3FFD64u;
            // 0x3ffd64: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3FFD68u;
        goto label_3ffd68;
    }
    ctx->pc = 0x3FFD60u;
    SET_GPR_U32(ctx, 31, 0x3FFD68u);
    ctx->pc = 0x3FFD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFD60u;
            // 0x3ffd64: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FFD68u; }
        if (ctx->pc != 0x3FFD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FFD68u; }
        if (ctx->pc != 0x3FFD68u) { return; }
    }
    ctx->pc = 0x3FFD68u;
label_3ffd68:
    // 0x3ffd68: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_3ffd6c:
    if (ctx->pc == 0x3FFD6Cu) {
        ctx->pc = 0x3FFD6Cu;
            // 0x3ffd6c: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->pc = 0x3FFD70u;
        goto label_3ffd70;
    }
    ctx->pc = 0x3FFD68u;
    {
        const bool branch_taken_0x3ffd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ffd68) {
            ctx->pc = 0x3FFD6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFD68u;
            // 0x3ffd6c: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FFDB0u;
            goto label_3ffdb0;
        }
    }
    ctx->pc = 0x3FFD70u;
label_3ffd70:
    // 0x3ffd70: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x3ffd70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_3ffd74:
    // 0x3ffd74: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3ffd74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3ffd78:
    // 0x3ffd78: 0x2484cfe0  addiu       $a0, $a0, -0x3020
    ctx->pc = 0x3ffd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954976));
label_3ffd7c:
    // 0x3ffd7c: 0x246324a0  addiu       $v1, $v1, 0x24A0
    ctx->pc = 0x3ffd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9376));
label_3ffd80:
    // 0x3ffd80: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3ffd80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_3ffd84:
    // 0x3ffd84: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x3ffd84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_3ffd88:
    // 0x3ffd88: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3ffd88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3ffd8c:
    // 0x3ffd8c: 0x24842460  addiu       $a0, $a0, 0x2460
    ctx->pc = 0x3ffd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9312));
label_3ffd90:
    // 0x3ffd90: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3ffd90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3ffd94:
    // 0x3ffd94: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3ffd94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_3ffd98:
    // 0x3ffd98: 0x2463a5b0  addiu       $v1, $v1, -0x5A50
    ctx->pc = 0x3ffd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944176));
label_3ffd9c:
    // 0x3ffd9c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3ffd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_3ffda0:
    // 0x3ffda0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3ffda0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3ffda4:
    // 0x3ffda4: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x3ffda4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
label_3ffda8:
    // 0x3ffda8: 0xac51000c  sw          $s1, 0xC($v0)
    ctx->pc = 0x3ffda8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
label_3ffdac:
    // 0x3ffdac: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x3ffdacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_3ffdb0:
    // 0x3ffdb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ffdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ffdb4:
    // 0x3ffdb4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3ffdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3ffdb8:
    // 0x3ffdb8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3ffdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3ffdbc:
    // 0x3ffdbc: 0xc0d37ec  jal         func_34DFB0
label_3ffdc0:
    if (ctx->pc == 0x3FFDC0u) {
        ctx->pc = 0x3FFDC0u;
            // 0x3ffdc0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FFDC4u;
        goto label_3ffdc4;
    }
    ctx->pc = 0x3FFDBCu;
    SET_GPR_U32(ctx, 31, 0x3FFDC4u);
    ctx->pc = 0x3FFDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFDBCu;
            // 0x3ffdc0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FFDC4u; }
        if (ctx->pc != 0x3FFDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FFDC4u; }
        if (ctx->pc != 0x3FFDC4u) { return; }
    }
    ctx->pc = 0x3FFDC4u;
label_3ffdc4:
    // 0x3ffdc4: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x3ffdc4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_3ffdc8:
    // 0x3ffdc8: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_3ffdcc:
    if (ctx->pc == 0x3FFDCCu) {
        ctx->pc = 0x3FFDCCu;
            // 0x3ffdcc: 0x8e4300f0  lw          $v1, 0xF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
        ctx->pc = 0x3FFDD0u;
        goto label_3ffdd0;
    }
    ctx->pc = 0x3FFDC8u;
    {
        const bool branch_taken_0x3ffdc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ffdc8) {
            ctx->pc = 0x3FFDCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFDC8u;
            // 0x3ffdcc: 0x8e4300f0  lw          $v1, 0xF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FFE0Cu;
            goto label_3ffe0c;
        }
    }
    ctx->pc = 0x3FFDD0u;
label_3ffdd0:
    // 0x3ffdd0: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x3ffdd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_3ffdd4:
    // 0x3ffdd4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ffdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3ffdd8:
    // 0x3ffdd8: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x3ffdd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_3ffddc:
    // 0x3ffddc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3ffddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3ffde0:
    // 0x3ffde0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3ffde0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3ffde4:
    // 0x3ffde4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3ffde8:
    if (ctx->pc == 0x3FFDE8u) {
        ctx->pc = 0x3FFDECu;
        goto label_3ffdec;
    }
    ctx->pc = 0x3FFDE4u;
    {
        const bool branch_taken_0x3ffde4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ffde4) {
            ctx->pc = 0x3FFE08u;
            goto label_3ffe08;
        }
    }
    ctx->pc = 0x3FFDECu;
label_3ffdec:
    // 0x3ffdec: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_3ffdf0:
    if (ctx->pc == 0x3FFDF0u) {
        ctx->pc = 0x3FFDF4u;
        goto label_3ffdf4;
    }
    ctx->pc = 0x3FFDECu;
    {
        const bool branch_taken_0x3ffdec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ffdec) {
            ctx->pc = 0x3FFE08u;
            goto label_3ffe08;
        }
    }
    ctx->pc = 0x3FFDF4u;
label_3ffdf4:
    // 0x3ffdf4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3ffdf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ffdf8:
    // 0x3ffdf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ffdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ffdfc:
    // 0x3ffdfc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3ffdfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3ffe00:
    // 0x3ffe00: 0x320f809  jalr        $t9
label_3ffe04:
    if (ctx->pc == 0x3FFE04u) {
        ctx->pc = 0x3FFE04u;
            // 0x3ffe04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3FFE08u;
        goto label_3ffe08;
    }
    ctx->pc = 0x3FFE00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FFE08u);
        ctx->pc = 0x3FFE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFE00u;
            // 0x3ffe04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FFE08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FFE08u; }
            if (ctx->pc != 0x3FFE08u) { return; }
        }
        }
    }
    ctx->pc = 0x3FFE08u;
label_3ffe08:
    // 0x3ffe08: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x3ffe08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_3ffe0c:
    // 0x3ffe0c: 0x264400ec  addiu       $a0, $s2, 0xEC
    ctx->pc = 0x3ffe0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 236));
label_3ffe10:
    // 0x3ffe10: 0x8e4200f4  lw          $v0, 0xF4($s2)
    ctx->pc = 0x3ffe10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
label_3ffe14:
    // 0x3ffe14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3ffe14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ffe18:
    // 0x3ffe18: 0x27a700bc  addiu       $a3, $sp, 0xBC
    ctx->pc = 0x3ffe18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_3ffe1c:
    // 0x3ffe1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ffe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3ffe20:
    // 0x3ffe20: 0xc0a997c  jal         func_2A65F0
label_3ffe24:
    if (ctx->pc == 0x3FFE24u) {
        ctx->pc = 0x3FFE24u;
            // 0x3ffe24: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3FFE28u;
        goto label_3ffe28;
    }
    ctx->pc = 0x3FFE20u;
    SET_GPR_U32(ctx, 31, 0x3FFE28u);
    ctx->pc = 0x3FFE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFE20u;
            // 0x3ffe24: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FFE28u; }
        if (ctx->pc != 0x3FFE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FFE28u; }
        if (ctx->pc != 0x3FFE28u) { return; }
    }
    ctx->pc = 0x3FFE28u;
label_3ffe28:
    // 0x3ffe28: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3ffe28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3ffe2c:
    // 0x3ffe2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ffe2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ffe30:
    // 0x3ffe30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ffe30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ffe34:
    // 0x3ffe34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ffe34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ffe38:
    // 0x3ffe38: 0x3e00008  jr          $ra
label_3ffe3c:
    if (ctx->pc == 0x3FFE3Cu) {
        ctx->pc = 0x3FFE3Cu;
            // 0x3ffe3c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3FFE40u;
        goto label_3ffe40;
    }
    ctx->pc = 0x3FFE38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FFE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFE38u;
            // 0x3ffe3c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FFE40u;
label_3ffe40:
    // 0x3ffe40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ffe40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3ffe44:
    // 0x3ffe44: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3ffe44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3ffe48:
    // 0x3ffe48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ffe48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3ffe4c:
    // 0x3ffe4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ffe4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ffe50:
    // 0x3ffe50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ffe50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ffe54:
    // 0x3ffe54: 0x8c840060  lw          $a0, 0x60($a0)
    ctx->pc = 0x3ffe54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_3ffe58:
    // 0x3ffe58: 0x5083003e  beql        $a0, $v1, . + 4 + (0x3E << 2)
label_3ffe5c:
    if (ctx->pc == 0x3FFE5Cu) {
        ctx->pc = 0x3FFE5Cu;
            // 0x3ffe5c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3FFE60u;
        goto label_3ffe60;
    }
    ctx->pc = 0x3FFE58u;
    {
        const bool branch_taken_0x3ffe58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ffe58) {
            ctx->pc = 0x3FFE5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFE58u;
            // 0x3ffe5c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FFF54u;
            goto label_3fff54;
        }
    }
    ctx->pc = 0x3FFE60u;
label_3ffe60:
    // 0x3ffe60: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x3ffe60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ffe64:
    // 0x3ffe64: 0x50880010  beql        $a0, $t0, . + 4 + (0x10 << 2)
label_3ffe68:
    if (ctx->pc == 0x3FFE68u) {
        ctx->pc = 0x3FFE68u;
            // 0x3ffe68: 0x8e0300b0  lw          $v1, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->pc = 0x3FFE6Cu;
        goto label_3ffe6c;
    }
    ctx->pc = 0x3FFE64u;
    {
        const bool branch_taken_0x3ffe64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        if (branch_taken_0x3ffe64) {
            ctx->pc = 0x3FFE68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFE64u;
            // 0x3ffe68: 0x8e0300b0  lw          $v1, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FFEA8u;
            goto label_3ffea8;
        }
    }
    ctx->pc = 0x3FFE6Cu;
label_3ffe6c:
    // 0x3ffe6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3ffe6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ffe70:
    // 0x3ffe70: 0x10870003  beq         $a0, $a3, . + 4 + (0x3 << 2)
label_3ffe74:
    if (ctx->pc == 0x3FFE74u) {
        ctx->pc = 0x3FFE78u;
        goto label_3ffe78;
    }
    ctx->pc = 0x3FFE70u;
    {
        const bool branch_taken_0x3ffe70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x3ffe70) {
            ctx->pc = 0x3FFE80u;
            goto label_3ffe80;
        }
    }
    ctx->pc = 0x3FFE78u;
label_3ffe78:
    // 0x3ffe78: 0x10000035  b           . + 4 + (0x35 << 2)
label_3ffe7c:
    if (ctx->pc == 0x3FFE7Cu) {
        ctx->pc = 0x3FFE80u;
        goto label_3ffe80;
    }
    ctx->pc = 0x3FFE78u;
    {
        const bool branch_taken_0x3ffe78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ffe78) {
            ctx->pc = 0x3FFF50u;
            goto label_3fff50;
        }
    }
    ctx->pc = 0x3FFE80u;
label_3ffe80:
    // 0x3ffe80: 0x14c00033  bnez        $a2, . + 4 + (0x33 << 2)
label_3ffe84:
    if (ctx->pc == 0x3FFE84u) {
        ctx->pc = 0x3FFE88u;
        goto label_3ffe88;
    }
    ctx->pc = 0x3FFE80u;
    {
        const bool branch_taken_0x3ffe80 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ffe80) {
            ctx->pc = 0x3FFF50u;
            goto label_3fff50;
        }
    }
    ctx->pc = 0x3FFE88u;
label_3ffe88:
    // 0x3ffe88: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x3ffe88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_3ffe8c:
    // 0x3ffe8c: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x3ffe8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3ffe90:
    // 0x3ffe90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ffe90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3ffe94:
    // 0x3ffe94: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x3ffe94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_3ffe98:
    // 0x3ffe98: 0xae0600d0  sw          $a2, 0xD0($s0)
    ctx->pc = 0x3ffe98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 6));
label_3ffe9c:
    // 0x3ffe9c: 0xae080060  sw          $t0, 0x60($s0)
    ctx->pc = 0x3ffe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 8));
label_3ffea0:
    // 0x3ffea0: 0x1000002b  b           . + 4 + (0x2B << 2)
label_3ffea4:
    if (ctx->pc == 0x3FFEA4u) {
        ctx->pc = 0x3FFEA4u;
            // 0x3ffea4: 0xae0500b0  sw          $a1, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
        ctx->pc = 0x3FFEA8u;
        goto label_3ffea8;
    }
    ctx->pc = 0x3FFEA0u;
    {
        const bool branch_taken_0x3ffea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FFEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFEA0u;
            // 0x3ffea4: 0xae0500b0  sw          $a1, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ffea0) {
            ctx->pc = 0x3FFF50u;
            goto label_3fff50;
        }
    }
    ctx->pc = 0x3FFEA8u;
label_3ffea8:
    // 0x3ffea8: 0x14650029  bne         $v1, $a1, . + 4 + (0x29 << 2)
label_3ffeac:
    if (ctx->pc == 0x3FFEACu) {
        ctx->pc = 0x3FFEB0u;
        goto label_3ffeb0;
    }
    ctx->pc = 0x3FFEA8u;
    {
        const bool branch_taken_0x3ffea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x3ffea8) {
            ctx->pc = 0x3FFF50u;
            goto label_3fff50;
        }
    }
    ctx->pc = 0x3FFEB0u;
label_3ffeb0:
    // 0x3ffeb0: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x3ffeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_3ffeb4:
    // 0x3ffeb4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3ffeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3ffeb8:
    // 0x3ffeb8: 0x14c30025  bne         $a2, $v1, . + 4 + (0x25 << 2)
label_3ffebc:
    if (ctx->pc == 0x3FFEBCu) {
        ctx->pc = 0x3FFEC0u;
        goto label_3ffec0;
    }
    ctx->pc = 0x3FFEB8u;
    {
        const bool branch_taken_0x3ffeb8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ffeb8) {
            ctx->pc = 0x3FFF50u;
            goto label_3fff50;
        }
    }
    ctx->pc = 0x3FFEC0u;
label_3ffec0:
    // 0x3ffec0: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x3ffec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_3ffec4:
    // 0x3ffec4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3ffec4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3ffec8:
    // 0x3ffec8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x3ffec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3ffecc:
    // 0x3ffecc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ffeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ffed0:
    // 0x3ffed0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ffed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3ffed4:
    // 0x3ffed4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3ffed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3ffed8:
    // 0x3ffed8: 0x8e0300d8  lw          $v1, 0xD8($s0)
    ctx->pc = 0x3ffed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_3ffedc:
    // 0x3ffedc: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_3ffee0:
    if (ctx->pc == 0x3FFEE0u) {
        ctx->pc = 0x3FFEE0u;
            // 0x3ffee0: 0x8e0400d0  lw          $a0, 0xD0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
        ctx->pc = 0x3FFEE4u;
        goto label_3ffee4;
    }
    ctx->pc = 0x3FFEDCu;
    {
        const bool branch_taken_0x3ffedc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ffedc) {
            ctx->pc = 0x3FFEE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFEDCu;
            // 0x3ffee0: 0x8e0400d0  lw          $a0, 0xD0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FFF20u;
            goto label_3fff20;
        }
    }
    ctx->pc = 0x3FFEE4u;
label_3ffee4:
    // 0x3ffee4: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x3ffee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_3ffee8:
    // 0x3ffee8: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x3ffee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_3ffeec:
    // 0x3ffeec: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x3ffeecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_3ffef0:
    // 0x3ffef0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3ffef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3ffef4:
    // 0x3ffef4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3ffef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ffef8:
    // 0x3ffef8: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x3ffef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3ffefc:
    // 0x3ffefc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3ffefcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3fff00:
    // 0x3fff00: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3fff00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3fff04:
    // 0x3fff04: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3fff04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3fff08:
    // 0x3fff08: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x3fff08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_3fff0c:
    // 0x3fff0c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3fff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3fff10:
    // 0x3fff10: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3fff10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3fff14:
    // 0x3fff14: 0xc08bff0  jal         func_22FFC0
label_3fff18:
    if (ctx->pc == 0x3FFF18u) {
        ctx->pc = 0x3FFF18u;
            // 0x3fff18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FFF1Cu;
        goto label_3fff1c;
    }
    ctx->pc = 0x3FFF14u;
    SET_GPR_U32(ctx, 31, 0x3FFF1Cu);
    ctx->pc = 0x3FFF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFF14u;
            // 0x3fff18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FFF1Cu; }
        if (ctx->pc != 0x3FFF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FFF1Cu; }
        if (ctx->pc != 0x3FFF1Cu) { return; }
    }
    ctx->pc = 0x3FFF1Cu;
label_3fff1c:
    // 0x3fff1c: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x3fff1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_3fff20:
    // 0x3fff20: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x3fff20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3fff24:
    // 0x3fff24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3fff24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fff28:
    // 0x3fff28: 0xae0400d4  sw          $a0, 0xD4($s0)
    ctx->pc = 0x3fff28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 4));
label_3fff2c:
    // 0x3fff2c: 0xae0300d8  sw          $v1, 0xD8($s0)
    ctx->pc = 0x3fff2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
label_3fff30:
    // 0x3fff30: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x3fff30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_3fff34:
    // 0x3fff34: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x3fff34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_3fff38:
    // 0x3fff38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3fff38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3fff3c:
    // 0x3fff3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3fff3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3fff40:
    // 0x3fff40: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x3fff40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_3fff44:
    // 0x3fff44: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x3fff44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_3fff48:
    // 0x3fff48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3fff48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3fff4c:
    // 0x3fff4c: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x3fff4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
label_3fff50:
    // 0x3fff50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3fff50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3fff54:
    // 0x3fff54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3fff54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3fff58:
    // 0x3fff58: 0x3e00008  jr          $ra
label_3fff5c:
    if (ctx->pc == 0x3FFF5Cu) {
        ctx->pc = 0x3FFF5Cu;
            // 0x3fff5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3FFF60u;
        goto label_fallthrough_0x3fff58;
    }
    ctx->pc = 0x3FFF58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FFF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FFF58u;
            // 0x3fff5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3fff58:
    ctx->pc = 0x3FFF60u;
}
