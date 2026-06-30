#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001562E0
// Address: 0x1562e0 - 0x156640
void sub_001562E0_0x1562e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001562E0_0x1562e0");
#endif

    switch (ctx->pc) {
        case 0x1562e0u: goto label_1562e0;
        case 0x1562e4u: goto label_1562e4;
        case 0x1562e8u: goto label_1562e8;
        case 0x1562ecu: goto label_1562ec;
        case 0x1562f0u: goto label_1562f0;
        case 0x1562f4u: goto label_1562f4;
        case 0x1562f8u: goto label_1562f8;
        case 0x1562fcu: goto label_1562fc;
        case 0x156300u: goto label_156300;
        case 0x156304u: goto label_156304;
        case 0x156308u: goto label_156308;
        case 0x15630cu: goto label_15630c;
        case 0x156310u: goto label_156310;
        case 0x156314u: goto label_156314;
        case 0x156318u: goto label_156318;
        case 0x15631cu: goto label_15631c;
        case 0x156320u: goto label_156320;
        case 0x156324u: goto label_156324;
        case 0x156328u: goto label_156328;
        case 0x15632cu: goto label_15632c;
        case 0x156330u: goto label_156330;
        case 0x156334u: goto label_156334;
        case 0x156338u: goto label_156338;
        case 0x15633cu: goto label_15633c;
        case 0x156340u: goto label_156340;
        case 0x156344u: goto label_156344;
        case 0x156348u: goto label_156348;
        case 0x15634cu: goto label_15634c;
        case 0x156350u: goto label_156350;
        case 0x156354u: goto label_156354;
        case 0x156358u: goto label_156358;
        case 0x15635cu: goto label_15635c;
        case 0x156360u: goto label_156360;
        case 0x156364u: goto label_156364;
        case 0x156368u: goto label_156368;
        case 0x15636cu: goto label_15636c;
        case 0x156370u: goto label_156370;
        case 0x156374u: goto label_156374;
        case 0x156378u: goto label_156378;
        case 0x15637cu: goto label_15637c;
        case 0x156380u: goto label_156380;
        case 0x156384u: goto label_156384;
        case 0x156388u: goto label_156388;
        case 0x15638cu: goto label_15638c;
        case 0x156390u: goto label_156390;
        case 0x156394u: goto label_156394;
        case 0x156398u: goto label_156398;
        case 0x15639cu: goto label_15639c;
        case 0x1563a0u: goto label_1563a0;
        case 0x1563a4u: goto label_1563a4;
        case 0x1563a8u: goto label_1563a8;
        case 0x1563acu: goto label_1563ac;
        case 0x1563b0u: goto label_1563b0;
        case 0x1563b4u: goto label_1563b4;
        case 0x1563b8u: goto label_1563b8;
        case 0x1563bcu: goto label_1563bc;
        case 0x1563c0u: goto label_1563c0;
        case 0x1563c4u: goto label_1563c4;
        case 0x1563c8u: goto label_1563c8;
        case 0x1563ccu: goto label_1563cc;
        case 0x1563d0u: goto label_1563d0;
        case 0x1563d4u: goto label_1563d4;
        case 0x1563d8u: goto label_1563d8;
        case 0x1563dcu: goto label_1563dc;
        case 0x1563e0u: goto label_1563e0;
        case 0x1563e4u: goto label_1563e4;
        case 0x1563e8u: goto label_1563e8;
        case 0x1563ecu: goto label_1563ec;
        case 0x1563f0u: goto label_1563f0;
        case 0x1563f4u: goto label_1563f4;
        case 0x1563f8u: goto label_1563f8;
        case 0x1563fcu: goto label_1563fc;
        case 0x156400u: goto label_156400;
        case 0x156404u: goto label_156404;
        case 0x156408u: goto label_156408;
        case 0x15640cu: goto label_15640c;
        case 0x156410u: goto label_156410;
        case 0x156414u: goto label_156414;
        case 0x156418u: goto label_156418;
        case 0x15641cu: goto label_15641c;
        case 0x156420u: goto label_156420;
        case 0x156424u: goto label_156424;
        case 0x156428u: goto label_156428;
        case 0x15642cu: goto label_15642c;
        case 0x156430u: goto label_156430;
        case 0x156434u: goto label_156434;
        case 0x156438u: goto label_156438;
        case 0x15643cu: goto label_15643c;
        case 0x156440u: goto label_156440;
        case 0x156444u: goto label_156444;
        case 0x156448u: goto label_156448;
        case 0x15644cu: goto label_15644c;
        case 0x156450u: goto label_156450;
        case 0x156454u: goto label_156454;
        case 0x156458u: goto label_156458;
        case 0x15645cu: goto label_15645c;
        case 0x156460u: goto label_156460;
        case 0x156464u: goto label_156464;
        case 0x156468u: goto label_156468;
        case 0x15646cu: goto label_15646c;
        case 0x156470u: goto label_156470;
        case 0x156474u: goto label_156474;
        case 0x156478u: goto label_156478;
        case 0x15647cu: goto label_15647c;
        case 0x156480u: goto label_156480;
        case 0x156484u: goto label_156484;
        case 0x156488u: goto label_156488;
        case 0x15648cu: goto label_15648c;
        case 0x156490u: goto label_156490;
        case 0x156494u: goto label_156494;
        case 0x156498u: goto label_156498;
        case 0x15649cu: goto label_15649c;
        case 0x1564a0u: goto label_1564a0;
        case 0x1564a4u: goto label_1564a4;
        case 0x1564a8u: goto label_1564a8;
        case 0x1564acu: goto label_1564ac;
        case 0x1564b0u: goto label_1564b0;
        case 0x1564b4u: goto label_1564b4;
        case 0x1564b8u: goto label_1564b8;
        case 0x1564bcu: goto label_1564bc;
        case 0x1564c0u: goto label_1564c0;
        case 0x1564c4u: goto label_1564c4;
        case 0x1564c8u: goto label_1564c8;
        case 0x1564ccu: goto label_1564cc;
        case 0x1564d0u: goto label_1564d0;
        case 0x1564d4u: goto label_1564d4;
        case 0x1564d8u: goto label_1564d8;
        case 0x1564dcu: goto label_1564dc;
        case 0x1564e0u: goto label_1564e0;
        case 0x1564e4u: goto label_1564e4;
        case 0x1564e8u: goto label_1564e8;
        case 0x1564ecu: goto label_1564ec;
        case 0x1564f0u: goto label_1564f0;
        case 0x1564f4u: goto label_1564f4;
        case 0x1564f8u: goto label_1564f8;
        case 0x1564fcu: goto label_1564fc;
        case 0x156500u: goto label_156500;
        case 0x156504u: goto label_156504;
        case 0x156508u: goto label_156508;
        case 0x15650cu: goto label_15650c;
        case 0x156510u: goto label_156510;
        case 0x156514u: goto label_156514;
        case 0x156518u: goto label_156518;
        case 0x15651cu: goto label_15651c;
        case 0x156520u: goto label_156520;
        case 0x156524u: goto label_156524;
        case 0x156528u: goto label_156528;
        case 0x15652cu: goto label_15652c;
        case 0x156530u: goto label_156530;
        case 0x156534u: goto label_156534;
        case 0x156538u: goto label_156538;
        case 0x15653cu: goto label_15653c;
        case 0x156540u: goto label_156540;
        case 0x156544u: goto label_156544;
        case 0x156548u: goto label_156548;
        case 0x15654cu: goto label_15654c;
        case 0x156550u: goto label_156550;
        case 0x156554u: goto label_156554;
        case 0x156558u: goto label_156558;
        case 0x15655cu: goto label_15655c;
        case 0x156560u: goto label_156560;
        case 0x156564u: goto label_156564;
        case 0x156568u: goto label_156568;
        case 0x15656cu: goto label_15656c;
        case 0x156570u: goto label_156570;
        case 0x156574u: goto label_156574;
        case 0x156578u: goto label_156578;
        case 0x15657cu: goto label_15657c;
        case 0x156580u: goto label_156580;
        case 0x156584u: goto label_156584;
        case 0x156588u: goto label_156588;
        case 0x15658cu: goto label_15658c;
        case 0x156590u: goto label_156590;
        case 0x156594u: goto label_156594;
        case 0x156598u: goto label_156598;
        case 0x15659cu: goto label_15659c;
        case 0x1565a0u: goto label_1565a0;
        case 0x1565a4u: goto label_1565a4;
        case 0x1565a8u: goto label_1565a8;
        case 0x1565acu: goto label_1565ac;
        case 0x1565b0u: goto label_1565b0;
        case 0x1565b4u: goto label_1565b4;
        case 0x1565b8u: goto label_1565b8;
        case 0x1565bcu: goto label_1565bc;
        case 0x1565c0u: goto label_1565c0;
        case 0x1565c4u: goto label_1565c4;
        case 0x1565c8u: goto label_1565c8;
        case 0x1565ccu: goto label_1565cc;
        case 0x1565d0u: goto label_1565d0;
        case 0x1565d4u: goto label_1565d4;
        case 0x1565d8u: goto label_1565d8;
        case 0x1565dcu: goto label_1565dc;
        case 0x1565e0u: goto label_1565e0;
        case 0x1565e4u: goto label_1565e4;
        case 0x1565e8u: goto label_1565e8;
        case 0x1565ecu: goto label_1565ec;
        case 0x1565f0u: goto label_1565f0;
        case 0x1565f4u: goto label_1565f4;
        case 0x1565f8u: goto label_1565f8;
        case 0x1565fcu: goto label_1565fc;
        case 0x156600u: goto label_156600;
        case 0x156604u: goto label_156604;
        case 0x156608u: goto label_156608;
        case 0x15660cu: goto label_15660c;
        case 0x156610u: goto label_156610;
        case 0x156614u: goto label_156614;
        case 0x156618u: goto label_156618;
        case 0x15661cu: goto label_15661c;
        case 0x156620u: goto label_156620;
        case 0x156624u: goto label_156624;
        case 0x156628u: goto label_156628;
        case 0x15662cu: goto label_15662c;
        case 0x156630u: goto label_156630;
        case 0x156634u: goto label_156634;
        case 0x156638u: goto label_156638;
        case 0x15663cu: goto label_15663c;
        default: break;
    }

    ctx->pc = 0x1562e0u;

label_1562e0:
    // 0x1562e0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1562e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_1562e4:
    // 0x1562e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1562e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1562e8:
    // 0x1562e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1562e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1562ec:
    // 0x1562ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1562ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1562f0:
    // 0x1562f0: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x1562f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1562f4:
    // 0x1562f4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1562f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1562f8:
    // 0x1562f8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1562f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1562fc:
    // 0x1562fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1562fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_156300:
    // 0x156300: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x156300u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_156304:
    // 0x156304: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x156304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_156308:
    // 0x156308: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x156308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15630c:
    // 0x15630c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15630cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_156310:
    // 0x156310: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x156310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_156314:
    // 0x156314: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x156314u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156318:
    // 0x156318: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x156318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15631c:
    // 0x15631c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x15631cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_156320:
    // 0x156320: 0x8cb40008  lw          $s4, 0x8($a1)
    ctx->pc = 0x156320u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_156324:
    // 0x156324: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x156324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
label_156328:
    // 0x156328: 0x186000b9  blez        $v1, . + 4 + (0xB9 << 2)
label_15632c:
    if (ctx->pc == 0x15632Cu) {
        ctx->pc = 0x15632Cu;
            // 0x15632c: 0xafa800ac  sw          $t0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 8));
        ctx->pc = 0x156330u;
        goto label_156330;
    }
    ctx->pc = 0x156328u;
    {
        const bool branch_taken_0x156328 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x15632Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156328u;
            // 0x15632c: 0xafa800ac  sw          $t0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156328) {
            ctx->pc = 0x156610u;
            goto label_156610;
        }
    }
    ctx->pc = 0x156330u;
label_156330:
    // 0x156330: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x156330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_156334:
    // 0x156334: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x156334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_156338:
    // 0x156338: 0xac725774  sw          $s2, 0x5774($v1)
    ctx->pc = 0x156338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22388), GPR_U32(ctx, 18));
label_15633c:
    // 0x15633c: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x15633cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_156340:
    // 0x156340: 0xac435770  sw          $v1, 0x5770($v0)
    ctx->pc = 0x156340u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22384), GPR_U32(ctx, 3));
label_156344:
    // 0x156344: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x156344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_156348:
    // 0x156348: 0xc05001c  jal         func_140070
label_15634c:
    if (ctx->pc == 0x15634Cu) {
        ctx->pc = 0x15634Cu;
            // 0x15634c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x156350u;
        goto label_156350;
    }
    ctx->pc = 0x156348u;
    SET_GPR_U32(ctx, 31, 0x156350u);
    ctx->pc = 0x15634Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156348u;
            // 0x15634c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140070u;
    if (runtime->hasFunction(0x140070u)) {
        auto targetFn = runtime->lookupFunction(0x140070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156350u; }
        if (ctx->pc != 0x156350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140070_0x140070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156350u; }
        if (ctx->pc != 0x156350u) { return; }
    }
    ctx->pc = 0x156350u;
label_156350:
    // 0x156350: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x156350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_156354:
    // 0x156354: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x156354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_156358:
    // 0x156358: 0x8c445760  lw          $a0, 0x5760($v0)
    ctx->pc = 0x156358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22368)));
label_15635c:
    // 0x15635c: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x15635cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
label_156360:
    // 0x156360: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x156360u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
label_156364:
    // 0x156364: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x156364u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
label_156368:
    // 0x156368: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x156368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_15636c:
    // 0x15636c: 0xac645764  sw          $a0, 0x5764($v1)
    ctx->pc = 0x15636cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22372), GPR_U32(ctx, 4));
label_156370:
    // 0x156370: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x156370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_156374:
    // 0x156374: 0x8e8a0018  lw          $t2, 0x18($s4)
    ctx->pc = 0x156374u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_156378:
    // 0x156378: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x156378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_15637c:
    // 0x15637c: 0x8c495768  lw          $t1, 0x5768($v0)
    ctx->pc = 0x15637cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22376)));
label_156380:
    // 0x156380: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x156380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_156384:
    // 0x156384: 0x24845760  addiu       $a0, $a0, 0x5760
    ctx->pc = 0x156384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22368));
label_156388:
    // 0x156388: 0xad0a5760  sw          $t2, 0x5760($t0)
    ctx->pc = 0x156388u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 22368), GPR_U32(ctx, 10));
label_15638c:
    // 0x15638c: 0x8ec80014  lw          $t0, 0x14($s6)
    ctx->pc = 0x15638cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_156390:
    // 0x156390: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x156390u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_156394:
    // 0x156394: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x156394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_156398:
    // 0x156398: 0xacc9576c  sw          $t1, 0x576C($a2)
    ctx->pc = 0x156398u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 22380), GPR_U32(ctx, 9));
label_15639c:
    // 0x15639c: 0x10a3021  addu        $a2, $t0, $t2
    ctx->pc = 0x15639cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
label_1563a0:
    // 0x1563a0: 0xace6577c  sw          $a2, 0x577C($a3)
    ctx->pc = 0x1563a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 22396), GPR_U32(ctx, 6));
label_1563a4:
    // 0x1563a4: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x1563a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_1563a8:
    // 0x1563a8: 0xaca65768  sw          $a2, 0x5768($a1)
    ctx->pc = 0x1563a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 22376), GPR_U32(ctx, 6));
label_1563ac:
    // 0x1563ac: 0x8ec5001c  lw          $a1, 0x1C($s6)
    ctx->pc = 0x1563acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
label_1563b0:
    // 0x1563b0: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1563b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1563b4:
    // 0x1563b4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1563b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1563b8:
    // 0x1563b8: 0xac405798  sw          $zero, 0x5798($v0)
    ctx->pc = 0x1563b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22424), GPR_U32(ctx, 0));
label_1563bc:
    // 0x1563bc: 0xc05055c  jal         func_141570
label_1563c0:
    if (ctx->pc == 0x1563C0u) {
        ctx->pc = 0x1563C0u;
            // 0x1563c0: 0xac655780  sw          $a1, 0x5780($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22400), GPR_U32(ctx, 5));
        ctx->pc = 0x1563C4u;
        goto label_1563c4;
    }
    ctx->pc = 0x1563BCu;
    SET_GPR_U32(ctx, 31, 0x1563C4u);
    ctx->pc = 0x1563C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1563BCu;
            // 0x1563c0: 0xac655780  sw          $a1, 0x5780($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22400), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141570u;
    if (runtime->hasFunction(0x141570u)) {
        auto targetFn = runtime->lookupFunction(0x141570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1563C4u; }
        if (ctx->pc != 0x1563C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141570_0x141570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1563C4u; }
        if (ctx->pc != 0x1563C4u) { return; }
    }
    ctx->pc = 0x1563C4u;
label_1563c4:
    // 0x1563c4: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
label_1563c8:
    if (ctx->pc == 0x1563C8u) {
        ctx->pc = 0x1563CCu;
        goto label_1563cc;
    }
    ctx->pc = 0x1563C4u;
    {
        const bool branch_taken_0x1563c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1563c4) {
            ctx->pc = 0x1565F8u;
            goto label_1565f8;
        }
    }
    ctx->pc = 0x1563CCu;
label_1563cc:
    // 0x1563cc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1563ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_1563d0:
    // 0x1563d0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1563d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_1563d4:
    // 0x1563d4: 0x8c655824  lw          $a1, 0x5824($v1)
    ctx->pc = 0x1563d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22564)));
label_1563d8:
    // 0x1563d8: 0x8c845828  lw          $a0, 0x5828($a0)
    ctx->pc = 0x1563d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22568)));
label_1563dc:
    // 0x1563dc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1563dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_1563e0:
    // 0x1563e0: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1563e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_1563e4:
    // 0x1563e4: 0xac645824  sw          $a0, 0x5824($v1)
    ctx->pc = 0x1563e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22564), GPR_U32(ctx, 4));
label_1563e8:
    // 0x1563e8: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1563e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1563ec:
    // 0x1563ec: 0x18600082  blez        $v1, . + 4 + (0x82 << 2)
label_1563f0:
    if (ctx->pc == 0x1563F0u) {
        ctx->pc = 0x1563F0u;
            // 0x1563f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1563F4u;
        goto label_1563f4;
    }
    ctx->pc = 0x1563ECu;
    {
        const bool branch_taken_0x1563ec = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1563F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1563ECu;
            // 0x1563f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1563ec) {
            ctx->pc = 0x1565F8u;
            goto label_1565f8;
        }
    }
    ctx->pc = 0x1563F4u;
label_1563f4:
    // 0x1563f4: 0x8fb500b0  lw          $s5, 0xB0($sp)
    ctx->pc = 0x1563f4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1563f8:
    // 0x1563f8: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x1563f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1563fc:
    // 0x1563fc: 0x0  nop
    ctx->pc = 0x1563fcu;
    // NOP
label_156400:
    // 0x156400: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x156400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_156404:
    // 0x156404: 0x10600076  beqz        $v1, . + 4 + (0x76 << 2)
label_156408:
    if (ctx->pc == 0x156408u) {
        ctx->pc = 0x15640Cu;
        goto label_15640c;
    }
    ctx->pc = 0x156404u;
    {
        const bool branch_taken_0x156404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x156404) {
            ctx->pc = 0x1565E0u;
            goto label_1565e0;
        }
    }
    ctx->pc = 0x15640Cu;
label_15640c:
    // 0x15640c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x15640cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_156410:
    // 0x156410: 0x17c00003  bnez        $fp, . + 4 + (0x3 << 2)
label_156414:
    if (ctx->pc == 0x156414u) {
        ctx->pc = 0x156414u;
            // 0x156414: 0xac835788  sw          $v1, 0x5788($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 22408), GPR_U32(ctx, 3));
        ctx->pc = 0x156418u;
        goto label_156418;
    }
    ctx->pc = 0x156410u;
    {
        const bool branch_taken_0x156410 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x156414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156410u;
            // 0x156414: 0xac835788  sw          $v1, 0x5788($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 22408), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156410) {
            ctx->pc = 0x156420u;
            goto label_156420;
        }
    }
    ctx->pc = 0x156418u;
label_156418:
    // 0x156418: 0x10000002  b           . + 4 + (0x2 << 2)
label_15641c:
    if (ctx->pc == 0x15641Cu) {
        ctx->pc = 0x15641Cu;
            // 0x15641c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x156420u;
        goto label_156420;
    }
    ctx->pc = 0x156418u;
    {
        const bool branch_taken_0x156418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15641Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156418u;
            // 0x15641c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156418) {
            ctx->pc = 0x156424u;
            goto label_156424;
        }
    }
    ctx->pc = 0x156420u;
label_156420:
    // 0x156420: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x156420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_156424:
    // 0x156424: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x156424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_156428:
    // 0x156428: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_15642c:
    if (ctx->pc == 0x15642Cu) {
        ctx->pc = 0x15642Cu;
            // 0x15642c: 0xac85578c  sw          $a1, 0x578C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 22412), GPR_U32(ctx, 5));
        ctx->pc = 0x156430u;
        goto label_156430;
    }
    ctx->pc = 0x156428u;
    {
        const bool branch_taken_0x156428 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15642Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156428u;
            // 0x15642c: 0xac85578c  sw          $a1, 0x578C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 22412), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156428) {
            ctx->pc = 0x156448u;
            goto label_156448;
        }
    }
    ctx->pc = 0x156430u;
label_156430:
    // 0x156430: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x156430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_156434:
    // 0x156434: 0x8c845770  lw          $a0, 0x5770($a0)
    ctx->pc = 0x156434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22384)));
label_156438:
    // 0x156438: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x156438u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_15643c:
    // 0x15643c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15643cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_156440:
    // 0x156440: 0x10000002  b           . + 4 + (0x2 << 2)
label_156444:
    if (ctx->pc == 0x156444u) {
        ctx->pc = 0x156444u;
            // 0x156444: 0x8c850000  lw          $a1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x156448u;
        goto label_156448;
    }
    ctx->pc = 0x156440u;
    {
        const bool branch_taken_0x156440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156440u;
            // 0x156444: 0x8c850000  lw          $a1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156440) {
            ctx->pc = 0x15644Cu;
            goto label_15644c;
        }
    }
    ctx->pc = 0x156448u;
label_156448:
    // 0x156448: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15644c:
    // 0x15644c: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x15644cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_156450:
    // 0x156450: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_156454:
    if (ctx->pc == 0x156454u) {
        ctx->pc = 0x156458u;
        goto label_156458;
    }
    ctx->pc = 0x156450u;
    {
        const bool branch_taken_0x156450 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x156450) {
            ctx->pc = 0x156460u;
            goto label_156460;
        }
    }
    ctx->pc = 0x156458u;
label_156458:
    // 0x156458: 0x10000013  b           . + 4 + (0x13 << 2)
label_15645c:
    if (ctx->pc == 0x15645Cu) {
        ctx->pc = 0x15645Cu;
            // 0x15645c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x156460u;
        goto label_156460;
    }
    ctx->pc = 0x156458u;
    {
        const bool branch_taken_0x156458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15645Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156458u;
            // 0x15645c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156458) {
            ctx->pc = 0x1564A8u;
            goto label_1564a8;
        }
    }
    ctx->pc = 0x156460u;
label_156460:
    // 0x156460: 0x30a60022  andi        $a2, $a1, 0x22
    ctx->pc = 0x156460u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)34);
label_156464:
    // 0x156464: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x156464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_156468:
    // 0x156468: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x156468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_15646c:
    // 0x15646c: 0x8ca557b0  lw          $a1, 0x57B0($a1)
    ctx->pc = 0x15646cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 22448)));
label_156470:
    // 0x156470: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_156474:
    if (ctx->pc == 0x156474u) {
        ctx->pc = 0x156474u;
            // 0x156474: 0xac8557f0  sw          $a1, 0x57F0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 22512), GPR_U32(ctx, 5));
        ctx->pc = 0x156478u;
        goto label_156478;
    }
    ctx->pc = 0x156470u;
    {
        const bool branch_taken_0x156470 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x156474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156470u;
            // 0x156474: 0xac8557f0  sw          $a1, 0x57F0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 22512), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156470) {
            ctx->pc = 0x156488u;
            goto label_156488;
        }
    }
    ctx->pc = 0x156478u;
label_156478:
    // 0x156478: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x156478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15647c:
    // 0x15647c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x15647cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_156480:
    // 0x156480: 0xac8557f0  sw          $a1, 0x57F0($a0)
    ctx->pc = 0x156480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22512), GPR_U32(ctx, 5));
label_156484:
    // 0x156484: 0x0  nop
    ctx->pc = 0x156484u;
    // NOP
label_156488:
    // 0x156488: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x156488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_15648c:
    // 0x15648c: 0x8c865824  lw          $a2, 0x5824($a0)
    ctx->pc = 0x15648cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22564)));
label_156490:
    // 0x156490: 0x2405dfff  addiu       $a1, $zero, -0x2001
    ctx->pc = 0x156490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
label_156494:
    // 0x156494: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x156494u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156498:
    // 0x156498: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x156498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_15649c:
    // 0x15649c: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x15649cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_1564a0:
    // 0x1564a0: 0xac855824  sw          $a1, 0x5824($a0)
    ctx->pc = 0x1564a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22564), GPR_U32(ctx, 5));
label_1564a4:
    // 0x1564a4: 0x0  nop
    ctx->pc = 0x1564a4u;
    // NOP
label_1564a8:
    // 0x1564a8: 0x14e0004d  bnez        $a3, . + 4 + (0x4D << 2)
label_1564ac:
    if (ctx->pc == 0x1564ACu) {
        ctx->pc = 0x1564B0u;
        goto label_1564b0;
    }
    ctx->pc = 0x1564A8u;
    {
        const bool branch_taken_0x1564a8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1564a8) {
            ctx->pc = 0x1565E0u;
            goto label_1565e0;
        }
    }
    ctx->pc = 0x1564B0u;
label_1564b0:
    // 0x1564b0: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x1564b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_1564b4:
    // 0x1564b4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1564b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1564b8:
    // 0x1564b8: 0x8c425804  lw          $v0, 0x5804($v0)
    ctx->pc = 0x1564b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22532)));
label_1564bc:
    // 0x1564bc: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x1564bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_1564c0:
    // 0x1564c0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1564c4:
    if (ctx->pc == 0x1564C4u) {
        ctx->pc = 0x1564C4u;
            // 0x1564c4: 0x649821  addu        $s3, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->pc = 0x1564C8u;
        goto label_1564c8;
    }
    ctx->pc = 0x1564C0u;
    {
        const bool branch_taken_0x1564c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1564C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1564C0u;
            // 0x1564c4: 0x649821  addu        $s3, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1564c0) {
            ctx->pc = 0x1564E8u;
            goto label_1564e8;
        }
    }
    ctx->pc = 0x1564C8u;
label_1564c8:
    // 0x1564c8: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x1564c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
label_1564cc:
    // 0x1564cc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1564ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1564d0:
    // 0x1564d0: 0x24a51fa0  addiu       $a1, $a1, 0x1FA0
    ctx->pc = 0x1564d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8096));
label_1564d4:
    // 0x1564d4: 0xc04cd60  jal         func_133580
label_1564d8:
    if (ctx->pc == 0x1564D8u) {
        ctx->pc = 0x1564D8u;
            // 0x1564d8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1564DCu;
        goto label_1564dc;
    }
    ctx->pc = 0x1564D4u;
    SET_GPR_U32(ctx, 31, 0x1564DCu);
    ctx->pc = 0x1564D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1564D4u;
            // 0x1564d8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1564DCu; }
        if (ctx->pc != 0x1564DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1564DCu; }
        if (ctx->pc != 0x1564DCu) { return; }
    }
    ctx->pc = 0x1564DCu;
label_1564dc:
    // 0x1564dc: 0xc04fe9c  jal         func_13FA70
label_1564e0:
    if (ctx->pc == 0x1564E0u) {
        ctx->pc = 0x1564E0u;
            // 0x1564e0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1564E4u;
        goto label_1564e4;
    }
    ctx->pc = 0x1564DCu;
    SET_GPR_U32(ctx, 31, 0x1564E4u);
    ctx->pc = 0x1564E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1564DCu;
            // 0x1564e0: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA70u;
    if (runtime->hasFunction(0x13FA70u)) {
        auto targetFn = runtime->lookupFunction(0x13FA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1564E4u; }
        if (ctx->pc != 0x1564E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013FA70_0x13fa70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1564E4u; }
        if (ctx->pc != 0x1564E4u) { return; }
    }
    ctx->pc = 0x1564E4u;
label_1564e4:
    // 0x1564e4: 0x0  nop
    ctx->pc = 0x1564e4u;
    // NOP
label_1564e8:
    // 0x1564e8: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x1564e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_1564ec:
    // 0x1564ec: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1564ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1564f0:
    // 0x1564f0: 0x24a55520  addiu       $a1, $a1, 0x5520
    ctx->pc = 0x1564f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21792));
label_1564f4:
    // 0x1564f4: 0xc04cd60  jal         func_133580
label_1564f8:
    if (ctx->pc == 0x1564F8u) {
        ctx->pc = 0x1564F8u;
            // 0x1564f8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1564FCu;
        goto label_1564fc;
    }
    ctx->pc = 0x1564F4u;
    SET_GPR_U32(ctx, 31, 0x1564FCu);
    ctx->pc = 0x1564F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1564F4u;
            // 0x1564f8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1564FCu; }
        if (ctx->pc != 0x1564FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1564FCu; }
        if (ctx->pc != 0x1564FCu) { return; }
    }
    ctx->pc = 0x1564FCu;
label_1564fc:
    // 0x1564fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1564fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_156500:
    // 0x156500: 0xc0573e0  jal         func_15CF80
label_156504:
    if (ctx->pc == 0x156504u) {
        ctx->pc = 0x156504u;
            // 0x156504: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x156508u;
        goto label_156508;
    }
    ctx->pc = 0x156500u;
    SET_GPR_U32(ctx, 31, 0x156508u);
    ctx->pc = 0x156504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156500u;
            // 0x156504: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156508u; }
        if (ctx->pc != 0x156508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156508u; }
        if (ctx->pc != 0x156508u) { return; }
    }
    ctx->pc = 0x156508u;
label_156508:
    // 0x156508: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x156508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_15650c:
    // 0x15650c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15650cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_156510:
    // 0x156510: 0x8c425828  lw          $v0, 0x5828($v0)
    ctx->pc = 0x156510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22568)));
label_156514:
    // 0x156514: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x156514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_156518:
    // 0x156518: 0x1065001d  beq         $v1, $a1, . + 4 + (0x1D << 2)
label_15651c:
    if (ctx->pc == 0x15651Cu) {
        ctx->pc = 0x156520u;
        goto label_156520;
    }
    ctx->pc = 0x156518u;
    {
        const bool branch_taken_0x156518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x156518) {
            ctx->pc = 0x156590u;
            goto label_156590;
        }
    }
    ctx->pc = 0x156520u;
label_156520:
    // 0x156520: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x156520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_156524:
    // 0x156524: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_156528:
    if (ctx->pc == 0x156528u) {
        ctx->pc = 0x15652Cu;
        goto label_15652c;
    }
    ctx->pc = 0x156524u;
    {
        const bool branch_taken_0x156524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x156524) {
            ctx->pc = 0x156578u;
            goto label_156578;
        }
    }
    ctx->pc = 0x15652Cu;
label_15652c:
    // 0x15652c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x15652cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_156530:
    // 0x156530: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_156534:
    if (ctx->pc == 0x156534u) {
        ctx->pc = 0x156538u;
        goto label_156538;
    }
    ctx->pc = 0x156530u;
    {
        const bool branch_taken_0x156530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x156530) {
            ctx->pc = 0x156568u;
            goto label_156568;
        }
    }
    ctx->pc = 0x156538u;
label_156538:
    // 0x156538: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x156538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_15653c:
    // 0x15653c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_156540:
    if (ctx->pc == 0x156540u) {
        ctx->pc = 0x156544u;
        goto label_156544;
    }
    ctx->pc = 0x15653Cu;
    {
        const bool branch_taken_0x15653c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15653c) {
            ctx->pc = 0x156550u;
            goto label_156550;
        }
    }
    ctx->pc = 0x156544u;
label_156544:
    // 0x156544: 0x10000016  b           . + 4 + (0x16 << 2)
label_156548:
    if (ctx->pc == 0x156548u) {
        ctx->pc = 0x15654Cu;
        goto label_15654c;
    }
    ctx->pc = 0x156544u;
    {
        const bool branch_taken_0x156544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156544) {
            ctx->pc = 0x1565A0u;
            goto label_1565a0;
        }
    }
    ctx->pc = 0x15654Cu;
label_15654c:
    // 0x15654c: 0x0  nop
    ctx->pc = 0x15654cu;
    // NOP
label_156550:
    // 0x156550: 0x8f828018  lw          $v0, -0x7FE8($gp)
    ctx->pc = 0x156550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
label_156554:
    // 0x156554: 0x40f809  jalr        $v0
label_156558:
    if (ctx->pc == 0x156558u) {
        ctx->pc = 0x156558u;
            // 0x156558: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15655Cu;
        goto label_15655c;
    }
    ctx->pc = 0x156554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15655Cu);
        ctx->pc = 0x156558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156554u;
            // 0x156558: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15655Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15655Cu; }
            if (ctx->pc != 0x15655Cu) { return; }
        }
        }
    }
    ctx->pc = 0x15655Cu;
label_15655c:
    // 0x15655c: 0x10000010  b           . + 4 + (0x10 << 2)
label_156560:
    if (ctx->pc == 0x156560u) {
        ctx->pc = 0x156564u;
        goto label_156564;
    }
    ctx->pc = 0x15655Cu;
    {
        const bool branch_taken_0x15655c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15655c) {
            ctx->pc = 0x1565A0u;
            goto label_1565a0;
        }
    }
    ctx->pc = 0x156564u;
label_156564:
    // 0x156564: 0x0  nop
    ctx->pc = 0x156564u;
    // NOP
label_156568:
    // 0x156568: 0xc04e550  jal         func_139540
label_15656c:
    if (ctx->pc == 0x15656Cu) {
        ctx->pc = 0x15656Cu;
            // 0x15656c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x156570u;
        goto label_156570;
    }
    ctx->pc = 0x156568u;
    SET_GPR_U32(ctx, 31, 0x156570u);
    ctx->pc = 0x15656Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156568u;
            // 0x15656c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139540u;
    if (runtime->hasFunction(0x139540u)) {
        auto targetFn = runtime->lookupFunction(0x139540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156570u; }
        if (ctx->pc != 0x156570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139540_0x139540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156570u; }
        if (ctx->pc != 0x156570u) { return; }
    }
    ctx->pc = 0x156570u;
label_156570:
    // 0x156570: 0x1000000b  b           . + 4 + (0xB << 2)
label_156574:
    if (ctx->pc == 0x156574u) {
        ctx->pc = 0x156578u;
        goto label_156578;
    }
    ctx->pc = 0x156570u;
    {
        const bool branch_taken_0x156570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156570) {
            ctx->pc = 0x1565A0u;
            goto label_1565a0;
        }
    }
    ctx->pc = 0x156578u;
label_156578:
    // 0x156578: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x156578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15657c:
    // 0x15657c: 0x8f828018  lw          $v0, -0x7FE8($gp)
    ctx->pc = 0x15657cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
label_156580:
    // 0x156580: 0x40f809  jalr        $v0
label_156584:
    if (ctx->pc == 0x156584u) {
        ctx->pc = 0x156584u;
            // 0x156584: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x156588u;
        goto label_156588;
    }
    ctx->pc = 0x156580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156588u);
        ctx->pc = 0x156584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156580u;
            // 0x156584: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x156588u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x156588u; }
            if (ctx->pc != 0x156588u) { return; }
        }
        }
    }
    ctx->pc = 0x156588u;
label_156588:
    // 0x156588: 0x10000005  b           . + 4 + (0x5 << 2)
label_15658c:
    if (ctx->pc == 0x15658Cu) {
        ctx->pc = 0x156590u;
        goto label_156590;
    }
    ctx->pc = 0x156588u;
    {
        const bool branch_taken_0x156588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156588) {
            ctx->pc = 0x1565A0u;
            goto label_1565a0;
        }
    }
    ctx->pc = 0x156590u;
label_156590:
    // 0x156590: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x156590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_156594:
    // 0x156594: 0xc04e550  jal         func_139540
label_156598:
    if (ctx->pc == 0x156598u) {
        ctx->pc = 0x156598u;
            // 0x156598: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x15659Cu;
        goto label_15659c;
    }
    ctx->pc = 0x156594u;
    SET_GPR_U32(ctx, 31, 0x15659Cu);
    ctx->pc = 0x156598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156594u;
            // 0x156598: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139540u;
    if (runtime->hasFunction(0x139540u)) {
        auto targetFn = runtime->lookupFunction(0x139540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15659Cu; }
        if (ctx->pc != 0x15659Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139540_0x139540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15659Cu; }
        if (ctx->pc != 0x15659Cu) { return; }
    }
    ctx->pc = 0x15659Cu;
label_15659c:
    // 0x15659c: 0x0  nop
    ctx->pc = 0x15659cu;
    // NOP
label_1565a0:
    // 0x1565a0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1565a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1565a4:
    // 0x1565a4: 0x8c445780  lw          $a0, 0x5780($v0)
    ctx->pc = 0x1565a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22400)));
label_1565a8:
    // 0x1565a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1565a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1565ac:
    // 0x1565ac: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1565acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_1565b0:
    // 0x1565b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1565b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1565b4:
    // 0x1565b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1565b8:
    if (ctx->pc == 0x1565B8u) {
        ctx->pc = 0x1565BCu;
        goto label_1565bc;
    }
    ctx->pc = 0x1565B4u;
    {
        const bool branch_taken_0x1565b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1565b4) {
            ctx->pc = 0x1565D8u;
            goto label_1565d8;
        }
    }
    ctx->pc = 0x1565BCu;
label_1565bc:
    // 0x1565bc: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x1565bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_1565c0:
    // 0x1565c0: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x1565c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_1565c4:
    // 0x1565c4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1565c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1565c8:
    // 0x1565c8: 0xc054484  jal         func_151210
label_1565cc:
    if (ctx->pc == 0x1565CCu) {
        ctx->pc = 0x1565CCu;
            // 0x1565cc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1565D0u;
        goto label_1565d0;
    }
    ctx->pc = 0x1565C8u;
    SET_GPR_U32(ctx, 31, 0x1565D0u);
    ctx->pc = 0x1565CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1565C8u;
            // 0x1565cc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151210u;
    if (runtime->hasFunction(0x151210u)) {
        auto targetFn = runtime->lookupFunction(0x151210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1565D0u; }
        if (ctx->pc != 0x1565D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151210_0x151210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1565D0u; }
        if (ctx->pc != 0x1565D0u) { return; }
    }
    ctx->pc = 0x1565D0u;
label_1565d0:
    // 0x1565d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1565d4:
    if (ctx->pc == 0x1565D4u) {
        ctx->pc = 0x1565D8u;
        goto label_1565d8;
    }
    ctx->pc = 0x1565D0u;
    {
        const bool branch_taken_0x1565d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1565d0) {
            ctx->pc = 0x1565E0u;
            goto label_1565e0;
        }
    }
    ctx->pc = 0x1565D8u;
label_1565d8:
    // 0x1565d8: 0xc04fdf4  jal         func_13F7D0
label_1565dc:
    if (ctx->pc == 0x1565DCu) {
        ctx->pc = 0x1565E0u;
        goto label_1565e0;
    }
    ctx->pc = 0x1565D8u;
    SET_GPR_U32(ctx, 31, 0x1565E0u);
    ctx->pc = 0x13F7D0u;
    if (runtime->hasFunction(0x13F7D0u)) {
        auto targetFn = runtime->lookupFunction(0x13F7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1565E0u; }
        if (ctx->pc != 0x1565E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F7D0_0x13f7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1565E0u; }
        if (ctx->pc != 0x1565E0u) { return; }
    }
    ctx->pc = 0x1565E0u;
label_1565e0:
    // 0x1565e0: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1565e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1565e4:
    // 0x1565e4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1565e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1565e8:
    // 0x1565e8: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x1565e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_1565ec:
    // 0x1565ec: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1565ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1565f0:
    // 0x1565f0: 0x1460ff83  bnez        $v1, . + 4 + (-0x7D << 2)
label_1565f4:
    if (ctx->pc == 0x1565F4u) {
        ctx->pc = 0x1565F4u;
            // 0x1565f4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x1565F8u;
        goto label_1565f8;
    }
    ctx->pc = 0x1565F0u;
    {
        const bool branch_taken_0x1565f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1565F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1565F0u;
            // 0x1565f4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1565f0) {
            ctx->pc = 0x156400u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156400;
        }
    }
    ctx->pc = 0x1565F8u;
label_1565f8:
    // 0x1565f8: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x1565f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_1565fc:
    // 0x1565fc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1565fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_156600:
    // 0x156600: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x156600u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_156604:
    // 0x156604: 0x1460ff4a  bnez        $v1, . + 4 + (-0xB6 << 2)
label_156608:
    if (ctx->pc == 0x156608u) {
        ctx->pc = 0x156608u;
            // 0x156608: 0x26940024  addiu       $s4, $s4, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
        ctx->pc = 0x15660Cu;
        goto label_15660c;
    }
    ctx->pc = 0x156604u;
    {
        const bool branch_taken_0x156604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156604u;
            // 0x156608: 0x26940024  addiu       $s4, $s4, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156604) {
            ctx->pc = 0x156330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_156330;
        }
    }
    ctx->pc = 0x15660Cu;
label_15660c:
    // 0x15660c: 0x0  nop
    ctx->pc = 0x15660cu;
    // NOP
label_156610:
    // 0x156610: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x156610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_156614:
    // 0x156614: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x156614u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_156618:
    // 0x156618: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x156618u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15661c:
    // 0x15661c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15661cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_156620:
    // 0x156620: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x156620u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_156624:
    // 0x156624: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x156624u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_156628:
    // 0x156628: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x156628u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15662c:
    // 0x15662c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15662cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_156630:
    // 0x156630: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x156630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_156634:
    // 0x156634: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x156634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_156638:
    // 0x156638: 0x3e00008  jr          $ra
label_15663c:
    if (ctx->pc == 0x15663Cu) {
        ctx->pc = 0x15663Cu;
            // 0x15663c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x156640u;
        goto label_fallthrough_0x156638;
    }
    ctx->pc = 0x156638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15663Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156638u;
            // 0x15663c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x156638:
    ctx->pc = 0x156640u;
}
