#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004BB330
// Address: 0x4bb330 - 0x4bb790
void sub_004BB330_0x4bb330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BB330_0x4bb330");
#endif

    switch (ctx->pc) {
        case 0x4bb330u: goto label_4bb330;
        case 0x4bb334u: goto label_4bb334;
        case 0x4bb338u: goto label_4bb338;
        case 0x4bb33cu: goto label_4bb33c;
        case 0x4bb340u: goto label_4bb340;
        case 0x4bb344u: goto label_4bb344;
        case 0x4bb348u: goto label_4bb348;
        case 0x4bb34cu: goto label_4bb34c;
        case 0x4bb350u: goto label_4bb350;
        case 0x4bb354u: goto label_4bb354;
        case 0x4bb358u: goto label_4bb358;
        case 0x4bb35cu: goto label_4bb35c;
        case 0x4bb360u: goto label_4bb360;
        case 0x4bb364u: goto label_4bb364;
        case 0x4bb368u: goto label_4bb368;
        case 0x4bb36cu: goto label_4bb36c;
        case 0x4bb370u: goto label_4bb370;
        case 0x4bb374u: goto label_4bb374;
        case 0x4bb378u: goto label_4bb378;
        case 0x4bb37cu: goto label_4bb37c;
        case 0x4bb380u: goto label_4bb380;
        case 0x4bb384u: goto label_4bb384;
        case 0x4bb388u: goto label_4bb388;
        case 0x4bb38cu: goto label_4bb38c;
        case 0x4bb390u: goto label_4bb390;
        case 0x4bb394u: goto label_4bb394;
        case 0x4bb398u: goto label_4bb398;
        case 0x4bb39cu: goto label_4bb39c;
        case 0x4bb3a0u: goto label_4bb3a0;
        case 0x4bb3a4u: goto label_4bb3a4;
        case 0x4bb3a8u: goto label_4bb3a8;
        case 0x4bb3acu: goto label_4bb3ac;
        case 0x4bb3b0u: goto label_4bb3b0;
        case 0x4bb3b4u: goto label_4bb3b4;
        case 0x4bb3b8u: goto label_4bb3b8;
        case 0x4bb3bcu: goto label_4bb3bc;
        case 0x4bb3c0u: goto label_4bb3c0;
        case 0x4bb3c4u: goto label_4bb3c4;
        case 0x4bb3c8u: goto label_4bb3c8;
        case 0x4bb3ccu: goto label_4bb3cc;
        case 0x4bb3d0u: goto label_4bb3d0;
        case 0x4bb3d4u: goto label_4bb3d4;
        case 0x4bb3d8u: goto label_4bb3d8;
        case 0x4bb3dcu: goto label_4bb3dc;
        case 0x4bb3e0u: goto label_4bb3e0;
        case 0x4bb3e4u: goto label_4bb3e4;
        case 0x4bb3e8u: goto label_4bb3e8;
        case 0x4bb3ecu: goto label_4bb3ec;
        case 0x4bb3f0u: goto label_4bb3f0;
        case 0x4bb3f4u: goto label_4bb3f4;
        case 0x4bb3f8u: goto label_4bb3f8;
        case 0x4bb3fcu: goto label_4bb3fc;
        case 0x4bb400u: goto label_4bb400;
        case 0x4bb404u: goto label_4bb404;
        case 0x4bb408u: goto label_4bb408;
        case 0x4bb40cu: goto label_4bb40c;
        case 0x4bb410u: goto label_4bb410;
        case 0x4bb414u: goto label_4bb414;
        case 0x4bb418u: goto label_4bb418;
        case 0x4bb41cu: goto label_4bb41c;
        case 0x4bb420u: goto label_4bb420;
        case 0x4bb424u: goto label_4bb424;
        case 0x4bb428u: goto label_4bb428;
        case 0x4bb42cu: goto label_4bb42c;
        case 0x4bb430u: goto label_4bb430;
        case 0x4bb434u: goto label_4bb434;
        case 0x4bb438u: goto label_4bb438;
        case 0x4bb43cu: goto label_4bb43c;
        case 0x4bb440u: goto label_4bb440;
        case 0x4bb444u: goto label_4bb444;
        case 0x4bb448u: goto label_4bb448;
        case 0x4bb44cu: goto label_4bb44c;
        case 0x4bb450u: goto label_4bb450;
        case 0x4bb454u: goto label_4bb454;
        case 0x4bb458u: goto label_4bb458;
        case 0x4bb45cu: goto label_4bb45c;
        case 0x4bb460u: goto label_4bb460;
        case 0x4bb464u: goto label_4bb464;
        case 0x4bb468u: goto label_4bb468;
        case 0x4bb46cu: goto label_4bb46c;
        case 0x4bb470u: goto label_4bb470;
        case 0x4bb474u: goto label_4bb474;
        case 0x4bb478u: goto label_4bb478;
        case 0x4bb47cu: goto label_4bb47c;
        case 0x4bb480u: goto label_4bb480;
        case 0x4bb484u: goto label_4bb484;
        case 0x4bb488u: goto label_4bb488;
        case 0x4bb48cu: goto label_4bb48c;
        case 0x4bb490u: goto label_4bb490;
        case 0x4bb494u: goto label_4bb494;
        case 0x4bb498u: goto label_4bb498;
        case 0x4bb49cu: goto label_4bb49c;
        case 0x4bb4a0u: goto label_4bb4a0;
        case 0x4bb4a4u: goto label_4bb4a4;
        case 0x4bb4a8u: goto label_4bb4a8;
        case 0x4bb4acu: goto label_4bb4ac;
        case 0x4bb4b0u: goto label_4bb4b0;
        case 0x4bb4b4u: goto label_4bb4b4;
        case 0x4bb4b8u: goto label_4bb4b8;
        case 0x4bb4bcu: goto label_4bb4bc;
        case 0x4bb4c0u: goto label_4bb4c0;
        case 0x4bb4c4u: goto label_4bb4c4;
        case 0x4bb4c8u: goto label_4bb4c8;
        case 0x4bb4ccu: goto label_4bb4cc;
        case 0x4bb4d0u: goto label_4bb4d0;
        case 0x4bb4d4u: goto label_4bb4d4;
        case 0x4bb4d8u: goto label_4bb4d8;
        case 0x4bb4dcu: goto label_4bb4dc;
        case 0x4bb4e0u: goto label_4bb4e0;
        case 0x4bb4e4u: goto label_4bb4e4;
        case 0x4bb4e8u: goto label_4bb4e8;
        case 0x4bb4ecu: goto label_4bb4ec;
        case 0x4bb4f0u: goto label_4bb4f0;
        case 0x4bb4f4u: goto label_4bb4f4;
        case 0x4bb4f8u: goto label_4bb4f8;
        case 0x4bb4fcu: goto label_4bb4fc;
        case 0x4bb500u: goto label_4bb500;
        case 0x4bb504u: goto label_4bb504;
        case 0x4bb508u: goto label_4bb508;
        case 0x4bb50cu: goto label_4bb50c;
        case 0x4bb510u: goto label_4bb510;
        case 0x4bb514u: goto label_4bb514;
        case 0x4bb518u: goto label_4bb518;
        case 0x4bb51cu: goto label_4bb51c;
        case 0x4bb520u: goto label_4bb520;
        case 0x4bb524u: goto label_4bb524;
        case 0x4bb528u: goto label_4bb528;
        case 0x4bb52cu: goto label_4bb52c;
        case 0x4bb530u: goto label_4bb530;
        case 0x4bb534u: goto label_4bb534;
        case 0x4bb538u: goto label_4bb538;
        case 0x4bb53cu: goto label_4bb53c;
        case 0x4bb540u: goto label_4bb540;
        case 0x4bb544u: goto label_4bb544;
        case 0x4bb548u: goto label_4bb548;
        case 0x4bb54cu: goto label_4bb54c;
        case 0x4bb550u: goto label_4bb550;
        case 0x4bb554u: goto label_4bb554;
        case 0x4bb558u: goto label_4bb558;
        case 0x4bb55cu: goto label_4bb55c;
        case 0x4bb560u: goto label_4bb560;
        case 0x4bb564u: goto label_4bb564;
        case 0x4bb568u: goto label_4bb568;
        case 0x4bb56cu: goto label_4bb56c;
        case 0x4bb570u: goto label_4bb570;
        case 0x4bb574u: goto label_4bb574;
        case 0x4bb578u: goto label_4bb578;
        case 0x4bb57cu: goto label_4bb57c;
        case 0x4bb580u: goto label_4bb580;
        case 0x4bb584u: goto label_4bb584;
        case 0x4bb588u: goto label_4bb588;
        case 0x4bb58cu: goto label_4bb58c;
        case 0x4bb590u: goto label_4bb590;
        case 0x4bb594u: goto label_4bb594;
        case 0x4bb598u: goto label_4bb598;
        case 0x4bb59cu: goto label_4bb59c;
        case 0x4bb5a0u: goto label_4bb5a0;
        case 0x4bb5a4u: goto label_4bb5a4;
        case 0x4bb5a8u: goto label_4bb5a8;
        case 0x4bb5acu: goto label_4bb5ac;
        case 0x4bb5b0u: goto label_4bb5b0;
        case 0x4bb5b4u: goto label_4bb5b4;
        case 0x4bb5b8u: goto label_4bb5b8;
        case 0x4bb5bcu: goto label_4bb5bc;
        case 0x4bb5c0u: goto label_4bb5c0;
        case 0x4bb5c4u: goto label_4bb5c4;
        case 0x4bb5c8u: goto label_4bb5c8;
        case 0x4bb5ccu: goto label_4bb5cc;
        case 0x4bb5d0u: goto label_4bb5d0;
        case 0x4bb5d4u: goto label_4bb5d4;
        case 0x4bb5d8u: goto label_4bb5d8;
        case 0x4bb5dcu: goto label_4bb5dc;
        case 0x4bb5e0u: goto label_4bb5e0;
        case 0x4bb5e4u: goto label_4bb5e4;
        case 0x4bb5e8u: goto label_4bb5e8;
        case 0x4bb5ecu: goto label_4bb5ec;
        case 0x4bb5f0u: goto label_4bb5f0;
        case 0x4bb5f4u: goto label_4bb5f4;
        case 0x4bb5f8u: goto label_4bb5f8;
        case 0x4bb5fcu: goto label_4bb5fc;
        case 0x4bb600u: goto label_4bb600;
        case 0x4bb604u: goto label_4bb604;
        case 0x4bb608u: goto label_4bb608;
        case 0x4bb60cu: goto label_4bb60c;
        case 0x4bb610u: goto label_4bb610;
        case 0x4bb614u: goto label_4bb614;
        case 0x4bb618u: goto label_4bb618;
        case 0x4bb61cu: goto label_4bb61c;
        case 0x4bb620u: goto label_4bb620;
        case 0x4bb624u: goto label_4bb624;
        case 0x4bb628u: goto label_4bb628;
        case 0x4bb62cu: goto label_4bb62c;
        case 0x4bb630u: goto label_4bb630;
        case 0x4bb634u: goto label_4bb634;
        case 0x4bb638u: goto label_4bb638;
        case 0x4bb63cu: goto label_4bb63c;
        case 0x4bb640u: goto label_4bb640;
        case 0x4bb644u: goto label_4bb644;
        case 0x4bb648u: goto label_4bb648;
        case 0x4bb64cu: goto label_4bb64c;
        case 0x4bb650u: goto label_4bb650;
        case 0x4bb654u: goto label_4bb654;
        case 0x4bb658u: goto label_4bb658;
        case 0x4bb65cu: goto label_4bb65c;
        case 0x4bb660u: goto label_4bb660;
        case 0x4bb664u: goto label_4bb664;
        case 0x4bb668u: goto label_4bb668;
        case 0x4bb66cu: goto label_4bb66c;
        case 0x4bb670u: goto label_4bb670;
        case 0x4bb674u: goto label_4bb674;
        case 0x4bb678u: goto label_4bb678;
        case 0x4bb67cu: goto label_4bb67c;
        case 0x4bb680u: goto label_4bb680;
        case 0x4bb684u: goto label_4bb684;
        case 0x4bb688u: goto label_4bb688;
        case 0x4bb68cu: goto label_4bb68c;
        case 0x4bb690u: goto label_4bb690;
        case 0x4bb694u: goto label_4bb694;
        case 0x4bb698u: goto label_4bb698;
        case 0x4bb69cu: goto label_4bb69c;
        case 0x4bb6a0u: goto label_4bb6a0;
        case 0x4bb6a4u: goto label_4bb6a4;
        case 0x4bb6a8u: goto label_4bb6a8;
        case 0x4bb6acu: goto label_4bb6ac;
        case 0x4bb6b0u: goto label_4bb6b0;
        case 0x4bb6b4u: goto label_4bb6b4;
        case 0x4bb6b8u: goto label_4bb6b8;
        case 0x4bb6bcu: goto label_4bb6bc;
        case 0x4bb6c0u: goto label_4bb6c0;
        case 0x4bb6c4u: goto label_4bb6c4;
        case 0x4bb6c8u: goto label_4bb6c8;
        case 0x4bb6ccu: goto label_4bb6cc;
        case 0x4bb6d0u: goto label_4bb6d0;
        case 0x4bb6d4u: goto label_4bb6d4;
        case 0x4bb6d8u: goto label_4bb6d8;
        case 0x4bb6dcu: goto label_4bb6dc;
        case 0x4bb6e0u: goto label_4bb6e0;
        case 0x4bb6e4u: goto label_4bb6e4;
        case 0x4bb6e8u: goto label_4bb6e8;
        case 0x4bb6ecu: goto label_4bb6ec;
        case 0x4bb6f0u: goto label_4bb6f0;
        case 0x4bb6f4u: goto label_4bb6f4;
        case 0x4bb6f8u: goto label_4bb6f8;
        case 0x4bb6fcu: goto label_4bb6fc;
        case 0x4bb700u: goto label_4bb700;
        case 0x4bb704u: goto label_4bb704;
        case 0x4bb708u: goto label_4bb708;
        case 0x4bb70cu: goto label_4bb70c;
        case 0x4bb710u: goto label_4bb710;
        case 0x4bb714u: goto label_4bb714;
        case 0x4bb718u: goto label_4bb718;
        case 0x4bb71cu: goto label_4bb71c;
        case 0x4bb720u: goto label_4bb720;
        case 0x4bb724u: goto label_4bb724;
        case 0x4bb728u: goto label_4bb728;
        case 0x4bb72cu: goto label_4bb72c;
        case 0x4bb730u: goto label_4bb730;
        case 0x4bb734u: goto label_4bb734;
        case 0x4bb738u: goto label_4bb738;
        case 0x4bb73cu: goto label_4bb73c;
        case 0x4bb740u: goto label_4bb740;
        case 0x4bb744u: goto label_4bb744;
        case 0x4bb748u: goto label_4bb748;
        case 0x4bb74cu: goto label_4bb74c;
        case 0x4bb750u: goto label_4bb750;
        case 0x4bb754u: goto label_4bb754;
        case 0x4bb758u: goto label_4bb758;
        case 0x4bb75cu: goto label_4bb75c;
        case 0x4bb760u: goto label_4bb760;
        case 0x4bb764u: goto label_4bb764;
        case 0x4bb768u: goto label_4bb768;
        case 0x4bb76cu: goto label_4bb76c;
        case 0x4bb770u: goto label_4bb770;
        case 0x4bb774u: goto label_4bb774;
        case 0x4bb778u: goto label_4bb778;
        case 0x4bb77cu: goto label_4bb77c;
        case 0x4bb780u: goto label_4bb780;
        case 0x4bb784u: goto label_4bb784;
        case 0x4bb788u: goto label_4bb788;
        case 0x4bb78cu: goto label_4bb78c;
        default: break;
    }

    ctx->pc = 0x4bb330u;

label_4bb330:
    // 0x4bb330: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4bb330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_4bb334:
    // 0x4bb334: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4bb334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4bb338:
    // 0x4bb338: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4bb338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4bb33c:
    // 0x4bb33c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4bb33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4bb340:
    // 0x4bb340: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4bb340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4bb344:
    // 0x4bb344: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x4bb344u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4bb348:
    // 0x4bb348: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4bb348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4bb34c:
    // 0x4bb34c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4bb34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4bb350:
    // 0x4bb350: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4bb350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4bb354:
    // 0x4bb354: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x4bb354u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4bb358:
    // 0x4bb358: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4bb358u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bb35c:
    // 0x4bb35c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4bb35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4bb360:
    // 0x4bb360: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x4bb360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_4bb364:
    // 0x4bb364: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4bb364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4bb368:
    // 0x4bb368: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x4bb368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
label_4bb36c:
    // 0x4bb36c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bb36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bb370:
    // 0x4bb370: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x4bb370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4bb374:
    // 0x4bb374: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bb374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4bb378:
    // 0x4bb378: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x4bb378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_4bb37c:
    // 0x4bb37c: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x4bb37cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4bb380:
    // 0x4bb380: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4bb380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4bb384:
    // 0x4bb384: 0xafa700ac  sw          $a3, 0xAC($sp)
    ctx->pc = 0x4bb384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 7));
label_4bb388:
    // 0x4bb388: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x4bb388u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4bb38c:
    // 0x4bb38c: 0x8e430e38  lw          $v1, 0xE38($s2)
    ctx->pc = 0x4bb38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3640)));
label_4bb390:
    // 0x4bb390: 0x8e500d60  lw          $s0, 0xD60($s2)
    ctx->pc = 0x4bb390u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_4bb394:
    // 0x4bb394: 0x8e360d60  lw          $s6, 0xD60($s1)
    ctx->pc = 0x4bb394u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_4bb398:
    // 0x4bb398: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4bb398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4bb39c:
    // 0x4bb39c: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
label_4bb3a0:
    if (ctx->pc == 0x4BB3A0u) {
        ctx->pc = 0x4BB3A0u;
            // 0x4bb3a0: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BB3A4u;
        goto label_4bb3a4;
    }
    ctx->pc = 0x4BB39Cu;
    {
        const bool branch_taken_0x4bb39c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4BB3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB39Cu;
            // 0x4bb3a0: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb39c) {
            ctx->pc = 0x4BB444u;
            goto label_4bb444;
        }
    }
    ctx->pc = 0x4BB3A4u;
label_4bb3a4:
    // 0x4bb3a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4bb3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4bb3a8:
    // 0x4bb3a8: 0x8c44e400  lw          $a0, -0x1C00($v0)
    ctx->pc = 0x4bb3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960128)));
label_4bb3ac:
    // 0x4bb3ac: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x4bb3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_4bb3b0:
    // 0x4bb3b0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4bb3b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4bb3b4:
    // 0x4bb3b4: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_4bb3b8:
    if (ctx->pc == 0x4BB3B8u) {
        ctx->pc = 0x4BB3B8u;
            // 0x4bb3b8: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->pc = 0x4BB3BCu;
        goto label_4bb3bc;
    }
    ctx->pc = 0x4BB3B4u;
    {
        const bool branch_taken_0x4bb3b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bb3b4) {
            ctx->pc = 0x4BB3B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB3B4u;
            // 0x4bb3b8: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BB3C4u;
            goto label_4bb3c4;
        }
    }
    ctx->pc = 0x4BB3BCu;
label_4bb3bc:
    // 0x4bb3bc: 0x10000004  b           . + 4 + (0x4 << 2)
label_4bb3c0:
    if (ctx->pc == 0x4BB3C0u) {
        ctx->pc = 0x4BB3C0u;
            // 0x4bb3c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BB3C4u;
        goto label_4bb3c4;
    }
    ctx->pc = 0x4BB3BCu;
    {
        const bool branch_taken_0x4bb3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB3BCu;
            // 0x4bb3c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb3bc) {
            ctx->pc = 0x4BB3D0u;
            goto label_4bb3d0;
        }
    }
    ctx->pc = 0x4BB3C4u;
label_4bb3c4:
    // 0x4bb3c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4bb3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4bb3c8:
    // 0x4bb3c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4bb3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4bb3cc:
    // 0x4bb3cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4bb3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4bb3d0:
    // 0x4bb3d0: 0x26850d74  addiu       $a1, $s4, 0xD74
    ctx->pc = 0x4bb3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 3444));
label_4bb3d4:
    // 0x4bb3d4: 0xc0b79e8  jal         func_2DE7A0
label_4bb3d8:
    if (ctx->pc == 0x4BB3D8u) {
        ctx->pc = 0x4BB3D8u;
            // 0x4bb3d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4BB3DCu;
        goto label_4bb3dc;
    }
    ctx->pc = 0x4BB3D4u;
    SET_GPR_U32(ctx, 31, 0x4BB3DCu);
    ctx->pc = 0x4BB3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB3D4u;
            // 0x4bb3d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DE7A0u;
    if (runtime->hasFunction(0x2DE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB3DCu; }
        if (ctx->pc != 0x4BB3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DE7A0_0x2de7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB3DCu; }
        if (ctx->pc != 0x4BB3DCu) { return; }
    }
    ctx->pc = 0x4BB3DCu;
label_4bb3dc:
    // 0x4bb3dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4bb3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4bb3e0:
    // 0x4bb3e0: 0x8e230e38  lw          $v1, 0xE38($s1)
    ctx->pc = 0x4bb3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3640)));
label_4bb3e4:
    // 0x4bb3e4: 0x8c44e400  lw          $a0, -0x1C00($v0)
    ctx->pc = 0x4bb3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960128)));
label_4bb3e8:
    // 0x4bb3e8: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x4bb3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_4bb3ec:
    // 0x4bb3ec: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4bb3ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4bb3f0:
    // 0x4bb3f0: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_4bb3f4:
    if (ctx->pc == 0x4BB3F4u) {
        ctx->pc = 0x4BB3F4u;
            // 0x4bb3f4: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->pc = 0x4BB3F8u;
        goto label_4bb3f8;
    }
    ctx->pc = 0x4BB3F0u;
    {
        const bool branch_taken_0x4bb3f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bb3f0) {
            ctx->pc = 0x4BB3F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB3F0u;
            // 0x4bb3f4: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BB400u;
            goto label_4bb400;
        }
    }
    ctx->pc = 0x4BB3F8u;
label_4bb3f8:
    // 0x4bb3f8: 0x10000004  b           . + 4 + (0x4 << 2)
label_4bb3fc:
    if (ctx->pc == 0x4BB3FCu) {
        ctx->pc = 0x4BB3FCu;
            // 0x4bb3fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BB400u;
        goto label_4bb400;
    }
    ctx->pc = 0x4BB3F8u;
    {
        const bool branch_taken_0x4bb3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB3F8u;
            // 0x4bb3fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb3f8) {
            ctx->pc = 0x4BB40Cu;
            goto label_4bb40c;
        }
    }
    ctx->pc = 0x4BB400u;
label_4bb400:
    // 0x4bb400: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4bb400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4bb404:
    // 0x4bb404: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4bb404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4bb408:
    // 0x4bb408: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4bb408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4bb40c:
    // 0x4bb40c: 0x26850d74  addiu       $a1, $s4, 0xD74
    ctx->pc = 0x4bb40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 3444));
label_4bb410:
    // 0x4bb410: 0xc0b79e8  jal         func_2DE7A0
label_4bb414:
    if (ctx->pc == 0x4BB414u) {
        ctx->pc = 0x4BB414u;
            // 0x4bb414: 0x24060051  addiu       $a2, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->pc = 0x4BB418u;
        goto label_4bb418;
    }
    ctx->pc = 0x4BB410u;
    SET_GPR_U32(ctx, 31, 0x4BB418u);
    ctx->pc = 0x4BB414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB410u;
            // 0x4bb414: 0x24060051  addiu       $a2, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DE7A0u;
    if (runtime->hasFunction(0x2DE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB418u; }
        if (ctx->pc != 0x4BB418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DE7A0_0x2de7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB418u; }
        if (ctx->pc != 0x4BB418u) { return; }
    }
    ctx->pc = 0x4BB418u;
label_4bb418:
    // 0x4bb418: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4bb418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4bb41c:
    // 0x4bb41c: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
label_4bb420:
    if (ctx->pc == 0x4BB420u) {
        ctx->pc = 0x4BB420u;
            // 0x4bb420: 0x8c42d130  lw          $v0, -0x2ED0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
        ctx->pc = 0x4BB424u;
        goto label_4bb424;
    }
    ctx->pc = 0x4BB41Cu;
    {
        const bool branch_taken_0x4bb41c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BB420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB41Cu;
            // 0x4bb420: 0x8c42d130  lw          $v0, -0x2ED0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb41c) {
            ctx->pc = 0x4BB430u;
            goto label_4bb430;
        }
    }
    ctx->pc = 0x4BB424u;
label_4bb424:
    // 0x4bb424: 0xa0400129  sb          $zero, 0x129($v0)
    ctx->pc = 0x4bb424u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 297), (uint8_t)GPR_U32(ctx, 0));
label_4bb428:
    // 0x4bb428: 0x10000003  b           . + 4 + (0x3 << 2)
label_4bb42c:
    if (ctx->pc == 0x4BB42Cu) {
        ctx->pc = 0x4BB42Cu;
            // 0x4bb42c: 0xa040012a  sb          $zero, 0x12A($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 298), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4BB430u;
        goto label_4bb430;
    }
    ctx->pc = 0x4BB428u;
    {
        const bool branch_taken_0x4bb428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB428u;
            // 0x4bb42c: 0xa040012a  sb          $zero, 0x12A($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 298), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb428) {
            ctx->pc = 0x4BB438u;
            goto label_4bb438;
        }
    }
    ctx->pc = 0x4BB430u;
label_4bb430:
    // 0x4bb430: 0xa040012b  sb          $zero, 0x12B($v0)
    ctx->pc = 0x4bb430u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 299), (uint8_t)GPR_U32(ctx, 0));
label_4bb434:
    // 0x4bb434: 0xa040012c  sb          $zero, 0x12C($v0)
    ctx->pc = 0x4bb434u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 300), (uint8_t)GPR_U32(ctx, 0));
label_4bb438:
    // 0x4bb438: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x4bb438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_4bb43c:
    // 0x4bb43c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4bb43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bb440:
    // 0x4bb440: 0xa0430129  sb          $v1, 0x129($v0)
    ctx->pc = 0x4bb440u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 297), (uint8_t)GPR_U32(ctx, 3));
label_4bb444:
    // 0x4bb444: 0x8e430d9c  lw          $v1, 0xD9C($s2)
    ctx->pc = 0x4bb444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3484)));
label_4bb448:
    // 0x4bb448: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4bb448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4bb44c:
    // 0x4bb44c: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x4bb44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_4bb450:
    // 0x4bb450: 0xae430d9c  sw          $v1, 0xD9C($s2)
    ctx->pc = 0x4bb450u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3484), GPR_U32(ctx, 3));
label_4bb454:
    // 0x4bb454: 0x8e230d9c  lw          $v1, 0xD9C($s1)
    ctx->pc = 0x4bb454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3484)));
label_4bb458:
    // 0x4bb458: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x4bb458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_4bb45c:
    // 0x4bb45c: 0xae230d9c  sw          $v1, 0xD9C($s1)
    ctx->pc = 0x4bb45cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3484), GPR_U32(ctx, 3));
label_4bb460:
    // 0x4bb460: 0x8e550d74  lw          $s5, 0xD74($s2)
    ctx->pc = 0x4bb460u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
label_4bb464:
    // 0x4bb464: 0x8ea302c8  lw          $v1, 0x2C8($s5)
    ctx->pc = 0x4bb464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 712)));
label_4bb468:
    // 0x4bb468: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x4bb468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_4bb46c:
    // 0x4bb46c: 0xc0a545c  jal         func_295170
label_4bb470:
    if (ctx->pc == 0x4BB470u) {
        ctx->pc = 0x4BB470u;
            // 0x4bb470: 0x62b824  and         $s7, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x4BB474u;
        goto label_4bb474;
    }
    ctx->pc = 0x4BB46Cu;
    SET_GPR_U32(ctx, 31, 0x4BB474u);
    ctx->pc = 0x4BB470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB46Cu;
            // 0x4bb470: 0x62b824  and         $s7, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB474u; }
        if (ctx->pc != 0x4BB474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB474u; }
        if (ctx->pc != 0x4BB474u) { return; }
    }
    ctx->pc = 0x4BB474u;
label_4bb474:
    // 0x4bb474: 0xac57002c  sw          $s7, 0x2C($v0)
    ctx->pc = 0x4bb474u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 23));
label_4bb478:
    // 0x4bb478: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4bb478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4bb47c:
    // 0x4bb47c: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x4bb47cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_4bb480:
    // 0x4bb480: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4bb480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4bb484:
    // 0x4bb484: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4bb484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4bb488:
    // 0x4bb488: 0xc08bf20  jal         func_22FC80
label_4bb48c:
    if (ctx->pc == 0x4BB48Cu) {
        ctx->pc = 0x4BB48Cu;
            // 0x4bb48c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BB490u;
        goto label_4bb490;
    }
    ctx->pc = 0x4BB488u;
    SET_GPR_U32(ctx, 31, 0x4BB490u);
    ctx->pc = 0x4BB48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB488u;
            // 0x4bb48c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB490u; }
        if (ctx->pc != 0x4BB490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB490u; }
        if (ctx->pc != 0x4BB490u) { return; }
    }
    ctx->pc = 0x4BB490u;
label_4bb490:
    // 0x4bb490: 0x8e350d74  lw          $s5, 0xD74($s1)
    ctx->pc = 0x4bb490u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_4bb494:
    // 0x4bb494: 0x3c0274ff  lui         $v0, 0x74FF
    ctx->pc = 0x4bb494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29951 << 16));
label_4bb498:
    // 0x4bb498: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x4bb498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_4bb49c:
    // 0x4bb49c: 0x8ea302c8  lw          $v1, 0x2C8($s5)
    ctx->pc = 0x4bb49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 712)));
label_4bb4a0:
    // 0x4bb4a0: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x4bb4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_4bb4a4:
    // 0x4bb4a4: 0xc0a545c  jal         func_295170
label_4bb4a8:
    if (ctx->pc == 0x4BB4A8u) {
        ctx->pc = 0x4BB4A8u;
            // 0x4bb4a8: 0x62b824  and         $s7, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x4BB4ACu;
        goto label_4bb4ac;
    }
    ctx->pc = 0x4BB4A4u;
    SET_GPR_U32(ctx, 31, 0x4BB4ACu);
    ctx->pc = 0x4BB4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB4A4u;
            // 0x4bb4a8: 0x62b824  and         $s7, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB4ACu; }
        if (ctx->pc != 0x4BB4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB4ACu; }
        if (ctx->pc != 0x4BB4ACu) { return; }
    }
    ctx->pc = 0x4BB4ACu;
label_4bb4ac:
    // 0x4bb4ac: 0xac57002c  sw          $s7, 0x2C($v0)
    ctx->pc = 0x4bb4acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 23));
label_4bb4b0:
    // 0x4bb4b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4bb4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4bb4b4:
    // 0x4bb4b4: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x4bb4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_4bb4b8:
    // 0x4bb4b8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4bb4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4bb4bc:
    // 0x4bb4bc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4bb4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4bb4c0:
    // 0x4bb4c0: 0xc08bf20  jal         func_22FC80
label_4bb4c4:
    if (ctx->pc == 0x4BB4C4u) {
        ctx->pc = 0x4BB4C4u;
            // 0x4bb4c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BB4C8u;
        goto label_4bb4c8;
    }
    ctx->pc = 0x4BB4C0u;
    SET_GPR_U32(ctx, 31, 0x4BB4C8u);
    ctx->pc = 0x4BB4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB4C0u;
            // 0x4bb4c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB4C8u; }
        if (ctx->pc != 0x4BB4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB4C8u; }
        if (ctx->pc != 0x4BB4C8u) { return; }
    }
    ctx->pc = 0x4BB4C8u;
label_4bb4c8:
    // 0x4bb4c8: 0x13c00041  beqz        $fp, . + 4 + (0x41 << 2)
label_4bb4cc:
    if (ctx->pc == 0x4BB4CCu) {
        ctx->pc = 0x4BB4CCu;
            // 0x4bb4cc: 0xaec0000c  sw          $zero, 0xC($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x4BB4D0u;
        goto label_4bb4d0;
    }
    ctx->pc = 0x4BB4C8u;
    {
        const bool branch_taken_0x4bb4c8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB4C8u;
            // 0x4bb4cc: 0xaec0000c  sw          $zero, 0xC($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb4c8) {
            ctx->pc = 0x4BB5D0u;
            goto label_4bb5d0;
        }
    }
    ctx->pc = 0x4BB4D0u;
label_4bb4d0:
    // 0x4bb4d0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4bb4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4bb4d4:
    // 0x4bb4d4: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x4bb4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_4bb4d8:
    // 0x4bb4d8: 0x8c458a08  lw          $a1, -0x75F8($v0)
    ctx->pc = 0x4bb4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4bb4dc:
    // 0x4bb4dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4bb4dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4bb4e0:
    // 0x4bb4e0: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x4bb4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4bb4e4:
    // 0x4bb4e4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x4bb4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_4bb4e8:
    // 0x4bb4e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4bb4e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4bb4ec:
    // 0x4bb4ec: 0x0  nop
    ctx->pc = 0x4bb4ecu;
    // NOP
label_4bb4f0:
    // 0x4bb4f0: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x4bb4f0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_4bb4f4:
    // 0x4bb4f4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x4bb4f4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_4bb4f8:
    // 0x4bb4f8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4bb4f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4bb4fc:
    // 0x4bb4fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4bb4fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4bb500:
    // 0x4bb500: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x4bb500u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4bb504:
    // 0x4bb504: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x4bb504u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_4bb508:
    // 0x4bb508: 0xc07631c  jal         func_1D8C70
label_4bb50c:
    if (ctx->pc == 0x4BB50Cu) {
        ctx->pc = 0x4BB50Cu;
            // 0x4bb50c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BB510u;
        goto label_4bb510;
    }
    ctx->pc = 0x4BB508u;
    SET_GPR_U32(ctx, 31, 0x4BB510u);
    ctx->pc = 0x4BB50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB508u;
            // 0x4bb50c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8C70u;
    if (runtime->hasFunction(0x1D8C70u)) {
        auto targetFn = runtime->lookupFunction(0x1D8C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB510u; }
        if (ctx->pc != 0x4BB510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8C70_0x1d8c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB510u; }
        if (ctx->pc != 0x4BB510u) { return; }
    }
    ctx->pc = 0x4BB510u;
label_4bb510:
    // 0x4bb510: 0x8e220e34  lw          $v0, 0xE34($s1)
    ctx->pc = 0x4bb510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_4bb514:
    // 0x4bb514: 0x64150001  daddiu      $s5, $zero, 0x1
    ctx->pc = 0x4bb514u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4bb518:
    // 0x4bb518: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_4bb51c:
    if (ctx->pc == 0x4BB51Cu) {
        ctx->pc = 0x4BB51Cu;
            // 0x4bb51c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BB520u;
        goto label_4bb520;
    }
    ctx->pc = 0x4BB518u;
    {
        const bool branch_taken_0x4bb518 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4BB51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB518u;
            // 0x4bb51c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb518) {
            ctx->pc = 0x4BB530u;
            goto label_4bb530;
        }
    }
    ctx->pc = 0x4BB520u;
label_4bb520:
    // 0x4bb520: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x4bb520u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_4bb524:
    // 0x4bb524: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4bb528:
    if (ctx->pc == 0x4BB528u) {
        ctx->pc = 0x4BB52Cu;
        goto label_4bb52c;
    }
    ctx->pc = 0x4BB524u;
    {
        const bool branch_taken_0x4bb524 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bb524) {
            ctx->pc = 0x4BB530u;
            goto label_4bb530;
        }
    }
    ctx->pc = 0x4BB52Cu;
label_4bb52c:
    // 0x4bb52c: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x4bb52cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4bb530:
    // 0x4bb530: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_4bb534:
    if (ctx->pc == 0x4BB534u) {
        ctx->pc = 0x4BB538u;
        goto label_4bb538;
    }
    ctx->pc = 0x4BB530u;
    {
        const bool branch_taken_0x4bb530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bb530) {
            ctx->pc = 0x4BB54Cu;
            goto label_4bb54c;
        }
    }
    ctx->pc = 0x4BB538u;
label_4bb538:
    // 0x4bb538: 0xc075eb4  jal         func_1D7AD0
label_4bb53c:
    if (ctx->pc == 0x4BB53Cu) {
        ctx->pc = 0x4BB53Cu;
            // 0x4bb53c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BB540u;
        goto label_4bb540;
    }
    ctx->pc = 0x4BB538u;
    SET_GPR_U32(ctx, 31, 0x4BB540u);
    ctx->pc = 0x4BB53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB538u;
            // 0x4bb53c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB540u; }
        if (ctx->pc != 0x4BB540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB540u; }
        if (ctx->pc != 0x4BB540u) { return; }
    }
    ctx->pc = 0x4BB540u;
label_4bb540:
    // 0x4bb540: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4bb544:
    if (ctx->pc == 0x4BB544u) {
        ctx->pc = 0x4BB548u;
        goto label_4bb548;
    }
    ctx->pc = 0x4BB540u;
    {
        const bool branch_taken_0x4bb540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bb540) {
            ctx->pc = 0x4BB54Cu;
            goto label_4bb54c;
        }
    }
    ctx->pc = 0x4BB548u;
label_4bb548:
    // 0x4bb548: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4bb548u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bb54c:
    // 0x4bb54c: 0x52a00034  beql        $s5, $zero, . + 4 + (0x34 << 2)
label_4bb550:
    if (ctx->pc == 0x4BB550u) {
        ctx->pc = 0x4BB550u;
            // 0x4bb550: 0x8e220518  lw          $v0, 0x518($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
        ctx->pc = 0x4BB554u;
        goto label_4bb554;
    }
    ctx->pc = 0x4BB54Cu;
    {
        const bool branch_taken_0x4bb54c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bb54c) {
            ctx->pc = 0x4BB550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB54Cu;
            // 0x4bb550: 0x8e220518  lw          $v0, 0x518($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BB620u;
            goto label_4bb620;
        }
    }
    ctx->pc = 0x4BB554u;
label_4bb554:
    // 0x4bb554: 0xc040180  jal         func_100600
label_4bb558:
    if (ctx->pc == 0x4BB558u) {
        ctx->pc = 0x4BB558u;
            // 0x4bb558: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->pc = 0x4BB55Cu;
        goto label_4bb55c;
    }
    ctx->pc = 0x4BB554u;
    SET_GPR_U32(ctx, 31, 0x4BB55Cu);
    ctx->pc = 0x4BB558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB554u;
            // 0x4bb558: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB55Cu; }
        if (ctx->pc != 0x4BB55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB55Cu; }
        if (ctx->pc != 0x4BB55Cu) { return; }
    }
    ctx->pc = 0x4BB55Cu;
label_4bb55c:
    // 0x4bb55c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_4bb560:
    if (ctx->pc == 0x4BB560u) {
        ctx->pc = 0x4BB560u;
            // 0x4bb560: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BB564u;
        goto label_4bb564;
    }
    ctx->pc = 0x4BB55Cu;
    {
        const bool branch_taken_0x4bb55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB55Cu;
            // 0x4bb560: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb55c) {
            ctx->pc = 0x4BB61Cu;
            goto label_4bb61c;
        }
    }
    ctx->pc = 0x4BB564u;
label_4bb564:
    // 0x4bb564: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x4bb564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_4bb568:
    // 0x4bb568: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4bb568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4bb56c:
    // 0x4bb56c: 0x3445af29  ori         $a1, $v0, 0xAF29
    ctx->pc = 0x4bb56cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
label_4bb570:
    // 0x4bb570: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4bb570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4bb574:
    // 0x4bb574: 0xc10ca68  jal         func_4329A0
label_4bb578:
    if (ctx->pc == 0x4BB578u) {
        ctx->pc = 0x4BB578u;
            // 0x4bb578: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4BB57Cu;
        goto label_4bb57c;
    }
    ctx->pc = 0x4BB574u;
    SET_GPR_U32(ctx, 31, 0x4BB57Cu);
    ctx->pc = 0x4BB578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB574u;
            // 0x4bb578: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB57Cu; }
        if (ctx->pc != 0x4BB57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB57Cu; }
        if (ctx->pc != 0x4BB57Cu) { return; }
    }
    ctx->pc = 0x4BB57Cu;
label_4bb57c:
    // 0x4bb57c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4bb57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4bb580:
    // 0x4bb580: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4bb580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4bb584:
    // 0x4bb584: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4bb584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_4bb588:
    // 0x4bb588: 0x24635550  addiu       $v1, $v1, 0x5550
    ctx->pc = 0x4bb588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21840));
label_4bb58c:
    // 0x4bb58c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4bb58cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_4bb590:
    // 0x4bb590: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4bb590u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_4bb594:
    // 0x4bb594: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4bb594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bb598:
    // 0x4bb598: 0xaea00058  sw          $zero, 0x58($s5)
    ctx->pc = 0x4bb598u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 0));
label_4bb59c:
    // 0x4bb59c: 0xaea2005c  sw          $v0, 0x5C($s5)
    ctx->pc = 0x4bb59cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 2));
label_4bb5a0:
    // 0x4bb5a0: 0xaea00060  sw          $zero, 0x60($s5)
    ctx->pc = 0x4bb5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 0));
label_4bb5a4:
    // 0x4bb5a4: 0xaea00064  sw          $zero, 0x64($s5)
    ctx->pc = 0x4bb5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 0));
label_4bb5a8:
    // 0x4bb5a8: 0xaea00068  sw          $zero, 0x68($s5)
    ctx->pc = 0x4bb5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 104), GPR_U32(ctx, 0));
label_4bb5ac:
    // 0x4bb5ac: 0xaea0006c  sw          $zero, 0x6C($s5)
    ctx->pc = 0x4bb5acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 108), GPR_U32(ctx, 0));
label_4bb5b0:
    // 0x4bb5b0: 0xaea00070  sw          $zero, 0x70($s5)
    ctx->pc = 0x4bb5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 0));
label_4bb5b4:
    // 0x4bb5b4: 0xaea00074  sw          $zero, 0x74($s5)
    ctx->pc = 0x4bb5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 116), GPR_U32(ctx, 0));
label_4bb5b8:
    // 0x4bb5b8: 0xaea00078  sw          $zero, 0x78($s5)
    ctx->pc = 0x4bb5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 120), GPR_U32(ctx, 0));
label_4bb5bc:
    // 0x4bb5bc: 0xaea0007c  sw          $zero, 0x7C($s5)
    ctx->pc = 0x4bb5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 124), GPR_U32(ctx, 0));
label_4bb5c0:
    // 0x4bb5c0: 0xaea00080  sw          $zero, 0x80($s5)
    ctx->pc = 0x4bb5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 0));
label_4bb5c4:
    // 0x4bb5c4: 0xaea00084  sw          $zero, 0x84($s5)
    ctx->pc = 0x4bb5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 0));
label_4bb5c8:
    // 0x4bb5c8: 0x10000014  b           . + 4 + (0x14 << 2)
label_4bb5cc:
    if (ctx->pc == 0x4BB5CCu) {
        ctx->pc = 0x4BB5CCu;
            // 0x4bb5cc: 0xaeb30088  sw          $s3, 0x88($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 136), GPR_U32(ctx, 19));
        ctx->pc = 0x4BB5D0u;
        goto label_4bb5d0;
    }
    ctx->pc = 0x4BB5C8u;
    {
        const bool branch_taken_0x4bb5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BB5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB5C8u;
            // 0x4bb5cc: 0xaeb30088  sw          $s3, 0x88($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 136), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bb5c8) {
            ctx->pc = 0x4BB61Cu;
            goto label_4bb61c;
        }
    }
    ctx->pc = 0x4BB5D0u;
label_4bb5d0:
    // 0x4bb5d0: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x4bb5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_4bb5d4:
    // 0x4bb5d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4bb5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4bb5d8:
    // 0x4bb5d8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x4bb5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_4bb5dc:
    // 0x4bb5dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4bb5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bb5e0:
    // 0x4bb5e0: 0xc12ede4  jal         func_4BB790
label_4bb5e4:
    if (ctx->pc == 0x4BB5E4u) {
        ctx->pc = 0x4BB5E4u;
            // 0x4bb5e4: 0x24460d00  addiu       $a2, $v0, 0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3328));
        ctx->pc = 0x4BB5E8u;
        goto label_4bb5e8;
    }
    ctx->pc = 0x4BB5E0u;
    SET_GPR_U32(ctx, 31, 0x4BB5E8u);
    ctx->pc = 0x4BB5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB5E0u;
            // 0x4bb5e4: 0x24460d00  addiu       $a2, $v0, 0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4BB790u;
    if (runtime->hasFunction(0x4BB790u)) {
        auto targetFn = runtime->lookupFunction(0x4BB790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB5E8u; }
        if (ctx->pc != 0x4BB5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004BB790_0x4bb790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB5E8u; }
        if (ctx->pc != 0x4BB5E8u) { return; }
    }
    ctx->pc = 0x4BB5E8u;
label_4bb5e8:
    // 0x4bb5e8: 0x8e240d70  lw          $a0, 0xD70($s1)
    ctx->pc = 0x4bb5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
label_4bb5ec:
    // 0x4bb5ec: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x4bb5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_4bb5f0:
    // 0x4bb5f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4bb5f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4bb5f4:
    // 0x4bb5f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4bb5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bb5f8:
    // 0x4bb5f8: 0xc0bdf9c  jal         func_2F7E70
label_4bb5fc:
    if (ctx->pc == 0x4BB5FCu) {
        ctx->pc = 0x4BB5FCu;
            // 0x4bb5fc: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x4BB600u;
        goto label_4bb600;
    }
    ctx->pc = 0x4BB5F8u;
    SET_GPR_U32(ctx, 31, 0x4BB600u);
    ctx->pc = 0x4BB5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB5F8u;
            // 0x4bb5fc: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB600u; }
        if (ctx->pc != 0x4BB600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB600u; }
        if (ctx->pc != 0x4BB600u) { return; }
    }
    ctx->pc = 0x4BB600u;
label_4bb600:
    // 0x4bb600: 0xc0ba364  jal         func_2E8D90
label_4bb604:
    if (ctx->pc == 0x4BB604u) {
        ctx->pc = 0x4BB604u;
            // 0x4bb604: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BB608u;
        goto label_4bb608;
    }
    ctx->pc = 0x4BB600u;
    SET_GPR_U32(ctx, 31, 0x4BB608u);
    ctx->pc = 0x4BB604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB600u;
            // 0x4bb604: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8D90u;
    if (runtime->hasFunction(0x2E8D90u)) {
        auto targetFn = runtime->lookupFunction(0x2E8D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB608u; }
        if (ctx->pc != 0x4BB608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8D90_0x2e8d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB608u; }
        if (ctx->pc != 0x4BB608u) { return; }
    }
    ctx->pc = 0x4BB608u;
label_4bb608:
    // 0x4bb608: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4bb608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4bb60c:
    // 0x4bb60c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4bb60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4bb610:
    // 0x4bb610: 0x26260ee0  addiu       $a2, $s1, 0xEE0
    ctx->pc = 0x4bb610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 3808));
label_4bb614:
    // 0x4bb614: 0xc0bb1ec  jal         func_2EC7B0
label_4bb618:
    if (ctx->pc == 0x4BB618u) {
        ctx->pc = 0x4BB618u;
            // 0x4bb618: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4BB61Cu;
        goto label_4bb61c;
    }
    ctx->pc = 0x4BB614u;
    SET_GPR_U32(ctx, 31, 0x4BB61Cu);
    ctx->pc = 0x4BB618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB614u;
            // 0x4bb618: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC7B0u;
    if (runtime->hasFunction(0x2EC7B0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB61Cu; }
        if (ctx->pc != 0x4BB61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC7B0_0x2ec7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB61Cu; }
        if (ctx->pc != 0x4BB61Cu) { return; }
    }
    ctx->pc = 0x4BB61Cu;
label_4bb61c:
    // 0x4bb61c: 0x8e220518  lw          $v0, 0x518($s1)
    ctx->pc = 0x4bb61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
label_4bb620:
    // 0x4bb620: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x4bb620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_4bb624:
    // 0x4bb624: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_4bb628:
    if (ctx->pc == 0x4BB628u) {
        ctx->pc = 0x4BB628u;
            // 0x4bb628: 0x82420e3f  lb          $v0, 0xE3F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3647)));
        ctx->pc = 0x4BB62Cu;
        goto label_4bb62c;
    }
    ctx->pc = 0x4BB624u;
    {
        const bool branch_taken_0x4bb624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bb624) {
            ctx->pc = 0x4BB628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB624u;
            // 0x4bb628: 0x82420e3f  lb          $v0, 0xE3F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3647)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BB63Cu;
            goto label_4bb63c;
        }
    }
    ctx->pc = 0x4BB62Cu;
label_4bb62c:
    // 0x4bb62c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bb62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bb630:
    // 0x4bb630: 0xc077fb0  jal         func_1DFEC0
label_4bb634:
    if (ctx->pc == 0x4BB634u) {
        ctx->pc = 0x4BB634u;
            // 0x4bb634: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
        ctx->pc = 0x4BB638u;
        goto label_4bb638;
    }
    ctx->pc = 0x4BB630u;
    SET_GPR_U32(ctx, 31, 0x4BB638u);
    ctx->pc = 0x4BB634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB630u;
            // 0x4bb634: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB638u; }
        if (ctx->pc != 0x4BB638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB638u; }
        if (ctx->pc != 0x4BB638u) { return; }
    }
    ctx->pc = 0x4BB638u;
label_4bb638:
    // 0x4bb638: 0x82420e3f  lb          $v0, 0xE3F($s2)
    ctx->pc = 0x4bb638u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3647)));
label_4bb63c:
    // 0x4bb63c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bb63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bb640:
    // 0x4bb640: 0xa2220e3f  sb          $v0, 0xE3F($s1)
    ctx->pc = 0x4bb640u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3647), (uint8_t)GPR_U32(ctx, 2));
label_4bb644:
    // 0x4bb644: 0x8e190030  lw          $t9, 0x30($s0)
    ctx->pc = 0x4bb644u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_4bb648:
    // 0x4bb648: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4bb648u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_4bb64c:
    // 0x4bb64c: 0x320f809  jalr        $t9
label_4bb650:
    if (ctx->pc == 0x4BB650u) {
        ctx->pc = 0x4BB650u;
            // 0x4bb650: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4BB654u;
        goto label_4bb654;
    }
    ctx->pc = 0x4BB64Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BB654u);
        ctx->pc = 0x4BB650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB64Cu;
            // 0x4bb650: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BB654u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BB654u; }
            if (ctx->pc != 0x4BB654u) { return; }
        }
        }
    }
    ctx->pc = 0x4BB654u;
label_4bb654:
    // 0x4bb654: 0x8ed90030  lw          $t9, 0x30($s6)
    ctx->pc = 0x4bb654u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
label_4bb658:
    // 0x4bb658: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4bb658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4bb65c:
    // 0x4bb65c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4bb65cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_4bb660:
    // 0x4bb660: 0x320f809  jalr        $t9
label_4bb664:
    if (ctx->pc == 0x4BB664u) {
        ctx->pc = 0x4BB664u;
            // 0x4bb664: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4BB668u;
        goto label_4bb668;
    }
    ctx->pc = 0x4BB660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BB668u);
        ctx->pc = 0x4BB664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB660u;
            // 0x4bb664: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BB668u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BB668u; }
            if (ctx->pc != 0x4BB668u) { return; }
        }
        }
    }
    ctx->pc = 0x4BB668u;
label_4bb668:
    // 0x4bb668: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4bb668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4bb66c:
    // 0x4bb66c: 0x13a880  sll         $s5, $s3, 2
    ctx->pc = 0x4bb66cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_4bb670:
    // 0x4bb670: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x4bb670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_4bb674:
    // 0x4bb674: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4bb674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4bb678:
    // 0x4bb678: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x4bb678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_4bb67c:
    // 0x4bb67c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4bb67cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4bb680:
    // 0x4bb680: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4bb680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4bb684:
    // 0x4bb684: 0xc146148  jal         func_518520
label_4bb688:
    if (ctx->pc == 0x4BB688u) {
        ctx->pc = 0x4BB688u;
            // 0x4bb688: 0x244503e0  addiu       $a1, $v0, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 992));
        ctx->pc = 0x4BB68Cu;
        goto label_4bb68c;
    }
    ctx->pc = 0x4BB684u;
    SET_GPR_U32(ctx, 31, 0x4BB68Cu);
    ctx->pc = 0x4BB688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB684u;
            // 0x4bb688: 0x244503e0  addiu       $a1, $v0, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x518520u;
    if (runtime->hasFunction(0x518520u)) {
        auto targetFn = runtime->lookupFunction(0x518520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB68Cu; }
        if (ctx->pc != 0x4BB68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00518520_0x518520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB68Cu; }
        if (ctx->pc != 0x4BB68Cu) { return; }
    }
    ctx->pc = 0x4BB68Cu;
label_4bb68c:
    // 0x4bb68c: 0x8e440d70  lw          $a0, 0xD70($s2)
    ctx->pc = 0x4bb68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
label_4bb690:
    // 0x4bb690: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x4bb690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_4bb694:
    // 0x4bb694: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4bb694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4bb698:
    // 0x4bb698: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4bb698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4bb69c:
    // 0x4bb69c: 0xc0bdf9c  jal         func_2F7E70
label_4bb6a0:
    if (ctx->pc == 0x4BB6A0u) {
        ctx->pc = 0x4BB6A0u;
            // 0x4bb6a0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4BB6A4u;
        goto label_4bb6a4;
    }
    ctx->pc = 0x4BB69Cu;
    SET_GPR_U32(ctx, 31, 0x4BB6A4u);
    ctx->pc = 0x4BB6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB69Cu;
            // 0x4bb6a0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB6A4u; }
        if (ctx->pc != 0x4BB6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB6A4u; }
        if (ctx->pc != 0x4BB6A4u) { return; }
    }
    ctx->pc = 0x4BB6A4u;
label_4bb6a4:
    // 0x4bb6a4: 0xae400de4  sw          $zero, 0xDE4($s2)
    ctx->pc = 0x4bb6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3556), GPR_U32(ctx, 0));
label_4bb6a8:
    // 0x4bb6a8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4bb6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4bb6ac:
    // 0x4bb6ac: 0x8e510d74  lw          $s1, 0xD74($s2)
    ctx->pc = 0x4bb6acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
label_4bb6b0:
    // 0x4bb6b0: 0x8e2302c8  lw          $v1, 0x2C8($s1)
    ctx->pc = 0x4bb6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 712)));
label_4bb6b4:
    // 0x4bb6b4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x4bb6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4bb6b8:
    // 0x4bb6b8: 0xc0a545c  jal         func_295170
label_4bb6bc:
    if (ctx->pc == 0x4BB6BCu) {
        ctx->pc = 0x4BB6BCu;
            // 0x4bb6bc: 0x62b024  and         $s6, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x4BB6C0u;
        goto label_4bb6c0;
    }
    ctx->pc = 0x4BB6B8u;
    SET_GPR_U32(ctx, 31, 0x4BB6C0u);
    ctx->pc = 0x4BB6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB6B8u;
            // 0x4bb6bc: 0x62b024  and         $s6, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB6C0u; }
        if (ctx->pc != 0x4BB6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB6C0u; }
        if (ctx->pc != 0x4BB6C0u) { return; }
    }
    ctx->pc = 0x4BB6C0u;
label_4bb6c0:
    // 0x4bb6c0: 0xac56002c  sw          $s6, 0x2C($v0)
    ctx->pc = 0x4bb6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 22));
label_4bb6c4:
    // 0x4bb6c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4bb6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4bb6c8:
    // 0x4bb6c8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x4bb6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4bb6cc:
    // 0x4bb6cc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4bb6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4bb6d0:
    // 0x4bb6d0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4bb6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4bb6d4:
    // 0x4bb6d4: 0xc08bf20  jal         func_22FC80
label_4bb6d8:
    if (ctx->pc == 0x4BB6D8u) {
        ctx->pc = 0x4BB6D8u;
            // 0x4bb6d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BB6DCu;
        goto label_4bb6dc;
    }
    ctx->pc = 0x4BB6D4u;
    SET_GPR_U32(ctx, 31, 0x4BB6DCu);
    ctx->pc = 0x4BB6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB6D4u;
            // 0x4bb6d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB6DCu; }
        if (ctx->pc != 0x4BB6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BB6DCu; }
        if (ctx->pc != 0x4BB6DCu) { return; }
    }
    ctx->pc = 0x4BB6DCu;
label_4bb6dc:
    // 0x4bb6dc: 0xa24011a1  sb          $zero, 0x11A1($s2)
    ctx->pc = 0x4bb6dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4513), (uint8_t)GPR_U32(ctx, 0));
label_4bb6e0:
    // 0x4bb6e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4bb6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4bb6e4:
    // 0x4bb6e4: 0xae400db8  sw          $zero, 0xDB8($s2)
    ctx->pc = 0x4bb6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3512), GPR_U32(ctx, 0));
label_4bb6e8:
    // 0x4bb6e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bb6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bb6ec:
    // 0x4bb6ec: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x4bb6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_4bb6f0:
    // 0x4bb6f0: 0x8e190030  lw          $t9, 0x30($s0)
    ctx->pc = 0x4bb6f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_4bb6f4:
    // 0x4bb6f4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x4bb6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_4bb6f8:
    // 0x4bb6f8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4bb6f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4bb6fc:
    // 0x4bb6fc: 0x320f809  jalr        $t9
label_4bb700:
    if (ctx->pc == 0x4BB700u) {
        ctx->pc = 0x4BB700u;
            // 0x4bb700: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x4BB704u;
        goto label_4bb704;
    }
    ctx->pc = 0x4BB6FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BB704u);
        ctx->pc = 0x4BB700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB6FCu;
            // 0x4bb700: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BB704u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BB704u; }
            if (ctx->pc != 0x4BB704u) { return; }
        }
        }
    }
    ctx->pc = 0x4BB704u;
label_4bb704:
    // 0x4bb704: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x4bb704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_4bb708:
    // 0x4bb708: 0x2b43021  addu        $a2, $s5, $s4
    ctx->pc = 0x4bb708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_4bb70c:
    // 0x4bb70c: 0xacc00cec  sw          $zero, 0xCEC($a2)
    ctx->pc = 0x4bb70cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 3308), GPR_U32(ctx, 0));
label_4bb710:
    // 0x4bb710: 0xacc30cc8  sw          $v1, 0xCC8($a2)
    ctx->pc = 0x4bb710u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 3272), GPR_U32(ctx, 3));
label_4bb714:
    // 0x4bb714: 0x8e850ce8  lw          $a1, 0xCE8($s4)
    ctx->pc = 0x4bb714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3304)));
label_4bb718:
    // 0x4bb718: 0x8cc30cd0  lw          $v1, 0xCD0($a2)
    ctx->pc = 0x4bb718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3280)));
label_4bb71c:
    // 0x4bb71c: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x4bb71cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_4bb720:
    // 0x4bb720: 0x1810  mfhi        $v1
    ctx->pc = 0x4bb720u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_4bb724:
    // 0x4bb724: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x4bb724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4bb728:
    // 0x4bb728: 0x85182b  sltu        $v1, $a0, $a1
    ctx->pc = 0x4bb728u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_4bb72c:
    // 0x4bb72c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x4bb72cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4bb730:
    // 0x4bb730: 0x70b31801  maddu       $v1, $a1, $s3
    ctx->pc = 0x4bb730u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); uint64_t prod = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 19); uint64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4bb734:
    // 0x4bb734: 0xacc30cd0  sw          $v1, 0xCD0($a2)
    ctx->pc = 0x4bb734u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 3280), GPR_U32(ctx, 3));
label_4bb738:
    // 0x4bb738: 0x8e850ce8  lw          $a1, 0xCE8($s4)
    ctx->pc = 0x4bb738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3304)));
label_4bb73c:
    // 0x4bb73c: 0x8cc30cd8  lw          $v1, 0xCD8($a2)
    ctx->pc = 0x4bb73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3288)));
label_4bb740:
    // 0x4bb740: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x4bb740u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_4bb744:
    // 0x4bb744: 0x1810  mfhi        $v1
    ctx->pc = 0x4bb744u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_4bb748:
    // 0x4bb748: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x4bb748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4bb74c:
    // 0x4bb74c: 0x85182b  sltu        $v1, $a0, $a1
    ctx->pc = 0x4bb74cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_4bb750:
    // 0x4bb750: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x4bb750u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4bb754:
    // 0x4bb754: 0x70b31801  maddu       $v1, $a1, $s3
    ctx->pc = 0x4bb754u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); uint64_t prod = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 19); uint64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4bb758:
    // 0x4bb758: 0xacc30cd8  sw          $v1, 0xCD8($a2)
    ctx->pc = 0x4bb758u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 3288), GPR_U32(ctx, 3));
label_4bb75c:
    // 0x4bb75c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4bb75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4bb760:
    // 0x4bb760: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4bb760u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4bb764:
    // 0x4bb764: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4bb764u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4bb768:
    // 0x4bb768: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4bb768u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4bb76c:
    // 0x4bb76c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4bb76cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4bb770:
    // 0x4bb770: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4bb770u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4bb774:
    // 0x4bb774: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4bb774u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4bb778:
    // 0x4bb778: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4bb778u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4bb77c:
    // 0x4bb77c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bb77cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bb780:
    // 0x4bb780: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bb780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4bb784:
    // 0x4bb784: 0x3e00008  jr          $ra
label_4bb788:
    if (ctx->pc == 0x4BB788u) {
        ctx->pc = 0x4BB788u;
            // 0x4bb788: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4BB78Cu;
        goto label_4bb78c;
    }
    ctx->pc = 0x4BB784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BB788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BB784u;
            // 0x4bb788: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BB78Cu;
label_4bb78c:
    // 0x4bb78c: 0x0  nop
    ctx->pc = 0x4bb78cu;
    // NOP
}
