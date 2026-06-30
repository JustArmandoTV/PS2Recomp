#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00332220
// Address: 0x332220 - 0x3325e0
void sub_00332220_0x332220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332220_0x332220");
#endif

    switch (ctx->pc) {
        case 0x332220u: goto label_332220;
        case 0x332224u: goto label_332224;
        case 0x332228u: goto label_332228;
        case 0x33222cu: goto label_33222c;
        case 0x332230u: goto label_332230;
        case 0x332234u: goto label_332234;
        case 0x332238u: goto label_332238;
        case 0x33223cu: goto label_33223c;
        case 0x332240u: goto label_332240;
        case 0x332244u: goto label_332244;
        case 0x332248u: goto label_332248;
        case 0x33224cu: goto label_33224c;
        case 0x332250u: goto label_332250;
        case 0x332254u: goto label_332254;
        case 0x332258u: goto label_332258;
        case 0x33225cu: goto label_33225c;
        case 0x332260u: goto label_332260;
        case 0x332264u: goto label_332264;
        case 0x332268u: goto label_332268;
        case 0x33226cu: goto label_33226c;
        case 0x332270u: goto label_332270;
        case 0x332274u: goto label_332274;
        case 0x332278u: goto label_332278;
        case 0x33227cu: goto label_33227c;
        case 0x332280u: goto label_332280;
        case 0x332284u: goto label_332284;
        case 0x332288u: goto label_332288;
        case 0x33228cu: goto label_33228c;
        case 0x332290u: goto label_332290;
        case 0x332294u: goto label_332294;
        case 0x332298u: goto label_332298;
        case 0x33229cu: goto label_33229c;
        case 0x3322a0u: goto label_3322a0;
        case 0x3322a4u: goto label_3322a4;
        case 0x3322a8u: goto label_3322a8;
        case 0x3322acu: goto label_3322ac;
        case 0x3322b0u: goto label_3322b0;
        case 0x3322b4u: goto label_3322b4;
        case 0x3322b8u: goto label_3322b8;
        case 0x3322bcu: goto label_3322bc;
        case 0x3322c0u: goto label_3322c0;
        case 0x3322c4u: goto label_3322c4;
        case 0x3322c8u: goto label_3322c8;
        case 0x3322ccu: goto label_3322cc;
        case 0x3322d0u: goto label_3322d0;
        case 0x3322d4u: goto label_3322d4;
        case 0x3322d8u: goto label_3322d8;
        case 0x3322dcu: goto label_3322dc;
        case 0x3322e0u: goto label_3322e0;
        case 0x3322e4u: goto label_3322e4;
        case 0x3322e8u: goto label_3322e8;
        case 0x3322ecu: goto label_3322ec;
        case 0x3322f0u: goto label_3322f0;
        case 0x3322f4u: goto label_3322f4;
        case 0x3322f8u: goto label_3322f8;
        case 0x3322fcu: goto label_3322fc;
        case 0x332300u: goto label_332300;
        case 0x332304u: goto label_332304;
        case 0x332308u: goto label_332308;
        case 0x33230cu: goto label_33230c;
        case 0x332310u: goto label_332310;
        case 0x332314u: goto label_332314;
        case 0x332318u: goto label_332318;
        case 0x33231cu: goto label_33231c;
        case 0x332320u: goto label_332320;
        case 0x332324u: goto label_332324;
        case 0x332328u: goto label_332328;
        case 0x33232cu: goto label_33232c;
        case 0x332330u: goto label_332330;
        case 0x332334u: goto label_332334;
        case 0x332338u: goto label_332338;
        case 0x33233cu: goto label_33233c;
        case 0x332340u: goto label_332340;
        case 0x332344u: goto label_332344;
        case 0x332348u: goto label_332348;
        case 0x33234cu: goto label_33234c;
        case 0x332350u: goto label_332350;
        case 0x332354u: goto label_332354;
        case 0x332358u: goto label_332358;
        case 0x33235cu: goto label_33235c;
        case 0x332360u: goto label_332360;
        case 0x332364u: goto label_332364;
        case 0x332368u: goto label_332368;
        case 0x33236cu: goto label_33236c;
        case 0x332370u: goto label_332370;
        case 0x332374u: goto label_332374;
        case 0x332378u: goto label_332378;
        case 0x33237cu: goto label_33237c;
        case 0x332380u: goto label_332380;
        case 0x332384u: goto label_332384;
        case 0x332388u: goto label_332388;
        case 0x33238cu: goto label_33238c;
        case 0x332390u: goto label_332390;
        case 0x332394u: goto label_332394;
        case 0x332398u: goto label_332398;
        case 0x33239cu: goto label_33239c;
        case 0x3323a0u: goto label_3323a0;
        case 0x3323a4u: goto label_3323a4;
        case 0x3323a8u: goto label_3323a8;
        case 0x3323acu: goto label_3323ac;
        case 0x3323b0u: goto label_3323b0;
        case 0x3323b4u: goto label_3323b4;
        case 0x3323b8u: goto label_3323b8;
        case 0x3323bcu: goto label_3323bc;
        case 0x3323c0u: goto label_3323c0;
        case 0x3323c4u: goto label_3323c4;
        case 0x3323c8u: goto label_3323c8;
        case 0x3323ccu: goto label_3323cc;
        case 0x3323d0u: goto label_3323d0;
        case 0x3323d4u: goto label_3323d4;
        case 0x3323d8u: goto label_3323d8;
        case 0x3323dcu: goto label_3323dc;
        case 0x3323e0u: goto label_3323e0;
        case 0x3323e4u: goto label_3323e4;
        case 0x3323e8u: goto label_3323e8;
        case 0x3323ecu: goto label_3323ec;
        case 0x3323f0u: goto label_3323f0;
        case 0x3323f4u: goto label_3323f4;
        case 0x3323f8u: goto label_3323f8;
        case 0x3323fcu: goto label_3323fc;
        case 0x332400u: goto label_332400;
        case 0x332404u: goto label_332404;
        case 0x332408u: goto label_332408;
        case 0x33240cu: goto label_33240c;
        case 0x332410u: goto label_332410;
        case 0x332414u: goto label_332414;
        case 0x332418u: goto label_332418;
        case 0x33241cu: goto label_33241c;
        case 0x332420u: goto label_332420;
        case 0x332424u: goto label_332424;
        case 0x332428u: goto label_332428;
        case 0x33242cu: goto label_33242c;
        case 0x332430u: goto label_332430;
        case 0x332434u: goto label_332434;
        case 0x332438u: goto label_332438;
        case 0x33243cu: goto label_33243c;
        case 0x332440u: goto label_332440;
        case 0x332444u: goto label_332444;
        case 0x332448u: goto label_332448;
        case 0x33244cu: goto label_33244c;
        case 0x332450u: goto label_332450;
        case 0x332454u: goto label_332454;
        case 0x332458u: goto label_332458;
        case 0x33245cu: goto label_33245c;
        case 0x332460u: goto label_332460;
        case 0x332464u: goto label_332464;
        case 0x332468u: goto label_332468;
        case 0x33246cu: goto label_33246c;
        case 0x332470u: goto label_332470;
        case 0x332474u: goto label_332474;
        case 0x332478u: goto label_332478;
        case 0x33247cu: goto label_33247c;
        case 0x332480u: goto label_332480;
        case 0x332484u: goto label_332484;
        case 0x332488u: goto label_332488;
        case 0x33248cu: goto label_33248c;
        case 0x332490u: goto label_332490;
        case 0x332494u: goto label_332494;
        case 0x332498u: goto label_332498;
        case 0x33249cu: goto label_33249c;
        case 0x3324a0u: goto label_3324a0;
        case 0x3324a4u: goto label_3324a4;
        case 0x3324a8u: goto label_3324a8;
        case 0x3324acu: goto label_3324ac;
        case 0x3324b0u: goto label_3324b0;
        case 0x3324b4u: goto label_3324b4;
        case 0x3324b8u: goto label_3324b8;
        case 0x3324bcu: goto label_3324bc;
        case 0x3324c0u: goto label_3324c0;
        case 0x3324c4u: goto label_3324c4;
        case 0x3324c8u: goto label_3324c8;
        case 0x3324ccu: goto label_3324cc;
        case 0x3324d0u: goto label_3324d0;
        case 0x3324d4u: goto label_3324d4;
        case 0x3324d8u: goto label_3324d8;
        case 0x3324dcu: goto label_3324dc;
        case 0x3324e0u: goto label_3324e0;
        case 0x3324e4u: goto label_3324e4;
        case 0x3324e8u: goto label_3324e8;
        case 0x3324ecu: goto label_3324ec;
        case 0x3324f0u: goto label_3324f0;
        case 0x3324f4u: goto label_3324f4;
        case 0x3324f8u: goto label_3324f8;
        case 0x3324fcu: goto label_3324fc;
        case 0x332500u: goto label_332500;
        case 0x332504u: goto label_332504;
        case 0x332508u: goto label_332508;
        case 0x33250cu: goto label_33250c;
        case 0x332510u: goto label_332510;
        case 0x332514u: goto label_332514;
        case 0x332518u: goto label_332518;
        case 0x33251cu: goto label_33251c;
        case 0x332520u: goto label_332520;
        case 0x332524u: goto label_332524;
        case 0x332528u: goto label_332528;
        case 0x33252cu: goto label_33252c;
        case 0x332530u: goto label_332530;
        case 0x332534u: goto label_332534;
        case 0x332538u: goto label_332538;
        case 0x33253cu: goto label_33253c;
        case 0x332540u: goto label_332540;
        case 0x332544u: goto label_332544;
        case 0x332548u: goto label_332548;
        case 0x33254cu: goto label_33254c;
        case 0x332550u: goto label_332550;
        case 0x332554u: goto label_332554;
        case 0x332558u: goto label_332558;
        case 0x33255cu: goto label_33255c;
        case 0x332560u: goto label_332560;
        case 0x332564u: goto label_332564;
        case 0x332568u: goto label_332568;
        case 0x33256cu: goto label_33256c;
        case 0x332570u: goto label_332570;
        case 0x332574u: goto label_332574;
        case 0x332578u: goto label_332578;
        case 0x33257cu: goto label_33257c;
        case 0x332580u: goto label_332580;
        case 0x332584u: goto label_332584;
        case 0x332588u: goto label_332588;
        case 0x33258cu: goto label_33258c;
        case 0x332590u: goto label_332590;
        case 0x332594u: goto label_332594;
        case 0x332598u: goto label_332598;
        case 0x33259cu: goto label_33259c;
        case 0x3325a0u: goto label_3325a0;
        case 0x3325a4u: goto label_3325a4;
        case 0x3325a8u: goto label_3325a8;
        case 0x3325acu: goto label_3325ac;
        case 0x3325b0u: goto label_3325b0;
        case 0x3325b4u: goto label_3325b4;
        case 0x3325b8u: goto label_3325b8;
        case 0x3325bcu: goto label_3325bc;
        case 0x3325c0u: goto label_3325c0;
        case 0x3325c4u: goto label_3325c4;
        case 0x3325c8u: goto label_3325c8;
        case 0x3325ccu: goto label_3325cc;
        case 0x3325d0u: goto label_3325d0;
        case 0x3325d4u: goto label_3325d4;
        case 0x3325d8u: goto label_3325d8;
        case 0x3325dcu: goto label_3325dc;
        default: break;
    }

    ctx->pc = 0x332220u;

label_332220:
    // 0x332220: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x332220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_332224:
    // 0x332224: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x332224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_332228:
    // 0x332228: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x332228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_33222c:
    // 0x33222c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x33222cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_332230:
    // 0x332230: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x332230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_332234:
    // 0x332234: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x332234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_332238:
    // 0x332238: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x332238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_33223c:
    // 0x33223c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x33223cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_332240:
    // 0x332240: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x332240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_332244:
    // 0x332244: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x332244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_332248:
    // 0x332248: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x332248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33224c:
    // 0x33224c: 0x8c518a08  lw          $s1, -0x75F8($v0)
    ctx->pc = 0x33224cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_332250:
    // 0x332250: 0x8c7089e8  lw          $s0, -0x7618($v1)
    ctx->pc = 0x332250u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937064)));
label_332254:
    // 0x332254: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x332254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_332258:
    // 0x332258: 0x8c42a348  lw          $v0, -0x5CB8($v0)
    ctx->pc = 0x332258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
label_33225c:
    // 0x33225c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33225cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_332260:
    // 0x332260: 0xa0400038  sb          $zero, 0x38($v0)
    ctx->pc = 0x332260u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 0));
label_332264:
    // 0x332264: 0xac830cb4  sw          $v1, 0xCB4($a0)
    ctx->pc = 0x332264u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3252), GPR_U32(ctx, 3));
label_332268:
    // 0x332268: 0xc074648  jal         func_1D1920
label_33226c:
    if (ctx->pc == 0x33226Cu) {
        ctx->pc = 0x33226Cu;
            // 0x33226c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x332270u;
        goto label_332270;
    }
    ctx->pc = 0x332268u;
    SET_GPR_U32(ctx, 31, 0x332270u);
    ctx->pc = 0x33226Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332268u;
            // 0x33226c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (runtime->hasFunction(0x1D1920u)) {
        auto targetFn = runtime->lookupFunction(0x1D1920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332270u; }
        if (ctx->pc != 0x332270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1920_0x1d1920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332270u; }
        if (ctx->pc != 0x332270u) { return; }
    }
    ctx->pc = 0x332270u;
label_332270:
    // 0x332270: 0xc074708  jal         func_1D1C20
label_332274:
    if (ctx->pc == 0x332274u) {
        ctx->pc = 0x332274u;
            // 0x332274: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x332278u;
        goto label_332278;
    }
    ctx->pc = 0x332270u;
    SET_GPR_U32(ctx, 31, 0x332278u);
    ctx->pc = 0x332274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332270u;
            // 0x332274: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C20u;
    if (runtime->hasFunction(0x1D1C20u)) {
        auto targetFn = runtime->lookupFunction(0x1D1C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332278u; }
        if (ctx->pc != 0x332278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1C20_0x1d1c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332278u; }
        if (ctx->pc != 0x332278u) { return; }
    }
    ctx->pc = 0x332278u;
label_332278:
    // 0x332278: 0x82830c68  lb          $v1, 0xC68($s4)
    ctx->pc = 0x332278u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 3176)));
label_33227c:
    // 0x33227c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x33227cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_332280:
    // 0x332280: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_332284:
    if (ctx->pc == 0x332284u) {
        ctx->pc = 0x332284u;
            // 0x332284: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x332288u;
        goto label_332288;
    }
    ctx->pc = 0x332280u;
    {
        const bool branch_taken_0x332280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x332280) {
            ctx->pc = 0x332284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x332280u;
            // 0x332284: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x332298u;
            goto label_332298;
        }
    }
    ctx->pc = 0x332288u;
label_332288:
    // 0x332288: 0x3c04a400  lui         $a0, 0xA400
    ctx->pc = 0x332288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41984 << 16));
label_33228c:
    // 0x33228c: 0xc0733ec  jal         func_1CCFB0
label_332290:
    if (ctx->pc == 0x332290u) {
        ctx->pc = 0x332290u;
            // 0x332290: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->pc = 0x332294u;
        goto label_332294;
    }
    ctx->pc = 0x33228Cu;
    SET_GPR_U32(ctx, 31, 0x332294u);
    ctx->pc = 0x332290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33228Cu;
            // 0x332290: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFB0u;
    if (runtime->hasFunction(0x1CCFB0u)) {
        auto targetFn = runtime->lookupFunction(0x1CCFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332294u; }
        if (ctx->pc != 0x332294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCFB0_0x1ccfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332294u; }
        if (ctx->pc != 0x332294u) { return; }
    }
    ctx->pc = 0x332294u;
label_332294:
    // 0x332294: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x332294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_332298:
    // 0x332298: 0xae820ca8  sw          $v0, 0xCA8($s4)
    ctx->pc = 0x332298u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3240), GPR_U32(ctx, 2));
label_33229c:
    // 0x33229c: 0x8e82095c  lw          $v0, 0x95C($s4)
    ctx->pc = 0x33229cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2396)));
label_3322a0:
    // 0x3322a0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_3322a4:
    if (ctx->pc == 0x3322A4u) {
        ctx->pc = 0x3322A8u;
        goto label_3322a8;
    }
    ctx->pc = 0x3322A0u;
    {
        const bool branch_taken_0x3322a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3322a0) {
            ctx->pc = 0x3322D8u;
            goto label_3322d8;
        }
    }
    ctx->pc = 0x3322A8u;
label_3322a8:
    // 0x3322a8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3322a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3322ac:
    // 0x3322ac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3322acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3322b0:
    // 0x3322b0: 0x8c4489f8  lw          $a0, -0x7608($v0)
    ctx->pc = 0x3322b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937080)));
label_3322b4:
    // 0x3322b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3322b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3322b8:
    // 0x3322b8: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x3322b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_3322bc:
    // 0x3322bc: 0x320f809  jalr        $t9
label_3322c0:
    if (ctx->pc == 0x3322C0u) {
        ctx->pc = 0x3322C0u;
            // 0x3322c0: 0x8c70a2e0  lw          $s0, -0x5D20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943456)));
        ctx->pc = 0x3322C4u;
        goto label_3322c4;
    }
    ctx->pc = 0x3322BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3322C4u);
        ctx->pc = 0x3322C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3322BCu;
            // 0x3322c0: 0x8c70a2e0  lw          $s0, -0x5D20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943456)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3322C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3322C4u; }
            if (ctx->pc != 0x3322C4u) { return; }
        }
        }
    }
    ctx->pc = 0x3322C4u;
label_3322c4:
    // 0x3322c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3322c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3322c8:
    // 0x3322c8: 0xc074754  jal         func_1D1D50
label_3322cc:
    if (ctx->pc == 0x3322CCu) {
        ctx->pc = 0x3322CCu;
            // 0x3322cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3322D0u;
        goto label_3322d0;
    }
    ctx->pc = 0x3322C8u;
    SET_GPR_U32(ctx, 31, 0x3322D0u);
    ctx->pc = 0x3322CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3322C8u;
            // 0x3322cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D50u;
    if (runtime->hasFunction(0x1D1D50u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3322D0u; }
        if (ctx->pc != 0x3322D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D50_0x1d1d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3322D0u; }
        if (ctx->pc != 0x3322D0u) { return; }
    }
    ctx->pc = 0x3322D0u;
label_3322d0:
    // 0x3322d0: 0x10000005  b           . + 4 + (0x5 << 2)
label_3322d4:
    if (ctx->pc == 0x3322D4u) {
        ctx->pc = 0x3322D4u;
            // 0x3322d4: 0xae82096c  sw          $v0, 0x96C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 2412), GPR_U32(ctx, 2));
        ctx->pc = 0x3322D8u;
        goto label_3322d8;
    }
    ctx->pc = 0x3322D0u;
    {
        const bool branch_taken_0x3322d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3322D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3322D0u;
            // 0x3322d4: 0xae82096c  sw          $v0, 0x96C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 2412), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3322d0) {
            ctx->pc = 0x3322E8u;
            goto label_3322e8;
        }
    }
    ctx->pc = 0x3322D8u;
label_3322d8:
    // 0x3322d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3322d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3322dc:
    // 0x3322dc: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x3322dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_3322e0:
    // 0x3322e0: 0xc074754  jal         func_1D1D50
label_3322e4:
    if (ctx->pc == 0x3322E4u) {
        ctx->pc = 0x3322E4u;
            // 0x3322e4: 0x8e85096c  lw          $a1, 0x96C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2412)));
        ctx->pc = 0x3322E8u;
        goto label_3322e8;
    }
    ctx->pc = 0x3322E0u;
    SET_GPR_U32(ctx, 31, 0x3322E8u);
    ctx->pc = 0x3322E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3322E0u;
            // 0x3322e4: 0x8e85096c  lw          $a1, 0x96C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2412)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D50u;
    if (runtime->hasFunction(0x1D1D50u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3322E8u; }
        if (ctx->pc != 0x3322E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D50_0x1d1d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3322E8u; }
        if (ctx->pc != 0x3322E8u) { return; }
    }
    ctx->pc = 0x3322E8u;
label_3322e8:
    // 0x3322e8: 0x2409003b  addiu       $t1, $zero, 0x3B
    ctx->pc = 0x3322e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_3322ec:
    // 0x3322ec: 0x26840814  addiu       $a0, $s4, 0x814
    ctx->pc = 0x3322ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2068));
label_3322f0:
    // 0x3322f0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3322f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3322f4:
    // 0x3322f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3322f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3322f8:
    // 0x3322f8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x3322f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3322fc:
    // 0x3322fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3322fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_332300:
    // 0x332300: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x332300u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_332304:
    // 0x332304: 0xc0bc754  jal         func_2F1D50
label_332308:
    if (ctx->pc == 0x332308u) {
        ctx->pc = 0x332308u;
            // 0x332308: 0x240b0063  addiu       $t3, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->pc = 0x33230Cu;
        goto label_33230c;
    }
    ctx->pc = 0x332304u;
    SET_GPR_U32(ctx, 31, 0x33230Cu);
    ctx->pc = 0x332308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332304u;
            // 0x332308: 0x240b0063  addiu       $t3, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D50u;
    if (runtime->hasFunction(0x2F1D50u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33230Cu; }
        if (ctx->pc != 0x33230Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1D50_0x2f1d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33230Cu; }
        if (ctx->pc != 0x33230Cu) { return; }
    }
    ctx->pc = 0x33230Cu;
label_33230c:
    // 0x33230c: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x33230cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
label_332310:
    // 0x332310: 0x26840838  addiu       $a0, $s4, 0x838
    ctx->pc = 0x332310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2104));
label_332314:
    // 0x332314: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x332314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_332318:
    // 0x332318: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x332318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33231c:
    // 0x33231c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33231cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_332320:
    // 0x332320: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x332320u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_332324:
    // 0x332324: 0x3449ffff  ori         $t1, $v0, 0xFFFF
    ctx->pc = 0x332324u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_332328:
    // 0x332328: 0x240a003b  addiu       $t2, $zero, 0x3B
    ctx->pc = 0x332328u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_33232c:
    // 0x33232c: 0xc0bc754  jal         func_2F1D50
label_332330:
    if (ctx->pc == 0x332330u) {
        ctx->pc = 0x332330u;
            // 0x332330: 0x240b0063  addiu       $t3, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->pc = 0x332334u;
        goto label_332334;
    }
    ctx->pc = 0x33232Cu;
    SET_GPR_U32(ctx, 31, 0x332334u);
    ctx->pc = 0x332330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33232Cu;
            // 0x332330: 0x240b0063  addiu       $t3, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D50u;
    if (runtime->hasFunction(0x2F1D50u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332334u; }
        if (ctx->pc != 0x332334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1D50_0x2f1d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332334u; }
        if (ctx->pc != 0x332334u) { return; }
    }
    ctx->pc = 0x332334u;
label_332334:
    // 0x332334: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x332334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_332338:
    // 0x332338: 0x8e830970  lw          $v1, 0x970($s4)
    ctx->pc = 0x332338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2416)));
label_33233c:
    // 0x33233c: 0x8c5089d0  lw          $s0, -0x7630($v0)
    ctx->pc = 0x33233cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_332340:
    // 0x332340: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x332340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_332344:
    // 0x332344: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_332348:
    if (ctx->pc == 0x332348u) {
        ctx->pc = 0x33234Cu;
        goto label_33234c;
    }
    ctx->pc = 0x332344u;
    {
        const bool branch_taken_0x332344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x332344) {
            ctx->pc = 0x332390u;
            goto label_332390;
        }
    }
    ctx->pc = 0x33234Cu;
label_33234c:
    // 0x33234c: 0x8c730014  lw          $s3, 0x14($v1)
    ctx->pc = 0x33234cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_332350:
    // 0x332350: 0x24720010  addiu       $s2, $v1, 0x10
    ctx->pc = 0x332350u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_332354:
    // 0x332354: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x332354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
label_332358:
    // 0x332358: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x332358u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_33235c:
    // 0x33235c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x33235cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_332360:
    // 0x332360: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x332360u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_332364:
    // 0x332364: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x332364u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_332368:
    // 0x332368: 0x320f809  jalr        $t9
label_33236c:
    if (ctx->pc == 0x33236Cu) {
        ctx->pc = 0x332370u;
        goto label_332370;
    }
    ctx->pc = 0x332368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x332370u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x332370u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x332370u; }
            if (ctx->pc != 0x332370u) { return; }
        }
        }
    }
    ctx->pc = 0x332370u;
label_332370:
    // 0x332370: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x332370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
label_332374:
    // 0x332374: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x332374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_332378:
    // 0x332378: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x332378u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_33237c:
    // 0x33237c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x33237cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_332380:
    // 0x332380: 0x8c730004  lw          $s3, 0x4($v1)
    ctx->pc = 0x332380u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_332384:
    // 0x332384: 0x5662fff4  bnel        $s3, $v0, . + 4 + (-0xC << 2)
label_332388:
    if (ctx->pc == 0x332388u) {
        ctx->pc = 0x332388u;
            // 0x332388: 0x13103c  dsll32      $v0, $s3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
        ctx->pc = 0x33238Cu;
        goto label_33238c;
    }
    ctx->pc = 0x332384u;
    {
        const bool branch_taken_0x332384 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x332384) {
            ctx->pc = 0x332388u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x332384u;
            // 0x332388: 0x13103c  dsll32      $v0, $s3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x332358u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_332358;
        }
    }
    ctx->pc = 0x33238Cu;
label_33238c:
    // 0x33238c: 0x0  nop
    ctx->pc = 0x33238cu;
    // NOP
label_332390:
    // 0x332390: 0x8202008d  lb          $v0, 0x8D($s0)
    ctx->pc = 0x332390u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 141)));
label_332394:
    // 0x332394: 0x3c1200af  lui         $s2, 0xAF
    ctx->pc = 0x332394u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)175 << 16));
label_332398:
    // 0x332398: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x332398u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33239c:
    // 0x33239c: 0x26520e80  addiu       $s2, $s2, 0xE80
    ctx->pc = 0x33239cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3712));
label_3323a0:
    // 0x3323a0: 0x401027  not         $v0, $v0
    ctx->pc = 0x3323a0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_3323a4:
    // 0x3323a4: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x3323a4u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3323a8:
    // 0x3323a8: 0x8e550004  lw          $s5, 0x4($s2)
    ctx->pc = 0x3323a8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3323ac:
    // 0x3323ac: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x3323acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3323b0:
    // 0x3323b0: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x3323b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_3323b4:
    // 0x3323b4: 0x320f809  jalr        $t9
label_3323b8:
    if (ctx->pc == 0x3323B8u) {
        ctx->pc = 0x3323B8u;
            // 0x3323b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3323BCu;
        goto label_3323bc;
    }
    ctx->pc = 0x3323B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3323BCu);
        ctx->pc = 0x3323B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3323B4u;
            // 0x3323b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3323BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3323BCu; }
            if (ctx->pc != 0x3323BCu) { return; }
        }
        }
    }
    ctx->pc = 0x3323BCu;
label_3323bc:
    // 0x3323bc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_3323c0:
    if (ctx->pc == 0x3323C0u) {
        ctx->pc = 0x3323C4u;
        goto label_3323c4;
    }
    ctx->pc = 0x3323BCu;
    {
        const bool branch_taken_0x3323bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3323bc) {
            ctx->pc = 0x3323D0u;
            goto label_3323d0;
        }
    }
    ctx->pc = 0x3323C4u;
label_3323c4:
    // 0x3323c4: 0xc076098  jal         func_1D8260
label_3323c8:
    if (ctx->pc == 0x3323C8u) {
        ctx->pc = 0x3323C8u;
            // 0x3323c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3323CCu;
        goto label_3323cc;
    }
    ctx->pc = 0x3323C4u;
    SET_GPR_U32(ctx, 31, 0x3323CCu);
    ctx->pc = 0x3323C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3323C4u;
            // 0x3323c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8260u;
    if (runtime->hasFunction(0x1D8260u)) {
        auto targetFn = runtime->lookupFunction(0x1D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3323CCu; }
        if (ctx->pc != 0x3323CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8260_0x1d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3323CCu; }
        if (ctx->pc != 0x3323CCu) { return; }
    }
    ctx->pc = 0x3323CCu;
label_3323cc:
    // 0x3323cc: 0x0  nop
    ctx->pc = 0x3323ccu;
    // NOP
label_3323d0:
    // 0x3323d0: 0x8e82077c  lw          $v0, 0x77C($s4)
    ctx->pc = 0x3323d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1916)));
label_3323d4:
    // 0x3323d4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3323d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3323d8:
    // 0x3323d8: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x3323d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3323dc:
    // 0x3323dc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_3323e0:
    if (ctx->pc == 0x3323E0u) {
        ctx->pc = 0x3323E0u;
            // 0x3323e0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3323E4u;
        goto label_3323e4;
    }
    ctx->pc = 0x3323DCu;
    {
        const bool branch_taken_0x3323dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3323E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3323DCu;
            // 0x3323e0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3323dc) {
            ctx->pc = 0x3323A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3323a8;
        }
    }
    ctx->pc = 0x3323E4u;
label_3323e4:
    // 0x3323e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3323e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3323e8:
    // 0x3323e8: 0xc0c3110  jal         func_30C440
label_3323ec:
    if (ctx->pc == 0x3323ECu) {
        ctx->pc = 0x3323ECu;
            // 0x3323ec: 0xa0403db0  sb          $zero, 0x3DB0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 15792), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3323F0u;
        goto label_3323f0;
    }
    ctx->pc = 0x3323E8u;
    SET_GPR_U32(ctx, 31, 0x3323F0u);
    ctx->pc = 0x3323ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3323E8u;
            // 0x3323ec: 0xa0403db0  sb          $zero, 0x3DB0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 15792), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30C440u;
    if (runtime->hasFunction(0x30C440u)) {
        auto targetFn = runtime->lookupFunction(0x30C440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3323F0u; }
        if (ctx->pc != 0x3323F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030C440_0x30c440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3323F0u; }
        if (ctx->pc != 0x3323F0u) { return; }
    }
    ctx->pc = 0x3323F0u;
label_3323f0:
    // 0x3323f0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3323f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3323f4:
    // 0x3323f4: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x3323f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_3323f8:
    // 0x3323f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3323f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3323fc:
    // 0x3323fc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3323fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_332400:
    // 0x332400: 0x320f809  jalr        $t9
label_332404:
    if (ctx->pc == 0x332404u) {
        ctx->pc = 0x332408u;
        goto label_332408;
    }
    ctx->pc = 0x332400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x332408u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x332408u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x332408u; }
            if (ctx->pc != 0x332408u) { return; }
        }
        }
    }
    ctx->pc = 0x332408u;
label_332408:
    // 0x332408: 0x8223007a  lb          $v1, 0x7A($s1)
    ctx->pc = 0x332408u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 122)));
label_33240c:
    // 0x33240c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33240cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_332410:
    // 0x332410: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x332410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_332414:
    // 0x332414: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x332414u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_332418:
    // 0x332418: 0xa2830c75  sb          $v1, 0xC75($s4)
    ctx->pc = 0x332418u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3189), (uint8_t)GPR_U32(ctx, 3));
label_33241c:
    // 0x33241c: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x33241cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_332420:
    // 0x332420: 0x8c440144  lw          $a0, 0x144($v0)
    ctx->pc = 0x332420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
label_332424:
    // 0x332424: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x332424u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_332428:
    // 0x332428: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x332428u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_33242c:
    // 0x33242c: 0x320f809  jalr        $t9
label_332430:
    if (ctx->pc == 0x332430u) {
        ctx->pc = 0x332434u;
        goto label_332434;
    }
    ctx->pc = 0x33242Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x332434u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x332434u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x332434u; }
            if (ctx->pc != 0x332434u) { return; }
        }
        }
    }
    ctx->pc = 0x332434u;
label_332434:
    // 0x332434: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x332434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_332438:
    // 0x332438: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x332438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_33243c:
    // 0x33243c: 0x8c440148  lw          $a0, 0x148($v0)
    ctx->pc = 0x33243cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
label_332440:
    // 0x332440: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x332440u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_332444:
    // 0x332444: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x332444u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_332448:
    // 0x332448: 0x320f809  jalr        $t9
label_33244c:
    if (ctx->pc == 0x33244Cu) {
        ctx->pc = 0x332450u;
        goto label_332450;
    }
    ctx->pc = 0x332448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x332450u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x332450u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x332450u; }
            if (ctx->pc != 0x332450u) { return; }
        }
        }
    }
    ctx->pc = 0x332450u;
label_332450:
    // 0x332450: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x332450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_332454:
    // 0x332454: 0x8c440dc8  lw          $a0, 0xDC8($v0)
    ctx->pc = 0x332454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3528)));
label_332458:
    // 0x332458: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_33245c:
    if (ctx->pc == 0x33245Cu) {
        ctx->pc = 0x332460u;
        goto label_332460;
    }
    ctx->pc = 0x332458u;
    {
        const bool branch_taken_0x332458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x332458) {
            ctx->pc = 0x332470u;
            goto label_332470;
        }
    }
    ctx->pc = 0x332460u;
label_332460:
    // 0x332460: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x332460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_332464:
    // 0x332464: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x332464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_332468:
    // 0x332468: 0x320f809  jalr        $t9
label_33246c:
    if (ctx->pc == 0x33246Cu) {
        ctx->pc = 0x332470u;
        goto label_332470;
    }
    ctx->pc = 0x332468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x332470u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x332470u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x332470u; }
            if (ctx->pc != 0x332470u) { return; }
        }
        }
    }
    ctx->pc = 0x332470u;
label_332470:
    // 0x332470: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x332470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_332474:
    // 0x332474: 0x8c440dc0  lw          $a0, 0xDC0($v0)
    ctx->pc = 0x332474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3520)));
label_332478:
    // 0x332478: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_33247c:
    if (ctx->pc == 0x33247Cu) {
        ctx->pc = 0x33247Cu;
            // 0x33247c: 0x8e840974  lw          $a0, 0x974($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2420)));
        ctx->pc = 0x332480u;
        goto label_332480;
    }
    ctx->pc = 0x332478u;
    {
        const bool branch_taken_0x332478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x332478) {
            ctx->pc = 0x33247Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x332478u;
            // 0x33247c: 0x8e840974  lw          $a0, 0x974($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2420)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x332494u;
            goto label_332494;
        }
    }
    ctx->pc = 0x332480u;
label_332480:
    // 0x332480: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x332480u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_332484:
    // 0x332484: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x332484u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_332488:
    // 0x332488: 0x320f809  jalr        $t9
label_33248c:
    if (ctx->pc == 0x33248Cu) {
        ctx->pc = 0x332490u;
        goto label_332490;
    }
    ctx->pc = 0x332488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x332490u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x332490u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x332490u; }
            if (ctx->pc != 0x332490u) { return; }
        }
        }
    }
    ctx->pc = 0x332490u;
label_332490:
    // 0x332490: 0x8e840974  lw          $a0, 0x974($s4)
    ctx->pc = 0x332490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2420)));
label_332494:
    // 0x332494: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x332494u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_332498:
    // 0x332498: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x332498u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_33249c:
    // 0x33249c: 0x320f809  jalr        $t9
label_3324a0:
    if (ctx->pc == 0x3324A0u) {
        ctx->pc = 0x3324A4u;
        goto label_3324a4;
    }
    ctx->pc = 0x33249Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3324A4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3324A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3324A4u; }
            if (ctx->pc != 0x3324A4u) { return; }
        }
        }
    }
    ctx->pc = 0x3324A4u;
label_3324a4:
    // 0x3324a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3324a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3324a8:
    // 0x3324a8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3324a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3324ac:
    // 0x3324ac: 0xa2840c88  sb          $a0, 0xC88($s4)
    ctx->pc = 0x3324acu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3208), (uint8_t)GPR_U32(ctx, 4));
label_3324b0:
    // 0x3324b0: 0x602027  not         $a0, $v1
    ctx->pc = 0x3324b0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_3324b4:
    // 0x3324b4: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x3324b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_3324b8:
    // 0x3324b8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3324b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3324bc:
    // 0x3324bc: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x3324bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
label_3324c0:
    // 0x3324c0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3324c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3324c4:
    // 0x3324c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3324c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3324c8:
    // 0x3324c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3324c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3324cc:
    // 0x3324cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3324ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3324d0:
    // 0x3324d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3324d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3324d4:
    // 0x3324d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3324d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3324d8:
    // 0x3324d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3324d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3324dc:
    // 0x3324dc: 0x3e00008  jr          $ra
label_3324e0:
    if (ctx->pc == 0x3324E0u) {
        ctx->pc = 0x3324E0u;
            // 0x3324e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3324E4u;
        goto label_3324e4;
    }
    ctx->pc = 0x3324DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3324E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3324DCu;
            // 0x3324e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3324E4u;
label_3324e4:
    // 0x3324e4: 0x0  nop
    ctx->pc = 0x3324e4u;
    // NOP
label_3324e8:
    // 0x3324e8: 0x0  nop
    ctx->pc = 0x3324e8u;
    // NOP
label_3324ec:
    // 0x3324ec: 0x0  nop
    ctx->pc = 0x3324ecu;
    // NOP
label_3324f0:
    // 0x3324f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3324f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3324f4:
    // 0x3324f4: 0x24820064  addiu       $v0, $a0, 0x64
    ctx->pc = 0x3324f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
label_3324f8:
    // 0x3324f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3324f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3324fc:
    // 0x3324fc: 0x24850058  addiu       $a1, $a0, 0x58
    ctx->pc = 0x3324fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
label_332500:
    // 0x332500: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x332500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_332504:
    // 0x332504: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x332504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_332508:
    // 0x332508: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x332508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_33250c:
    // 0x33250c: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x33250cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_332510:
    // 0x332510: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x332510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_332514:
    // 0x332514: 0xc05827c  jal         func_1609F0
label_332518:
    if (ctx->pc == 0x332518u) {
        ctx->pc = 0x332518u;
            // 0x332518: 0x27a4001c  addiu       $a0, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->pc = 0x33251Cu;
        goto label_33251c;
    }
    ctx->pc = 0x332514u;
    SET_GPR_U32(ctx, 31, 0x33251Cu);
    ctx->pc = 0x332518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332514u;
            // 0x332518: 0x27a4001c  addiu       $a0, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1609F0u;
    if (runtime->hasFunction(0x1609F0u)) {
        auto targetFn = runtime->lookupFunction(0x1609F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33251Cu; }
        if (ctx->pc != 0x33251Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001609F0_0x1609f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33251Cu; }
        if (ctx->pc != 0x33251Cu) { return; }
    }
    ctx->pc = 0x33251Cu;
label_33251c:
    // 0x33251c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33251cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_332520:
    // 0x332520: 0x3e00008  jr          $ra
label_332524:
    if (ctx->pc == 0x332524u) {
        ctx->pc = 0x332524u;
            // 0x332524: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x332528u;
        goto label_332528;
    }
    ctx->pc = 0x332520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332520u;
            // 0x332524: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x332528u;
label_332528:
    // 0x332528: 0x0  nop
    ctx->pc = 0x332528u;
    // NOP
label_33252c:
    // 0x33252c: 0x0  nop
    ctx->pc = 0x33252cu;
    // NOP
label_332530:
    // 0x332530: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x332530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_332534:
    // 0x332534: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x332534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_332538:
    // 0x332538: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x332538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_33253c:
    // 0x33253c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33253cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_332540:
    // 0x332540: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x332540u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_332544:
    // 0x332544: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x332544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_332548:
    // 0x332548: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x332548u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33254c:
    // 0x33254c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33254cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_332550:
    // 0x332550: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x332550u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
label_332554:
    // 0x332554: 0x26310e80  addiu       $s1, $s1, 0xE80
    ctx->pc = 0x332554u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3712));
label_332558:
    // 0x332558: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x332558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33255c:
    // 0x33255c: 0x8e620780  lw          $v0, 0x780($s3)
    ctx->pc = 0x33255cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1920)));
label_332560:
    // 0x332560: 0x242082b  sltu        $at, $s2, $v0
    ctx->pc = 0x332560u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_332564:
    // 0x332564: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_332568:
    if (ctx->pc == 0x332568u) {
        ctx->pc = 0x332568u;
            // 0x332568: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x33256Cu;
        goto label_33256c;
    }
    ctx->pc = 0x332564u;
    {
        const bool branch_taken_0x332564 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x332568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332564u;
            // 0x332568: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332564) {
            ctx->pc = 0x332574u;
            goto label_332574;
        }
    }
    ctx->pc = 0x33256Cu;
label_33256c:
    // 0x33256c: 0x10000002  b           . + 4 + (0x2 << 2)
label_332570:
    if (ctx->pc == 0x332570u) {
        ctx->pc = 0x332570u;
            // 0x332570: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x332574u;
        goto label_332574;
    }
    ctx->pc = 0x33256Cu;
    {
        const bool branch_taken_0x33256c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33256Cu;
            // 0x332570: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33256c) {
            ctx->pc = 0x332578u;
            goto label_332578;
        }
    }
    ctx->pc = 0x332574u;
label_332574:
    // 0x332574: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x332574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_332578:
    // 0x332578: 0x92020758  lbu         $v0, 0x758($s0)
    ctx->pc = 0x332578u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1880)));
label_33257c:
    // 0x33257c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33257cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_332580:
    // 0x332580: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x332580u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_332584:
    // 0x332584: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x332584u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_332588:
    // 0x332588: 0x92080759  lbu         $t0, 0x759($s0)
    ctx->pc = 0x332588u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1881)));
label_33258c:
    // 0x33258c: 0x3047001f  andi        $a3, $v0, 0x1F
    ctx->pc = 0x33258cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_332590:
    // 0x332590: 0x2167c  dsll32      $v0, $v0, 25
    ctx->pc = 0x332590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 25));
label_332594:
    // 0x332594: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x332594u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_332598:
    // 0x332598: 0x320f809  jalr        $t9
label_33259c:
    if (ctx->pc == 0x33259Cu) {
        ctx->pc = 0x33259Cu;
            // 0x33259c: 0x257be  dsrl32      $t2, $v0, 30 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) >> (32 + 30));
        ctx->pc = 0x3325A0u;
        goto label_3325a0;
    }
    ctx->pc = 0x332598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3325A0u);
        ctx->pc = 0x33259Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332598u;
            // 0x33259c: 0x257be  dsrl32      $t2, $v0, 30 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) >> (32 + 30));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3325A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3325A0u; }
            if (ctx->pc != 0x3325A0u) { return; }
        }
        }
    }
    ctx->pc = 0x3325A0u;
label_3325a0:
    // 0x3325a0: 0x8e63077c  lw          $v1, 0x77C($s3)
    ctx->pc = 0x3325a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1916)));
label_3325a4:
    // 0x3325a4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3325a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3325a8:
    // 0x3325a8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3325a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3325ac:
    // 0x3325ac: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x3325acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3325b0:
    // 0x3325b0: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_3325b4:
    if (ctx->pc == 0x3325B4u) {
        ctx->pc = 0x3325B4u;
            // 0x3325b4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x3325B8u;
        goto label_3325b8;
    }
    ctx->pc = 0x3325B0u;
    {
        const bool branch_taken_0x3325b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3325B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3325B0u;
            // 0x3325b4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3325b0) {
            ctx->pc = 0x33255Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33255c;
        }
    }
    ctx->pc = 0x3325B8u;
label_3325b8:
    // 0x3325b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3325b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3325bc:
    // 0x3325bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3325bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3325c0:
    // 0x3325c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3325c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3325c4:
    // 0x3325c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3325c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3325c8:
    // 0x3325c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3325c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3325cc:
    // 0x3325cc: 0x3e00008  jr          $ra
label_3325d0:
    if (ctx->pc == 0x3325D0u) {
        ctx->pc = 0x3325D0u;
            // 0x3325d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3325D4u;
        goto label_3325d4;
    }
    ctx->pc = 0x3325CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3325D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3325CCu;
            // 0x3325d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3325D4u;
label_3325d4:
    // 0x3325d4: 0x0  nop
    ctx->pc = 0x3325d4u;
    // NOP
label_3325d8:
    // 0x3325d8: 0x0  nop
    ctx->pc = 0x3325d8u;
    // NOP
label_3325dc:
    // 0x3325dc: 0x0  nop
    ctx->pc = 0x3325dcu;
    // NOP
}
