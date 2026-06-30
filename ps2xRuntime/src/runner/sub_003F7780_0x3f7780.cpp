#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F7780
// Address: 0x3f7780 - 0x3f7ab0
void sub_003F7780_0x3f7780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F7780_0x3f7780");
#endif

    switch (ctx->pc) {
        case 0x3f7780u: goto label_3f7780;
        case 0x3f7784u: goto label_3f7784;
        case 0x3f7788u: goto label_3f7788;
        case 0x3f778cu: goto label_3f778c;
        case 0x3f7790u: goto label_3f7790;
        case 0x3f7794u: goto label_3f7794;
        case 0x3f7798u: goto label_3f7798;
        case 0x3f779cu: goto label_3f779c;
        case 0x3f77a0u: goto label_3f77a0;
        case 0x3f77a4u: goto label_3f77a4;
        case 0x3f77a8u: goto label_3f77a8;
        case 0x3f77acu: goto label_3f77ac;
        case 0x3f77b0u: goto label_3f77b0;
        case 0x3f77b4u: goto label_3f77b4;
        case 0x3f77b8u: goto label_3f77b8;
        case 0x3f77bcu: goto label_3f77bc;
        case 0x3f77c0u: goto label_3f77c0;
        case 0x3f77c4u: goto label_3f77c4;
        case 0x3f77c8u: goto label_3f77c8;
        case 0x3f77ccu: goto label_3f77cc;
        case 0x3f77d0u: goto label_3f77d0;
        case 0x3f77d4u: goto label_3f77d4;
        case 0x3f77d8u: goto label_3f77d8;
        case 0x3f77dcu: goto label_3f77dc;
        case 0x3f77e0u: goto label_3f77e0;
        case 0x3f77e4u: goto label_3f77e4;
        case 0x3f77e8u: goto label_3f77e8;
        case 0x3f77ecu: goto label_3f77ec;
        case 0x3f77f0u: goto label_3f77f0;
        case 0x3f77f4u: goto label_3f77f4;
        case 0x3f77f8u: goto label_3f77f8;
        case 0x3f77fcu: goto label_3f77fc;
        case 0x3f7800u: goto label_3f7800;
        case 0x3f7804u: goto label_3f7804;
        case 0x3f7808u: goto label_3f7808;
        case 0x3f780cu: goto label_3f780c;
        case 0x3f7810u: goto label_3f7810;
        case 0x3f7814u: goto label_3f7814;
        case 0x3f7818u: goto label_3f7818;
        case 0x3f781cu: goto label_3f781c;
        case 0x3f7820u: goto label_3f7820;
        case 0x3f7824u: goto label_3f7824;
        case 0x3f7828u: goto label_3f7828;
        case 0x3f782cu: goto label_3f782c;
        case 0x3f7830u: goto label_3f7830;
        case 0x3f7834u: goto label_3f7834;
        case 0x3f7838u: goto label_3f7838;
        case 0x3f783cu: goto label_3f783c;
        case 0x3f7840u: goto label_3f7840;
        case 0x3f7844u: goto label_3f7844;
        case 0x3f7848u: goto label_3f7848;
        case 0x3f784cu: goto label_3f784c;
        case 0x3f7850u: goto label_3f7850;
        case 0x3f7854u: goto label_3f7854;
        case 0x3f7858u: goto label_3f7858;
        case 0x3f785cu: goto label_3f785c;
        case 0x3f7860u: goto label_3f7860;
        case 0x3f7864u: goto label_3f7864;
        case 0x3f7868u: goto label_3f7868;
        case 0x3f786cu: goto label_3f786c;
        case 0x3f7870u: goto label_3f7870;
        case 0x3f7874u: goto label_3f7874;
        case 0x3f7878u: goto label_3f7878;
        case 0x3f787cu: goto label_3f787c;
        case 0x3f7880u: goto label_3f7880;
        case 0x3f7884u: goto label_3f7884;
        case 0x3f7888u: goto label_3f7888;
        case 0x3f788cu: goto label_3f788c;
        case 0x3f7890u: goto label_3f7890;
        case 0x3f7894u: goto label_3f7894;
        case 0x3f7898u: goto label_3f7898;
        case 0x3f789cu: goto label_3f789c;
        case 0x3f78a0u: goto label_3f78a0;
        case 0x3f78a4u: goto label_3f78a4;
        case 0x3f78a8u: goto label_3f78a8;
        case 0x3f78acu: goto label_3f78ac;
        case 0x3f78b0u: goto label_3f78b0;
        case 0x3f78b4u: goto label_3f78b4;
        case 0x3f78b8u: goto label_3f78b8;
        case 0x3f78bcu: goto label_3f78bc;
        case 0x3f78c0u: goto label_3f78c0;
        case 0x3f78c4u: goto label_3f78c4;
        case 0x3f78c8u: goto label_3f78c8;
        case 0x3f78ccu: goto label_3f78cc;
        case 0x3f78d0u: goto label_3f78d0;
        case 0x3f78d4u: goto label_3f78d4;
        case 0x3f78d8u: goto label_3f78d8;
        case 0x3f78dcu: goto label_3f78dc;
        case 0x3f78e0u: goto label_3f78e0;
        case 0x3f78e4u: goto label_3f78e4;
        case 0x3f78e8u: goto label_3f78e8;
        case 0x3f78ecu: goto label_3f78ec;
        case 0x3f78f0u: goto label_3f78f0;
        case 0x3f78f4u: goto label_3f78f4;
        case 0x3f78f8u: goto label_3f78f8;
        case 0x3f78fcu: goto label_3f78fc;
        case 0x3f7900u: goto label_3f7900;
        case 0x3f7904u: goto label_3f7904;
        case 0x3f7908u: goto label_3f7908;
        case 0x3f790cu: goto label_3f790c;
        case 0x3f7910u: goto label_3f7910;
        case 0x3f7914u: goto label_3f7914;
        case 0x3f7918u: goto label_3f7918;
        case 0x3f791cu: goto label_3f791c;
        case 0x3f7920u: goto label_3f7920;
        case 0x3f7924u: goto label_3f7924;
        case 0x3f7928u: goto label_3f7928;
        case 0x3f792cu: goto label_3f792c;
        case 0x3f7930u: goto label_3f7930;
        case 0x3f7934u: goto label_3f7934;
        case 0x3f7938u: goto label_3f7938;
        case 0x3f793cu: goto label_3f793c;
        case 0x3f7940u: goto label_3f7940;
        case 0x3f7944u: goto label_3f7944;
        case 0x3f7948u: goto label_3f7948;
        case 0x3f794cu: goto label_3f794c;
        case 0x3f7950u: goto label_3f7950;
        case 0x3f7954u: goto label_3f7954;
        case 0x3f7958u: goto label_3f7958;
        case 0x3f795cu: goto label_3f795c;
        case 0x3f7960u: goto label_3f7960;
        case 0x3f7964u: goto label_3f7964;
        case 0x3f7968u: goto label_3f7968;
        case 0x3f796cu: goto label_3f796c;
        case 0x3f7970u: goto label_3f7970;
        case 0x3f7974u: goto label_3f7974;
        case 0x3f7978u: goto label_3f7978;
        case 0x3f797cu: goto label_3f797c;
        case 0x3f7980u: goto label_3f7980;
        case 0x3f7984u: goto label_3f7984;
        case 0x3f7988u: goto label_3f7988;
        case 0x3f798cu: goto label_3f798c;
        case 0x3f7990u: goto label_3f7990;
        case 0x3f7994u: goto label_3f7994;
        case 0x3f7998u: goto label_3f7998;
        case 0x3f799cu: goto label_3f799c;
        case 0x3f79a0u: goto label_3f79a0;
        case 0x3f79a4u: goto label_3f79a4;
        case 0x3f79a8u: goto label_3f79a8;
        case 0x3f79acu: goto label_3f79ac;
        case 0x3f79b0u: goto label_3f79b0;
        case 0x3f79b4u: goto label_3f79b4;
        case 0x3f79b8u: goto label_3f79b8;
        case 0x3f79bcu: goto label_3f79bc;
        case 0x3f79c0u: goto label_3f79c0;
        case 0x3f79c4u: goto label_3f79c4;
        case 0x3f79c8u: goto label_3f79c8;
        case 0x3f79ccu: goto label_3f79cc;
        case 0x3f79d0u: goto label_3f79d0;
        case 0x3f79d4u: goto label_3f79d4;
        case 0x3f79d8u: goto label_3f79d8;
        case 0x3f79dcu: goto label_3f79dc;
        case 0x3f79e0u: goto label_3f79e0;
        case 0x3f79e4u: goto label_3f79e4;
        case 0x3f79e8u: goto label_3f79e8;
        case 0x3f79ecu: goto label_3f79ec;
        case 0x3f79f0u: goto label_3f79f0;
        case 0x3f79f4u: goto label_3f79f4;
        case 0x3f79f8u: goto label_3f79f8;
        case 0x3f79fcu: goto label_3f79fc;
        case 0x3f7a00u: goto label_3f7a00;
        case 0x3f7a04u: goto label_3f7a04;
        case 0x3f7a08u: goto label_3f7a08;
        case 0x3f7a0cu: goto label_3f7a0c;
        case 0x3f7a10u: goto label_3f7a10;
        case 0x3f7a14u: goto label_3f7a14;
        case 0x3f7a18u: goto label_3f7a18;
        case 0x3f7a1cu: goto label_3f7a1c;
        case 0x3f7a20u: goto label_3f7a20;
        case 0x3f7a24u: goto label_3f7a24;
        case 0x3f7a28u: goto label_3f7a28;
        case 0x3f7a2cu: goto label_3f7a2c;
        case 0x3f7a30u: goto label_3f7a30;
        case 0x3f7a34u: goto label_3f7a34;
        case 0x3f7a38u: goto label_3f7a38;
        case 0x3f7a3cu: goto label_3f7a3c;
        case 0x3f7a40u: goto label_3f7a40;
        case 0x3f7a44u: goto label_3f7a44;
        case 0x3f7a48u: goto label_3f7a48;
        case 0x3f7a4cu: goto label_3f7a4c;
        case 0x3f7a50u: goto label_3f7a50;
        case 0x3f7a54u: goto label_3f7a54;
        case 0x3f7a58u: goto label_3f7a58;
        case 0x3f7a5cu: goto label_3f7a5c;
        case 0x3f7a60u: goto label_3f7a60;
        case 0x3f7a64u: goto label_3f7a64;
        case 0x3f7a68u: goto label_3f7a68;
        case 0x3f7a6cu: goto label_3f7a6c;
        case 0x3f7a70u: goto label_3f7a70;
        case 0x3f7a74u: goto label_3f7a74;
        case 0x3f7a78u: goto label_3f7a78;
        case 0x3f7a7cu: goto label_3f7a7c;
        case 0x3f7a80u: goto label_3f7a80;
        case 0x3f7a84u: goto label_3f7a84;
        case 0x3f7a88u: goto label_3f7a88;
        case 0x3f7a8cu: goto label_3f7a8c;
        case 0x3f7a90u: goto label_3f7a90;
        case 0x3f7a94u: goto label_3f7a94;
        case 0x3f7a98u: goto label_3f7a98;
        case 0x3f7a9cu: goto label_3f7a9c;
        case 0x3f7aa0u: goto label_3f7aa0;
        case 0x3f7aa4u: goto label_3f7aa4;
        case 0x3f7aa8u: goto label_3f7aa8;
        case 0x3f7aacu: goto label_3f7aac;
        default: break;
    }

    ctx->pc = 0x3f7780u;

label_3f7780:
    // 0x3f7780: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3f7780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_3f7784:
    // 0x3f7784: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3f7784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3f7788:
    // 0x3f7788: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3f7788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3f778c:
    // 0x3f778c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3f778cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3f7790:
    // 0x3f7790: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3f7790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3f7794:
    // 0x3f7794: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3f7794u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3f7798:
    // 0x3f7798: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f7798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f779c:
    // 0x3f779c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3f779cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3f77a0:
    // 0x3f77a0: 0x8c920010  lw          $s2, 0x10($a0)
    ctx->pc = 0x3f77a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3f77a4:
    // 0x3f77a4: 0x264402c0  addiu       $a0, $s2, 0x2C0
    ctx->pc = 0x3f77a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
label_3f77a8:
    // 0x3f77a8: 0xc04cc04  jal         func_133010
label_3f77ac:
    if (ctx->pc == 0x3F77ACu) {
        ctx->pc = 0x3F77ACu;
            // 0x3f77ac: 0x264502d0  addiu       $a1, $s2, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
        ctx->pc = 0x3F77B0u;
        goto label_3f77b0;
    }
    ctx->pc = 0x3F77A8u;
    SET_GPR_U32(ctx, 31, 0x3F77B0u);
    ctx->pc = 0x3F77ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F77A8u;
            // 0x3f77ac: 0x264502d0  addiu       $a1, $s2, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F77B0u; }
        if (ctx->pc != 0x3F77B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F77B0u; }
        if (ctx->pc != 0x3F77B0u) { return; }
    }
    ctx->pc = 0x3F77B0u;
label_3f77b0:
    // 0x3f77b0: 0x8e510d74  lw          $s1, 0xD74($s2)
    ctx->pc = 0x3f77b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
label_3f77b4:
    // 0x3f77b4: 0xc64202c8  lwc1        $f2, 0x2C8($s2)
    ctx->pc = 0x3f77b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f77b8:
    // 0x3f77b8: 0xc64102c4  lwc1        $f1, 0x2C4($s2)
    ctx->pc = 0x3f77b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f77bc:
    // 0x3f77bc: 0xc64002c0  lwc1        $f0, 0x2C0($s2)
    ctx->pc = 0x3f77bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f77c0:
    // 0x3f77c0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3f77c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3f77c4:
    // 0x3f77c4: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x3f77c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_3f77c8:
    // 0x3f77c8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x3f77c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3f77cc:
    // 0x3f77cc: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x3f77ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3f77d0:
    // 0x3f77d0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3f77d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3f77d4:
    // 0x3f77d4: 0xc0a5444  jal         func_295110
label_3f77d8:
    if (ctx->pc == 0x3F77D8u) {
        ctx->pc = 0x3F77D8u;
            // 0x3f77d8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3F77DCu;
        goto label_3f77dc;
    }
    ctx->pc = 0x3F77D4u;
    SET_GPR_U32(ctx, 31, 0x3F77DCu);
    ctx->pc = 0x3F77D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F77D4u;
            // 0x3f77d8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295110u;
    if (runtime->hasFunction(0x295110u)) {
        auto targetFn = runtime->lookupFunction(0x295110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F77DCu; }
        if (ctx->pc != 0x3F77DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295110_0x295110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F77DCu; }
        if (ctx->pc != 0x3F77DCu) { return; }
    }
    ctx->pc = 0x3F77DCu;
label_3f77dc:
    // 0x3f77dc: 0xae2002d0  sw          $zero, 0x2D0($s1)
    ctx->pc = 0x3f77dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 720), GPR_U32(ctx, 0));
label_3f77e0:
    // 0x3f77e0: 0xae2002d4  sw          $zero, 0x2D4($s1)
    ctx->pc = 0x3f77e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 724), GPR_U32(ctx, 0));
label_3f77e4:
    // 0x3f77e4: 0xae2002d8  sw          $zero, 0x2D8($s1)
    ctx->pc = 0x3f77e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 728), GPR_U32(ctx, 0));
label_3f77e8:
    // 0x3f77e8: 0xae2002dc  sw          $zero, 0x2DC($s1)
    ctx->pc = 0x3f77e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 732), GPR_U32(ctx, 0));
label_3f77ec:
    // 0x3f77ec: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f77ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f77f0:
    // 0x3f77f0: 0x8c440d60  lw          $a0, 0xD60($v0)
    ctx->pc = 0x3f77f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3424)));
label_3f77f4:
    // 0x3f77f4: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x3f77f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3f77f8:
    // 0x3f77f8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3f77f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3f77fc:
    // 0x3f77fc: 0x320f809  jalr        $t9
label_3f7800:
    if (ctx->pc == 0x3F7800u) {
        ctx->pc = 0x3F7800u;
            // 0x3f7800: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x3F7804u;
        goto label_3f7804;
    }
    ctx->pc = 0x3F77FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F7804u);
        ctx->pc = 0x3F7800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F77FCu;
            // 0x3f7800: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F7804u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F7804u; }
            if (ctx->pc != 0x3F7804u) { return; }
        }
        }
    }
    ctx->pc = 0x3F7804u;
label_3f7804:
    // 0x3f7804: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f7804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7808:
    // 0x3f7808: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3f7808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3f780c:
    // 0x3f780c: 0xac400dc4  sw          $zero, 0xDC4($v0)
    ctx->pc = 0x3f780cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3524), GPR_U32(ctx, 0));
label_3f7810:
    // 0x3f7810: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f7810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7814:
    // 0x3f7814: 0xac400dd8  sw          $zero, 0xDD8($v0)
    ctx->pc = 0x3f7814u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3544), GPR_U32(ctx, 0));
label_3f7818:
    // 0x3f7818: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f7818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f781c:
    // 0x3f781c: 0xc04ccf4  jal         func_1333D0
label_3f7820:
    if (ctx->pc == 0x3F7820u) {
        ctx->pc = 0x3F7820u;
            // 0x3f7820: 0x24450580  addiu       $a1, $v0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
        ctx->pc = 0x3F7824u;
        goto label_3f7824;
    }
    ctx->pc = 0x3F781Cu;
    SET_GPR_U32(ctx, 31, 0x3F7824u);
    ctx->pc = 0x3F7820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F781Cu;
            // 0x3f7820: 0x24450580  addiu       $a1, $v0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7824u; }
        if (ctx->pc != 0x3F7824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7824u; }
        if (ctx->pc != 0x3F7824u) { return; }
    }
    ctx->pc = 0x3F7824u;
label_3f7824:
    // 0x3f7824: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f7824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7828:
    // 0x3f7828: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3f7828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f782c:
    // 0x3f782c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3f782cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3f7830:
    // 0x3f7830: 0xc04cca0  jal         func_133280
label_3f7834:
    if (ctx->pc == 0x3F7834u) {
        ctx->pc = 0x3F7834u;
            // 0x3f7834: 0x24460320  addiu       $a2, $v0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
        ctx->pc = 0x3F7838u;
        goto label_3f7838;
    }
    ctx->pc = 0x3F7830u;
    SET_GPR_U32(ctx, 31, 0x3F7838u);
    ctx->pc = 0x3F7834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7830u;
            // 0x3f7834: 0x24460320  addiu       $a2, $v0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7838u; }
        if (ctx->pc != 0x3F7838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7838u; }
        if (ctx->pc != 0x3F7838u) { return; }
    }
    ctx->pc = 0x3F7838u;
label_3f7838:
    // 0x3f7838: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x3f7838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_3f783c:
    // 0x3f783c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3f783cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f7840:
    // 0x3f7840: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3f7840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3f7844:
    // 0x3f7844: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f7844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7848:
    // 0x3f7848: 0x24440320  addiu       $a0, $v0, 0x320
    ctx->pc = 0x3f7848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 800));
label_3f784c:
    // 0x3f784c: 0xc04cca0  jal         func_133280
label_3f7850:
    if (ctx->pc == 0x3F7850u) {
        ctx->pc = 0x3F7850u;
            // 0x3f7850: 0x24450580  addiu       $a1, $v0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
        ctx->pc = 0x3F7854u;
        goto label_3f7854;
    }
    ctx->pc = 0x3F784Cu;
    SET_GPR_U32(ctx, 31, 0x3F7854u);
    ctx->pc = 0x3F7850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F784Cu;
            // 0x3f7850: 0x24450580  addiu       $a1, $v0, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7854u; }
        if (ctx->pc != 0x3F7854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7854u; }
        if (ctx->pc != 0x3F7854u) { return; }
    }
    ctx->pc = 0x3F7854u;
label_3f7854:
    // 0x3f7854: 0x3c033e3d  lui         $v1, 0x3E3D
    ctx->pc = 0x3f7854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15933 << 16));
label_3f7858:
    // 0x3f7858: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3f7858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f785c:
    // 0x3f785c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3f785cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_3f7860:
    // 0x3f7860: 0x3463a12f  ori         $v1, $v1, 0xA12F
    ctx->pc = 0x3f7860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41263);
label_3f7864:
    // 0x3f7864: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3f7864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f7868:
    // 0x3f7868: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3f7868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3f786c:
    // 0x3f786c: 0xc0767f0  jal         func_1D9FC0
label_3f7870:
    if (ctx->pc == 0x3F7870u) {
        ctx->pc = 0x3F7870u;
            // 0x3f7870: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F7874u;
        goto label_3f7874;
    }
    ctx->pc = 0x3F786Cu;
    SET_GPR_U32(ctx, 31, 0x3F7874u);
    ctx->pc = 0x3F7870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F786Cu;
            // 0x3f7870: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7874u; }
        if (ctx->pc != 0x3F7874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7874u; }
        if (ctx->pc != 0x3F7874u) { return; }
    }
    ctx->pc = 0x3F7874u;
label_3f7874:
    // 0x3f7874: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3f7874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7878:
    // 0x3f7878: 0xac600de8  sw          $zero, 0xDE8($v1)
    ctx->pc = 0x3f7878u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3560), GPR_U32(ctx, 0));
label_3f787c:
    // 0x3f787c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3f787cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7880:
    // 0x3f7880: 0xac600dc0  sw          $zero, 0xDC0($v1)
    ctx->pc = 0x3f7880u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3520), GPR_U32(ctx, 0));
label_3f7884:
    // 0x3f7884: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3f7884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7888:
    // 0x3f7888: 0x8c830a74  lw          $v1, 0xA74($a0)
    ctx->pc = 0x3f7888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2676)));
label_3f788c:
    // 0x3f788c: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x3f788cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3f7890:
    // 0x3f7890: 0x5020007d  beql        $at, $zero, . + 4 + (0x7D << 2)
label_3f7894:
    if (ctx->pc == 0x3F7894u) {
        ctx->pc = 0x3F7894u;
            // 0x3f7894: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3F7898u;
        goto label_3f7898;
    }
    ctx->pc = 0x3F7890u;
    {
        const bool branch_taken_0x3f7890 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f7890) {
            ctx->pc = 0x3F7894u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7890u;
            // 0x3f7894: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F7A88u;
            goto label_3f7a88;
        }
    }
    ctx->pc = 0x3F7898u;
label_3f7898:
    // 0x3f7898: 0x248507e0  addiu       $a1, $a0, 0x7E0
    ctx->pc = 0x3f7898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_3f789c:
    // 0x3f789c: 0xc04ccf4  jal         func_1333D0
label_3f78a0:
    if (ctx->pc == 0x3F78A0u) {
        ctx->pc = 0x3F78A0u;
            // 0x3f78a0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3F78A4u;
        goto label_3f78a4;
    }
    ctx->pc = 0x3F789Cu;
    SET_GPR_U32(ctx, 31, 0x3F78A4u);
    ctx->pc = 0x3F78A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F789Cu;
            // 0x3f78a0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F78A4u; }
        if (ctx->pc != 0x3F78A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F78A4u; }
        if (ctx->pc != 0x3F78A4u) { return; }
    }
    ctx->pc = 0x3F78A4u;
label_3f78a4:
    // 0x3f78a4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3f78a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3f78a8:
    // 0x3f78a8: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x3f78a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3f78ac:
    // 0x3f78ac: 0xc04cca0  jal         func_133280
label_3f78b0:
    if (ctx->pc == 0x3F78B0u) {
        ctx->pc = 0x3F78B0u;
            // 0x3f78b0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F78B4u;
        goto label_3f78b4;
    }
    ctx->pc = 0x3F78ACu;
    SET_GPR_U32(ctx, 31, 0x3F78B4u);
    ctx->pc = 0x3F78B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F78ACu;
            // 0x3f78b0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F78B4u; }
        if (ctx->pc != 0x3F78B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F78B4u; }
        if (ctx->pc != 0x3F78B4u) { return; }
    }
    ctx->pc = 0x3F78B4u;
label_3f78b4:
    // 0x3f78b4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3f78b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3f78b8:
    // 0x3f78b8: 0xc04cc2c  jal         func_1330B0
label_3f78bc:
    if (ctx->pc == 0x3F78BCu) {
        ctx->pc = 0x3F78BCu;
            // 0x3f78bc: 0xafa000c4  sw          $zero, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
        ctx->pc = 0x3F78C0u;
        goto label_3f78c0;
    }
    ctx->pc = 0x3F78B8u;
    SET_GPR_U32(ctx, 31, 0x3F78C0u);
    ctx->pc = 0x3F78BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F78B8u;
            // 0x3f78bc: 0xafa000c4  sw          $zero, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F78C0u; }
        if (ctx->pc != 0x3F78C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F78C0u; }
        if (ctx->pc != 0x3F78C0u) { return; }
    }
    ctx->pc = 0x3F78C0u;
label_3f78c0:
    // 0x3f78c0: 0x3c023727  lui         $v0, 0x3727
    ctx->pc = 0x3f78c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14119 << 16));
label_3f78c4:
    // 0x3f78c4: 0x3442c5ac  ori         $v0, $v0, 0xC5AC
    ctx->pc = 0x3f78c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50604);
label_3f78c8:
    // 0x3f78c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3f78c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f78cc:
    // 0x3f78cc: 0x0  nop
    ctx->pc = 0x3f78ccu;
    // NOP
label_3f78d0:
    // 0x3f78d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f78d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f78d4:
    // 0x3f78d4: 0x45030059  bc1tl       . + 4 + (0x59 << 2)
label_3f78d8:
    if (ctx->pc == 0x3F78D8u) {
        ctx->pc = 0x3F78D8u;
            // 0x3f78d8: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x3F78DCu;
        goto label_3f78dc;
    }
    ctx->pc = 0x3F78D4u;
    {
        const bool branch_taken_0x3f78d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f78d4) {
            ctx->pc = 0x3F78D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F78D4u;
            // 0x3f78d8: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F7A3Cu;
            goto label_3f7a3c;
        }
    }
    ctx->pc = 0x3F78DCu;
label_3f78dc:
    // 0x3f78dc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3f78dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3f78e0:
    // 0x3f78e0: 0xc04cc44  jal         func_133110
label_3f78e4:
    if (ctx->pc == 0x3F78E4u) {
        ctx->pc = 0x3F78E4u;
            // 0x3f78e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F78E8u;
        goto label_3f78e8;
    }
    ctx->pc = 0x3F78E0u;
    SET_GPR_U32(ctx, 31, 0x3F78E8u);
    ctx->pc = 0x3F78E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F78E0u;
            // 0x3f78e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F78E8u; }
        if (ctx->pc != 0x3F78E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F78E8u; }
        if (ctx->pc != 0x3F78E8u) { return; }
    }
    ctx->pc = 0x3F78E8u;
label_3f78e8:
    // 0x3f78e8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3f78e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_3f78ec:
    // 0x3f78ec: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x3f78ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3f78f0:
    // 0x3f78f0: 0xc04cc08  jal         func_133020
label_3f78f4:
    if (ctx->pc == 0x3F78F4u) {
        ctx->pc = 0x3F78F4u;
            // 0x3f78f4: 0x2484b690  addiu       $a0, $a0, -0x4970 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948496));
        ctx->pc = 0x3F78F8u;
        goto label_3f78f8;
    }
    ctx->pc = 0x3F78F0u;
    SET_GPR_U32(ctx, 31, 0x3F78F8u);
    ctx->pc = 0x3F78F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F78F0u;
            // 0x3f78f4: 0x2484b690  addiu       $a0, $a0, -0x4970 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F78F8u; }
        if (ctx->pc != 0x3F78F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F78F8u; }
        if (ctx->pc != 0x3F78F8u) { return; }
    }
    ctx->pc = 0x3F78F8u;
label_3f78f8:
    // 0x3f78f8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3f78f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_3f78fc:
    // 0x3f78fc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3f78fcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3f7900:
    // 0x3f7900: 0xc04cc14  jal         func_133050
label_3f7904:
    if (ctx->pc == 0x3F7904u) {
        ctx->pc = 0x3F7904u;
            // 0x3f7904: 0x2484b690  addiu       $a0, $a0, -0x4970 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948496));
        ctx->pc = 0x3F7908u;
        goto label_3f7908;
    }
    ctx->pc = 0x3F7900u;
    SET_GPR_U32(ctx, 31, 0x3F7908u);
    ctx->pc = 0x3F7904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7900u;
            // 0x3f7904: 0x2484b690  addiu       $a0, $a0, -0x4970 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7908u; }
        if (ctx->pc != 0x3F7908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7908u; }
        if (ctx->pc != 0x3F7908u) { return; }
    }
    ctx->pc = 0x3F7908u;
label_3f7908:
    // 0x3f7908: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3f7908u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3f790c:
    // 0x3f790c: 0xc04cc14  jal         func_133050
label_3f7910:
    if (ctx->pc == 0x3F7910u) {
        ctx->pc = 0x3F7910u;
            // 0x3f7910: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3F7914u;
        goto label_3f7914;
    }
    ctx->pc = 0x3F790Cu;
    SET_GPR_U32(ctx, 31, 0x3F7914u);
    ctx->pc = 0x3F7910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F790Cu;
            // 0x3f7910: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7914u; }
        if (ctx->pc != 0x3F7914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7914u; }
        if (ctx->pc != 0x3F7914u) { return; }
    }
    ctx->pc = 0x3F7914u;
label_3f7914:
    // 0x3f7914: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3f7914u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3f7918:
    // 0x3f7918: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3f7918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3f791c:
    // 0x3f791c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f791cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f7920:
    // 0x3f7920: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x3f7920u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[1] = ctx->f[21] / ctx->f[0];
label_3f7924:
    // 0x3f7924: 0x0  nop
    ctx->pc = 0x3f7924u;
    // NOP
label_3f7928:
    // 0x3f7928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f7928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f792c:
    // 0x3f792c: 0x0  nop
    ctx->pc = 0x3f792cu;
    // NOP
label_3f7930:
    // 0x3f7930: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3f7930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f7934:
    // 0x3f7934: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_3f7938:
    if (ctx->pc == 0x3F7938u) {
        ctx->pc = 0x3F7938u;
            // 0x3f7938: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x3F793Cu;
        goto label_3f793c;
    }
    ctx->pc = 0x3F7934u;
    {
        const bool branch_taken_0x3f7934 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f7934) {
            ctx->pc = 0x3F7938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7934u;
            // 0x3f7938: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F7944u;
            goto label_3f7944;
        }
    }
    ctx->pc = 0x3F793Cu;
label_3f793c:
    // 0x3f793c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3f793cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f7940:
    // 0x3f7940: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3f7940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3f7944:
    // 0x3f7944: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3f7944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3f7948:
    // 0x3f7948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f7948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f794c:
    // 0x3f794c: 0x0  nop
    ctx->pc = 0x3f794cu;
    // NOP
label_3f7950:
    // 0x3f7950: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3f7950u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f7954:
    // 0x3f7954: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3f7958:
    if (ctx->pc == 0x3F7958u) {
        ctx->pc = 0x3F7958u;
            // 0x3f7958: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F795Cu;
        goto label_3f795c;
    }
    ctx->pc = 0x3F7954u;
    {
        const bool branch_taken_0x3f7954 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F7958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7954u;
            // 0x3f7958: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7954) {
            ctx->pc = 0x3F7960u;
            goto label_3f7960;
        }
    }
    ctx->pc = 0x3F795Cu;
label_3f795c:
    // 0x3f795c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f795cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f7960:
    // 0x3f7960: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3f7960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3f7964:
    // 0x3f7964: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x3f7964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_3f7968:
    // 0x3f7968: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3f7968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3f796c:
    // 0x3f796c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3f796cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f7970:
    // 0x3f7970: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3f7970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3f7974:
    // 0x3f7974: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3f7974u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3f7978:
    // 0x3f7978: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3f7978u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3f797c:
    // 0x3f797c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f797cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f7980:
    // 0x3f7980: 0x0  nop
    ctx->pc = 0x3f7980u;
    // NOP
label_3f7984:
    // 0x3f7984: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3f7984u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3f7988:
    // 0x3f7988: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3f7988u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3f798c:
    // 0x3f798c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f798cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f7990:
    // 0x3f7990: 0x0  nop
    ctx->pc = 0x3f7990u;
    // NOP
label_3f7994:
    // 0x3f7994: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3f7994u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3f7998:
    // 0x3f7998: 0xc0477fe  jal         func_11DFF8
label_3f799c:
    if (ctx->pc == 0x3F799Cu) {
        ctx->pc = 0x3F799Cu;
            // 0x3f799c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x3F79A0u;
        goto label_3f79a0;
    }
    ctx->pc = 0x3F7998u;
    SET_GPR_U32(ctx, 31, 0x3F79A0u);
    ctx->pc = 0x3F799Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7998u;
            // 0x3f799c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F79A0u; }
        if (ctx->pc != 0x3F79A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F79A0u; }
        if (ctx->pc != 0x3F79A0u) { return; }
    }
    ctx->pc = 0x3F79A0u;
label_3f79a0:
    // 0x3f79a0: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x3f79a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_3f79a4:
    // 0x3f79a4: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x3f79a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_3f79a8:
    // 0x3f79a8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3f79a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f79ac:
    // 0x3f79ac: 0x0  nop
    ctx->pc = 0x3f79acu;
    // NOP
label_3f79b0:
    // 0x3f79b0: 0x460200c1  sub.s       $f3, $f0, $f2
    ctx->pc = 0x3f79b0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_3f79b4:
    // 0x3f79b4: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x3f79b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f79b8:
    // 0x3f79b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3f79b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f79bc:
    // 0x3f79bc: 0x0  nop
    ctx->pc = 0x3f79bcu;
    // NOP
label_3f79c0:
    // 0x3f79c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3f79c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f79c4:
    // 0x3f79c4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3f79c8:
    if (ctx->pc == 0x3F79C8u) {
        ctx->pc = 0x3F79C8u;
            // 0x3f79c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F79CCu;
        goto label_3f79cc;
    }
    ctx->pc = 0x3F79C4u;
    {
        const bool branch_taken_0x3f79c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F79C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F79C4u;
            // 0x3f79c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f79c4) {
            ctx->pc = 0x3F79D0u;
            goto label_3f79d0;
        }
    }
    ctx->pc = 0x3F79CCu;
label_3f79cc:
    // 0x3f79cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f79ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f79d0:
    // 0x3f79d0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3f79d4:
    if (ctx->pc == 0x3F79D4u) {
        ctx->pc = 0x3F79D4u;
            // 0x3f79d4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3F79D8u;
        goto label_3f79d8;
    }
    ctx->pc = 0x3F79D0u;
    {
        const bool branch_taken_0x3f79d0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3f79d0) {
            ctx->pc = 0x3F79D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F79D0u;
            // 0x3f79d4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F79E4u;
            goto label_3f79e4;
        }
    }
    ctx->pc = 0x3F79D8u;
label_3f79d8:
    // 0x3f79d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f79d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f79dc:
    // 0x3f79dc: 0x10000007  b           . + 4 + (0x7 << 2)
label_3f79e0:
    if (ctx->pc == 0x3F79E0u) {
        ctx->pc = 0x3F79E0u;
            // 0x3f79e0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3F79E4u;
        goto label_3f79e4;
    }
    ctx->pc = 0x3F79DCu;
    {
        const bool branch_taken_0x3f79dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F79E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F79DCu;
            // 0x3f79e0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f79dc) {
            ctx->pc = 0x3F79FCu;
            goto label_3f79fc;
        }
    }
    ctx->pc = 0x3F79E4u;
label_3f79e4:
    // 0x3f79e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3f79e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3f79e8:
    // 0x3f79e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f79e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3f79ec:
    // 0x3f79ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f79ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f79f0:
    // 0x3f79f0: 0x0  nop
    ctx->pc = 0x3f79f0u;
    // NOP
label_3f79f4:
    // 0x3f79f4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3f79f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3f79f8:
    // 0x3f79f8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3f79f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3f79fc:
    // 0x3f79fc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3f79fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3f7a00:
    // 0x3f7a00: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3f7a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_3f7a04:
    // 0x3f7a04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f7a04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f7a08:
    // 0x3f7a08: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3f7a08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3f7a0c:
    // 0x3f7a0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3f7a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f7a10:
    // 0x3f7a10: 0x0  nop
    ctx->pc = 0x3f7a10u;
    // NOP
label_3f7a14:
    // 0x3f7a14: 0x46007018  adda.s      $f14, $f0
    ctx->pc = 0x3f7a14u;
    ctx->f[31] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
label_3f7a18:
    // 0x3f7a18: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f7a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7a1c:
    // 0x3f7a1c: 0x4602081d  msub.s      $f0, $f1, $f2
    ctx->pc = 0x3f7a1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_3f7a20:
    // 0x3f7a20: 0x46001842  mul.s       $f1, $f3, $f0
    ctx->pc = 0x3f7a20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_3f7a24:
    // 0x3f7a24: 0x2444087c  addiu       $a0, $v0, 0x87C
    ctx->pc = 0x3f7a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2172));
label_3f7a28:
    // 0x3f7a28: 0xc4400880  lwc1        $f0, 0x880($v0)
    ctx->pc = 0x3f7a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f7a2c:
    // 0x3f7a2c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3f7a2cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3f7a30:
    // 0x3f7a30: 0xc0c753c  jal         func_31D4F0
label_3f7a34:
    if (ctx->pc == 0x3F7A34u) {
        ctx->pc = 0x3F7A34u;
            // 0x3f7a34: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3F7A38u;
        goto label_3f7a38;
    }
    ctx->pc = 0x3F7A30u;
    SET_GPR_U32(ctx, 31, 0x3F7A38u);
    ctx->pc = 0x3F7A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7A30u;
            // 0x3f7a34: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7A38u; }
        if (ctx->pc != 0x3F7A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7A38u; }
        if (ctx->pc != 0x3F7A38u) { return; }
    }
    ctx->pc = 0x3F7A38u;
label_3f7a38:
    // 0x3f7a38: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f7a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7a3c:
    // 0x3f7a3c: 0xc0b9210  jal         func_2E4840
label_3f7a40:
    if (ctx->pc == 0x3F7A40u) {
        ctx->pc = 0x3F7A40u;
            // 0x3f7a40: 0x244407e0  addiu       $a0, $v0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2016));
        ctx->pc = 0x3F7A44u;
        goto label_3f7a44;
    }
    ctx->pc = 0x3F7A3Cu;
    SET_GPR_U32(ctx, 31, 0x3F7A44u);
    ctx->pc = 0x3F7A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7A3Cu;
            // 0x3f7a40: 0x244407e0  addiu       $a0, $v0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7A44u; }
        if (ctx->pc != 0x3F7A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7A44u; }
        if (ctx->pc != 0x3F7A44u) { return; }
    }
    ctx->pc = 0x3F7A44u;
label_3f7a44:
    // 0x3f7a44: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f7a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7a48:
    // 0x3f7a48: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3f7a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3f7a4c:
    // 0x3f7a4c: 0xc04ccf4  jal         func_1333D0
label_3f7a50:
    if (ctx->pc == 0x3F7A50u) {
        ctx->pc = 0x3F7A50u;
            // 0x3f7a50: 0x244507e0  addiu       $a1, $v0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2016));
        ctx->pc = 0x3F7A54u;
        goto label_3f7a54;
    }
    ctx->pc = 0x3F7A4Cu;
    SET_GPR_U32(ctx, 31, 0x3F7A54u);
    ctx->pc = 0x3F7A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7A4Cu;
            // 0x3f7a50: 0x244507e0  addiu       $a1, $v0, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7A54u; }
        if (ctx->pc != 0x3F7A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7A54u; }
        if (ctx->pc != 0x3F7A54u) { return; }
    }
    ctx->pc = 0x3F7A54u;
label_3f7a54:
    // 0x3f7a54: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3f7a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7a58:
    // 0x3f7a58: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3f7a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3f7a5c:
    // 0x3f7a5c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x3f7a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3f7a60:
    // 0x3f7a60: 0xc04cca0  jal         func_133280
label_3f7a64:
    if (ctx->pc == 0x3F7A64u) {
        ctx->pc = 0x3F7A64u;
            // 0x3f7a64: 0x24460300  addiu       $a2, $v0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
        ctx->pc = 0x3F7A68u;
        goto label_3f7a68;
    }
    ctx->pc = 0x3F7A60u;
    SET_GPR_U32(ctx, 31, 0x3F7A68u);
    ctx->pc = 0x3F7A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7A60u;
            // 0x3f7a64: 0x24460300  addiu       $a2, $v0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7A68u; }
        if (ctx->pc != 0x3F7A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F7A68u; }
        if (ctx->pc != 0x3F7A68u) { return; }
    }
    ctx->pc = 0x3F7A68u;
label_3f7a68:
    // 0x3f7a68: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3f7a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3f7a6c:
    // 0x3f7a6c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3f7a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f7a70:
    // 0x3f7a70: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3f7a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3f7a74:
    // 0x3f7a74: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x3f7a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f7a78:
    // 0x3f7a78: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x3f7a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f7a7c:
    // 0x3f7a7c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3f7a7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3f7a80:
    // 0x3f7a80: 0xe4800de4  swc1        $f0, 0xDE4($a0)
    ctx->pc = 0x3f7a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3556), bits); }
label_3f7a84:
    // 0x3f7a84: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3f7a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3f7a88:
    // 0x3f7a88: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3f7a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3f7a8c:
    // 0x3f7a8c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3f7a8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f7a90:
    // 0x3f7a90: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3f7a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3f7a94:
    // 0x3f7a94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3f7a94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f7a98:
    // 0x3f7a98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3f7a98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f7a9c:
    // 0x3f7a9c: 0x3e00008  jr          $ra
label_3f7aa0:
    if (ctx->pc == 0x3F7AA0u) {
        ctx->pc = 0x3F7AA0u;
            // 0x3f7aa0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x3F7AA4u;
        goto label_3f7aa4;
    }
    ctx->pc = 0x3F7A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F7AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F7A9Cu;
            // 0x3f7aa0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F7AA4u;
label_3f7aa4:
    // 0x3f7aa4: 0x0  nop
    ctx->pc = 0x3f7aa4u;
    // NOP
label_3f7aa8:
    // 0x3f7aa8: 0x0  nop
    ctx->pc = 0x3f7aa8u;
    // NOP
label_3f7aac:
    // 0x3f7aac: 0x0  nop
    ctx->pc = 0x3f7aacu;
    // NOP
}
