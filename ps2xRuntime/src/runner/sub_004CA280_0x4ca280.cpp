#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CA280
// Address: 0x4ca280 - 0x4ca710
void sub_004CA280_0x4ca280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CA280_0x4ca280");
#endif

    switch (ctx->pc) {
        case 0x4ca280u: goto label_4ca280;
        case 0x4ca284u: goto label_4ca284;
        case 0x4ca288u: goto label_4ca288;
        case 0x4ca28cu: goto label_4ca28c;
        case 0x4ca290u: goto label_4ca290;
        case 0x4ca294u: goto label_4ca294;
        case 0x4ca298u: goto label_4ca298;
        case 0x4ca29cu: goto label_4ca29c;
        case 0x4ca2a0u: goto label_4ca2a0;
        case 0x4ca2a4u: goto label_4ca2a4;
        case 0x4ca2a8u: goto label_4ca2a8;
        case 0x4ca2acu: goto label_4ca2ac;
        case 0x4ca2b0u: goto label_4ca2b0;
        case 0x4ca2b4u: goto label_4ca2b4;
        case 0x4ca2b8u: goto label_4ca2b8;
        case 0x4ca2bcu: goto label_4ca2bc;
        case 0x4ca2c0u: goto label_4ca2c0;
        case 0x4ca2c4u: goto label_4ca2c4;
        case 0x4ca2c8u: goto label_4ca2c8;
        case 0x4ca2ccu: goto label_4ca2cc;
        case 0x4ca2d0u: goto label_4ca2d0;
        case 0x4ca2d4u: goto label_4ca2d4;
        case 0x4ca2d8u: goto label_4ca2d8;
        case 0x4ca2dcu: goto label_4ca2dc;
        case 0x4ca2e0u: goto label_4ca2e0;
        case 0x4ca2e4u: goto label_4ca2e4;
        case 0x4ca2e8u: goto label_4ca2e8;
        case 0x4ca2ecu: goto label_4ca2ec;
        case 0x4ca2f0u: goto label_4ca2f0;
        case 0x4ca2f4u: goto label_4ca2f4;
        case 0x4ca2f8u: goto label_4ca2f8;
        case 0x4ca2fcu: goto label_4ca2fc;
        case 0x4ca300u: goto label_4ca300;
        case 0x4ca304u: goto label_4ca304;
        case 0x4ca308u: goto label_4ca308;
        case 0x4ca30cu: goto label_4ca30c;
        case 0x4ca310u: goto label_4ca310;
        case 0x4ca314u: goto label_4ca314;
        case 0x4ca318u: goto label_4ca318;
        case 0x4ca31cu: goto label_4ca31c;
        case 0x4ca320u: goto label_4ca320;
        case 0x4ca324u: goto label_4ca324;
        case 0x4ca328u: goto label_4ca328;
        case 0x4ca32cu: goto label_4ca32c;
        case 0x4ca330u: goto label_4ca330;
        case 0x4ca334u: goto label_4ca334;
        case 0x4ca338u: goto label_4ca338;
        case 0x4ca33cu: goto label_4ca33c;
        case 0x4ca340u: goto label_4ca340;
        case 0x4ca344u: goto label_4ca344;
        case 0x4ca348u: goto label_4ca348;
        case 0x4ca34cu: goto label_4ca34c;
        case 0x4ca350u: goto label_4ca350;
        case 0x4ca354u: goto label_4ca354;
        case 0x4ca358u: goto label_4ca358;
        case 0x4ca35cu: goto label_4ca35c;
        case 0x4ca360u: goto label_4ca360;
        case 0x4ca364u: goto label_4ca364;
        case 0x4ca368u: goto label_4ca368;
        case 0x4ca36cu: goto label_4ca36c;
        case 0x4ca370u: goto label_4ca370;
        case 0x4ca374u: goto label_4ca374;
        case 0x4ca378u: goto label_4ca378;
        case 0x4ca37cu: goto label_4ca37c;
        case 0x4ca380u: goto label_4ca380;
        case 0x4ca384u: goto label_4ca384;
        case 0x4ca388u: goto label_4ca388;
        case 0x4ca38cu: goto label_4ca38c;
        case 0x4ca390u: goto label_4ca390;
        case 0x4ca394u: goto label_4ca394;
        case 0x4ca398u: goto label_4ca398;
        case 0x4ca39cu: goto label_4ca39c;
        case 0x4ca3a0u: goto label_4ca3a0;
        case 0x4ca3a4u: goto label_4ca3a4;
        case 0x4ca3a8u: goto label_4ca3a8;
        case 0x4ca3acu: goto label_4ca3ac;
        case 0x4ca3b0u: goto label_4ca3b0;
        case 0x4ca3b4u: goto label_4ca3b4;
        case 0x4ca3b8u: goto label_4ca3b8;
        case 0x4ca3bcu: goto label_4ca3bc;
        case 0x4ca3c0u: goto label_4ca3c0;
        case 0x4ca3c4u: goto label_4ca3c4;
        case 0x4ca3c8u: goto label_4ca3c8;
        case 0x4ca3ccu: goto label_4ca3cc;
        case 0x4ca3d0u: goto label_4ca3d0;
        case 0x4ca3d4u: goto label_4ca3d4;
        case 0x4ca3d8u: goto label_4ca3d8;
        case 0x4ca3dcu: goto label_4ca3dc;
        case 0x4ca3e0u: goto label_4ca3e0;
        case 0x4ca3e4u: goto label_4ca3e4;
        case 0x4ca3e8u: goto label_4ca3e8;
        case 0x4ca3ecu: goto label_4ca3ec;
        case 0x4ca3f0u: goto label_4ca3f0;
        case 0x4ca3f4u: goto label_4ca3f4;
        case 0x4ca3f8u: goto label_4ca3f8;
        case 0x4ca3fcu: goto label_4ca3fc;
        case 0x4ca400u: goto label_4ca400;
        case 0x4ca404u: goto label_4ca404;
        case 0x4ca408u: goto label_4ca408;
        case 0x4ca40cu: goto label_4ca40c;
        case 0x4ca410u: goto label_4ca410;
        case 0x4ca414u: goto label_4ca414;
        case 0x4ca418u: goto label_4ca418;
        case 0x4ca41cu: goto label_4ca41c;
        case 0x4ca420u: goto label_4ca420;
        case 0x4ca424u: goto label_4ca424;
        case 0x4ca428u: goto label_4ca428;
        case 0x4ca42cu: goto label_4ca42c;
        case 0x4ca430u: goto label_4ca430;
        case 0x4ca434u: goto label_4ca434;
        case 0x4ca438u: goto label_4ca438;
        case 0x4ca43cu: goto label_4ca43c;
        case 0x4ca440u: goto label_4ca440;
        case 0x4ca444u: goto label_4ca444;
        case 0x4ca448u: goto label_4ca448;
        case 0x4ca44cu: goto label_4ca44c;
        case 0x4ca450u: goto label_4ca450;
        case 0x4ca454u: goto label_4ca454;
        case 0x4ca458u: goto label_4ca458;
        case 0x4ca45cu: goto label_4ca45c;
        case 0x4ca460u: goto label_4ca460;
        case 0x4ca464u: goto label_4ca464;
        case 0x4ca468u: goto label_4ca468;
        case 0x4ca46cu: goto label_4ca46c;
        case 0x4ca470u: goto label_4ca470;
        case 0x4ca474u: goto label_4ca474;
        case 0x4ca478u: goto label_4ca478;
        case 0x4ca47cu: goto label_4ca47c;
        case 0x4ca480u: goto label_4ca480;
        case 0x4ca484u: goto label_4ca484;
        case 0x4ca488u: goto label_4ca488;
        case 0x4ca48cu: goto label_4ca48c;
        case 0x4ca490u: goto label_4ca490;
        case 0x4ca494u: goto label_4ca494;
        case 0x4ca498u: goto label_4ca498;
        case 0x4ca49cu: goto label_4ca49c;
        case 0x4ca4a0u: goto label_4ca4a0;
        case 0x4ca4a4u: goto label_4ca4a4;
        case 0x4ca4a8u: goto label_4ca4a8;
        case 0x4ca4acu: goto label_4ca4ac;
        case 0x4ca4b0u: goto label_4ca4b0;
        case 0x4ca4b4u: goto label_4ca4b4;
        case 0x4ca4b8u: goto label_4ca4b8;
        case 0x4ca4bcu: goto label_4ca4bc;
        case 0x4ca4c0u: goto label_4ca4c0;
        case 0x4ca4c4u: goto label_4ca4c4;
        case 0x4ca4c8u: goto label_4ca4c8;
        case 0x4ca4ccu: goto label_4ca4cc;
        case 0x4ca4d0u: goto label_4ca4d0;
        case 0x4ca4d4u: goto label_4ca4d4;
        case 0x4ca4d8u: goto label_4ca4d8;
        case 0x4ca4dcu: goto label_4ca4dc;
        case 0x4ca4e0u: goto label_4ca4e0;
        case 0x4ca4e4u: goto label_4ca4e4;
        case 0x4ca4e8u: goto label_4ca4e8;
        case 0x4ca4ecu: goto label_4ca4ec;
        case 0x4ca4f0u: goto label_4ca4f0;
        case 0x4ca4f4u: goto label_4ca4f4;
        case 0x4ca4f8u: goto label_4ca4f8;
        case 0x4ca4fcu: goto label_4ca4fc;
        case 0x4ca500u: goto label_4ca500;
        case 0x4ca504u: goto label_4ca504;
        case 0x4ca508u: goto label_4ca508;
        case 0x4ca50cu: goto label_4ca50c;
        case 0x4ca510u: goto label_4ca510;
        case 0x4ca514u: goto label_4ca514;
        case 0x4ca518u: goto label_4ca518;
        case 0x4ca51cu: goto label_4ca51c;
        case 0x4ca520u: goto label_4ca520;
        case 0x4ca524u: goto label_4ca524;
        case 0x4ca528u: goto label_4ca528;
        case 0x4ca52cu: goto label_4ca52c;
        case 0x4ca530u: goto label_4ca530;
        case 0x4ca534u: goto label_4ca534;
        case 0x4ca538u: goto label_4ca538;
        case 0x4ca53cu: goto label_4ca53c;
        case 0x4ca540u: goto label_4ca540;
        case 0x4ca544u: goto label_4ca544;
        case 0x4ca548u: goto label_4ca548;
        case 0x4ca54cu: goto label_4ca54c;
        case 0x4ca550u: goto label_4ca550;
        case 0x4ca554u: goto label_4ca554;
        case 0x4ca558u: goto label_4ca558;
        case 0x4ca55cu: goto label_4ca55c;
        case 0x4ca560u: goto label_4ca560;
        case 0x4ca564u: goto label_4ca564;
        case 0x4ca568u: goto label_4ca568;
        case 0x4ca56cu: goto label_4ca56c;
        case 0x4ca570u: goto label_4ca570;
        case 0x4ca574u: goto label_4ca574;
        case 0x4ca578u: goto label_4ca578;
        case 0x4ca57cu: goto label_4ca57c;
        case 0x4ca580u: goto label_4ca580;
        case 0x4ca584u: goto label_4ca584;
        case 0x4ca588u: goto label_4ca588;
        case 0x4ca58cu: goto label_4ca58c;
        case 0x4ca590u: goto label_4ca590;
        case 0x4ca594u: goto label_4ca594;
        case 0x4ca598u: goto label_4ca598;
        case 0x4ca59cu: goto label_4ca59c;
        case 0x4ca5a0u: goto label_4ca5a0;
        case 0x4ca5a4u: goto label_4ca5a4;
        case 0x4ca5a8u: goto label_4ca5a8;
        case 0x4ca5acu: goto label_4ca5ac;
        case 0x4ca5b0u: goto label_4ca5b0;
        case 0x4ca5b4u: goto label_4ca5b4;
        case 0x4ca5b8u: goto label_4ca5b8;
        case 0x4ca5bcu: goto label_4ca5bc;
        case 0x4ca5c0u: goto label_4ca5c0;
        case 0x4ca5c4u: goto label_4ca5c4;
        case 0x4ca5c8u: goto label_4ca5c8;
        case 0x4ca5ccu: goto label_4ca5cc;
        case 0x4ca5d0u: goto label_4ca5d0;
        case 0x4ca5d4u: goto label_4ca5d4;
        case 0x4ca5d8u: goto label_4ca5d8;
        case 0x4ca5dcu: goto label_4ca5dc;
        case 0x4ca5e0u: goto label_4ca5e0;
        case 0x4ca5e4u: goto label_4ca5e4;
        case 0x4ca5e8u: goto label_4ca5e8;
        case 0x4ca5ecu: goto label_4ca5ec;
        case 0x4ca5f0u: goto label_4ca5f0;
        case 0x4ca5f4u: goto label_4ca5f4;
        case 0x4ca5f8u: goto label_4ca5f8;
        case 0x4ca5fcu: goto label_4ca5fc;
        case 0x4ca600u: goto label_4ca600;
        case 0x4ca604u: goto label_4ca604;
        case 0x4ca608u: goto label_4ca608;
        case 0x4ca60cu: goto label_4ca60c;
        case 0x4ca610u: goto label_4ca610;
        case 0x4ca614u: goto label_4ca614;
        case 0x4ca618u: goto label_4ca618;
        case 0x4ca61cu: goto label_4ca61c;
        case 0x4ca620u: goto label_4ca620;
        case 0x4ca624u: goto label_4ca624;
        case 0x4ca628u: goto label_4ca628;
        case 0x4ca62cu: goto label_4ca62c;
        case 0x4ca630u: goto label_4ca630;
        case 0x4ca634u: goto label_4ca634;
        case 0x4ca638u: goto label_4ca638;
        case 0x4ca63cu: goto label_4ca63c;
        case 0x4ca640u: goto label_4ca640;
        case 0x4ca644u: goto label_4ca644;
        case 0x4ca648u: goto label_4ca648;
        case 0x4ca64cu: goto label_4ca64c;
        case 0x4ca650u: goto label_4ca650;
        case 0x4ca654u: goto label_4ca654;
        case 0x4ca658u: goto label_4ca658;
        case 0x4ca65cu: goto label_4ca65c;
        case 0x4ca660u: goto label_4ca660;
        case 0x4ca664u: goto label_4ca664;
        case 0x4ca668u: goto label_4ca668;
        case 0x4ca66cu: goto label_4ca66c;
        case 0x4ca670u: goto label_4ca670;
        case 0x4ca674u: goto label_4ca674;
        case 0x4ca678u: goto label_4ca678;
        case 0x4ca67cu: goto label_4ca67c;
        case 0x4ca680u: goto label_4ca680;
        case 0x4ca684u: goto label_4ca684;
        case 0x4ca688u: goto label_4ca688;
        case 0x4ca68cu: goto label_4ca68c;
        case 0x4ca690u: goto label_4ca690;
        case 0x4ca694u: goto label_4ca694;
        case 0x4ca698u: goto label_4ca698;
        case 0x4ca69cu: goto label_4ca69c;
        case 0x4ca6a0u: goto label_4ca6a0;
        case 0x4ca6a4u: goto label_4ca6a4;
        case 0x4ca6a8u: goto label_4ca6a8;
        case 0x4ca6acu: goto label_4ca6ac;
        case 0x4ca6b0u: goto label_4ca6b0;
        case 0x4ca6b4u: goto label_4ca6b4;
        case 0x4ca6b8u: goto label_4ca6b8;
        case 0x4ca6bcu: goto label_4ca6bc;
        case 0x4ca6c0u: goto label_4ca6c0;
        case 0x4ca6c4u: goto label_4ca6c4;
        case 0x4ca6c8u: goto label_4ca6c8;
        case 0x4ca6ccu: goto label_4ca6cc;
        case 0x4ca6d0u: goto label_4ca6d0;
        case 0x4ca6d4u: goto label_4ca6d4;
        case 0x4ca6d8u: goto label_4ca6d8;
        case 0x4ca6dcu: goto label_4ca6dc;
        case 0x4ca6e0u: goto label_4ca6e0;
        case 0x4ca6e4u: goto label_4ca6e4;
        case 0x4ca6e8u: goto label_4ca6e8;
        case 0x4ca6ecu: goto label_4ca6ec;
        case 0x4ca6f0u: goto label_4ca6f0;
        case 0x4ca6f4u: goto label_4ca6f4;
        case 0x4ca6f8u: goto label_4ca6f8;
        case 0x4ca6fcu: goto label_4ca6fc;
        case 0x4ca700u: goto label_4ca700;
        case 0x4ca704u: goto label_4ca704;
        case 0x4ca708u: goto label_4ca708;
        case 0x4ca70cu: goto label_4ca70c;
        default: break;
    }

    ctx->pc = 0x4ca280u;

label_4ca280:
    // 0x4ca280: 0x3e00008  jr          $ra
label_4ca284:
    if (ctx->pc == 0x4CA284u) {
        ctx->pc = 0x4CA284u;
            // 0x4ca284: 0xa08500d0  sb          $a1, 0xD0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 208), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x4CA288u;
        goto label_4ca288;
    }
    ctx->pc = 0x4CA280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CA284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA280u;
            // 0x4ca284: 0xa08500d0  sb          $a1, 0xD0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 208), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CA288u;
label_4ca288:
    // 0x4ca288: 0x0  nop
    ctx->pc = 0x4ca288u;
    // NOP
label_4ca28c:
    // 0x4ca28c: 0x0  nop
    ctx->pc = 0x4ca28cu;
    // NOP
label_4ca290:
    // 0x4ca290: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ca290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4ca294:
    // 0x4ca294: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4ca294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4ca298:
    // 0x4ca298: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4ca298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4ca29c:
    // 0x4ca29c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4ca29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4ca2a0:
    // 0x4ca2a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ca2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4ca2a4:
    // 0x4ca2a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ca2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ca2a8:
    // 0x4ca2a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ca2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ca2ac:
    // 0x4ca2ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ca2acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ca2b0:
    // 0x4ca2b0: 0x9084001c  lbu         $a0, 0x1C($a0)
    ctx->pc = 0x4ca2b0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
label_4ca2b4:
    // 0x4ca2b4: 0x5083004b  beql        $a0, $v1, . + 4 + (0x4B << 2)
label_4ca2b8:
    if (ctx->pc == 0x4CA2B8u) {
        ctx->pc = 0x4CA2B8u;
            // 0x4ca2b8: 0x8e11007c  lw          $s1, 0x7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
        ctx->pc = 0x4CA2BCu;
        goto label_4ca2bc;
    }
    ctx->pc = 0x4CA2B4u;
    {
        const bool branch_taken_0x4ca2b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4ca2b4) {
            ctx->pc = 0x4CA2B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA2B4u;
            // 0x4ca2b8: 0x8e11007c  lw          $s1, 0x7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CA3E4u;
            goto label_4ca3e4;
        }
    }
    ctx->pc = 0x4CA2BCu;
label_4ca2bc:
    // 0x4ca2bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4ca2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4ca2c0:
    // 0x4ca2c0: 0x50830032  beql        $a0, $v1, . + 4 + (0x32 << 2)
label_4ca2c4:
    if (ctx->pc == 0x4CA2C4u) {
        ctx->pc = 0x4CA2C4u;
            // 0x4ca2c4: 0x8e19000c  lw          $t9, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x4CA2C8u;
        goto label_4ca2c8;
    }
    ctx->pc = 0x4CA2C0u;
    {
        const bool branch_taken_0x4ca2c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4ca2c0) {
            ctx->pc = 0x4CA2C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA2C0u;
            // 0x4ca2c4: 0x8e19000c  lw          $t9, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CA38Cu;
            goto label_4ca38c;
        }
    }
    ctx->pc = 0x4CA2C8u;
label_4ca2c8:
    // 0x4ca2c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4ca2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ca2cc:
    // 0x4ca2cc: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_4ca2d0:
    if (ctx->pc == 0x4CA2D0u) {
        ctx->pc = 0x4CA2D4u;
        goto label_4ca2d4;
    }
    ctx->pc = 0x4CA2CCu;
    {
        const bool branch_taken_0x4ca2cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4ca2cc) {
            ctx->pc = 0x4CA2DCu;
            goto label_4ca2dc;
        }
    }
    ctx->pc = 0x4CA2D4u;
label_4ca2d4:
    // 0x4ca2d4: 0x10000050  b           . + 4 + (0x50 << 2)
label_4ca2d8:
    if (ctx->pc == 0x4CA2D8u) {
        ctx->pc = 0x4CA2DCu;
        goto label_4ca2dc;
    }
    ctx->pc = 0x4CA2D4u;
    {
        const bool branch_taken_0x4ca2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ca2d4) {
            ctx->pc = 0x4CA418u;
            goto label_4ca418;
        }
    }
    ctx->pc = 0x4CA2DCu;
label_4ca2dc:
    // 0x4ca2dc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4ca2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4ca2e0:
    // 0x4ca2e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4ca2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ca2e4:
    // 0x4ca2e4: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4ca2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4ca2e8:
    // 0x4ca2e8: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x4ca2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_4ca2ec:
    // 0x4ca2ec: 0x1064004a  beq         $v1, $a0, . + 4 + (0x4A << 2)
label_4ca2f0:
    if (ctx->pc == 0x4CA2F0u) {
        ctx->pc = 0x4CA2F4u;
        goto label_4ca2f4;
    }
    ctx->pc = 0x4CA2ECu;
    {
        const bool branch_taken_0x4ca2ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x4ca2ec) {
            ctx->pc = 0x4CA418u;
            goto label_4ca418;
        }
    }
    ctx->pc = 0x4CA2F4u;
label_4ca2f4:
    // 0x4ca2f4: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4ca2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4ca2f8:
    // 0x4ca2f8: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x4ca2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_4ca2fc:
    // 0x4ca2fc: 0x8c6bc858  lw          $t3, -0x37A8($v1)
    ctx->pc = 0x4ca2fcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953048)));
label_4ca300:
    // 0x4ca300: 0x3c090063  lui         $t1, 0x63
    ctx->pc = 0x4ca300u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)99 << 16));
label_4ca304:
    // 0x4ca304: 0x3c080063  lui         $t0, 0x63
    ctx->pc = 0x4ca304u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)99 << 16));
label_4ca308:
    // 0x4ca308: 0x3c070063  lui         $a3, 0x63
    ctx->pc = 0x4ca308u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)99 << 16));
label_4ca30c:
    // 0x4ca30c: 0x3c060063  lui         $a2, 0x63
    ctx->pc = 0x4ca30cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)99 << 16));
label_4ca310:
    // 0x4ca310: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x4ca310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_4ca314:
    // 0x4ca314: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x4ca314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_4ca318:
    // 0x4ca318: 0x8c6a0120  lw          $t2, 0x120($v1)
    ctx->pc = 0x4ca318u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
label_4ca31c:
    // 0x4ca31c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x4ca31cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_4ca320:
    // 0x4ca320: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x4ca320u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
label_4ca324:
    // 0x4ca324: 0xac6a0120  sw          $t2, 0x120($v1)
    ctx->pc = 0x4ca324u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 288), GPR_U32(ctx, 10));
label_4ca328:
    // 0x4ca328: 0x8d2ac860  lw          $t2, -0x37A0($t1)
    ctx->pc = 0x4ca328u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294953056)));
label_4ca32c:
    // 0x4ca32c: 0x8c6901b0  lw          $t1, 0x1B0($v1)
    ctx->pc = 0x4ca32cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
label_4ca330:
    // 0x4ca330: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x4ca330u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
label_4ca334:
    // 0x4ca334: 0xac6901b0  sw          $t1, 0x1B0($v1)
    ctx->pc = 0x4ca334u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 432), GPR_U32(ctx, 9));
label_4ca338:
    // 0x4ca338: 0x8d09c868  lw          $t1, -0x3798($t0)
    ctx->pc = 0x4ca338u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294953064)));
label_4ca33c:
    // 0x4ca33c: 0x8c6802d0  lw          $t0, 0x2D0($v1)
    ctx->pc = 0x4ca33cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
label_4ca340:
    // 0x4ca340: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x4ca340u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_4ca344:
    // 0x4ca344: 0xac6802d0  sw          $t0, 0x2D0($v1)
    ctx->pc = 0x4ca344u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 720), GPR_U32(ctx, 8));
label_4ca348:
    // 0x4ca348: 0x8ce8c870  lw          $t0, -0x3790($a3)
    ctx->pc = 0x4ca348u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294953072)));
label_4ca34c:
    // 0x4ca34c: 0x8c670360  lw          $a3, 0x360($v1)
    ctx->pc = 0x4ca34cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 864)));
label_4ca350:
    // 0x4ca350: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x4ca350u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_4ca354:
    // 0x4ca354: 0xac670360  sw          $a3, 0x360($v1)
    ctx->pc = 0x4ca354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 864), GPR_U32(ctx, 7));
label_4ca358:
    // 0x4ca358: 0x8cc7c878  lw          $a3, -0x3788($a2)
    ctx->pc = 0x4ca358u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294953080)));
label_4ca35c:
    // 0x4ca35c: 0x8c6603f0  lw          $a2, 0x3F0($v1)
    ctx->pc = 0x4ca35cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1008)));
label_4ca360:
    // 0x4ca360: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x4ca360u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_4ca364:
    // 0x4ca364: 0xac6603f0  sw          $a2, 0x3F0($v1)
    ctx->pc = 0x4ca364u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1008), GPR_U32(ctx, 6));
label_4ca368:
    // 0x4ca368: 0x8ca6c880  lw          $a2, -0x3780($a1)
    ctx->pc = 0x4ca368u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294953088)));
label_4ca36c:
    // 0x4ca36c: 0x8c650480  lw          $a1, 0x480($v1)
    ctx->pc = 0x4ca36cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1152)));
label_4ca370:
    // 0x4ca370: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x4ca370u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_4ca374:
    // 0x4ca374: 0xac650480  sw          $a1, 0x480($v1)
    ctx->pc = 0x4ca374u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1152), GPR_U32(ctx, 5));
label_4ca378:
    // 0x4ca378: 0x8c85c888  lw          $a1, -0x3778($a0)
    ctx->pc = 0x4ca378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294953096)));
label_4ca37c:
    // 0x4ca37c: 0x8c640510  lw          $a0, 0x510($v1)
    ctx->pc = 0x4ca37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1296)));
label_4ca380:
    // 0x4ca380: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4ca380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_4ca384:
    // 0x4ca384: 0x10000024  b           . + 4 + (0x24 << 2)
label_4ca388:
    if (ctx->pc == 0x4CA388u) {
        ctx->pc = 0x4CA388u;
            // 0x4ca388: 0xac640510  sw          $a0, 0x510($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1296), GPR_U32(ctx, 4));
        ctx->pc = 0x4CA38Cu;
        goto label_4ca38c;
    }
    ctx->pc = 0x4CA384u;
    {
        const bool branch_taken_0x4ca384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CA388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA384u;
            // 0x4ca388: 0xac640510  sw          $a0, 0x510($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1296), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca384) {
            ctx->pc = 0x4CA418u;
            goto label_4ca418;
        }
    }
    ctx->pc = 0x4CA38Cu;
label_4ca38c:
    // 0x4ca38c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4ca38cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4ca390:
    // 0x4ca390: 0x320f809  jalr        $t9
label_4ca394:
    if (ctx->pc == 0x4CA394u) {
        ctx->pc = 0x4CA394u;
            // 0x4ca394: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->pc = 0x4CA398u;
        goto label_4ca398;
    }
    ctx->pc = 0x4CA390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CA398u);
        ctx->pc = 0x4CA394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA390u;
            // 0x4ca394: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CA398u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CA398u; }
            if (ctx->pc != 0x4CA398u) { return; }
        }
        }
    }
    ctx->pc = 0x4CA398u;
label_4ca398:
    // 0x4ca398: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x4ca398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_4ca39c:
    // 0x4ca39c: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x4ca39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_4ca3a0:
    // 0x4ca3a0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x4ca3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4ca3a4:
    // 0x4ca3a4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4ca3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ca3a8:
    // 0x4ca3a8: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x4ca3a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4ca3ac:
    // 0x4ca3ac: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x4ca3acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_4ca3b0:
    // 0x4ca3b0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4ca3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4ca3b4:
    // 0x4ca3b4: 0xc040140  jal         func_100500
label_4ca3b8:
    if (ctx->pc == 0x4CA3B8u) {
        ctx->pc = 0x4CA3B8u;
            // 0x4ca3b8: 0x238c0  sll         $a3, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x4CA3BCu;
        goto label_4ca3bc;
    }
    ctx->pc = 0x4CA3B4u;
    SET_GPR_U32(ctx, 31, 0x4CA3BCu);
    ctx->pc = 0x4CA3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA3B4u;
            // 0x4ca3b8: 0x238c0  sll         $a3, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA3BCu; }
        if (ctx->pc != 0x4CA3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA3BCu; }
        if (ctx->pc != 0x4CA3BCu) { return; }
    }
    ctx->pc = 0x4CA3BCu;
label_4ca3bc:
    // 0x4ca3bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ca3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ca3c0:
    // 0x4ca3c0: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_4ca3c4:
    if (ctx->pc == 0x4CA3C4u) {
        ctx->pc = 0x4CA3C4u;
            // 0x4ca3c4: 0xae0400c0  sw          $a0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 4));
        ctx->pc = 0x4CA3C8u;
        goto label_4ca3c8;
    }
    ctx->pc = 0x4CA3C0u;
    {
        const bool branch_taken_0x4ca3c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ca3c0) {
            ctx->pc = 0x4CA3C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA3C0u;
            // 0x4ca3c4: 0xae0400c0  sw          $a0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CA3E0u;
            goto label_4ca3e0;
        }
    }
    ctx->pc = 0x4CA3C8u;
label_4ca3c8:
    // 0x4ca3c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ca3c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ca3cc:
    // 0x4ca3cc: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x4ca3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_4ca3d0:
    // 0x4ca3d0: 0xc132d90  jal         func_4CB640
label_4ca3d4:
    if (ctx->pc == 0x4CA3D4u) {
        ctx->pc = 0x4CA3D4u;
            // 0x4ca3d4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4CA3D8u;
        goto label_4ca3d8;
    }
    ctx->pc = 0x4CA3D0u;
    SET_GPR_U32(ctx, 31, 0x4CA3D8u);
    ctx->pc = 0x4CA3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA3D0u;
            // 0x4ca3d4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CB640u;
    if (runtime->hasFunction(0x4CB640u)) {
        auto targetFn = runtime->lookupFunction(0x4CB640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA3D8u; }
        if (ctx->pc != 0x4CA3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004CB640_0x4cb640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA3D8u; }
        if (ctx->pc != 0x4CA3D8u) { return; }
    }
    ctx->pc = 0x4CA3D8u;
label_4ca3d8:
    // 0x4ca3d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ca3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ca3dc:
    // 0x4ca3dc: 0xae0400c0  sw          $a0, 0xC0($s0)
    ctx->pc = 0x4ca3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 4));
label_4ca3e0:
    // 0x4ca3e0: 0x8e11007c  lw          $s1, 0x7C($s0)
    ctx->pc = 0x4ca3e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_4ca3e4:
    // 0x4ca3e4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_4ca3e8:
    if (ctx->pc == 0x4CA3E8u) {
        ctx->pc = 0x4CA3ECu;
        goto label_4ca3ec;
    }
    ctx->pc = 0x4CA3E4u;
    {
        const bool branch_taken_0x4ca3e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ca3e4) {
            ctx->pc = 0x4CA418u;
            goto label_4ca418;
        }
    }
    ctx->pc = 0x4CA3ECu;
label_4ca3ec:
    // 0x4ca3ec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4ca3ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ca3f0:
    // 0x4ca3f0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4ca3f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ca3f4:
    // 0x4ca3f4: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x4ca3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_4ca3f8:
    // 0x4ca3f8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4ca3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4ca3fc:
    // 0x4ca3fc: 0xc0e3658  jal         func_38D960
label_4ca400:
    if (ctx->pc == 0x4CA400u) {
        ctx->pc = 0x4CA400u;
            // 0x4ca400: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4CA404u;
        goto label_4ca404;
    }
    ctx->pc = 0x4CA3FCu;
    SET_GPR_U32(ctx, 31, 0x4CA404u);
    ctx->pc = 0x4CA400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA3FCu;
            // 0x4ca400: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA404u; }
        if (ctx->pc != 0x4CA404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA404u; }
        if (ctx->pc != 0x4CA404u) { return; }
    }
    ctx->pc = 0x4CA404u;
label_4ca404:
    // 0x4ca404: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4ca404u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4ca408:
    // 0x4ca408: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4ca408u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4ca40c:
    // 0x4ca40c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_4ca410:
    if (ctx->pc == 0x4CA410u) {
        ctx->pc = 0x4CA410u;
            // 0x4ca410: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4CA414u;
        goto label_4ca414;
    }
    ctx->pc = 0x4CA40Cu;
    {
        const bool branch_taken_0x4ca40c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CA410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA40Cu;
            // 0x4ca410: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca40c) {
            ctx->pc = 0x4CA3F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ca3f4;
        }
    }
    ctx->pc = 0x4CA414u;
label_4ca414:
    // 0x4ca414: 0x0  nop
    ctx->pc = 0x4ca414u;
    // NOP
label_4ca418:
    // 0x4ca418: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4ca418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4ca41c:
    // 0x4ca41c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4ca41cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ca420:
    // 0x4ca420: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ca420u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ca424:
    // 0x4ca424: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ca424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ca428:
    // 0x4ca428: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ca428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ca42c:
    // 0x4ca42c: 0x3e00008  jr          $ra
label_4ca430:
    if (ctx->pc == 0x4CA430u) {
        ctx->pc = 0x4CA430u;
            // 0x4ca430: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4CA434u;
        goto label_4ca434;
    }
    ctx->pc = 0x4CA42Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CA430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA42Cu;
            // 0x4ca430: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CA434u;
label_4ca434:
    // 0x4ca434: 0x0  nop
    ctx->pc = 0x4ca434u;
    // NOP
label_4ca438:
    // 0x4ca438: 0x0  nop
    ctx->pc = 0x4ca438u;
    // NOP
label_4ca43c:
    // 0x4ca43c: 0x0  nop
    ctx->pc = 0x4ca43cu;
    // NOP
label_4ca440:
    // 0x4ca440: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ca440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4ca444:
    // 0x4ca444: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4ca444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4ca448:
    // 0x4ca448: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4ca448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4ca44c:
    // 0x4ca44c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ca44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4ca450:
    // 0x4ca450: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ca450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ca454:
    // 0x4ca454: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ca454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ca458:
    // 0x4ca458: 0x8c90007c  lw          $s0, 0x7C($a0)
    ctx->pc = 0x4ca458u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4ca45c:
    // 0x4ca45c: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_4ca460:
    if (ctx->pc == 0x4CA460u) {
        ctx->pc = 0x4CA460u;
            // 0x4ca460: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CA464u;
        goto label_4ca464;
    }
    ctx->pc = 0x4CA45Cu;
    {
        const bool branch_taken_0x4ca45c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CA460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA45Cu;
            // 0x4ca460: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca45c) {
            ctx->pc = 0x4CA49Cu;
            goto label_4ca49c;
        }
    }
    ctx->pc = 0x4CA464u;
label_4ca464:
    // 0x4ca464: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4ca464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ca468:
    // 0x4ca468: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4ca468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ca46c:
    // 0x4ca46c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4ca46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_4ca470:
    // 0x4ca470: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4ca470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4ca474:
    // 0x4ca474: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4ca474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4ca478:
    // 0x4ca478: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ca478u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ca47c:
    // 0x4ca47c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4ca47cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4ca480:
    // 0x4ca480: 0x320f809  jalr        $t9
label_4ca484:
    if (ctx->pc == 0x4CA484u) {
        ctx->pc = 0x4CA488u;
        goto label_4ca488;
    }
    ctx->pc = 0x4CA480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CA488u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CA488u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CA488u; }
            if (ctx->pc != 0x4CA488u) { return; }
        }
        }
    }
    ctx->pc = 0x4CA488u;
label_4ca488:
    // 0x4ca488: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4ca488u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4ca48c:
    // 0x4ca48c: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x4ca48cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4ca490:
    // 0x4ca490: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4ca494:
    if (ctx->pc == 0x4CA494u) {
        ctx->pc = 0x4CA494u;
            // 0x4ca494: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4CA498u;
        goto label_4ca498;
    }
    ctx->pc = 0x4CA490u;
    {
        const bool branch_taken_0x4ca490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CA494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA490u;
            // 0x4ca494: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca490) {
            ctx->pc = 0x4CA46Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ca46c;
        }
    }
    ctx->pc = 0x4CA498u;
label_4ca498:
    // 0x4ca498: 0xae6000c4  sw          $zero, 0xC4($s3)
    ctx->pc = 0x4ca498u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 0));
label_4ca49c:
    // 0x4ca49c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4ca49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4ca4a0:
    // 0x4ca4a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4ca4a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ca4a4:
    // 0x4ca4a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ca4a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ca4a8:
    // 0x4ca4a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ca4a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ca4ac:
    // 0x4ca4ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ca4acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ca4b0:
    // 0x4ca4b0: 0x3e00008  jr          $ra
label_4ca4b4:
    if (ctx->pc == 0x4CA4B4u) {
        ctx->pc = 0x4CA4B4u;
            // 0x4ca4b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4CA4B8u;
        goto label_4ca4b8;
    }
    ctx->pc = 0x4CA4B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CA4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA4B0u;
            // 0x4ca4b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CA4B8u;
label_4ca4b8:
    // 0x4ca4b8: 0x0  nop
    ctx->pc = 0x4ca4b8u;
    // NOP
label_4ca4bc:
    // 0x4ca4bc: 0x0  nop
    ctx->pc = 0x4ca4bcu;
    // NOP
label_4ca4c0:
    // 0x4ca4c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ca4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4ca4c4:
    // 0x4ca4c4: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x4ca4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_4ca4c8:
    // 0x4ca4c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ca4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4ca4cc:
    // 0x4ca4cc: 0x34430020  ori         $v1, $v0, 0x20
    ctx->pc = 0x4ca4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_4ca4d0:
    // 0x4ca4d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ca4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ca4d4:
    // 0x4ca4d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ca4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ca4d8:
    // 0x4ca4d8: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x4ca4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4ca4dc:
    // 0x4ca4dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ca4dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ca4e0:
    // 0x4ca4e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4ca4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ca4e4:
    // 0x4ca4e4: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x4ca4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_4ca4e8:
    // 0x4ca4e8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4ca4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4ca4ec:
    // 0x4ca4ec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4ca4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4ca4f0:
    // 0x4ca4f0: 0xc08bff0  jal         func_22FFC0
label_4ca4f4:
    if (ctx->pc == 0x4CA4F4u) {
        ctx->pc = 0x4CA4F4u;
            // 0x4ca4f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CA4F8u;
        goto label_4ca4f8;
    }
    ctx->pc = 0x4CA4F0u;
    SET_GPR_U32(ctx, 31, 0x4CA4F8u);
    ctx->pc = 0x4CA4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA4F0u;
            // 0x4ca4f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA4F8u; }
        if (ctx->pc != 0x4CA4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA4F8u; }
        if (ctx->pc != 0x4CA4F8u) { return; }
    }
    ctx->pc = 0x4CA4F8u;
label_4ca4f8:
    // 0x4ca4f8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4ca4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4ca4fc:
    // 0x4ca4fc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4ca4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4ca500:
    // 0x4ca500: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4ca500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ca504:
    // 0x4ca504: 0xc08914c  jal         func_224530
label_4ca508:
    if (ctx->pc == 0x4CA508u) {
        ctx->pc = 0x4CA508u;
            // 0x4ca508: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CA50Cu;
        goto label_4ca50c;
    }
    ctx->pc = 0x4CA504u;
    SET_GPR_U32(ctx, 31, 0x4CA50Cu);
    ctx->pc = 0x4CA508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA504u;
            // 0x4ca508: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA50Cu; }
        if (ctx->pc != 0x4CA50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA50Cu; }
        if (ctx->pc != 0x4CA50Cu) { return; }
    }
    ctx->pc = 0x4CA50Cu;
label_4ca50c:
    // 0x4ca50c: 0xc0e393c  jal         func_38E4F0
label_4ca510:
    if (ctx->pc == 0x4CA510u) {
        ctx->pc = 0x4CA510u;
            // 0x4ca510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CA514u;
        goto label_4ca514;
    }
    ctx->pc = 0x4CA50Cu;
    SET_GPR_U32(ctx, 31, 0x4CA514u);
    ctx->pc = 0x4CA510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA50Cu;
            // 0x4ca510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA514u; }
        if (ctx->pc != 0x4CA514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA514u; }
        if (ctx->pc != 0x4CA514u) { return; }
    }
    ctx->pc = 0x4CA514u;
label_4ca514:
    // 0x4ca514: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x4ca514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_4ca518:
    // 0x4ca518: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x4ca518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_4ca51c:
    // 0x4ca51c: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x4ca51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
label_4ca520:
    // 0x4ca520: 0x54600015  bnel        $v1, $zero, . + 4 + (0x15 << 2)
label_4ca524:
    if (ctx->pc == 0x4CA524u) {
        ctx->pc = 0x4CA524u;
            // 0x4ca524: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4CA528u;
        goto label_4ca528;
    }
    ctx->pc = 0x4CA520u;
    {
        const bool branch_taken_0x4ca520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ca520) {
            ctx->pc = 0x4CA524u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA520u;
            // 0x4ca524: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CA578u;
            goto label_4ca578;
        }
    }
    ctx->pc = 0x4CA528u;
label_4ca528:
    // 0x4ca528: 0xc040180  jal         func_100600
label_4ca52c:
    if (ctx->pc == 0x4CA52Cu) {
        ctx->pc = 0x4CA52Cu;
            // 0x4ca52c: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->pc = 0x4CA530u;
        goto label_4ca530;
    }
    ctx->pc = 0x4CA528u;
    SET_GPR_U32(ctx, 31, 0x4CA530u);
    ctx->pc = 0x4CA52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA528u;
            // 0x4ca52c: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA530u; }
        if (ctx->pc != 0x4CA530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA530u; }
        if (ctx->pc != 0x4CA530u) { return; }
    }
    ctx->pc = 0x4CA530u;
label_4ca530:
    // 0x4ca530: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ca530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ca534:
    // 0x4ca534: 0x5080000f  beql        $a0, $zero, . + 4 + (0xF << 2)
label_4ca538:
    if (ctx->pc == 0x4CA538u) {
        ctx->pc = 0x4CA538u;
            // 0x4ca538: 0xae040130  sw          $a0, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 4));
        ctx->pc = 0x4CA53Cu;
        goto label_4ca53c;
    }
    ctx->pc = 0x4CA534u;
    {
        const bool branch_taken_0x4ca534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ca534) {
            ctx->pc = 0x4CA538u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA534u;
            // 0x4ca538: 0xae040130  sw          $a0, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CA574u;
            goto label_4ca574;
        }
    }
    ctx->pc = 0x4CA53Cu;
label_4ca53c:
    // 0x4ca53c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ca53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ca540:
    // 0x4ca540: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x4ca540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_4ca544:
    // 0x4ca544: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4ca544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4ca548:
    // 0x4ca548: 0x3465ac0a  ori         $a1, $v1, 0xAC0A
    ctx->pc = 0x4ca548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44042);
label_4ca54c:
    // 0x4ca54c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4ca54cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4ca550:
    // 0x4ca550: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4ca550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4ca554:
    // 0x4ca554: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x4ca554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4ca558:
    // 0x4ca558: 0x26090010  addiu       $t1, $s0, 0x10
    ctx->pc = 0x4ca558u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4ca55c:
    // 0x4ca55c: 0x24470718  addiu       $a3, $v0, 0x718
    ctx->pc = 0x4ca55cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1816));
label_4ca560:
    // 0x4ca560: 0x260a00f0  addiu       $t2, $s0, 0xF0
    ctx->pc = 0x4ca560u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_4ca564:
    // 0x4ca564: 0xc13d944  jal         func_4F6510
label_4ca568:
    if (ctx->pc == 0x4CA568u) {
        ctx->pc = 0x4CA568u;
            // 0x4ca568: 0x240b0004  addiu       $t3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4CA56Cu;
        goto label_4ca56c;
    }
    ctx->pc = 0x4CA564u;
    SET_GPR_U32(ctx, 31, 0x4CA56Cu);
    ctx->pc = 0x4CA568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA564u;
            // 0x4ca568: 0x240b0004  addiu       $t3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F6510u;
    if (runtime->hasFunction(0x4F6510u)) {
        auto targetFn = runtime->lookupFunction(0x4F6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA56Cu; }
        if (ctx->pc != 0x4CA56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F6510_0x4f6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA56Cu; }
        if (ctx->pc != 0x4CA56Cu) { return; }
    }
    ctx->pc = 0x4CA56Cu;
label_4ca56c:
    // 0x4ca56c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ca56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ca570:
    // 0x4ca570: 0xae040130  sw          $a0, 0x130($s0)
    ctx->pc = 0x4ca570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 4));
label_4ca574:
    // 0x4ca574: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ca574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4ca578:
    // 0x4ca578: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ca578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ca57c:
    // 0x4ca57c: 0x3e00008  jr          $ra
label_4ca580:
    if (ctx->pc == 0x4CA580u) {
        ctx->pc = 0x4CA580u;
            // 0x4ca580: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4CA584u;
        goto label_4ca584;
    }
    ctx->pc = 0x4CA57Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CA580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA57Cu;
            // 0x4ca580: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CA584u;
label_4ca584:
    // 0x4ca584: 0x0  nop
    ctx->pc = 0x4ca584u;
    // NOP
label_4ca588:
    // 0x4ca588: 0x0  nop
    ctx->pc = 0x4ca588u;
    // NOP
label_4ca58c:
    // 0x4ca58c: 0x0  nop
    ctx->pc = 0x4ca58cu;
    // NOP
label_4ca590:
    // 0x4ca590: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ca590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4ca594:
    // 0x4ca594: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4ca594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4ca598:
    // 0x4ca598: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ca598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4ca59c:
    // 0x4ca59c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ca59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ca5a0:
    // 0x4ca5a0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4ca5a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ca5a4:
    // 0x4ca5a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ca5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ca5a8:
    // 0x4ca5a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4ca5a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ca5ac:
    // 0x4ca5ac: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x4ca5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_4ca5b0:
    // 0x4ca5b0: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
label_4ca5b4:
    if (ctx->pc == 0x4CA5B4u) {
        ctx->pc = 0x4CA5B4u;
            // 0x4ca5b4: 0x24b10090  addiu       $s1, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->pc = 0x4CA5B8u;
        goto label_4ca5b8;
    }
    ctx->pc = 0x4CA5B0u;
    {
        const bool branch_taken_0x4ca5b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CA5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA5B0u;
            // 0x4ca5b4: 0x24b10090  addiu       $s1, $a1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca5b0) {
            ctx->pc = 0x4CA6F8u;
            goto label_4ca6f8;
        }
    }
    ctx->pc = 0x4CA5B8u;
label_4ca5b8:
    // 0x4ca5b8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4ca5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4ca5bc:
    // 0x4ca5bc: 0xaca20060  sw          $v0, 0x60($a1)
    ctx->pc = 0x4ca5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 2));
label_4ca5c0:
    // 0x4ca5c0: 0x8cb9000c  lw          $t9, 0xC($a1)
    ctx->pc = 0x4ca5c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_4ca5c4:
    // 0x4ca5c4: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4ca5c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4ca5c8:
    // 0x4ca5c8: 0x320f809  jalr        $t9
label_4ca5cc:
    if (ctx->pc == 0x4CA5CCu) {
        ctx->pc = 0x4CA5CCu;
            // 0x4ca5cc: 0x24a4000c  addiu       $a0, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->pc = 0x4CA5D0u;
        goto label_4ca5d0;
    }
    ctx->pc = 0x4CA5C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CA5D0u);
        ctx->pc = 0x4CA5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA5C8u;
            // 0x4ca5cc: 0x24a4000c  addiu       $a0, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CA5D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CA5D0u; }
            if (ctx->pc != 0x4CA5D0u) { return; }
        }
        }
    }
    ctx->pc = 0x4CA5D0u;
label_4ca5d0:
    // 0x4ca5d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ca5d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ca5d4:
    // 0x4ca5d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ca5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ca5d8:
    // 0x4ca5d8: 0xc075128  jal         func_1D44A0
label_4ca5dc:
    if (ctx->pc == 0x4CA5DCu) {
        ctx->pc = 0x4CA5DCu;
            // 0x4ca5dc: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4CA5E0u;
        goto label_4ca5e0;
    }
    ctx->pc = 0x4CA5D8u;
    SET_GPR_U32(ctx, 31, 0x4CA5E0u);
    ctx->pc = 0x4CA5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA5D8u;
            // 0x4ca5dc: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA5E0u; }
        if (ctx->pc != 0x4CA5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA5E0u; }
        if (ctx->pc != 0x4CA5E0u) { return; }
    }
    ctx->pc = 0x4CA5E0u;
label_4ca5e0:
    // 0x4ca5e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4ca5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4ca5e4:
    // 0x4ca5e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ca5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ca5e8:
    // 0x4ca5e8: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4ca5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4ca5ec:
    // 0x4ca5ec: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4ca5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4ca5f0:
    // 0x4ca5f0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4ca5f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4ca5f4:
    // 0x4ca5f4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4ca5f8:
    if (ctx->pc == 0x4CA5F8u) {
        ctx->pc = 0x4CA5F8u;
            // 0x4ca5f8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x4CA5FCu;
        goto label_4ca5fc;
    }
    ctx->pc = 0x4CA5F4u;
    {
        const bool branch_taken_0x4ca5f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ca5f4) {
            ctx->pc = 0x4CA5F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA5F4u;
            // 0x4ca5f8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CA608u;
            goto label_4ca608;
        }
    }
    ctx->pc = 0x4CA5FCu;
label_4ca5fc:
    // 0x4ca5fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ca5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ca600:
    // 0x4ca600: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4ca600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4ca604:
    // 0x4ca604: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4ca604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4ca608:
    // 0x4ca608: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ca608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ca60c:
    // 0x4ca60c: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4ca60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4ca610:
    // 0x4ca610: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4ca610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4ca614:
    // 0x4ca614: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4ca614u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4ca618:
    // 0x4ca618: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4ca61c:
    if (ctx->pc == 0x4CA61Cu) {
        ctx->pc = 0x4CA61Cu;
            // 0x4ca61c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x4CA620u;
        goto label_4ca620;
    }
    ctx->pc = 0x4CA618u;
    {
        const bool branch_taken_0x4ca618 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ca618) {
            ctx->pc = 0x4CA61Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA618u;
            // 0x4ca61c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CA62Cu;
            goto label_4ca62c;
        }
    }
    ctx->pc = 0x4CA620u;
label_4ca620:
    // 0x4ca620: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ca620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ca624:
    // 0x4ca624: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4ca624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4ca628:
    // 0x4ca628: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4ca628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4ca62c:
    // 0x4ca62c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ca62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ca630:
    // 0x4ca630: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4ca630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4ca634:
    // 0x4ca634: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4ca634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4ca638:
    // 0x4ca638: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4ca638u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4ca63c:
    // 0x4ca63c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4ca640:
    if (ctx->pc == 0x4CA640u) {
        ctx->pc = 0x4CA640u;
            // 0x4ca640: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x4CA644u;
        goto label_4ca644;
    }
    ctx->pc = 0x4CA63Cu;
    {
        const bool branch_taken_0x4ca63c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ca63c) {
            ctx->pc = 0x4CA640u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA63Cu;
            // 0x4ca640: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CA650u;
            goto label_4ca650;
        }
    }
    ctx->pc = 0x4CA644u;
label_4ca644:
    // 0x4ca644: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ca644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ca648:
    // 0x4ca648: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4ca648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4ca64c:
    // 0x4ca64c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4ca64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4ca650:
    // 0x4ca650: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ca650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ca654:
    // 0x4ca654: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4ca654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4ca658:
    // 0x4ca658: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4ca658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4ca65c:
    // 0x4ca65c: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x4ca65cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4ca660:
    // 0x4ca660: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4ca660u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4ca664:
    // 0x4ca664: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4ca668:
    if (ctx->pc == 0x4CA668u) {
        ctx->pc = 0x4CA668u;
            // 0x4ca668: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x4CA66Cu;
        goto label_4ca66c;
    }
    ctx->pc = 0x4CA664u;
    {
        const bool branch_taken_0x4ca664 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ca664) {
            ctx->pc = 0x4CA668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA664u;
            // 0x4ca668: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CA678u;
            goto label_4ca678;
        }
    }
    ctx->pc = 0x4CA66Cu;
label_4ca66c:
    // 0x4ca66c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ca66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ca670:
    // 0x4ca670: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4ca670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4ca674:
    // 0x4ca674: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4ca674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4ca678:
    // 0x4ca678: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ca678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ca67c:
    // 0x4ca67c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4ca67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4ca680:
    // 0x4ca680: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4ca680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4ca684:
    // 0x4ca684: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x4ca684u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4ca688:
    // 0x4ca688: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4ca688u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4ca68c:
    // 0x4ca68c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4ca690:
    if (ctx->pc == 0x4CA690u) {
        ctx->pc = 0x4CA694u;
        goto label_4ca694;
    }
    ctx->pc = 0x4CA68Cu;
    {
        const bool branch_taken_0x4ca68c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ca68c) {
            ctx->pc = 0x4CA69Cu;
            goto label_4ca69c;
        }
    }
    ctx->pc = 0x4CA694u;
label_4ca694:
    // 0x4ca694: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ca694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ca698:
    // 0x4ca698: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4ca698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4ca69c:
    // 0x4ca69c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ca69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ca6a0:
    // 0x4ca6a0: 0x8c42e3c8  lw          $v0, -0x1C38($v0)
    ctx->pc = 0x4ca6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960072)));
label_4ca6a4:
    // 0x4ca6a4: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x4ca6a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4ca6a8:
    // 0x4ca6a8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4ca6ac:
    if (ctx->pc == 0x4CA6ACu) {
        ctx->pc = 0x4CA6B0u;
        goto label_4ca6b0;
    }
    ctx->pc = 0x4CA6A8u;
    {
        const bool branch_taken_0x4ca6a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ca6a8) {
            ctx->pc = 0x4CA6B8u;
            goto label_4ca6b8;
        }
    }
    ctx->pc = 0x4CA6B0u;
label_4ca6b0:
    // 0x4ca6b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ca6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ca6b4:
    // 0x4ca6b4: 0xac50e3c8  sw          $s0, -0x1C38($v0)
    ctx->pc = 0x4ca6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960072), GPR_U32(ctx, 16));
label_4ca6b8:
    // 0x4ca6b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ca6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ca6bc:
    // 0x4ca6bc: 0x8c42e3d0  lw          $v0, -0x1C30($v0)
    ctx->pc = 0x4ca6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960080)));
label_4ca6c0:
    // 0x4ca6c0: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x4ca6c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4ca6c4:
    // 0x4ca6c4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4ca6c8:
    if (ctx->pc == 0x4CA6C8u) {
        ctx->pc = 0x4CA6C8u;
            // 0x4ca6c8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x4CA6CCu;
        goto label_4ca6cc;
    }
    ctx->pc = 0x4CA6C4u;
    {
        const bool branch_taken_0x4ca6c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ca6c4) {
            ctx->pc = 0x4CA6C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA6C4u;
            // 0x4ca6c8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CA6D8u;
            goto label_4ca6d8;
        }
    }
    ctx->pc = 0x4CA6CCu;
label_4ca6cc:
    // 0x4ca6cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4ca6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4ca6d0:
    // 0x4ca6d0: 0xac50e3d0  sw          $s0, -0x1C30($v0)
    ctx->pc = 0x4ca6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960080), GPR_U32(ctx, 16));
label_4ca6d4:
    // 0x4ca6d4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4ca6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4ca6d8:
    // 0x4ca6d8: 0x26240024  addiu       $a0, $s1, 0x24
    ctx->pc = 0x4ca6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
label_4ca6dc:
    // 0x4ca6dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ca6dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ca6e0:
    // 0x4ca6e0: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x4ca6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_4ca6e4:
    // 0x4ca6e4: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x4ca6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_4ca6e8:
    // 0x4ca6e8: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x4ca6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_4ca6ec:
    // 0x4ca6ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4ca6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4ca6f0:
    // 0x4ca6f0: 0xc0751b8  jal         func_1D46E0
label_4ca6f4:
    if (ctx->pc == 0x4CA6F4u) {
        ctx->pc = 0x4CA6F4u;
            // 0x4ca6f4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4CA6F8u;
        goto label_4ca6f8;
    }
    ctx->pc = 0x4CA6F0u;
    SET_GPR_U32(ctx, 31, 0x4CA6F8u);
    ctx->pc = 0x4CA6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA6F0u;
            // 0x4ca6f4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA6F8u; }
        if (ctx->pc != 0x4CA6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CA6F8u; }
        if (ctx->pc != 0x4CA6F8u) { return; }
    }
    ctx->pc = 0x4CA6F8u;
label_4ca6f8:
    // 0x4ca6f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4ca6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4ca6fc:
    // 0x4ca6fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ca6fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ca700:
    // 0x4ca700: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ca700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ca704:
    // 0x4ca704: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ca704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ca708:
    // 0x4ca708: 0x3e00008  jr          $ra
label_4ca70c:
    if (ctx->pc == 0x4CA70Cu) {
        ctx->pc = 0x4CA70Cu;
            // 0x4ca70c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4CA710u;
        goto label_fallthrough_0x4ca708;
    }
    ctx->pc = 0x4CA708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CA70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA708u;
            // 0x4ca70c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4ca708:
    ctx->pc = 0x4CA710u;
}
