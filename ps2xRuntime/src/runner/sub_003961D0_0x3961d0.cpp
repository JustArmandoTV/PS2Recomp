#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003961D0
// Address: 0x3961d0 - 0x396520
void sub_003961D0_0x3961d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003961D0_0x3961d0");
#endif

    switch (ctx->pc) {
        case 0x3961d0u: goto label_3961d0;
        case 0x3961d4u: goto label_3961d4;
        case 0x3961d8u: goto label_3961d8;
        case 0x3961dcu: goto label_3961dc;
        case 0x3961e0u: goto label_3961e0;
        case 0x3961e4u: goto label_3961e4;
        case 0x3961e8u: goto label_3961e8;
        case 0x3961ecu: goto label_3961ec;
        case 0x3961f0u: goto label_3961f0;
        case 0x3961f4u: goto label_3961f4;
        case 0x3961f8u: goto label_3961f8;
        case 0x3961fcu: goto label_3961fc;
        case 0x396200u: goto label_396200;
        case 0x396204u: goto label_396204;
        case 0x396208u: goto label_396208;
        case 0x39620cu: goto label_39620c;
        case 0x396210u: goto label_396210;
        case 0x396214u: goto label_396214;
        case 0x396218u: goto label_396218;
        case 0x39621cu: goto label_39621c;
        case 0x396220u: goto label_396220;
        case 0x396224u: goto label_396224;
        case 0x396228u: goto label_396228;
        case 0x39622cu: goto label_39622c;
        case 0x396230u: goto label_396230;
        case 0x396234u: goto label_396234;
        case 0x396238u: goto label_396238;
        case 0x39623cu: goto label_39623c;
        case 0x396240u: goto label_396240;
        case 0x396244u: goto label_396244;
        case 0x396248u: goto label_396248;
        case 0x39624cu: goto label_39624c;
        case 0x396250u: goto label_396250;
        case 0x396254u: goto label_396254;
        case 0x396258u: goto label_396258;
        case 0x39625cu: goto label_39625c;
        case 0x396260u: goto label_396260;
        case 0x396264u: goto label_396264;
        case 0x396268u: goto label_396268;
        case 0x39626cu: goto label_39626c;
        case 0x396270u: goto label_396270;
        case 0x396274u: goto label_396274;
        case 0x396278u: goto label_396278;
        case 0x39627cu: goto label_39627c;
        case 0x396280u: goto label_396280;
        case 0x396284u: goto label_396284;
        case 0x396288u: goto label_396288;
        case 0x39628cu: goto label_39628c;
        case 0x396290u: goto label_396290;
        case 0x396294u: goto label_396294;
        case 0x396298u: goto label_396298;
        case 0x39629cu: goto label_39629c;
        case 0x3962a0u: goto label_3962a0;
        case 0x3962a4u: goto label_3962a4;
        case 0x3962a8u: goto label_3962a8;
        case 0x3962acu: goto label_3962ac;
        case 0x3962b0u: goto label_3962b0;
        case 0x3962b4u: goto label_3962b4;
        case 0x3962b8u: goto label_3962b8;
        case 0x3962bcu: goto label_3962bc;
        case 0x3962c0u: goto label_3962c0;
        case 0x3962c4u: goto label_3962c4;
        case 0x3962c8u: goto label_3962c8;
        case 0x3962ccu: goto label_3962cc;
        case 0x3962d0u: goto label_3962d0;
        case 0x3962d4u: goto label_3962d4;
        case 0x3962d8u: goto label_3962d8;
        case 0x3962dcu: goto label_3962dc;
        case 0x3962e0u: goto label_3962e0;
        case 0x3962e4u: goto label_3962e4;
        case 0x3962e8u: goto label_3962e8;
        case 0x3962ecu: goto label_3962ec;
        case 0x3962f0u: goto label_3962f0;
        case 0x3962f4u: goto label_3962f4;
        case 0x3962f8u: goto label_3962f8;
        case 0x3962fcu: goto label_3962fc;
        case 0x396300u: goto label_396300;
        case 0x396304u: goto label_396304;
        case 0x396308u: goto label_396308;
        case 0x39630cu: goto label_39630c;
        case 0x396310u: goto label_396310;
        case 0x396314u: goto label_396314;
        case 0x396318u: goto label_396318;
        case 0x39631cu: goto label_39631c;
        case 0x396320u: goto label_396320;
        case 0x396324u: goto label_396324;
        case 0x396328u: goto label_396328;
        case 0x39632cu: goto label_39632c;
        case 0x396330u: goto label_396330;
        case 0x396334u: goto label_396334;
        case 0x396338u: goto label_396338;
        case 0x39633cu: goto label_39633c;
        case 0x396340u: goto label_396340;
        case 0x396344u: goto label_396344;
        case 0x396348u: goto label_396348;
        case 0x39634cu: goto label_39634c;
        case 0x396350u: goto label_396350;
        case 0x396354u: goto label_396354;
        case 0x396358u: goto label_396358;
        case 0x39635cu: goto label_39635c;
        case 0x396360u: goto label_396360;
        case 0x396364u: goto label_396364;
        case 0x396368u: goto label_396368;
        case 0x39636cu: goto label_39636c;
        case 0x396370u: goto label_396370;
        case 0x396374u: goto label_396374;
        case 0x396378u: goto label_396378;
        case 0x39637cu: goto label_39637c;
        case 0x396380u: goto label_396380;
        case 0x396384u: goto label_396384;
        case 0x396388u: goto label_396388;
        case 0x39638cu: goto label_39638c;
        case 0x396390u: goto label_396390;
        case 0x396394u: goto label_396394;
        case 0x396398u: goto label_396398;
        case 0x39639cu: goto label_39639c;
        case 0x3963a0u: goto label_3963a0;
        case 0x3963a4u: goto label_3963a4;
        case 0x3963a8u: goto label_3963a8;
        case 0x3963acu: goto label_3963ac;
        case 0x3963b0u: goto label_3963b0;
        case 0x3963b4u: goto label_3963b4;
        case 0x3963b8u: goto label_3963b8;
        case 0x3963bcu: goto label_3963bc;
        case 0x3963c0u: goto label_3963c0;
        case 0x3963c4u: goto label_3963c4;
        case 0x3963c8u: goto label_3963c8;
        case 0x3963ccu: goto label_3963cc;
        case 0x3963d0u: goto label_3963d0;
        case 0x3963d4u: goto label_3963d4;
        case 0x3963d8u: goto label_3963d8;
        case 0x3963dcu: goto label_3963dc;
        case 0x3963e0u: goto label_3963e0;
        case 0x3963e4u: goto label_3963e4;
        case 0x3963e8u: goto label_3963e8;
        case 0x3963ecu: goto label_3963ec;
        case 0x3963f0u: goto label_3963f0;
        case 0x3963f4u: goto label_3963f4;
        case 0x3963f8u: goto label_3963f8;
        case 0x3963fcu: goto label_3963fc;
        case 0x396400u: goto label_396400;
        case 0x396404u: goto label_396404;
        case 0x396408u: goto label_396408;
        case 0x39640cu: goto label_39640c;
        case 0x396410u: goto label_396410;
        case 0x396414u: goto label_396414;
        case 0x396418u: goto label_396418;
        case 0x39641cu: goto label_39641c;
        case 0x396420u: goto label_396420;
        case 0x396424u: goto label_396424;
        case 0x396428u: goto label_396428;
        case 0x39642cu: goto label_39642c;
        case 0x396430u: goto label_396430;
        case 0x396434u: goto label_396434;
        case 0x396438u: goto label_396438;
        case 0x39643cu: goto label_39643c;
        case 0x396440u: goto label_396440;
        case 0x396444u: goto label_396444;
        case 0x396448u: goto label_396448;
        case 0x39644cu: goto label_39644c;
        case 0x396450u: goto label_396450;
        case 0x396454u: goto label_396454;
        case 0x396458u: goto label_396458;
        case 0x39645cu: goto label_39645c;
        case 0x396460u: goto label_396460;
        case 0x396464u: goto label_396464;
        case 0x396468u: goto label_396468;
        case 0x39646cu: goto label_39646c;
        case 0x396470u: goto label_396470;
        case 0x396474u: goto label_396474;
        case 0x396478u: goto label_396478;
        case 0x39647cu: goto label_39647c;
        case 0x396480u: goto label_396480;
        case 0x396484u: goto label_396484;
        case 0x396488u: goto label_396488;
        case 0x39648cu: goto label_39648c;
        case 0x396490u: goto label_396490;
        case 0x396494u: goto label_396494;
        case 0x396498u: goto label_396498;
        case 0x39649cu: goto label_39649c;
        case 0x3964a0u: goto label_3964a0;
        case 0x3964a4u: goto label_3964a4;
        case 0x3964a8u: goto label_3964a8;
        case 0x3964acu: goto label_3964ac;
        case 0x3964b0u: goto label_3964b0;
        case 0x3964b4u: goto label_3964b4;
        case 0x3964b8u: goto label_3964b8;
        case 0x3964bcu: goto label_3964bc;
        case 0x3964c0u: goto label_3964c0;
        case 0x3964c4u: goto label_3964c4;
        case 0x3964c8u: goto label_3964c8;
        case 0x3964ccu: goto label_3964cc;
        case 0x3964d0u: goto label_3964d0;
        case 0x3964d4u: goto label_3964d4;
        case 0x3964d8u: goto label_3964d8;
        case 0x3964dcu: goto label_3964dc;
        case 0x3964e0u: goto label_3964e0;
        case 0x3964e4u: goto label_3964e4;
        case 0x3964e8u: goto label_3964e8;
        case 0x3964ecu: goto label_3964ec;
        case 0x3964f0u: goto label_3964f0;
        case 0x3964f4u: goto label_3964f4;
        case 0x3964f8u: goto label_3964f8;
        case 0x3964fcu: goto label_3964fc;
        case 0x396500u: goto label_396500;
        case 0x396504u: goto label_396504;
        case 0x396508u: goto label_396508;
        case 0x39650cu: goto label_39650c;
        case 0x396510u: goto label_396510;
        case 0x396514u: goto label_396514;
        case 0x396518u: goto label_396518;
        case 0x39651cu: goto label_39651c;
        default: break;
    }

    ctx->pc = 0x3961d0u;

label_3961d0:
    // 0x3961d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3961d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3961d4:
    // 0x3961d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3961d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3961d8:
    // 0x3961d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3961d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3961dc:
    // 0x3961dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3961dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3961e0:
    // 0x3961e0: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x3961e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_3961e4:
    // 0x3961e4: 0x10a0008b  beqz        $a1, . + 4 + (0x8B << 2)
label_3961e8:
    if (ctx->pc == 0x3961E8u) {
        ctx->pc = 0x3961E8u;
            // 0x3961e8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3961ECu;
        goto label_3961ec;
    }
    ctx->pc = 0x3961E4u;
    {
        const bool branch_taken_0x3961e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3961E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3961E4u;
            // 0x3961e8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3961e4) {
            ctx->pc = 0x396414u;
            goto label_396414;
        }
    }
    ctx->pc = 0x3961ECu;
label_3961ec:
    // 0x3961ec: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x3961ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_3961f0:
    // 0x3961f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3961f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3961f4:
    // 0x3961f4: 0x1083003f  beq         $a0, $v1, . + 4 + (0x3F << 2)
label_3961f8:
    if (ctx->pc == 0x3961F8u) {
        ctx->pc = 0x3961FCu;
        goto label_3961fc;
    }
    ctx->pc = 0x3961F4u;
    {
        const bool branch_taken_0x3961f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3961f4) {
            ctx->pc = 0x3962F4u;
            goto label_3962f4;
        }
    }
    ctx->pc = 0x3961FCu;
label_3961fc:
    // 0x3961fc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_396200:
    if (ctx->pc == 0x396200u) {
        ctx->pc = 0x396204u;
        goto label_396204;
    }
    ctx->pc = 0x3961FCu;
    {
        const bool branch_taken_0x3961fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3961fc) {
            ctx->pc = 0x39620Cu;
            goto label_39620c;
        }
    }
    ctx->pc = 0x396204u;
label_396204:
    // 0x396204: 0x1000007c  b           . + 4 + (0x7C << 2)
label_396208:
    if (ctx->pc == 0x396208u) {
        ctx->pc = 0x396208u;
            // 0x396208: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->pc = 0x39620Cu;
        goto label_39620c;
    }
    ctx->pc = 0x396204u;
    {
        const bool branch_taken_0x396204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396204u;
            // 0x396208: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396204) {
            ctx->pc = 0x3963F8u;
            goto label_3963f8;
        }
    }
    ctx->pc = 0x39620Cu;
label_39620c:
    // 0x39620c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39620cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_396210:
    // 0x396210: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x396210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_396214:
    // 0x396214: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x396214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_396218:
    // 0x396218: 0xc0a7a88  jal         func_29EA20
label_39621c:
    if (ctx->pc == 0x39621Cu) {
        ctx->pc = 0x39621Cu;
            // 0x39621c: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x396220u;
        goto label_396220;
    }
    ctx->pc = 0x396218u;
    SET_GPR_U32(ctx, 31, 0x396220u);
    ctx->pc = 0x39621Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x396218u;
            // 0x39621c: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396220u; }
        if (ctx->pc != 0x396220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396220u; }
        if (ctx->pc != 0x396220u) { return; }
    }
    ctx->pc = 0x396220u;
label_396220:
    // 0x396220: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x396220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_396224:
    // 0x396224: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x396224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_396228:
    // 0x396228: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_39622c:
    if (ctx->pc == 0x39622Cu) {
        ctx->pc = 0x39622Cu;
            // 0x39622c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x396230u;
        goto label_396230;
    }
    ctx->pc = 0x396228u;
    {
        const bool branch_taken_0x396228 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39622Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396228u;
            // 0x39622c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396228) {
            ctx->pc = 0x396244u;
            goto label_396244;
        }
    }
    ctx->pc = 0x396230u;
label_396230:
    // 0x396230: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x396230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_396234:
    // 0x396234: 0xc44c0020  lwc1        $f12, 0x20($v0)
    ctx->pc = 0x396234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_396238:
    // 0x396238: 0xc0827ac  jal         func_209EB0
label_39623c:
    if (ctx->pc == 0x39623Cu) {
        ctx->pc = 0x39623Cu;
            // 0x39623c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x396240u;
        goto label_396240;
    }
    ctx->pc = 0x396238u;
    SET_GPR_U32(ctx, 31, 0x396240u);
    ctx->pc = 0x39623Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x396238u;
            // 0x39623c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396240u; }
        if (ctx->pc != 0x396240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396240u; }
        if (ctx->pc != 0x396240u) { return; }
    }
    ctx->pc = 0x396240u;
label_396240:
    // 0x396240: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x396240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_396244:
    // 0x396244: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x396244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_396248:
    // 0x396248: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x396248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_39624c:
    // 0x39624c: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x39624cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_396250:
    // 0x396250: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x396250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_396254:
    // 0x396254: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x396254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_396258:
    // 0x396258: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x396258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39625c:
    // 0x39625c: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x39625cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_396260:
    // 0x396260: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x396260u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_396264:
    // 0x396264: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x396264u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_396268:
    // 0x396268: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x396268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_39626c:
    // 0x39626c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39626cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_396270:
    // 0x396270: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x396270u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_396274:
    // 0x396274: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x396274u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_396278:
    // 0x396278: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x396278u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_39627c:
    // 0x39627c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x39627cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_396280:
    // 0x396280: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x396280u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_396284:
    // 0x396284: 0xc04cab0  jal         func_132AC0
label_396288:
    if (ctx->pc == 0x396288u) {
        ctx->pc = 0x396288u;
            // 0x396288: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x39628Cu;
        goto label_39628c;
    }
    ctx->pc = 0x396284u;
    SET_GPR_U32(ctx, 31, 0x39628Cu);
    ctx->pc = 0x396288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x396284u;
            // 0x396288: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39628Cu; }
        if (ctx->pc != 0x39628Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39628Cu; }
        if (ctx->pc != 0x39628Cu) { return; }
    }
    ctx->pc = 0x39628Cu;
label_39628c:
    // 0x39628c: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x39628cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_396290:
    // 0x396290: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x396290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_396294:
    // 0x396294: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x396294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_396298:
    // 0x396298: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x396298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39629c:
    // 0x39629c: 0xc0d37ec  jal         func_34DFB0
label_3962a0:
    if (ctx->pc == 0x3962A0u) {
        ctx->pc = 0x3962A0u;
            // 0x3962a0: 0x24450008  addiu       $a1, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->pc = 0x3962A4u;
        goto label_3962a4;
    }
    ctx->pc = 0x39629Cu;
    SET_GPR_U32(ctx, 31, 0x3962A4u);
    ctx->pc = 0x3962A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39629Cu;
            // 0x3962a0: 0x24450008  addiu       $a1, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3962A4u; }
        if (ctx->pc != 0x3962A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3962A4u; }
        if (ctx->pc != 0x3962A4u) { return; }
    }
    ctx->pc = 0x3962A4u;
label_3962a4:
    // 0x3962a4: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x3962a4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_3962a8:
    // 0x3962a8: 0x50600052  beql        $v1, $zero, . + 4 + (0x52 << 2)
label_3962ac:
    if (ctx->pc == 0x3962ACu) {
        ctx->pc = 0x3962ACu;
            // 0x3962ac: 0xae30000c  sw          $s0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
        ctx->pc = 0x3962B0u;
        goto label_3962b0;
    }
    ctx->pc = 0x3962A8u;
    {
        const bool branch_taken_0x3962a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3962a8) {
            ctx->pc = 0x3962ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3962A8u;
            // 0x3962ac: 0xae30000c  sw          $s0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3963F4u;
            goto label_3963f4;
        }
    }
    ctx->pc = 0x3962B0u;
label_3962b0:
    // 0x3962b0: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x3962b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_3962b4:
    // 0x3962b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3962b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3962b8:
    // 0x3962b8: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x3962b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_3962bc:
    // 0x3962bc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3962bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_3962c0:
    // 0x3962c0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3962c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_3962c4:
    // 0x3962c4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_3962c8:
    if (ctx->pc == 0x3962C8u) {
        ctx->pc = 0x3962CCu;
        goto label_3962cc;
    }
    ctx->pc = 0x3962C4u;
    {
        const bool branch_taken_0x3962c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3962c4) {
            ctx->pc = 0x3962E8u;
            goto label_3962e8;
        }
    }
    ctx->pc = 0x3962CCu;
label_3962cc:
    // 0x3962cc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_3962d0:
    if (ctx->pc == 0x3962D0u) {
        ctx->pc = 0x3962D4u;
        goto label_3962d4;
    }
    ctx->pc = 0x3962CCu;
    {
        const bool branch_taken_0x3962cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3962cc) {
            ctx->pc = 0x3962E8u;
            goto label_3962e8;
        }
    }
    ctx->pc = 0x3962D4u;
label_3962d4:
    // 0x3962d4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3962d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3962d8:
    // 0x3962d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3962d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3962dc:
    // 0x3962dc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3962dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3962e0:
    // 0x3962e0: 0x320f809  jalr        $t9
label_3962e4:
    if (ctx->pc == 0x3962E4u) {
        ctx->pc = 0x3962E4u;
            // 0x3962e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3962E8u;
        goto label_3962e8;
    }
    ctx->pc = 0x3962E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3962E8u);
        ctx->pc = 0x3962E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3962E0u;
            // 0x3962e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3962E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3962E8u; }
            if (ctx->pc != 0x3962E8u) { return; }
        }
        }
    }
    ctx->pc = 0x3962E8u;
label_3962e8:
    // 0x3962e8: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x3962e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
label_3962ec:
    // 0x3962ec: 0x10000041  b           . + 4 + (0x41 << 2)
label_3962f0:
    if (ctx->pc == 0x3962F0u) {
        ctx->pc = 0x3962F4u;
        goto label_3962f4;
    }
    ctx->pc = 0x3962ECu;
    {
        const bool branch_taken_0x3962ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3962ec) {
            ctx->pc = 0x3963F4u;
            goto label_3963f4;
        }
    }
    ctx->pc = 0x3962F4u;
label_3962f4:
    // 0x3962f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3962f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3962f8:
    // 0x3962f8: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x3962f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_3962fc:
    // 0x3962fc: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x3962fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_396300:
    // 0x396300: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x396300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_396304:
    // 0x396304: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x396304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_396308:
    // 0x396308: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x396308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39630c:
    // 0x39630c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x39630cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_396310:
    // 0x396310: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x396310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_396314:
    // 0x396314: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x396314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_396318:
    // 0x396318: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x396318u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_39631c:
    // 0x39631c: 0xc0a7a88  jal         func_29EA20
label_396320:
    if (ctx->pc == 0x396320u) {
        ctx->pc = 0x396320u;
            // 0x396320: 0xe7a20038  swc1        $f2, 0x38($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->pc = 0x396324u;
        goto label_396324;
    }
    ctx->pc = 0x39631Cu;
    SET_GPR_U32(ctx, 31, 0x396324u);
    ctx->pc = 0x396320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39631Cu;
            // 0x396320: 0xe7a20038  swc1        $f2, 0x38($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396324u; }
        if (ctx->pc != 0x396324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396324u; }
        if (ctx->pc != 0x396324u) { return; }
    }
    ctx->pc = 0x396324u;
label_396324:
    // 0x396324: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x396324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_396328:
    // 0x396328: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x396328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39632c:
    // 0x39632c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_396330:
    if (ctx->pc == 0x396330u) {
        ctx->pc = 0x396330u;
            // 0x396330: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x396334u;
        goto label_396334;
    }
    ctx->pc = 0x39632Cu;
    {
        const bool branch_taken_0x39632c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x396330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39632Cu;
            // 0x396330: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39632c) {
            ctx->pc = 0x39634Cu;
            goto label_39634c;
        }
    }
    ctx->pc = 0x396334u;
label_396334:
    // 0x396334: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x396334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_396338:
    // 0x396338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x396338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39633c:
    // 0x39633c: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x39633cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_396340:
    // 0x396340: 0xc0804bc  jal         func_2012F0
label_396344:
    if (ctx->pc == 0x396344u) {
        ctx->pc = 0x396344u;
            // 0x396344: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x396348u;
        goto label_396348;
    }
    ctx->pc = 0x396340u;
    SET_GPR_U32(ctx, 31, 0x396348u);
    ctx->pc = 0x396344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x396340u;
            // 0x396344: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396348u; }
        if (ctx->pc != 0x396348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396348u; }
        if (ctx->pc != 0x396348u) { return; }
    }
    ctx->pc = 0x396348u;
label_396348:
    // 0x396348: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x396348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39634c:
    // 0x39634c: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x39634cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_396350:
    // 0x396350: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x396350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_396354:
    // 0x396354: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x396354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_396358:
    // 0x396358: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x396358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_39635c:
    // 0x39635c: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x39635cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_396360:
    // 0x396360: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x396360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_396364:
    // 0x396364: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x396364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_396368:
    // 0x396368: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x396368u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_39636c:
    // 0x39636c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x39636cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_396370:
    // 0x396370: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x396370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_396374:
    // 0x396374: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x396374u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_396378:
    // 0x396378: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x396378u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_39637c:
    // 0x39637c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39637cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_396380:
    // 0x396380: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x396380u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_396384:
    // 0x396384: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x396384u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_396388:
    // 0x396388: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x396388u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_39638c:
    // 0x39638c: 0xc04cab0  jal         func_132AC0
label_396390:
    if (ctx->pc == 0x396390u) {
        ctx->pc = 0x396390u;
            // 0x396390: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x396394u;
        goto label_396394;
    }
    ctx->pc = 0x39638Cu;
    SET_GPR_U32(ctx, 31, 0x396394u);
    ctx->pc = 0x396390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39638Cu;
            // 0x396390: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396394u; }
        if (ctx->pc != 0x396394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396394u; }
        if (ctx->pc != 0x396394u) { return; }
    }
    ctx->pc = 0x396394u;
label_396394:
    // 0x396394: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x396394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_396398:
    // 0x396398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x396398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39639c:
    // 0x39639c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x39639cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3963a0:
    // 0x3963a0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3963a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3963a4:
    // 0x3963a4: 0xc0d37ec  jal         func_34DFB0
label_3963a8:
    if (ctx->pc == 0x3963A8u) {
        ctx->pc = 0x3963A8u;
            // 0x3963a8: 0x24450008  addiu       $a1, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->pc = 0x3963ACu;
        goto label_3963ac;
    }
    ctx->pc = 0x3963A4u;
    SET_GPR_U32(ctx, 31, 0x3963ACu);
    ctx->pc = 0x3963A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3963A4u;
            // 0x3963a8: 0x24450008  addiu       $a1, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3963ACu; }
        if (ctx->pc != 0x3963ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3963ACu; }
        if (ctx->pc != 0x3963ACu) { return; }
    }
    ctx->pc = 0x3963ACu;
label_3963ac:
    // 0x3963ac: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x3963acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_3963b0:
    // 0x3963b0: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_3963b4:
    if (ctx->pc == 0x3963B4u) {
        ctx->pc = 0x3963B4u;
            // 0x3963b4: 0xae300008  sw          $s0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
        ctx->pc = 0x3963B8u;
        goto label_3963b8;
    }
    ctx->pc = 0x3963B0u;
    {
        const bool branch_taken_0x3963b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3963b0) {
            ctx->pc = 0x3963B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3963B0u;
            // 0x3963b4: 0xae300008  sw          $s0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3963F4u;
            goto label_3963f4;
        }
    }
    ctx->pc = 0x3963B8u;
label_3963b8:
    // 0x3963b8: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x3963b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_3963bc:
    // 0x3963bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3963bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3963c0:
    // 0x3963c0: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x3963c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_3963c4:
    // 0x3963c4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3963c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_3963c8:
    // 0x3963c8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3963c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_3963cc:
    // 0x3963cc: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_3963d0:
    if (ctx->pc == 0x3963D0u) {
        ctx->pc = 0x3963D4u;
        goto label_3963d4;
    }
    ctx->pc = 0x3963CCu;
    {
        const bool branch_taken_0x3963cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3963cc) {
            ctx->pc = 0x3963F0u;
            goto label_3963f0;
        }
    }
    ctx->pc = 0x3963D4u;
label_3963d4:
    // 0x3963d4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_3963d8:
    if (ctx->pc == 0x3963D8u) {
        ctx->pc = 0x3963DCu;
        goto label_3963dc;
    }
    ctx->pc = 0x3963D4u;
    {
        const bool branch_taken_0x3963d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3963d4) {
            ctx->pc = 0x3963F0u;
            goto label_3963f0;
        }
    }
    ctx->pc = 0x3963DCu;
label_3963dc:
    // 0x3963dc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3963dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3963e0:
    // 0x3963e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3963e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3963e4:
    // 0x3963e4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3963e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3963e8:
    // 0x3963e8: 0x320f809  jalr        $t9
label_3963ec:
    if (ctx->pc == 0x3963ECu) {
        ctx->pc = 0x3963ECu;
            // 0x3963ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3963F0u;
        goto label_3963f0;
    }
    ctx->pc = 0x3963E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3963F0u);
        ctx->pc = 0x3963ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3963E8u;
            // 0x3963ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3963F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3963F0u; }
            if (ctx->pc != 0x3963F0u) { return; }
        }
        }
    }
    ctx->pc = 0x3963F0u;
label_3963f0:
    // 0x3963f0: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x3963f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_3963f4:
    // 0x3963f4: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x3963f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_3963f8:
    // 0x3963f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3963f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3963fc:
    // 0x3963fc: 0x90840004  lbu         $a0, 0x4($a0)
    ctx->pc = 0x3963fcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_396400:
    // 0x396400: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_396404:
    if (ctx->pc == 0x396404u) {
        ctx->pc = 0x396404u;
            // 0x396404: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x396408u;
        goto label_396408;
    }
    ctx->pc = 0x396400u;
    {
        const bool branch_taken_0x396400 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x396400) {
            ctx->pc = 0x396404u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x396400u;
            // 0x396404: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x396410u;
            goto label_396410;
        }
    }
    ctx->pc = 0x396408u;
label_396408:
    // 0x396408: 0x10000002  b           . + 4 + (0x2 << 2)
label_39640c:
    if (ctx->pc == 0x39640Cu) {
        ctx->pc = 0x39640Cu;
            // 0x39640c: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x396410u;
        goto label_396410;
    }
    ctx->pc = 0x396408u;
    {
        const bool branch_taken_0x396408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39640Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396408u;
            // 0x39640c: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396408) {
            ctx->pc = 0x396414u;
            goto label_396414;
        }
    }
    ctx->pc = 0x396410u;
label_396410:
    // 0x396410: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x396410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_396414:
    // 0x396414: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x396414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_396418:
    // 0x396418: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x396418u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39641c:
    // 0x39641c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39641cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_396420:
    // 0x396420: 0x3e00008  jr          $ra
label_396424:
    if (ctx->pc == 0x396424u) {
        ctx->pc = 0x396424u;
            // 0x396424: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x396428u;
        goto label_396428;
    }
    ctx->pc = 0x396420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396420u;
            // 0x396424: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x396428u;
label_396428:
    // 0x396428: 0x0  nop
    ctx->pc = 0x396428u;
    // NOP
label_39642c:
    // 0x39642c: 0x0  nop
    ctx->pc = 0x39642cu;
    // NOP
label_396430:
    // 0x396430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x396430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_396434:
    // 0x396434: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x396434u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_396438:
    // 0x396438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x396438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39643c:
    // 0x39643c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x39643cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_396440:
    // 0x396440: 0x90840014  lbu         $a0, 0x14($a0)
    ctx->pc = 0x396440u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
label_396444:
    // 0x396444: 0x5085000b  beql        $a0, $a1, . + 4 + (0xB << 2)
label_396448:
    if (ctx->pc == 0x396448u) {
        ctx->pc = 0x396448u;
            // 0x396448: 0x8d050060  lw          $a1, 0x60($t0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 96)));
        ctx->pc = 0x39644Cu;
        goto label_39644c;
    }
    ctx->pc = 0x396444u;
    {
        const bool branch_taken_0x396444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x396444) {
            ctx->pc = 0x396448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x396444u;
            // 0x396448: 0x8d050060  lw          $a1, 0x60($t0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x396474u;
            goto label_396474;
        }
    }
    ctx->pc = 0x39644Cu;
label_39644c:
    // 0x39644c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39644cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_396450:
    // 0x396450: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_396454:
    if (ctx->pc == 0x396454u) {
        ctx->pc = 0x396454u;
            // 0x396454: 0x8d190004  lw          $t9, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->pc = 0x396458u;
        goto label_396458;
    }
    ctx->pc = 0x396450u;
    {
        const bool branch_taken_0x396450 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x396450) {
            ctx->pc = 0x396454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x396450u;
            // 0x396454: 0x8d190004  lw          $t9, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x396460u;
            goto label_396460;
        }
    }
    ctx->pc = 0x396458u;
label_396458:
    // 0x396458: 0x1000002d  b           . + 4 + (0x2D << 2)
label_39645c:
    if (ctx->pc == 0x39645Cu) {
        ctx->pc = 0x396460u;
        goto label_396460;
    }
    ctx->pc = 0x396458u;
    {
        const bool branch_taken_0x396458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x396458) {
            ctx->pc = 0x396510u;
            goto label_396510;
        }
    }
    ctx->pc = 0x396460u;
label_396460:
    // 0x396460: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x396460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_396464:
    // 0x396464: 0x320f809  jalr        $t9
label_396468:
    if (ctx->pc == 0x396468u) {
        ctx->pc = 0x396468u;
            // 0x396468: 0x25040004  addiu       $a0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->pc = 0x39646Cu;
        goto label_39646c;
    }
    ctx->pc = 0x396464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39646Cu);
        ctx->pc = 0x396468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396464u;
            // 0x396468: 0x25040004  addiu       $a0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39646Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39646Cu; }
            if (ctx->pc != 0x39646Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39646Cu;
label_39646c:
    // 0x39646c: 0x10000028  b           . + 4 + (0x28 << 2)
label_396470:
    if (ctx->pc == 0x396470u) {
        ctx->pc = 0x396474u;
        goto label_396474;
    }
    ctx->pc = 0x39646Cu;
    {
        const bool branch_taken_0x39646c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39646c) {
            ctx->pc = 0x396510u;
            goto label_396510;
        }
    }
    ctx->pc = 0x396474u;
label_396474:
    // 0x396474: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x396474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_396478:
    // 0x396478: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x396478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39647c:
    // 0x39647c: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x39647cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_396480:
    // 0x396480: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x396480u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_396484:
    // 0x396484: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x396484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_396488:
    // 0x396488: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x396488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_39648c:
    // 0x39648c: 0x1067000e  beq         $v1, $a3, . + 4 + (0xE << 2)
label_396490:
    if (ctx->pc == 0x396490u) {
        ctx->pc = 0x396494u;
        goto label_396494;
    }
    ctx->pc = 0x39648Cu;
    {
        const bool branch_taken_0x39648c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x39648c) {
            ctx->pc = 0x3964C8u;
            goto label_3964c8;
        }
    }
    ctx->pc = 0x396494u;
label_396494:
    // 0x396494: 0x10660006  beq         $v1, $a2, . + 4 + (0x6 << 2)
label_396498:
    if (ctx->pc == 0x396498u) {
        ctx->pc = 0x39649Cu;
        goto label_39649c;
    }
    ctx->pc = 0x396494u;
    {
        const bool branch_taken_0x396494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x396494) {
            ctx->pc = 0x3964B0u;
            goto label_3964b0;
        }
    }
    ctx->pc = 0x39649Cu;
label_39649c:
    // 0x39649c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_3964a0:
    if (ctx->pc == 0x3964A0u) {
        ctx->pc = 0x3964A4u;
        goto label_3964a4;
    }
    ctx->pc = 0x39649Cu;
    {
        const bool branch_taken_0x39649c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39649c) {
            ctx->pc = 0x3964E0u;
            goto label_3964e0;
        }
    }
    ctx->pc = 0x3964A4u;
label_3964a4:
    // 0x3964a4: 0x1000000e  b           . + 4 + (0xE << 2)
label_3964a8:
    if (ctx->pc == 0x3964A8u) {
        ctx->pc = 0x3964ACu;
        goto label_3964ac;
    }
    ctx->pc = 0x3964A4u;
    {
        const bool branch_taken_0x3964a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3964a4) {
            ctx->pc = 0x3964E0u;
            goto label_3964e0;
        }
    }
    ctx->pc = 0x3964ACu;
label_3964ac:
    // 0x3964ac: 0x0  nop
    ctx->pc = 0x3964acu;
    // NOP
label_3964b0:
    // 0x3964b0: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x3964b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_3964b4:
    // 0x3964b4: 0x90630004  lbu         $v1, 0x4($v1)
    ctx->pc = 0x3964b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_3964b8:
    // 0x3964b8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_3964bc:
    if (ctx->pc == 0x3964BCu) {
        ctx->pc = 0x3964C0u;
        goto label_3964c0;
    }
    ctx->pc = 0x3964B8u;
    {
        const bool branch_taken_0x3964b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3964b8) {
            ctx->pc = 0x3964E0u;
            goto label_3964e0;
        }
    }
    ctx->pc = 0x3964C0u;
label_3964c0:
    // 0x3964c0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3964c4:
    if (ctx->pc == 0x3964C4u) {
        ctx->pc = 0x3964C4u;
            // 0x3964c4: 0xac870010  sw          $a3, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
        ctx->pc = 0x3964C8u;
        goto label_3964c8;
    }
    ctx->pc = 0x3964C0u;
    {
        const bool branch_taken_0x3964c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3964C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3964C0u;
            // 0x3964c4: 0xac870010  sw          $a3, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3964c0) {
            ctx->pc = 0x3964E0u;
            goto label_3964e0;
        }
    }
    ctx->pc = 0x3964C8u;
label_3964c8:
    // 0x3964c8: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x3964c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_3964cc:
    // 0x3964cc: 0x90630004  lbu         $v1, 0x4($v1)
    ctx->pc = 0x3964ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_3964d0:
    // 0x3964d0: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
label_3964d4:
    if (ctx->pc == 0x3964D4u) {
        ctx->pc = 0x3964D8u;
        goto label_3964d8;
    }
    ctx->pc = 0x3964D0u;
    {
        const bool branch_taken_0x3964d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x3964d0) {
            ctx->pc = 0x3964E0u;
            goto label_3964e0;
        }
    }
    ctx->pc = 0x3964D8u;
label_3964d8:
    // 0x3964d8: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x3964d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
label_3964dc:
    // 0x3964dc: 0x0  nop
    ctx->pc = 0x3964dcu;
    // NOP
label_3964e0:
    // 0x3964e0: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x3964e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_3964e4:
    // 0x3964e4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3964e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_3964e8:
    // 0x3964e8: 0x8d04005c  lw          $a0, 0x5C($t0)
    ctx->pc = 0x3964e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 92)));
label_3964ec:
    // 0x3964ec: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x3964ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3964f0:
    // 0x3964f0: 0x8d030060  lw          $v1, 0x60($t0)
    ctx->pc = 0x3964f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 96)));
label_3964f4:
    // 0x3964f4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3964f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3964f8:
    // 0x3964f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3964f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3964fc:
    // 0x3964fc: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x3964fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
label_396500:
    // 0x396500: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x396500u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_396504:
    // 0x396504: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x396504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_396508:
    // 0x396508: 0x5460ffdd  bnel        $v1, $zero, . + 4 + (-0x23 << 2)
label_39650c:
    if (ctx->pc == 0x39650Cu) {
        ctx->pc = 0x39650Cu;
            // 0x39650c: 0x5183c  dsll32      $v1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
        ctx->pc = 0x396510u;
        goto label_396510;
    }
    ctx->pc = 0x396508u;
    {
        const bool branch_taken_0x396508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x396508) {
            ctx->pc = 0x39650Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x396508u;
            // 0x39650c: 0x5183c  dsll32      $v1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x396480u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_396480;
        }
    }
    ctx->pc = 0x396510u;
label_396510:
    // 0x396510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x396510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_396514:
    // 0x396514: 0x3e00008  jr          $ra
label_396518:
    if (ctx->pc == 0x396518u) {
        ctx->pc = 0x396518u;
            // 0x396518: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x39651Cu;
        goto label_39651c;
    }
    ctx->pc = 0x396514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396514u;
            // 0x396518: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39651Cu;
label_39651c:
    // 0x39651c: 0x0  nop
    ctx->pc = 0x39651cu;
    // NOP
}
