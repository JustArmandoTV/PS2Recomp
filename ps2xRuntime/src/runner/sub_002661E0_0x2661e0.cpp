#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002661E0
// Address: 0x2661e0 - 0x266520
void sub_002661E0_0x2661e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002661E0_0x2661e0");
#endif

    switch (ctx->pc) {
        case 0x2661e0u: goto label_2661e0;
        case 0x2661e4u: goto label_2661e4;
        case 0x2661e8u: goto label_2661e8;
        case 0x2661ecu: goto label_2661ec;
        case 0x2661f0u: goto label_2661f0;
        case 0x2661f4u: goto label_2661f4;
        case 0x2661f8u: goto label_2661f8;
        case 0x2661fcu: goto label_2661fc;
        case 0x266200u: goto label_266200;
        case 0x266204u: goto label_266204;
        case 0x266208u: goto label_266208;
        case 0x26620cu: goto label_26620c;
        case 0x266210u: goto label_266210;
        case 0x266214u: goto label_266214;
        case 0x266218u: goto label_266218;
        case 0x26621cu: goto label_26621c;
        case 0x266220u: goto label_266220;
        case 0x266224u: goto label_266224;
        case 0x266228u: goto label_266228;
        case 0x26622cu: goto label_26622c;
        case 0x266230u: goto label_266230;
        case 0x266234u: goto label_266234;
        case 0x266238u: goto label_266238;
        case 0x26623cu: goto label_26623c;
        case 0x266240u: goto label_266240;
        case 0x266244u: goto label_266244;
        case 0x266248u: goto label_266248;
        case 0x26624cu: goto label_26624c;
        case 0x266250u: goto label_266250;
        case 0x266254u: goto label_266254;
        case 0x266258u: goto label_266258;
        case 0x26625cu: goto label_26625c;
        case 0x266260u: goto label_266260;
        case 0x266264u: goto label_266264;
        case 0x266268u: goto label_266268;
        case 0x26626cu: goto label_26626c;
        case 0x266270u: goto label_266270;
        case 0x266274u: goto label_266274;
        case 0x266278u: goto label_266278;
        case 0x26627cu: goto label_26627c;
        case 0x266280u: goto label_266280;
        case 0x266284u: goto label_266284;
        case 0x266288u: goto label_266288;
        case 0x26628cu: goto label_26628c;
        case 0x266290u: goto label_266290;
        case 0x266294u: goto label_266294;
        case 0x266298u: goto label_266298;
        case 0x26629cu: goto label_26629c;
        case 0x2662a0u: goto label_2662a0;
        case 0x2662a4u: goto label_2662a4;
        case 0x2662a8u: goto label_2662a8;
        case 0x2662acu: goto label_2662ac;
        case 0x2662b0u: goto label_2662b0;
        case 0x2662b4u: goto label_2662b4;
        case 0x2662b8u: goto label_2662b8;
        case 0x2662bcu: goto label_2662bc;
        case 0x2662c0u: goto label_2662c0;
        case 0x2662c4u: goto label_2662c4;
        case 0x2662c8u: goto label_2662c8;
        case 0x2662ccu: goto label_2662cc;
        case 0x2662d0u: goto label_2662d0;
        case 0x2662d4u: goto label_2662d4;
        case 0x2662d8u: goto label_2662d8;
        case 0x2662dcu: goto label_2662dc;
        case 0x2662e0u: goto label_2662e0;
        case 0x2662e4u: goto label_2662e4;
        case 0x2662e8u: goto label_2662e8;
        case 0x2662ecu: goto label_2662ec;
        case 0x2662f0u: goto label_2662f0;
        case 0x2662f4u: goto label_2662f4;
        case 0x2662f8u: goto label_2662f8;
        case 0x2662fcu: goto label_2662fc;
        case 0x266300u: goto label_266300;
        case 0x266304u: goto label_266304;
        case 0x266308u: goto label_266308;
        case 0x26630cu: goto label_26630c;
        case 0x266310u: goto label_266310;
        case 0x266314u: goto label_266314;
        case 0x266318u: goto label_266318;
        case 0x26631cu: goto label_26631c;
        case 0x266320u: goto label_266320;
        case 0x266324u: goto label_266324;
        case 0x266328u: goto label_266328;
        case 0x26632cu: goto label_26632c;
        case 0x266330u: goto label_266330;
        case 0x266334u: goto label_266334;
        case 0x266338u: goto label_266338;
        case 0x26633cu: goto label_26633c;
        case 0x266340u: goto label_266340;
        case 0x266344u: goto label_266344;
        case 0x266348u: goto label_266348;
        case 0x26634cu: goto label_26634c;
        case 0x266350u: goto label_266350;
        case 0x266354u: goto label_266354;
        case 0x266358u: goto label_266358;
        case 0x26635cu: goto label_26635c;
        case 0x266360u: goto label_266360;
        case 0x266364u: goto label_266364;
        case 0x266368u: goto label_266368;
        case 0x26636cu: goto label_26636c;
        case 0x266370u: goto label_266370;
        case 0x266374u: goto label_266374;
        case 0x266378u: goto label_266378;
        case 0x26637cu: goto label_26637c;
        case 0x266380u: goto label_266380;
        case 0x266384u: goto label_266384;
        case 0x266388u: goto label_266388;
        case 0x26638cu: goto label_26638c;
        case 0x266390u: goto label_266390;
        case 0x266394u: goto label_266394;
        case 0x266398u: goto label_266398;
        case 0x26639cu: goto label_26639c;
        case 0x2663a0u: goto label_2663a0;
        case 0x2663a4u: goto label_2663a4;
        case 0x2663a8u: goto label_2663a8;
        case 0x2663acu: goto label_2663ac;
        case 0x2663b0u: goto label_2663b0;
        case 0x2663b4u: goto label_2663b4;
        case 0x2663b8u: goto label_2663b8;
        case 0x2663bcu: goto label_2663bc;
        case 0x2663c0u: goto label_2663c0;
        case 0x2663c4u: goto label_2663c4;
        case 0x2663c8u: goto label_2663c8;
        case 0x2663ccu: goto label_2663cc;
        case 0x2663d0u: goto label_2663d0;
        case 0x2663d4u: goto label_2663d4;
        case 0x2663d8u: goto label_2663d8;
        case 0x2663dcu: goto label_2663dc;
        case 0x2663e0u: goto label_2663e0;
        case 0x2663e4u: goto label_2663e4;
        case 0x2663e8u: goto label_2663e8;
        case 0x2663ecu: goto label_2663ec;
        case 0x2663f0u: goto label_2663f0;
        case 0x2663f4u: goto label_2663f4;
        case 0x2663f8u: goto label_2663f8;
        case 0x2663fcu: goto label_2663fc;
        case 0x266400u: goto label_266400;
        case 0x266404u: goto label_266404;
        case 0x266408u: goto label_266408;
        case 0x26640cu: goto label_26640c;
        case 0x266410u: goto label_266410;
        case 0x266414u: goto label_266414;
        case 0x266418u: goto label_266418;
        case 0x26641cu: goto label_26641c;
        case 0x266420u: goto label_266420;
        case 0x266424u: goto label_266424;
        case 0x266428u: goto label_266428;
        case 0x26642cu: goto label_26642c;
        case 0x266430u: goto label_266430;
        case 0x266434u: goto label_266434;
        case 0x266438u: goto label_266438;
        case 0x26643cu: goto label_26643c;
        case 0x266440u: goto label_266440;
        case 0x266444u: goto label_266444;
        case 0x266448u: goto label_266448;
        case 0x26644cu: goto label_26644c;
        case 0x266450u: goto label_266450;
        case 0x266454u: goto label_266454;
        case 0x266458u: goto label_266458;
        case 0x26645cu: goto label_26645c;
        case 0x266460u: goto label_266460;
        case 0x266464u: goto label_266464;
        case 0x266468u: goto label_266468;
        case 0x26646cu: goto label_26646c;
        case 0x266470u: goto label_266470;
        case 0x266474u: goto label_266474;
        case 0x266478u: goto label_266478;
        case 0x26647cu: goto label_26647c;
        case 0x266480u: goto label_266480;
        case 0x266484u: goto label_266484;
        case 0x266488u: goto label_266488;
        case 0x26648cu: goto label_26648c;
        case 0x266490u: goto label_266490;
        case 0x266494u: goto label_266494;
        case 0x266498u: goto label_266498;
        case 0x26649cu: goto label_26649c;
        case 0x2664a0u: goto label_2664a0;
        case 0x2664a4u: goto label_2664a4;
        case 0x2664a8u: goto label_2664a8;
        case 0x2664acu: goto label_2664ac;
        case 0x2664b0u: goto label_2664b0;
        case 0x2664b4u: goto label_2664b4;
        case 0x2664b8u: goto label_2664b8;
        case 0x2664bcu: goto label_2664bc;
        case 0x2664c0u: goto label_2664c0;
        case 0x2664c4u: goto label_2664c4;
        case 0x2664c8u: goto label_2664c8;
        case 0x2664ccu: goto label_2664cc;
        case 0x2664d0u: goto label_2664d0;
        case 0x2664d4u: goto label_2664d4;
        case 0x2664d8u: goto label_2664d8;
        case 0x2664dcu: goto label_2664dc;
        case 0x2664e0u: goto label_2664e0;
        case 0x2664e4u: goto label_2664e4;
        case 0x2664e8u: goto label_2664e8;
        case 0x2664ecu: goto label_2664ec;
        case 0x2664f0u: goto label_2664f0;
        case 0x2664f4u: goto label_2664f4;
        case 0x2664f8u: goto label_2664f8;
        case 0x2664fcu: goto label_2664fc;
        case 0x266500u: goto label_266500;
        case 0x266504u: goto label_266504;
        case 0x266508u: goto label_266508;
        case 0x26650cu: goto label_26650c;
        case 0x266510u: goto label_266510;
        case 0x266514u: goto label_266514;
        case 0x266518u: goto label_266518;
        case 0x26651cu: goto label_26651c;
        default: break;
    }

    ctx->pc = 0x2661e0u;

label_2661e0:
    // 0x2661e0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2661e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_2661e4:
    // 0x2661e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2661e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2661e8:
    // 0x2661e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2661e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2661ec:
    // 0x2661ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2661ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2661f0:
    // 0x2661f0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2661f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2661f4:
    // 0x2661f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2661f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2661f8:
    // 0x2661f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2661f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2661fc:
    // 0x2661fc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2661fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_266200:
    // 0x266200: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x266200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_266204:
    // 0x266204: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x266204u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_266208:
    // 0x266208: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x266208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_26620c:
    // 0x26620c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x26620cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_266210:
    // 0x266210: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x266210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_266214:
    // 0x266214: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x266214u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_266218:
    // 0x266218: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x266218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_26621c:
    // 0x26621c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26621cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_266220:
    // 0x266220: 0xa7a0011e  sh          $zero, 0x11E($sp)
    ctx->pc = 0x266220u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 286), (uint16_t)GPR_U32(ctx, 0));
label_266224:
    // 0x266224: 0x27a5011e  addiu       $a1, $sp, 0x11E
    ctx->pc = 0x266224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 286));
label_266228:
    // 0x266228: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x266228u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_26622c:
    // 0x26622c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26622cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266230:
    // 0x266230: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x266230u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_266234:
    // 0x266234: 0x320f809  jalr        $t9
label_266238:
    if (ctx->pc == 0x266238u) {
        ctx->pc = 0x266238u;
            // 0x266238: 0x27a70100  addiu       $a3, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x26623Cu;
        goto label_26623c;
    }
    ctx->pc = 0x266234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26623Cu);
        ctx->pc = 0x266238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266234u;
            // 0x266238: 0x27a70100  addiu       $a3, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26623Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26623Cu; }
            if (ctx->pc != 0x26623Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26623Cu;
label_26623c:
    // 0x26623c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x26623cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_266240:
    // 0x266240: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x266240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_266244:
    // 0x266244: 0x27a5011e  addiu       $a1, $sp, 0x11E
    ctx->pc = 0x266244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 286));
label_266248:
    // 0x266248: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x266248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26624c:
    // 0x26624c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x26624cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_266250:
    // 0x266250: 0x320f809  jalr        $t9
label_266254:
    if (ctx->pc == 0x266254u) {
        ctx->pc = 0x266254u;
            // 0x266254: 0x27a700f0  addiu       $a3, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x266258u;
        goto label_266258;
    }
    ctx->pc = 0x266250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x266258u);
        ctx->pc = 0x266254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266250u;
            // 0x266254: 0x27a700f0  addiu       $a3, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x266258u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x266258u; }
            if (ctx->pc != 0x266258u) { return; }
        }
        }
    }
    ctx->pc = 0x266258u;
label_266258:
    // 0x266258: 0xc7a900f0  lwc1        $f9, 0xF0($sp)
    ctx->pc = 0x266258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_26625c:
    // 0x26625c: 0x27be00e4  addiu       $fp, $sp, 0xE4
    ctx->pc = 0x26625cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_266260:
    // 0x266260: 0xc6450000  lwc1        $f5, 0x0($s2)
    ctx->pc = 0x266260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_266264:
    // 0x266264: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x266264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_266268:
    // 0x266268: 0xc7a800f4  lwc1        $f8, 0xF4($sp)
    ctx->pc = 0x266268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_26626c:
    // 0x26626c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26626cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_266270:
    // 0x266270: 0xc6440010  lwc1        $f4, 0x10($s2)
    ctx->pc = 0x266270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_266274:
    // 0x266274: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x266274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_266278:
    // 0x266278: 0xc7a700f8  lwc1        $f7, 0xF8($sp)
    ctx->pc = 0x266278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_26627c:
    // 0x26627c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x26627cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_266280:
    // 0x266280: 0xc6430020  lwc1        $f3, 0x20($s2)
    ctx->pc = 0x266280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_266284:
    // 0x266284: 0x26510014  addiu       $s1, $s2, 0x14
    ctx->pc = 0x266284u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_266288:
    // 0x266288: 0xc6420030  lwc1        $f2, 0x30($s2)
    ctx->pc = 0x266288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26628c:
    // 0x26628c: 0x26560024  addiu       $s6, $s2, 0x24
    ctx->pc = 0x26628cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
label_266290:
    // 0x266290: 0x46054942  mul.s       $f5, $f9, $f5
    ctx->pc = 0x266290u;
    ctx->f[5] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
label_266294:
    // 0x266294: 0x26500018  addiu       $s0, $s2, 0x18
    ctx->pc = 0x266294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_266298:
    // 0x266298: 0x46044102  mul.s       $f4, $f8, $f4
    ctx->pc = 0x266298u;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
label_26629c:
    // 0x26629c: 0x46042818  adda.s      $f5, $f4
    ctx->pc = 0x26629cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
label_2662a0:
    // 0x2662a0: 0x460338dc  madd.s      $f3, $f7, $f3
    ctx->pc = 0x2662a0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[3]));
label_2662a4:
    // 0x2662a4: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2662a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_2662a8:
    // 0x2662a8: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x2662a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_2662ac:
    // 0x2662ac: 0xc6460004  lwc1        $f6, 0x4($s2)
    ctx->pc = 0x2662acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2662b0:
    // 0x2662b0: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x2662b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2662b4:
    // 0x2662b4: 0xc7a200e0  lwc1        $f2, 0xE0($sp)
    ctx->pc = 0x2662b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2662b8:
    // 0x2662b8: 0xc6450014  lwc1        $f5, 0x14($s2)
    ctx->pc = 0x2662b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2662bc:
    // 0x2662bc: 0xc6440024  lwc1        $f4, 0x24($s2)
    ctx->pc = 0x2662bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2662c0:
    // 0x2662c0: 0xc6430034  lwc1        $f3, 0x34($s2)
    ctx->pc = 0x2662c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2662c4:
    // 0x2662c4: 0x46064982  mul.s       $f6, $f9, $f6
    ctx->pc = 0x2662c4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
label_2662c8:
    // 0x2662c8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2662c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_2662cc:
    // 0x2662cc: 0x46054082  mul.s       $f2, $f8, $f5
    ctx->pc = 0x2662ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
label_2662d0:
    // 0x2662d0: 0x46023018  adda.s      $f6, $f2
    ctx->pc = 0x2662d0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
label_2662d4:
    // 0x2662d4: 0x4604389c  madd.s      $f2, $f7, $f4
    ctx->pc = 0x2662d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[4]));
label_2662d8:
    // 0x2662d8: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x2662d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_2662dc:
    // 0x2662dc: 0xe7a200e4  swc1        $f2, 0xE4($sp)
    ctx->pc = 0x2662dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_2662e0:
    // 0x2662e0: 0xc6450008  lwc1        $f5, 0x8($s2)
    ctx->pc = 0x2662e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2662e4:
    // 0x2662e4: 0xc6440018  lwc1        $f4, 0x18($s2)
    ctx->pc = 0x2662e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2662e8:
    // 0x2662e8: 0xc6430028  lwc1        $f3, 0x28($s2)
    ctx->pc = 0x2662e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2662ec:
    // 0x2662ec: 0xc6420038  lwc1        $f2, 0x38($s2)
    ctx->pc = 0x2662ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2662f0:
    // 0x2662f0: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x2662f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2662f4:
    // 0x2662f4: 0x46054942  mul.s       $f5, $f9, $f5
    ctx->pc = 0x2662f4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
label_2662f8:
    // 0x2662f8: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x2662f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_2662fc:
    // 0x2662fc: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x2662fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_266300:
    // 0x266300: 0x46044042  mul.s       $f1, $f8, $f4
    ctx->pc = 0x266300u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
label_266304:
    // 0x266304: 0x46012818  adda.s      $f5, $f1
    ctx->pc = 0x266304u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_266308:
    // 0x266308: 0x4603385c  madd.s      $f1, $f7, $f3
    ctx->pc = 0x266308u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[3]));
label_26630c:
    // 0x26630c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x26630cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_266310:
    // 0x266310: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x266310u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_266314:
    // 0x266314: 0xc7c10000  lwc1        $f1, 0x0($fp)
    ctx->pc = 0x266314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_266318:
    // 0x266318: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x266318u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_26631c:
    // 0x26631c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x26631cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_266320:
    // 0x266320: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x266320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_266324:
    // 0x266324: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x266324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_266328:
    // 0x266328: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x266328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26632c:
    // 0x26632c: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x26632cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_266330:
    // 0x266330: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x266330u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_266334:
    // 0x266334: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x266334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_266338:
    // 0x266338: 0x27a200ec  addiu       $v0, $sp, 0xEC
    ctx->pc = 0x266338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_26633c:
    // 0x26633c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x26633cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_266340:
    // 0x266340: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x266340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266344:
    // 0x266344: 0x27a200dc  addiu       $v0, $sp, 0xDC
    ctx->pc = 0x266344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_266348:
    // 0x266348: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x266348u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_26634c:
    // 0x26634c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x26634cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_266350:
    // 0x266350: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x266350u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_266354:
    // 0x266354: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x266354u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_266358:
    // 0x266358: 0x320f809  jalr        $t9
label_26635c:
    if (ctx->pc == 0x26635Cu) {
        ctx->pc = 0x26635Cu;
            // 0x26635c: 0x26570028  addiu       $s7, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->pc = 0x266360u;
        goto label_266360;
    }
    ctx->pc = 0x266358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x266360u);
        ctx->pc = 0x26635Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266358u;
            // 0x26635c: 0x26570028  addiu       $s7, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x266360u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x266360u; }
            if (ctx->pc != 0x266360u) { return; }
        }
        }
    }
    ctx->pc = 0x266360u;
label_266360:
    // 0x266360: 0xc7a200e0  lwc1        $f2, 0xE0($sp)
    ctx->pc = 0x266360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_266364:
    // 0x266364: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x266364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_266368:
    // 0x266368: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x266368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26636c:
    // 0x26636c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26636cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_266370:
    // 0x266370: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x266370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266374:
    // 0x266374: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x266374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_266378:
    // 0x266378: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x266378u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_26637c:
    // 0x26637c: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x26637cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_266380:
    // 0x266380: 0xc7c10000  lwc1        $f1, 0x0($fp)
    ctx->pc = 0x266380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_266384:
    // 0x266384: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x266384u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_266388:
    // 0x266388: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x266388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_26638c:
    // 0x26638c: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x26638cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_266390:
    // 0x266390: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x266390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_266394:
    // 0x266394: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x266394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266398:
    // 0x266398: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x266398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_26639c:
    // 0x26639c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26639cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2663a0:
    // 0x2663a0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2663a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2663a4:
    // 0x2663a4: 0x27a200ec  addiu       $v0, $sp, 0xEC
    ctx->pc = 0x2663a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_2663a8:
    // 0x2663a8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2663a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2663ac:
    // 0x2663ac: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x2663acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2663b0:
    // 0x2663b0: 0x27a200dc  addiu       $v0, $sp, 0xDC
    ctx->pc = 0x2663b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_2663b4:
    // 0x2663b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2663b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2663b8:
    // 0x2663b8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2663b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2663bc:
    // 0x2663bc: 0xc7a700d0  lwc1        $f7, 0xD0($sp)
    ctx->pc = 0x2663bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2663c0:
    // 0x2663c0: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x2663c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2663c4:
    // 0x2663c4: 0xc7a600d4  lwc1        $f6, 0xD4($sp)
    ctx->pc = 0x2663c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2663c8:
    // 0x2663c8: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2663c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2663cc:
    // 0x2663cc: 0xc7a500d8  lwc1        $f5, 0xD8($sp)
    ctx->pc = 0x2663ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2663d0:
    // 0x2663d0: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2663d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2663d4:
    // 0x2663d4: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x2663d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
label_2663d8:
    // 0x2663d8: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x2663d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_2663dc:
    // 0x2663dc: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x2663dcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2663e0:
    // 0x2663e0: 0x4600281c  madd.s      $f0, $f5, $f0
    ctx->pc = 0x2663e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[0]));
label_2663e4:
    // 0x2663e4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x2663e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2663e8:
    // 0x2663e8: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x2663e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2663ec:
    // 0x2663ec: 0xc6430010  lwc1        $f3, 0x10($s2)
    ctx->pc = 0x2663ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2663f0:
    // 0x2663f0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2663f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2663f4:
    // 0x2663f4: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2663f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2663f8:
    // 0x2663f8: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x2663f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_2663fc:
    // 0x2663fc: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x2663fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
label_266400:
    // 0x266400: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x266400u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_266404:
    // 0x266404: 0x4601285c  madd.s      $f1, $f5, $f1
    ctx->pc = 0x266404u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_266408:
    // 0x266408: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x266408u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_26640c:
    // 0x26640c: 0xc6440020  lwc1        $f4, 0x20($s2)
    ctx->pc = 0x26640cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_266410:
    // 0x266410: 0xc6c30000  lwc1        $f3, 0x0($s6)
    ctx->pc = 0x266410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_266414:
    // 0x266414: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x266414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_266418:
    // 0x266418: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x266418u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_26641c:
    // 0x26641c: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x26641cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_266420:
    // 0x266420: 0x46043902  mul.s       $f4, $f7, $f4
    ctx->pc = 0x266420u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_266424:
    // 0x266424: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x266424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
label_266428:
    // 0x266428: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x266428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_26642c:
    // 0x26642c: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x26642cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266430:
    // 0x266430: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x266430u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_266434:
    // 0x266434: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x266434u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_266438:
    // 0x266438: 0x4602289c  madd.s      $f2, $f5, $f2
    ctx->pc = 0x266438u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[2]));
label_26643c:
    // 0x26643c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26643cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_266440:
    // 0x266440: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x266440u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_266444:
    // 0x266444: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x266444u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_266448:
    // 0x266448: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x266448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_26644c:
    // 0x26644c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x26644cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_266450:
    // 0x266450: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x266450u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_266454:
    // 0x266454: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x266454u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_266458:
    // 0x266458: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x266458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_26645c:
    // 0x26645c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x26645cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_266460:
    // 0x266460: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x266460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_266464:
    // 0x266464: 0x320f809  jalr        $t9
label_266468:
    if (ctx->pc == 0x266468u) {
        ctx->pc = 0x266468u;
            // 0x266468: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x26646Cu;
        goto label_26646c;
    }
    ctx->pc = 0x266464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26646Cu);
        ctx->pc = 0x266468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266464u;
            // 0x266468: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26646Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26646Cu; }
            if (ctx->pc != 0x26646Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26646Cu;
label_26646c:
    // 0x26646c: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x26646cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_266470:
    // 0x266470: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x266470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_266474:
    // 0x266474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x266474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266478:
    // 0x266478: 0xa6a50002  sh          $a1, 0x2($s5)
    ctx->pc = 0x266478u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 2), (uint16_t)GPR_U32(ctx, 5));
label_26647c:
    // 0x26647c: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x26647cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_266480:
    // 0x266480: 0xa6a50000  sh          $a1, 0x0($s5)
    ctx->pc = 0x266480u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 5));
label_266484:
    // 0x266484: 0xa6a30004  sh          $v1, 0x4($s5)
    ctx->pc = 0x266484u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4), (uint16_t)GPR_U32(ctx, 3));
label_266488:
    // 0x266488: 0xa6a30006  sh          $v1, 0x6($s5)
    ctx->pc = 0x266488u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 6), (uint16_t)GPR_U32(ctx, 3));
label_26648c:
    // 0x26648c: 0xa2a20008  sb          $v0, 0x8($s5)
    ctx->pc = 0x26648cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 8), (uint8_t)GPR_U32(ctx, 2));
label_266490:
    // 0x266490: 0xa2a20009  sb          $v0, 0x9($s5)
    ctx->pc = 0x266490u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 9), (uint8_t)GPR_U32(ctx, 2));
label_266494:
    // 0x266494: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x266494u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_266498:
    // 0x266498: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x266498u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_26649c:
    // 0x26649c: 0x320f809  jalr        $t9
label_2664a0:
    if (ctx->pc == 0x2664A0u) {
        ctx->pc = 0x2664A0u;
            // 0x2664a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2664A4u;
        goto label_2664a4;
    }
    ctx->pc = 0x26649Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2664A4u);
        ctx->pc = 0x2664A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26649Cu;
            // 0x2664a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2664A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2664A4u; }
            if (ctx->pc != 0x2664A4u) { return; }
        }
        }
    }
    ctx->pc = 0x2664A4u;
label_2664a4:
    // 0x2664a4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2664a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2664a8:
    // 0x2664a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2664a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2664ac:
    // 0x2664ac: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2664acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2664b0:
    // 0x2664b0: 0x320f809  jalr        $t9
label_2664b4:
    if (ctx->pc == 0x2664B4u) {
        ctx->pc = 0x2664B4u;
            // 0x2664b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2664B8u;
        goto label_2664b8;
    }
    ctx->pc = 0x2664B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2664B8u);
        ctx->pc = 0x2664B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2664B0u;
            // 0x2664b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2664B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2664B8u; }
            if (ctx->pc != 0x2664B8u) { return; }
        }
        }
    }
    ctx->pc = 0x2664B8u;
label_2664b8:
    // 0x2664b8: 0x2a010004  slti        $at, $s0, 0x4
    ctx->pc = 0x2664b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_2664bc:
    // 0x2664bc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2664c0:
    if (ctx->pc == 0x2664C0u) {
        ctx->pc = 0x2664C0u;
            // 0x2664c0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2664C4u;
        goto label_2664c4;
    }
    ctx->pc = 0x2664BCu;
    {
        const bool branch_taken_0x2664bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2664C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2664BCu;
            // 0x2664c0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2664bc) {
            ctx->pc = 0x2664CCu;
            goto label_2664cc;
        }
    }
    ctx->pc = 0x2664C4u;
label_2664c4:
    // 0x2664c4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2664c8:
    if (ctx->pc == 0x2664C8u) {
        ctx->pc = 0x2664C8u;
            // 0x2664c8: 0x28610004  slti        $at, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->pc = 0x2664CCu;
        goto label_2664cc;
    }
    ctx->pc = 0x2664C4u;
    {
        const bool branch_taken_0x2664c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2664C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2664C4u;
            // 0x2664c8: 0x28610004  slti        $at, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2664c4) {
            ctx->pc = 0x2664D4u;
            goto label_2664d4;
        }
    }
    ctx->pc = 0x2664CCu;
label_2664cc:
    // 0x2664cc: 0x241000ff  addiu       $s0, $zero, 0xFF
    ctx->pc = 0x2664ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2664d0:
    // 0x2664d0: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x2664d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_2664d4:
    // 0x2664d4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2664d8:
    if (ctx->pc == 0x2664D8u) {
        ctx->pc = 0x2664D8u;
            // 0x2664d8: 0xa2b0000a  sb          $s0, 0xA($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 10), (uint8_t)GPR_U32(ctx, 16));
        ctx->pc = 0x2664DCu;
        goto label_2664dc;
    }
    ctx->pc = 0x2664D4u;
    {
        const bool branch_taken_0x2664d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2664D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2664D4u;
            // 0x2664d8: 0xa2b0000a  sb          $s0, 0xA($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 10), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2664d4) {
            ctx->pc = 0x2664E4u;
            goto label_2664e4;
        }
    }
    ctx->pc = 0x2664DCu;
label_2664dc:
    // 0x2664dc: 0x10000003  b           . + 4 + (0x3 << 2)
label_2664e0:
    if (ctx->pc == 0x2664E0u) {
        ctx->pc = 0x2664E0u;
            // 0x2664e0: 0xa2a3000b  sb          $v1, 0xB($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 11), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2664E4u;
        goto label_2664e4;
    }
    ctx->pc = 0x2664DCu;
    {
        const bool branch_taken_0x2664dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2664E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2664DCu;
            // 0x2664e0: 0xa2a3000b  sb          $v1, 0xB($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 11), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2664dc) {
            ctx->pc = 0x2664ECu;
            goto label_2664ec;
        }
    }
    ctx->pc = 0x2664E4u;
label_2664e4:
    // 0x2664e4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2664e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2664e8:
    // 0x2664e8: 0xa2a3000b  sb          $v1, 0xB($s5)
    ctx->pc = 0x2664e8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 11), (uint8_t)GPR_U32(ctx, 3));
label_2664ec:
    // 0x2664ec: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2664ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2664f0:
    // 0x2664f0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2664f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2664f4:
    // 0x2664f4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2664f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2664f8:
    // 0x2664f8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2664f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2664fc:
    // 0x2664fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2664fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_266500:
    // 0x266500: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x266500u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_266504:
    // 0x266504: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x266504u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_266508:
    // 0x266508: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x266508u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26650c:
    // 0x26650c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26650cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_266510:
    // 0x266510: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x266510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_266514:
    // 0x266514: 0x3e00008  jr          $ra
label_266518:
    if (ctx->pc == 0x266518u) {
        ctx->pc = 0x266518u;
            // 0x266518: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x26651Cu;
        goto label_26651c;
    }
    ctx->pc = 0x266514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266514u;
            // 0x266518: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26651Cu;
label_26651c:
    // 0x26651c: 0x0  nop
    ctx->pc = 0x26651cu;
    // NOP
}
