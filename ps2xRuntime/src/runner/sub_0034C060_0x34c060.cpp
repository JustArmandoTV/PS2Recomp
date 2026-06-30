#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034C060
// Address: 0x34c060 - 0x34c5a0
void sub_0034C060_0x34c060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034C060_0x34c060");
#endif

    switch (ctx->pc) {
        case 0x34c060u: goto label_34c060;
        case 0x34c064u: goto label_34c064;
        case 0x34c068u: goto label_34c068;
        case 0x34c06cu: goto label_34c06c;
        case 0x34c070u: goto label_34c070;
        case 0x34c074u: goto label_34c074;
        case 0x34c078u: goto label_34c078;
        case 0x34c07cu: goto label_34c07c;
        case 0x34c080u: goto label_34c080;
        case 0x34c084u: goto label_34c084;
        case 0x34c088u: goto label_34c088;
        case 0x34c08cu: goto label_34c08c;
        case 0x34c090u: goto label_34c090;
        case 0x34c094u: goto label_34c094;
        case 0x34c098u: goto label_34c098;
        case 0x34c09cu: goto label_34c09c;
        case 0x34c0a0u: goto label_34c0a0;
        case 0x34c0a4u: goto label_34c0a4;
        case 0x34c0a8u: goto label_34c0a8;
        case 0x34c0acu: goto label_34c0ac;
        case 0x34c0b0u: goto label_34c0b0;
        case 0x34c0b4u: goto label_34c0b4;
        case 0x34c0b8u: goto label_34c0b8;
        case 0x34c0bcu: goto label_34c0bc;
        case 0x34c0c0u: goto label_34c0c0;
        case 0x34c0c4u: goto label_34c0c4;
        case 0x34c0c8u: goto label_34c0c8;
        case 0x34c0ccu: goto label_34c0cc;
        case 0x34c0d0u: goto label_34c0d0;
        case 0x34c0d4u: goto label_34c0d4;
        case 0x34c0d8u: goto label_34c0d8;
        case 0x34c0dcu: goto label_34c0dc;
        case 0x34c0e0u: goto label_34c0e0;
        case 0x34c0e4u: goto label_34c0e4;
        case 0x34c0e8u: goto label_34c0e8;
        case 0x34c0ecu: goto label_34c0ec;
        case 0x34c0f0u: goto label_34c0f0;
        case 0x34c0f4u: goto label_34c0f4;
        case 0x34c0f8u: goto label_34c0f8;
        case 0x34c0fcu: goto label_34c0fc;
        case 0x34c100u: goto label_34c100;
        case 0x34c104u: goto label_34c104;
        case 0x34c108u: goto label_34c108;
        case 0x34c10cu: goto label_34c10c;
        case 0x34c110u: goto label_34c110;
        case 0x34c114u: goto label_34c114;
        case 0x34c118u: goto label_34c118;
        case 0x34c11cu: goto label_34c11c;
        case 0x34c120u: goto label_34c120;
        case 0x34c124u: goto label_34c124;
        case 0x34c128u: goto label_34c128;
        case 0x34c12cu: goto label_34c12c;
        case 0x34c130u: goto label_34c130;
        case 0x34c134u: goto label_34c134;
        case 0x34c138u: goto label_34c138;
        case 0x34c13cu: goto label_34c13c;
        case 0x34c140u: goto label_34c140;
        case 0x34c144u: goto label_34c144;
        case 0x34c148u: goto label_34c148;
        case 0x34c14cu: goto label_34c14c;
        case 0x34c150u: goto label_34c150;
        case 0x34c154u: goto label_34c154;
        case 0x34c158u: goto label_34c158;
        case 0x34c15cu: goto label_34c15c;
        case 0x34c160u: goto label_34c160;
        case 0x34c164u: goto label_34c164;
        case 0x34c168u: goto label_34c168;
        case 0x34c16cu: goto label_34c16c;
        case 0x34c170u: goto label_34c170;
        case 0x34c174u: goto label_34c174;
        case 0x34c178u: goto label_34c178;
        case 0x34c17cu: goto label_34c17c;
        case 0x34c180u: goto label_34c180;
        case 0x34c184u: goto label_34c184;
        case 0x34c188u: goto label_34c188;
        case 0x34c18cu: goto label_34c18c;
        case 0x34c190u: goto label_34c190;
        case 0x34c194u: goto label_34c194;
        case 0x34c198u: goto label_34c198;
        case 0x34c19cu: goto label_34c19c;
        case 0x34c1a0u: goto label_34c1a0;
        case 0x34c1a4u: goto label_34c1a4;
        case 0x34c1a8u: goto label_34c1a8;
        case 0x34c1acu: goto label_34c1ac;
        case 0x34c1b0u: goto label_34c1b0;
        case 0x34c1b4u: goto label_34c1b4;
        case 0x34c1b8u: goto label_34c1b8;
        case 0x34c1bcu: goto label_34c1bc;
        case 0x34c1c0u: goto label_34c1c0;
        case 0x34c1c4u: goto label_34c1c4;
        case 0x34c1c8u: goto label_34c1c8;
        case 0x34c1ccu: goto label_34c1cc;
        case 0x34c1d0u: goto label_34c1d0;
        case 0x34c1d4u: goto label_34c1d4;
        case 0x34c1d8u: goto label_34c1d8;
        case 0x34c1dcu: goto label_34c1dc;
        case 0x34c1e0u: goto label_34c1e0;
        case 0x34c1e4u: goto label_34c1e4;
        case 0x34c1e8u: goto label_34c1e8;
        case 0x34c1ecu: goto label_34c1ec;
        case 0x34c1f0u: goto label_34c1f0;
        case 0x34c1f4u: goto label_34c1f4;
        case 0x34c1f8u: goto label_34c1f8;
        case 0x34c1fcu: goto label_34c1fc;
        case 0x34c200u: goto label_34c200;
        case 0x34c204u: goto label_34c204;
        case 0x34c208u: goto label_34c208;
        case 0x34c20cu: goto label_34c20c;
        case 0x34c210u: goto label_34c210;
        case 0x34c214u: goto label_34c214;
        case 0x34c218u: goto label_34c218;
        case 0x34c21cu: goto label_34c21c;
        case 0x34c220u: goto label_34c220;
        case 0x34c224u: goto label_34c224;
        case 0x34c228u: goto label_34c228;
        case 0x34c22cu: goto label_34c22c;
        case 0x34c230u: goto label_34c230;
        case 0x34c234u: goto label_34c234;
        case 0x34c238u: goto label_34c238;
        case 0x34c23cu: goto label_34c23c;
        case 0x34c240u: goto label_34c240;
        case 0x34c244u: goto label_34c244;
        case 0x34c248u: goto label_34c248;
        case 0x34c24cu: goto label_34c24c;
        case 0x34c250u: goto label_34c250;
        case 0x34c254u: goto label_34c254;
        case 0x34c258u: goto label_34c258;
        case 0x34c25cu: goto label_34c25c;
        case 0x34c260u: goto label_34c260;
        case 0x34c264u: goto label_34c264;
        case 0x34c268u: goto label_34c268;
        case 0x34c26cu: goto label_34c26c;
        case 0x34c270u: goto label_34c270;
        case 0x34c274u: goto label_34c274;
        case 0x34c278u: goto label_34c278;
        case 0x34c27cu: goto label_34c27c;
        case 0x34c280u: goto label_34c280;
        case 0x34c284u: goto label_34c284;
        case 0x34c288u: goto label_34c288;
        case 0x34c28cu: goto label_34c28c;
        case 0x34c290u: goto label_34c290;
        case 0x34c294u: goto label_34c294;
        case 0x34c298u: goto label_34c298;
        case 0x34c29cu: goto label_34c29c;
        case 0x34c2a0u: goto label_34c2a0;
        case 0x34c2a4u: goto label_34c2a4;
        case 0x34c2a8u: goto label_34c2a8;
        case 0x34c2acu: goto label_34c2ac;
        case 0x34c2b0u: goto label_34c2b0;
        case 0x34c2b4u: goto label_34c2b4;
        case 0x34c2b8u: goto label_34c2b8;
        case 0x34c2bcu: goto label_34c2bc;
        case 0x34c2c0u: goto label_34c2c0;
        case 0x34c2c4u: goto label_34c2c4;
        case 0x34c2c8u: goto label_34c2c8;
        case 0x34c2ccu: goto label_34c2cc;
        case 0x34c2d0u: goto label_34c2d0;
        case 0x34c2d4u: goto label_34c2d4;
        case 0x34c2d8u: goto label_34c2d8;
        case 0x34c2dcu: goto label_34c2dc;
        case 0x34c2e0u: goto label_34c2e0;
        case 0x34c2e4u: goto label_34c2e4;
        case 0x34c2e8u: goto label_34c2e8;
        case 0x34c2ecu: goto label_34c2ec;
        case 0x34c2f0u: goto label_34c2f0;
        case 0x34c2f4u: goto label_34c2f4;
        case 0x34c2f8u: goto label_34c2f8;
        case 0x34c2fcu: goto label_34c2fc;
        case 0x34c300u: goto label_34c300;
        case 0x34c304u: goto label_34c304;
        case 0x34c308u: goto label_34c308;
        case 0x34c30cu: goto label_34c30c;
        case 0x34c310u: goto label_34c310;
        case 0x34c314u: goto label_34c314;
        case 0x34c318u: goto label_34c318;
        case 0x34c31cu: goto label_34c31c;
        case 0x34c320u: goto label_34c320;
        case 0x34c324u: goto label_34c324;
        case 0x34c328u: goto label_34c328;
        case 0x34c32cu: goto label_34c32c;
        case 0x34c330u: goto label_34c330;
        case 0x34c334u: goto label_34c334;
        case 0x34c338u: goto label_34c338;
        case 0x34c33cu: goto label_34c33c;
        case 0x34c340u: goto label_34c340;
        case 0x34c344u: goto label_34c344;
        case 0x34c348u: goto label_34c348;
        case 0x34c34cu: goto label_34c34c;
        case 0x34c350u: goto label_34c350;
        case 0x34c354u: goto label_34c354;
        case 0x34c358u: goto label_34c358;
        case 0x34c35cu: goto label_34c35c;
        case 0x34c360u: goto label_34c360;
        case 0x34c364u: goto label_34c364;
        case 0x34c368u: goto label_34c368;
        case 0x34c36cu: goto label_34c36c;
        case 0x34c370u: goto label_34c370;
        case 0x34c374u: goto label_34c374;
        case 0x34c378u: goto label_34c378;
        case 0x34c37cu: goto label_34c37c;
        case 0x34c380u: goto label_34c380;
        case 0x34c384u: goto label_34c384;
        case 0x34c388u: goto label_34c388;
        case 0x34c38cu: goto label_34c38c;
        case 0x34c390u: goto label_34c390;
        case 0x34c394u: goto label_34c394;
        case 0x34c398u: goto label_34c398;
        case 0x34c39cu: goto label_34c39c;
        case 0x34c3a0u: goto label_34c3a0;
        case 0x34c3a4u: goto label_34c3a4;
        case 0x34c3a8u: goto label_34c3a8;
        case 0x34c3acu: goto label_34c3ac;
        case 0x34c3b0u: goto label_34c3b0;
        case 0x34c3b4u: goto label_34c3b4;
        case 0x34c3b8u: goto label_34c3b8;
        case 0x34c3bcu: goto label_34c3bc;
        case 0x34c3c0u: goto label_34c3c0;
        case 0x34c3c4u: goto label_34c3c4;
        case 0x34c3c8u: goto label_34c3c8;
        case 0x34c3ccu: goto label_34c3cc;
        case 0x34c3d0u: goto label_34c3d0;
        case 0x34c3d4u: goto label_34c3d4;
        case 0x34c3d8u: goto label_34c3d8;
        case 0x34c3dcu: goto label_34c3dc;
        case 0x34c3e0u: goto label_34c3e0;
        case 0x34c3e4u: goto label_34c3e4;
        case 0x34c3e8u: goto label_34c3e8;
        case 0x34c3ecu: goto label_34c3ec;
        case 0x34c3f0u: goto label_34c3f0;
        case 0x34c3f4u: goto label_34c3f4;
        case 0x34c3f8u: goto label_34c3f8;
        case 0x34c3fcu: goto label_34c3fc;
        case 0x34c400u: goto label_34c400;
        case 0x34c404u: goto label_34c404;
        case 0x34c408u: goto label_34c408;
        case 0x34c40cu: goto label_34c40c;
        case 0x34c410u: goto label_34c410;
        case 0x34c414u: goto label_34c414;
        case 0x34c418u: goto label_34c418;
        case 0x34c41cu: goto label_34c41c;
        case 0x34c420u: goto label_34c420;
        case 0x34c424u: goto label_34c424;
        case 0x34c428u: goto label_34c428;
        case 0x34c42cu: goto label_34c42c;
        case 0x34c430u: goto label_34c430;
        case 0x34c434u: goto label_34c434;
        case 0x34c438u: goto label_34c438;
        case 0x34c43cu: goto label_34c43c;
        case 0x34c440u: goto label_34c440;
        case 0x34c444u: goto label_34c444;
        case 0x34c448u: goto label_34c448;
        case 0x34c44cu: goto label_34c44c;
        case 0x34c450u: goto label_34c450;
        case 0x34c454u: goto label_34c454;
        case 0x34c458u: goto label_34c458;
        case 0x34c45cu: goto label_34c45c;
        case 0x34c460u: goto label_34c460;
        case 0x34c464u: goto label_34c464;
        case 0x34c468u: goto label_34c468;
        case 0x34c46cu: goto label_34c46c;
        case 0x34c470u: goto label_34c470;
        case 0x34c474u: goto label_34c474;
        case 0x34c478u: goto label_34c478;
        case 0x34c47cu: goto label_34c47c;
        case 0x34c480u: goto label_34c480;
        case 0x34c484u: goto label_34c484;
        case 0x34c488u: goto label_34c488;
        case 0x34c48cu: goto label_34c48c;
        case 0x34c490u: goto label_34c490;
        case 0x34c494u: goto label_34c494;
        case 0x34c498u: goto label_34c498;
        case 0x34c49cu: goto label_34c49c;
        case 0x34c4a0u: goto label_34c4a0;
        case 0x34c4a4u: goto label_34c4a4;
        case 0x34c4a8u: goto label_34c4a8;
        case 0x34c4acu: goto label_34c4ac;
        case 0x34c4b0u: goto label_34c4b0;
        case 0x34c4b4u: goto label_34c4b4;
        case 0x34c4b8u: goto label_34c4b8;
        case 0x34c4bcu: goto label_34c4bc;
        case 0x34c4c0u: goto label_34c4c0;
        case 0x34c4c4u: goto label_34c4c4;
        case 0x34c4c8u: goto label_34c4c8;
        case 0x34c4ccu: goto label_34c4cc;
        case 0x34c4d0u: goto label_34c4d0;
        case 0x34c4d4u: goto label_34c4d4;
        case 0x34c4d8u: goto label_34c4d8;
        case 0x34c4dcu: goto label_34c4dc;
        case 0x34c4e0u: goto label_34c4e0;
        case 0x34c4e4u: goto label_34c4e4;
        case 0x34c4e8u: goto label_34c4e8;
        case 0x34c4ecu: goto label_34c4ec;
        case 0x34c4f0u: goto label_34c4f0;
        case 0x34c4f4u: goto label_34c4f4;
        case 0x34c4f8u: goto label_34c4f8;
        case 0x34c4fcu: goto label_34c4fc;
        case 0x34c500u: goto label_34c500;
        case 0x34c504u: goto label_34c504;
        case 0x34c508u: goto label_34c508;
        case 0x34c50cu: goto label_34c50c;
        case 0x34c510u: goto label_34c510;
        case 0x34c514u: goto label_34c514;
        case 0x34c518u: goto label_34c518;
        case 0x34c51cu: goto label_34c51c;
        case 0x34c520u: goto label_34c520;
        case 0x34c524u: goto label_34c524;
        case 0x34c528u: goto label_34c528;
        case 0x34c52cu: goto label_34c52c;
        case 0x34c530u: goto label_34c530;
        case 0x34c534u: goto label_34c534;
        case 0x34c538u: goto label_34c538;
        case 0x34c53cu: goto label_34c53c;
        case 0x34c540u: goto label_34c540;
        case 0x34c544u: goto label_34c544;
        case 0x34c548u: goto label_34c548;
        case 0x34c54cu: goto label_34c54c;
        case 0x34c550u: goto label_34c550;
        case 0x34c554u: goto label_34c554;
        case 0x34c558u: goto label_34c558;
        case 0x34c55cu: goto label_34c55c;
        case 0x34c560u: goto label_34c560;
        case 0x34c564u: goto label_34c564;
        case 0x34c568u: goto label_34c568;
        case 0x34c56cu: goto label_34c56c;
        case 0x34c570u: goto label_34c570;
        case 0x34c574u: goto label_34c574;
        case 0x34c578u: goto label_34c578;
        case 0x34c57cu: goto label_34c57c;
        case 0x34c580u: goto label_34c580;
        case 0x34c584u: goto label_34c584;
        case 0x34c588u: goto label_34c588;
        case 0x34c58cu: goto label_34c58c;
        case 0x34c590u: goto label_34c590;
        case 0x34c594u: goto label_34c594;
        case 0x34c598u: goto label_34c598;
        case 0x34c59cu: goto label_34c59c;
        default: break;
    }

    ctx->pc = 0x34c060u;

label_34c060:
    // 0x34c060: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x34c060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_34c064:
    // 0x34c064: 0x3e00008  jr          $ra
label_34c068:
    if (ctx->pc == 0x34C068u) {
        ctx->pc = 0x34C068u;
            // 0x34c068: 0xac643eb0  sw          $a0, 0x3EB0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16048), GPR_U32(ctx, 4));
        ctx->pc = 0x34C06Cu;
        goto label_34c06c;
    }
    ctx->pc = 0x34C064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34C064u;
            // 0x34c068: 0xac643eb0  sw          $a0, 0x3EB0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16048), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34C06Cu;
label_34c06c:
    // 0x34c06c: 0x0  nop
    ctx->pc = 0x34c06cu;
    // NOP
label_34c070:
    // 0x34c070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34c070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34c074:
    // 0x34c074: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34c074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_34c078:
    // 0x34c078: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34c078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34c07c:
    // 0x34c07c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34c07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34c080:
    // 0x34c080: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34c080u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34c084:
    // 0x34c084: 0x122000c5  beqz        $s1, . + 4 + (0xC5 << 2)
label_34c088:
    if (ctx->pc == 0x34C088u) {
        ctx->pc = 0x34C088u;
            // 0x34c088: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34C08Cu;
        goto label_34c08c;
    }
    ctx->pc = 0x34C084u;
    {
        const bool branch_taken_0x34c084 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34C084u;
            // 0x34c088: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c084) {
            ctx->pc = 0x34C39Cu;
            goto label_34c39c;
        }
    }
    ctx->pc = 0x34C08Cu;
label_34c08c:
    // 0x34c08c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_34c090:
    // 0x34c090: 0x24425a00  addiu       $v0, $v0, 0x5A00
    ctx->pc = 0x34c090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23040));
label_34c094:
    // 0x34c094: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x34c094u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_34c098:
    // 0x34c098: 0xc112bc8  jal         func_44AF20
label_34c09c:
    if (ctx->pc == 0x34C09Cu) {
        ctx->pc = 0x34C09Cu;
            // 0x34c09c: 0x8e240770  lw          $a0, 0x770($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1904)));
        ctx->pc = 0x34C0A0u;
        goto label_34c0a0;
    }
    ctx->pc = 0x34C098u;
    SET_GPR_U32(ctx, 31, 0x34C0A0u);
    ctx->pc = 0x34C09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C098u;
            // 0x34c09c: 0x8e240770  lw          $a0, 0x770($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1904)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44AF20u;
    if (runtime->hasFunction(0x44AF20u)) {
        auto targetFn = runtime->lookupFunction(0x44AF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C0A0u; }
        if (ctx->pc != 0x34C0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044AF20_0x44af20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C0A0u; }
        if (ctx->pc != 0x34C0A0u) { return; }
    }
    ctx->pc = 0x34C0A0u;
label_34c0a0:
    // 0x34c0a0: 0x8e240770  lw          $a0, 0x770($s1)
    ctx->pc = 0x34c0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1904)));
label_34c0a4:
    // 0x34c0a4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_34c0a8:
    if (ctx->pc == 0x34C0A8u) {
        ctx->pc = 0x34C0A8u;
            // 0x34c0a8: 0x8e240774  lw          $a0, 0x774($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1908)));
        ctx->pc = 0x34C0ACu;
        goto label_34c0ac;
    }
    ctx->pc = 0x34C0A4u;
    {
        const bool branch_taken_0x34c0a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c0a4) {
            ctx->pc = 0x34C0A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34C0A4u;
            // 0x34c0a8: 0x8e240774  lw          $a0, 0x774($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1908)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34C0C0u;
            goto label_34c0c0;
        }
    }
    ctx->pc = 0x34C0ACu;
label_34c0ac:
    // 0x34c0ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x34c0acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_34c0b0:
    // 0x34c0b0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x34c0b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_34c0b4:
    // 0x34c0b4: 0x320f809  jalr        $t9
label_34c0b8:
    if (ctx->pc == 0x34C0B8u) {
        ctx->pc = 0x34C0B8u;
            // 0x34c0b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x34C0BCu;
        goto label_34c0bc;
    }
    ctx->pc = 0x34C0B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34C0BCu);
        ctx->pc = 0x34C0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34C0B4u;
            // 0x34c0b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34C0BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34C0BCu; }
            if (ctx->pc != 0x34C0BCu) { return; }
        }
        }
    }
    ctx->pc = 0x34C0BCu;
label_34c0bc:
    // 0x34c0bc: 0x8e240774  lw          $a0, 0x774($s1)
    ctx->pc = 0x34c0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1908)));
label_34c0c0:
    // 0x34c0c0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_34c0c4:
    if (ctx->pc == 0x34C0C4u) {
        ctx->pc = 0x34C0C4u;
            // 0x34c0c4: 0x8e240898  lw          $a0, 0x898($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
        ctx->pc = 0x34C0C8u;
        goto label_34c0c8;
    }
    ctx->pc = 0x34C0C0u;
    {
        const bool branch_taken_0x34c0c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c0c0) {
            ctx->pc = 0x34C0C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34C0C0u;
            // 0x34c0c4: 0x8e240898  lw          $a0, 0x898($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34C0DCu;
            goto label_34c0dc;
        }
    }
    ctx->pc = 0x34C0C8u;
label_34c0c8:
    // 0x34c0c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x34c0c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_34c0cc:
    // 0x34c0cc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x34c0ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_34c0d0:
    // 0x34c0d0: 0x320f809  jalr        $t9
label_34c0d4:
    if (ctx->pc == 0x34C0D4u) {
        ctx->pc = 0x34C0D4u;
            // 0x34c0d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x34C0D8u;
        goto label_34c0d8;
    }
    ctx->pc = 0x34C0D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34C0D8u);
        ctx->pc = 0x34C0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34C0D0u;
            // 0x34c0d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34C0D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34C0D8u; }
            if (ctx->pc != 0x34C0D8u) { return; }
        }
        }
    }
    ctx->pc = 0x34C0D8u;
label_34c0d8:
    // 0x34c0d8: 0x8e240898  lw          $a0, 0x898($s1)
    ctx->pc = 0x34c0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
label_34c0dc:
    // 0x34c0dc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_34c0e0:
    if (ctx->pc == 0x34C0E0u) {
        ctx->pc = 0x34C0E0u;
            // 0x34c0e0: 0x262408a0  addiu       $a0, $s1, 0x8A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2208));
        ctx->pc = 0x34C0E4u;
        goto label_34c0e4;
    }
    ctx->pc = 0x34C0DCu;
    {
        const bool branch_taken_0x34c0dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c0dc) {
            ctx->pc = 0x34C0E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34C0DCu;
            // 0x34c0e0: 0x262408a0  addiu       $a0, $s1, 0x8A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2208));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34C0F8u;
            goto label_34c0f8;
        }
    }
    ctx->pc = 0x34C0E4u;
label_34c0e4:
    // 0x34c0e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x34c0e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_34c0e8:
    // 0x34c0e8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x34c0e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_34c0ec:
    // 0x34c0ec: 0x320f809  jalr        $t9
label_34c0f0:
    if (ctx->pc == 0x34C0F0u) {
        ctx->pc = 0x34C0F0u;
            // 0x34c0f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x34C0F4u;
        goto label_34c0f4;
    }
    ctx->pc = 0x34C0ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34C0F4u);
        ctx->pc = 0x34C0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34C0ECu;
            // 0x34c0f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34C0F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34C0F4u; }
            if (ctx->pc != 0x34C0F4u) { return; }
        }
        }
    }
    ctx->pc = 0x34C0F4u;
label_34c0f4:
    // 0x34c0f4: 0x262408a0  addiu       $a0, $s1, 0x8A0
    ctx->pc = 0x34c0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2208));
label_34c0f8:
    // 0x34c0f8: 0xc112b68  jal         func_44ADA0
label_34c0fc:
    if (ctx->pc == 0x34C0FCu) {
        ctx->pc = 0x34C0FCu;
            // 0x34c0fc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C100u;
        goto label_34c100;
    }
    ctx->pc = 0x34C0F8u;
    SET_GPR_U32(ctx, 31, 0x34C100u);
    ctx->pc = 0x34C0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C0F8u;
            // 0x34c0fc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44ADA0u;
    if (runtime->hasFunction(0x44ADA0u)) {
        auto targetFn = runtime->lookupFunction(0x44ADA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C100u; }
        if (ctx->pc != 0x34C100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044ADA0_0x44ada0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C100u; }
        if (ctx->pc != 0x34C100u) { return; }
    }
    ctx->pc = 0x34C100u;
label_34c100:
    // 0x34c100: 0x2622089c  addiu       $v0, $s1, 0x89C
    ctx->pc = 0x34c100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2204));
label_34c104:
    // 0x34c104: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_34c108:
    if (ctx->pc == 0x34C108u) {
        ctx->pc = 0x34C108u;
            // 0x34c108: 0x26220054  addiu       $v0, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->pc = 0x34C10Cu;
        goto label_34c10c;
    }
    ctx->pc = 0x34C104u;
    {
        const bool branch_taken_0x34c104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c104) {
            ctx->pc = 0x34C108u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34C104u;
            // 0x34c108: 0x26220054  addiu       $v0, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34C11Cu;
            goto label_34c11c;
        }
    }
    ctx->pc = 0x34C10Cu;
label_34c10c:
    // 0x34c10c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34c10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_34c110:
    // 0x34c110: 0x24425a78  addiu       $v0, $v0, 0x5A78
    ctx->pc = 0x34c110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23160));
label_34c114:
    // 0x34c114: 0xae22089c  sw          $v0, 0x89C($s1)
    ctx->pc = 0x34c114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2204), GPR_U32(ctx, 2));
label_34c118:
    // 0x34c118: 0x26220054  addiu       $v0, $s1, 0x54
    ctx->pc = 0x34c118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_34c11c:
    // 0x34c11c: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
label_34c120:
    if (ctx->pc == 0x34C120u) {
        ctx->pc = 0x34C124u;
        goto label_34c124;
    }
    ctx->pc = 0x34C11Cu;
    {
        const bool branch_taken_0x34c11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c11c) {
            ctx->pc = 0x34C364u;
            goto label_34c364;
        }
    }
    ctx->pc = 0x34C124u;
label_34c124:
    // 0x34c124: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x34c124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_34c128:
    // 0x34c128: 0xc0ad6c4  jal         func_2B5B10
label_34c12c:
    if (ctx->pc == 0x34C12Cu) {
        ctx->pc = 0x34C12Cu;
            // 0x34c12c: 0x2484d3d0  addiu       $a0, $a0, -0x2C30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955984));
        ctx->pc = 0x34C130u;
        goto label_34c130;
    }
    ctx->pc = 0x34C128u;
    SET_GPR_U32(ctx, 31, 0x34C130u);
    ctx->pc = 0x34C12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C128u;
            // 0x34c12c: 0x2484d3d0  addiu       $a0, $a0, -0x2C30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C130u; }
        if (ctx->pc != 0x34C130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C130u; }
        if (ctx->pc != 0x34C130u) { return; }
    }
    ctx->pc = 0x34C130u;
label_34c130:
    // 0x34c130: 0x26240738  addiu       $a0, $s1, 0x738
    ctx->pc = 0x34c130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1848));
label_34c134:
    // 0x34c134: 0xc0a8c98  jal         func_2A3260
label_34c138:
    if (ctx->pc == 0x34C138u) {
        ctx->pc = 0x34C138u;
            // 0x34c138: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C13Cu;
        goto label_34c13c;
    }
    ctx->pc = 0x34C134u;
    SET_GPR_U32(ctx, 31, 0x34C13Cu);
    ctx->pc = 0x34C138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C134u;
            // 0x34c138: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C13Cu; }
        if (ctx->pc != 0x34C13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C13Cu; }
        if (ctx->pc != 0x34C13Cu) { return; }
    }
    ctx->pc = 0x34C13Cu;
label_34c13c:
    // 0x34c13c: 0x26240718  addiu       $a0, $s1, 0x718
    ctx->pc = 0x34c13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1816));
label_34c140:
    // 0x34c140: 0xc0a8c98  jal         func_2A3260
label_34c144:
    if (ctx->pc == 0x34C144u) {
        ctx->pc = 0x34C144u;
            // 0x34c144: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C148u;
        goto label_34c148;
    }
    ctx->pc = 0x34C140u;
    SET_GPR_U32(ctx, 31, 0x34C148u);
    ctx->pc = 0x34C144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C140u;
            // 0x34c144: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C148u; }
        if (ctx->pc != 0x34C148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C148u; }
        if (ctx->pc != 0x34C148u) { return; }
    }
    ctx->pc = 0x34C148u;
label_34c148:
    // 0x34c148: 0x262406f8  addiu       $a0, $s1, 0x6F8
    ctx->pc = 0x34c148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1784));
label_34c14c:
    // 0x34c14c: 0xc0a8c98  jal         func_2A3260
label_34c150:
    if (ctx->pc == 0x34C150u) {
        ctx->pc = 0x34C150u;
            // 0x34c150: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C154u;
        goto label_34c154;
    }
    ctx->pc = 0x34C14Cu;
    SET_GPR_U32(ctx, 31, 0x34C154u);
    ctx->pc = 0x34C150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C14Cu;
            // 0x34c150: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C154u; }
        if (ctx->pc != 0x34C154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C154u; }
        if (ctx->pc != 0x34C154u) { return; }
    }
    ctx->pc = 0x34C154u;
label_34c154:
    // 0x34c154: 0x262406d8  addiu       $a0, $s1, 0x6D8
    ctx->pc = 0x34c154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1752));
label_34c158:
    // 0x34c158: 0xc0a8c98  jal         func_2A3260
label_34c15c:
    if (ctx->pc == 0x34C15Cu) {
        ctx->pc = 0x34C15Cu;
            // 0x34c15c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C160u;
        goto label_34c160;
    }
    ctx->pc = 0x34C158u;
    SET_GPR_U32(ctx, 31, 0x34C160u);
    ctx->pc = 0x34C15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C158u;
            // 0x34c15c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C160u; }
        if (ctx->pc != 0x34C160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C160u; }
        if (ctx->pc != 0x34C160u) { return; }
    }
    ctx->pc = 0x34C160u;
label_34c160:
    // 0x34c160: 0x262406b8  addiu       $a0, $s1, 0x6B8
    ctx->pc = 0x34c160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1720));
label_34c164:
    // 0x34c164: 0xc0a8c98  jal         func_2A3260
label_34c168:
    if (ctx->pc == 0x34C168u) {
        ctx->pc = 0x34C168u;
            // 0x34c168: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C16Cu;
        goto label_34c16c;
    }
    ctx->pc = 0x34C164u;
    SET_GPR_U32(ctx, 31, 0x34C16Cu);
    ctx->pc = 0x34C168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C164u;
            // 0x34c168: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C16Cu; }
        if (ctx->pc != 0x34C16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C16Cu; }
        if (ctx->pc != 0x34C16Cu) { return; }
    }
    ctx->pc = 0x34C16Cu;
label_34c16c:
    // 0x34c16c: 0x26240698  addiu       $a0, $s1, 0x698
    ctx->pc = 0x34c16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1688));
label_34c170:
    // 0x34c170: 0xc0a8c98  jal         func_2A3260
label_34c174:
    if (ctx->pc == 0x34C174u) {
        ctx->pc = 0x34C174u;
            // 0x34c174: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C178u;
        goto label_34c178;
    }
    ctx->pc = 0x34C170u;
    SET_GPR_U32(ctx, 31, 0x34C178u);
    ctx->pc = 0x34C174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C170u;
            // 0x34c174: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C178u; }
        if (ctx->pc != 0x34C178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C178u; }
        if (ctx->pc != 0x34C178u) { return; }
    }
    ctx->pc = 0x34C178u;
label_34c178:
    // 0x34c178: 0x26240678  addiu       $a0, $s1, 0x678
    ctx->pc = 0x34c178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1656));
label_34c17c:
    // 0x34c17c: 0xc0a8c98  jal         func_2A3260
label_34c180:
    if (ctx->pc == 0x34C180u) {
        ctx->pc = 0x34C180u;
            // 0x34c180: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C184u;
        goto label_34c184;
    }
    ctx->pc = 0x34C17Cu;
    SET_GPR_U32(ctx, 31, 0x34C184u);
    ctx->pc = 0x34C180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C17Cu;
            // 0x34c180: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C184u; }
        if (ctx->pc != 0x34C184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C184u; }
        if (ctx->pc != 0x34C184u) { return; }
    }
    ctx->pc = 0x34C184u;
label_34c184:
    // 0x34c184: 0x26240658  addiu       $a0, $s1, 0x658
    ctx->pc = 0x34c184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1624));
label_34c188:
    // 0x34c188: 0xc0a8c98  jal         func_2A3260
label_34c18c:
    if (ctx->pc == 0x34C18Cu) {
        ctx->pc = 0x34C18Cu;
            // 0x34c18c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C190u;
        goto label_34c190;
    }
    ctx->pc = 0x34C188u;
    SET_GPR_U32(ctx, 31, 0x34C190u);
    ctx->pc = 0x34C18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C188u;
            // 0x34c18c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C190u; }
        if (ctx->pc != 0x34C190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C190u; }
        if (ctx->pc != 0x34C190u) { return; }
    }
    ctx->pc = 0x34C190u;
label_34c190:
    // 0x34c190: 0x26240638  addiu       $a0, $s1, 0x638
    ctx->pc = 0x34c190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1592));
label_34c194:
    // 0x34c194: 0xc0a8c98  jal         func_2A3260
label_34c198:
    if (ctx->pc == 0x34C198u) {
        ctx->pc = 0x34C198u;
            // 0x34c198: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C19Cu;
        goto label_34c19c;
    }
    ctx->pc = 0x34C194u;
    SET_GPR_U32(ctx, 31, 0x34C19Cu);
    ctx->pc = 0x34C198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C194u;
            // 0x34c198: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C19Cu; }
        if (ctx->pc != 0x34C19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C19Cu; }
        if (ctx->pc != 0x34C19Cu) { return; }
    }
    ctx->pc = 0x34C19Cu;
label_34c19c:
    // 0x34c19c: 0x26240618  addiu       $a0, $s1, 0x618
    ctx->pc = 0x34c19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1560));
label_34c1a0:
    // 0x34c1a0: 0xc0a8c98  jal         func_2A3260
label_34c1a4:
    if (ctx->pc == 0x34C1A4u) {
        ctx->pc = 0x34C1A4u;
            // 0x34c1a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C1A8u;
        goto label_34c1a8;
    }
    ctx->pc = 0x34C1A0u;
    SET_GPR_U32(ctx, 31, 0x34C1A8u);
    ctx->pc = 0x34C1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C1A0u;
            // 0x34c1a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C1A8u; }
        if (ctx->pc != 0x34C1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C1A8u; }
        if (ctx->pc != 0x34C1A8u) { return; }
    }
    ctx->pc = 0x34C1A8u;
label_34c1a8:
    // 0x34c1a8: 0x262405f8  addiu       $a0, $s1, 0x5F8
    ctx->pc = 0x34c1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1528));
label_34c1ac:
    // 0x34c1ac: 0xc0a8c98  jal         func_2A3260
label_34c1b0:
    if (ctx->pc == 0x34C1B0u) {
        ctx->pc = 0x34C1B0u;
            // 0x34c1b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C1B4u;
        goto label_34c1b4;
    }
    ctx->pc = 0x34C1ACu;
    SET_GPR_U32(ctx, 31, 0x34C1B4u);
    ctx->pc = 0x34C1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C1ACu;
            // 0x34c1b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C1B4u; }
        if (ctx->pc != 0x34C1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C1B4u; }
        if (ctx->pc != 0x34C1B4u) { return; }
    }
    ctx->pc = 0x34C1B4u;
label_34c1b4:
    // 0x34c1b4: 0x262405d8  addiu       $a0, $s1, 0x5D8
    ctx->pc = 0x34c1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1496));
label_34c1b8:
    // 0x34c1b8: 0xc0a8c98  jal         func_2A3260
label_34c1bc:
    if (ctx->pc == 0x34C1BCu) {
        ctx->pc = 0x34C1BCu;
            // 0x34c1bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C1C0u;
        goto label_34c1c0;
    }
    ctx->pc = 0x34C1B8u;
    SET_GPR_U32(ctx, 31, 0x34C1C0u);
    ctx->pc = 0x34C1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C1B8u;
            // 0x34c1bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C1C0u; }
        if (ctx->pc != 0x34C1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C1C0u; }
        if (ctx->pc != 0x34C1C0u) { return; }
    }
    ctx->pc = 0x34C1C0u;
label_34c1c0:
    // 0x34c1c0: 0x262405b8  addiu       $a0, $s1, 0x5B8
    ctx->pc = 0x34c1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1464));
label_34c1c4:
    // 0x34c1c4: 0xc0a8c98  jal         func_2A3260
label_34c1c8:
    if (ctx->pc == 0x34C1C8u) {
        ctx->pc = 0x34C1C8u;
            // 0x34c1c8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C1CCu;
        goto label_34c1cc;
    }
    ctx->pc = 0x34C1C4u;
    SET_GPR_U32(ctx, 31, 0x34C1CCu);
    ctx->pc = 0x34C1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C1C4u;
            // 0x34c1c8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C1CCu; }
        if (ctx->pc != 0x34C1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C1CCu; }
        if (ctx->pc != 0x34C1CCu) { return; }
    }
    ctx->pc = 0x34C1CCu;
label_34c1cc:
    // 0x34c1cc: 0x26240598  addiu       $a0, $s1, 0x598
    ctx->pc = 0x34c1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1432));
label_34c1d0:
    // 0x34c1d0: 0xc0a8c98  jal         func_2A3260
label_34c1d4:
    if (ctx->pc == 0x34C1D4u) {
        ctx->pc = 0x34C1D4u;
            // 0x34c1d4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C1D8u;
        goto label_34c1d8;
    }
    ctx->pc = 0x34C1D0u;
    SET_GPR_U32(ctx, 31, 0x34C1D8u);
    ctx->pc = 0x34C1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C1D0u;
            // 0x34c1d4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C1D8u; }
        if (ctx->pc != 0x34C1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C1D8u; }
        if (ctx->pc != 0x34C1D8u) { return; }
    }
    ctx->pc = 0x34C1D8u;
label_34c1d8:
    // 0x34c1d8: 0x26240578  addiu       $a0, $s1, 0x578
    ctx->pc = 0x34c1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1400));
label_34c1dc:
    // 0x34c1dc: 0xc0a8c98  jal         func_2A3260
label_34c1e0:
    if (ctx->pc == 0x34C1E0u) {
        ctx->pc = 0x34C1E0u;
            // 0x34c1e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C1E4u;
        goto label_34c1e4;
    }
    ctx->pc = 0x34C1DCu;
    SET_GPR_U32(ctx, 31, 0x34C1E4u);
    ctx->pc = 0x34C1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C1DCu;
            // 0x34c1e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C1E4u; }
        if (ctx->pc != 0x34C1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C1E4u; }
        if (ctx->pc != 0x34C1E4u) { return; }
    }
    ctx->pc = 0x34C1E4u;
label_34c1e4:
    // 0x34c1e4: 0x26240558  addiu       $a0, $s1, 0x558
    ctx->pc = 0x34c1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1368));
label_34c1e8:
    // 0x34c1e8: 0xc0a8c98  jal         func_2A3260
label_34c1ec:
    if (ctx->pc == 0x34C1ECu) {
        ctx->pc = 0x34C1ECu;
            // 0x34c1ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C1F0u;
        goto label_34c1f0;
    }
    ctx->pc = 0x34C1E8u;
    SET_GPR_U32(ctx, 31, 0x34C1F0u);
    ctx->pc = 0x34C1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C1E8u;
            // 0x34c1ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C1F0u; }
        if (ctx->pc != 0x34C1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C1F0u; }
        if (ctx->pc != 0x34C1F0u) { return; }
    }
    ctx->pc = 0x34C1F0u;
label_34c1f0:
    // 0x34c1f0: 0x26240538  addiu       $a0, $s1, 0x538
    ctx->pc = 0x34c1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1336));
label_34c1f4:
    // 0x34c1f4: 0xc0a8c98  jal         func_2A3260
label_34c1f8:
    if (ctx->pc == 0x34C1F8u) {
        ctx->pc = 0x34C1F8u;
            // 0x34c1f8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C1FCu;
        goto label_34c1fc;
    }
    ctx->pc = 0x34C1F4u;
    SET_GPR_U32(ctx, 31, 0x34C1FCu);
    ctx->pc = 0x34C1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C1F4u;
            // 0x34c1f8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C1FCu; }
        if (ctx->pc != 0x34C1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C1FCu; }
        if (ctx->pc != 0x34C1FCu) { return; }
    }
    ctx->pc = 0x34C1FCu;
label_34c1fc:
    // 0x34c1fc: 0x26240518  addiu       $a0, $s1, 0x518
    ctx->pc = 0x34c1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1304));
label_34c200:
    // 0x34c200: 0xc0a8c98  jal         func_2A3260
label_34c204:
    if (ctx->pc == 0x34C204u) {
        ctx->pc = 0x34C204u;
            // 0x34c204: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C208u;
        goto label_34c208;
    }
    ctx->pc = 0x34C200u;
    SET_GPR_U32(ctx, 31, 0x34C208u);
    ctx->pc = 0x34C204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C200u;
            // 0x34c204: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C208u; }
        if (ctx->pc != 0x34C208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C208u; }
        if (ctx->pc != 0x34C208u) { return; }
    }
    ctx->pc = 0x34C208u;
label_34c208:
    // 0x34c208: 0x262404f8  addiu       $a0, $s1, 0x4F8
    ctx->pc = 0x34c208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1272));
label_34c20c:
    // 0x34c20c: 0xc0a8c98  jal         func_2A3260
label_34c210:
    if (ctx->pc == 0x34C210u) {
        ctx->pc = 0x34C210u;
            // 0x34c210: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C214u;
        goto label_34c214;
    }
    ctx->pc = 0x34C20Cu;
    SET_GPR_U32(ctx, 31, 0x34C214u);
    ctx->pc = 0x34C210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C20Cu;
            // 0x34c210: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C214u; }
        if (ctx->pc != 0x34C214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C214u; }
        if (ctx->pc != 0x34C214u) { return; }
    }
    ctx->pc = 0x34C214u;
label_34c214:
    // 0x34c214: 0x262404d8  addiu       $a0, $s1, 0x4D8
    ctx->pc = 0x34c214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1240));
label_34c218:
    // 0x34c218: 0xc0a8c98  jal         func_2A3260
label_34c21c:
    if (ctx->pc == 0x34C21Cu) {
        ctx->pc = 0x34C21Cu;
            // 0x34c21c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C220u;
        goto label_34c220;
    }
    ctx->pc = 0x34C218u;
    SET_GPR_U32(ctx, 31, 0x34C220u);
    ctx->pc = 0x34C21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C218u;
            // 0x34c21c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C220u; }
        if (ctx->pc != 0x34C220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C220u; }
        if (ctx->pc != 0x34C220u) { return; }
    }
    ctx->pc = 0x34C220u;
label_34c220:
    // 0x34c220: 0x262404b8  addiu       $a0, $s1, 0x4B8
    ctx->pc = 0x34c220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1208));
label_34c224:
    // 0x34c224: 0xc0a8c98  jal         func_2A3260
label_34c228:
    if (ctx->pc == 0x34C228u) {
        ctx->pc = 0x34C228u;
            // 0x34c228: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C22Cu;
        goto label_34c22c;
    }
    ctx->pc = 0x34C224u;
    SET_GPR_U32(ctx, 31, 0x34C22Cu);
    ctx->pc = 0x34C228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C224u;
            // 0x34c228: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C22Cu; }
        if (ctx->pc != 0x34C22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C22Cu; }
        if (ctx->pc != 0x34C22Cu) { return; }
    }
    ctx->pc = 0x34C22Cu;
label_34c22c:
    // 0x34c22c: 0x26240498  addiu       $a0, $s1, 0x498
    ctx->pc = 0x34c22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1176));
label_34c230:
    // 0x34c230: 0xc0a8c98  jal         func_2A3260
label_34c234:
    if (ctx->pc == 0x34C234u) {
        ctx->pc = 0x34C234u;
            // 0x34c234: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C238u;
        goto label_34c238;
    }
    ctx->pc = 0x34C230u;
    SET_GPR_U32(ctx, 31, 0x34C238u);
    ctx->pc = 0x34C234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C230u;
            // 0x34c234: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C238u; }
        if (ctx->pc != 0x34C238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C238u; }
        if (ctx->pc != 0x34C238u) { return; }
    }
    ctx->pc = 0x34C238u;
label_34c238:
    // 0x34c238: 0x26240478  addiu       $a0, $s1, 0x478
    ctx->pc = 0x34c238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1144));
label_34c23c:
    // 0x34c23c: 0xc0a8c98  jal         func_2A3260
label_34c240:
    if (ctx->pc == 0x34C240u) {
        ctx->pc = 0x34C240u;
            // 0x34c240: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C244u;
        goto label_34c244;
    }
    ctx->pc = 0x34C23Cu;
    SET_GPR_U32(ctx, 31, 0x34C244u);
    ctx->pc = 0x34C240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C23Cu;
            // 0x34c240: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C244u; }
        if (ctx->pc != 0x34C244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C244u; }
        if (ctx->pc != 0x34C244u) { return; }
    }
    ctx->pc = 0x34C244u;
label_34c244:
    // 0x34c244: 0x26240458  addiu       $a0, $s1, 0x458
    ctx->pc = 0x34c244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1112));
label_34c248:
    // 0x34c248: 0xc0a8c98  jal         func_2A3260
label_34c24c:
    if (ctx->pc == 0x34C24Cu) {
        ctx->pc = 0x34C24Cu;
            // 0x34c24c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C250u;
        goto label_34c250;
    }
    ctx->pc = 0x34C248u;
    SET_GPR_U32(ctx, 31, 0x34C250u);
    ctx->pc = 0x34C24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C248u;
            // 0x34c24c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C250u; }
        if (ctx->pc != 0x34C250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C250u; }
        if (ctx->pc != 0x34C250u) { return; }
    }
    ctx->pc = 0x34C250u;
label_34c250:
    // 0x34c250: 0x26240438  addiu       $a0, $s1, 0x438
    ctx->pc = 0x34c250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1080));
label_34c254:
    // 0x34c254: 0xc0a8c98  jal         func_2A3260
label_34c258:
    if (ctx->pc == 0x34C258u) {
        ctx->pc = 0x34C258u;
            // 0x34c258: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C25Cu;
        goto label_34c25c;
    }
    ctx->pc = 0x34C254u;
    SET_GPR_U32(ctx, 31, 0x34C25Cu);
    ctx->pc = 0x34C258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C254u;
            // 0x34c258: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C25Cu; }
        if (ctx->pc != 0x34C25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C25Cu; }
        if (ctx->pc != 0x34C25Cu) { return; }
    }
    ctx->pc = 0x34C25Cu;
label_34c25c:
    // 0x34c25c: 0x26240418  addiu       $a0, $s1, 0x418
    ctx->pc = 0x34c25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1048));
label_34c260:
    // 0x34c260: 0xc0a8c98  jal         func_2A3260
label_34c264:
    if (ctx->pc == 0x34C264u) {
        ctx->pc = 0x34C264u;
            // 0x34c264: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C268u;
        goto label_34c268;
    }
    ctx->pc = 0x34C260u;
    SET_GPR_U32(ctx, 31, 0x34C268u);
    ctx->pc = 0x34C264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C260u;
            // 0x34c264: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C268u; }
        if (ctx->pc != 0x34C268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C268u; }
        if (ctx->pc != 0x34C268u) { return; }
    }
    ctx->pc = 0x34C268u;
label_34c268:
    // 0x34c268: 0x262403f8  addiu       $a0, $s1, 0x3F8
    ctx->pc = 0x34c268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1016));
label_34c26c:
    // 0x34c26c: 0xc0a8c98  jal         func_2A3260
label_34c270:
    if (ctx->pc == 0x34C270u) {
        ctx->pc = 0x34C270u;
            // 0x34c270: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C274u;
        goto label_34c274;
    }
    ctx->pc = 0x34C26Cu;
    SET_GPR_U32(ctx, 31, 0x34C274u);
    ctx->pc = 0x34C270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C26Cu;
            // 0x34c270: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C274u; }
        if (ctx->pc != 0x34C274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C274u; }
        if (ctx->pc != 0x34C274u) { return; }
    }
    ctx->pc = 0x34C274u;
label_34c274:
    // 0x34c274: 0x262403d8  addiu       $a0, $s1, 0x3D8
    ctx->pc = 0x34c274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 984));
label_34c278:
    // 0x34c278: 0xc0a8c98  jal         func_2A3260
label_34c27c:
    if (ctx->pc == 0x34C27Cu) {
        ctx->pc = 0x34C27Cu;
            // 0x34c27c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C280u;
        goto label_34c280;
    }
    ctx->pc = 0x34C278u;
    SET_GPR_U32(ctx, 31, 0x34C280u);
    ctx->pc = 0x34C27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C278u;
            // 0x34c27c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C280u; }
        if (ctx->pc != 0x34C280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C280u; }
        if (ctx->pc != 0x34C280u) { return; }
    }
    ctx->pc = 0x34C280u;
label_34c280:
    // 0x34c280: 0x262403b8  addiu       $a0, $s1, 0x3B8
    ctx->pc = 0x34c280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 952));
label_34c284:
    // 0x34c284: 0xc0a8c98  jal         func_2A3260
label_34c288:
    if (ctx->pc == 0x34C288u) {
        ctx->pc = 0x34C288u;
            // 0x34c288: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C28Cu;
        goto label_34c28c;
    }
    ctx->pc = 0x34C284u;
    SET_GPR_U32(ctx, 31, 0x34C28Cu);
    ctx->pc = 0x34C288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C284u;
            // 0x34c288: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C28Cu; }
        if (ctx->pc != 0x34C28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C28Cu; }
        if (ctx->pc != 0x34C28Cu) { return; }
    }
    ctx->pc = 0x34C28Cu;
label_34c28c:
    // 0x34c28c: 0x26240398  addiu       $a0, $s1, 0x398
    ctx->pc = 0x34c28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 920));
label_34c290:
    // 0x34c290: 0xc0a8c98  jal         func_2A3260
label_34c294:
    if (ctx->pc == 0x34C294u) {
        ctx->pc = 0x34C294u;
            // 0x34c294: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C298u;
        goto label_34c298;
    }
    ctx->pc = 0x34C290u;
    SET_GPR_U32(ctx, 31, 0x34C298u);
    ctx->pc = 0x34C294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C290u;
            // 0x34c294: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C298u; }
        if (ctx->pc != 0x34C298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C298u; }
        if (ctx->pc != 0x34C298u) { return; }
    }
    ctx->pc = 0x34C298u;
label_34c298:
    // 0x34c298: 0x26240378  addiu       $a0, $s1, 0x378
    ctx->pc = 0x34c298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 888));
label_34c29c:
    // 0x34c29c: 0xc0a8c98  jal         func_2A3260
label_34c2a0:
    if (ctx->pc == 0x34C2A0u) {
        ctx->pc = 0x34C2A0u;
            // 0x34c2a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C2A4u;
        goto label_34c2a4;
    }
    ctx->pc = 0x34C29Cu;
    SET_GPR_U32(ctx, 31, 0x34C2A4u);
    ctx->pc = 0x34C2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C29Cu;
            // 0x34c2a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C2A4u; }
        if (ctx->pc != 0x34C2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C2A4u; }
        if (ctx->pc != 0x34C2A4u) { return; }
    }
    ctx->pc = 0x34C2A4u;
label_34c2a4:
    // 0x34c2a4: 0x26240358  addiu       $a0, $s1, 0x358
    ctx->pc = 0x34c2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 856));
label_34c2a8:
    // 0x34c2a8: 0xc0a8c98  jal         func_2A3260
label_34c2ac:
    if (ctx->pc == 0x34C2ACu) {
        ctx->pc = 0x34C2ACu;
            // 0x34c2ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C2B0u;
        goto label_34c2b0;
    }
    ctx->pc = 0x34C2A8u;
    SET_GPR_U32(ctx, 31, 0x34C2B0u);
    ctx->pc = 0x34C2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C2A8u;
            // 0x34c2ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C2B0u; }
        if (ctx->pc != 0x34C2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C2B0u; }
        if (ctx->pc != 0x34C2B0u) { return; }
    }
    ctx->pc = 0x34C2B0u;
label_34c2b0:
    // 0x34c2b0: 0x26240338  addiu       $a0, $s1, 0x338
    ctx->pc = 0x34c2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 824));
label_34c2b4:
    // 0x34c2b4: 0xc0a8c98  jal         func_2A3260
label_34c2b8:
    if (ctx->pc == 0x34C2B8u) {
        ctx->pc = 0x34C2B8u;
            // 0x34c2b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C2BCu;
        goto label_34c2bc;
    }
    ctx->pc = 0x34C2B4u;
    SET_GPR_U32(ctx, 31, 0x34C2BCu);
    ctx->pc = 0x34C2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C2B4u;
            // 0x34c2b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C2BCu; }
        if (ctx->pc != 0x34C2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C2BCu; }
        if (ctx->pc != 0x34C2BCu) { return; }
    }
    ctx->pc = 0x34C2BCu;
label_34c2bc:
    // 0x34c2bc: 0x26240318  addiu       $a0, $s1, 0x318
    ctx->pc = 0x34c2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 792));
label_34c2c0:
    // 0x34c2c0: 0xc0a8c98  jal         func_2A3260
label_34c2c4:
    if (ctx->pc == 0x34C2C4u) {
        ctx->pc = 0x34C2C4u;
            // 0x34c2c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C2C8u;
        goto label_34c2c8;
    }
    ctx->pc = 0x34C2C0u;
    SET_GPR_U32(ctx, 31, 0x34C2C8u);
    ctx->pc = 0x34C2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C2C0u;
            // 0x34c2c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C2C8u; }
        if (ctx->pc != 0x34C2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C2C8u; }
        if (ctx->pc != 0x34C2C8u) { return; }
    }
    ctx->pc = 0x34C2C8u;
label_34c2c8:
    // 0x34c2c8: 0x262402f8  addiu       $a0, $s1, 0x2F8
    ctx->pc = 0x34c2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 760));
label_34c2cc:
    // 0x34c2cc: 0xc0a8c98  jal         func_2A3260
label_34c2d0:
    if (ctx->pc == 0x34C2D0u) {
        ctx->pc = 0x34C2D0u;
            // 0x34c2d0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C2D4u;
        goto label_34c2d4;
    }
    ctx->pc = 0x34C2CCu;
    SET_GPR_U32(ctx, 31, 0x34C2D4u);
    ctx->pc = 0x34C2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C2CCu;
            // 0x34c2d0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C2D4u; }
        if (ctx->pc != 0x34C2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C2D4u; }
        if (ctx->pc != 0x34C2D4u) { return; }
    }
    ctx->pc = 0x34C2D4u;
label_34c2d4:
    // 0x34c2d4: 0x262402d8  addiu       $a0, $s1, 0x2D8
    ctx->pc = 0x34c2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 728));
label_34c2d8:
    // 0x34c2d8: 0xc0a8c98  jal         func_2A3260
label_34c2dc:
    if (ctx->pc == 0x34C2DCu) {
        ctx->pc = 0x34C2DCu;
            // 0x34c2dc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C2E0u;
        goto label_34c2e0;
    }
    ctx->pc = 0x34C2D8u;
    SET_GPR_U32(ctx, 31, 0x34C2E0u);
    ctx->pc = 0x34C2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C2D8u;
            // 0x34c2dc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C2E0u; }
        if (ctx->pc != 0x34C2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C2E0u; }
        if (ctx->pc != 0x34C2E0u) { return; }
    }
    ctx->pc = 0x34C2E0u;
label_34c2e0:
    // 0x34c2e0: 0x262402b8  addiu       $a0, $s1, 0x2B8
    ctx->pc = 0x34c2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 696));
label_34c2e4:
    // 0x34c2e4: 0xc0a8c98  jal         func_2A3260
label_34c2e8:
    if (ctx->pc == 0x34C2E8u) {
        ctx->pc = 0x34C2E8u;
            // 0x34c2e8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C2ECu;
        goto label_34c2ec;
    }
    ctx->pc = 0x34C2E4u;
    SET_GPR_U32(ctx, 31, 0x34C2ECu);
    ctx->pc = 0x34C2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C2E4u;
            // 0x34c2e8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C2ECu; }
        if (ctx->pc != 0x34C2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C2ECu; }
        if (ctx->pc != 0x34C2ECu) { return; }
    }
    ctx->pc = 0x34C2ECu;
label_34c2ec:
    // 0x34c2ec: 0x26240298  addiu       $a0, $s1, 0x298
    ctx->pc = 0x34c2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 664));
label_34c2f0:
    // 0x34c2f0: 0xc0a8c98  jal         func_2A3260
label_34c2f4:
    if (ctx->pc == 0x34C2F4u) {
        ctx->pc = 0x34C2F4u;
            // 0x34c2f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C2F8u;
        goto label_34c2f8;
    }
    ctx->pc = 0x34C2F0u;
    SET_GPR_U32(ctx, 31, 0x34C2F8u);
    ctx->pc = 0x34C2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C2F0u;
            // 0x34c2f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C2F8u; }
        if (ctx->pc != 0x34C2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C2F8u; }
        if (ctx->pc != 0x34C2F8u) { return; }
    }
    ctx->pc = 0x34C2F8u;
label_34c2f8:
    // 0x34c2f8: 0x26240278  addiu       $a0, $s1, 0x278
    ctx->pc = 0x34c2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 632));
label_34c2fc:
    // 0x34c2fc: 0xc0a8c98  jal         func_2A3260
label_34c300:
    if (ctx->pc == 0x34C300u) {
        ctx->pc = 0x34C300u;
            // 0x34c300: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C304u;
        goto label_34c304;
    }
    ctx->pc = 0x34C2FCu;
    SET_GPR_U32(ctx, 31, 0x34C304u);
    ctx->pc = 0x34C300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C2FCu;
            // 0x34c300: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C304u; }
        if (ctx->pc != 0x34C304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C304u; }
        if (ctx->pc != 0x34C304u) { return; }
    }
    ctx->pc = 0x34C304u;
label_34c304:
    // 0x34c304: 0x26240258  addiu       $a0, $s1, 0x258
    ctx->pc = 0x34c304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 600));
label_34c308:
    // 0x34c308: 0xc0a8c98  jal         func_2A3260
label_34c30c:
    if (ctx->pc == 0x34C30Cu) {
        ctx->pc = 0x34C30Cu;
            // 0x34c30c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C310u;
        goto label_34c310;
    }
    ctx->pc = 0x34C308u;
    SET_GPR_U32(ctx, 31, 0x34C310u);
    ctx->pc = 0x34C30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C308u;
            // 0x34c30c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C310u; }
        if (ctx->pc != 0x34C310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C310u; }
        if (ctx->pc != 0x34C310u) { return; }
    }
    ctx->pc = 0x34C310u;
label_34c310:
    // 0x34c310: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x34c310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_34c314:
    // 0x34c314: 0x26240188  addiu       $a0, $s1, 0x188
    ctx->pc = 0x34c314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 392));
label_34c318:
    // 0x34c318: 0x24a54110  addiu       $a1, $a1, 0x4110
    ctx->pc = 0x34c318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16656));
label_34c31c:
    // 0x34c31c: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x34c31cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_34c320:
    // 0x34c320: 0xc0407e8  jal         func_101FA0
label_34c324:
    if (ctx->pc == 0x34C324u) {
        ctx->pc = 0x34C324u;
            // 0x34c324: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x34C328u;
        goto label_34c328;
    }
    ctx->pc = 0x34C320u;
    SET_GPR_U32(ctx, 31, 0x34C328u);
    ctx->pc = 0x34C324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C320u;
            // 0x34c324: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C328u; }
        if (ctx->pc != 0x34C328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C328u; }
        if (ctx->pc != 0x34C328u) { return; }
    }
    ctx->pc = 0x34C328u;
label_34c328:
    // 0x34c328: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x34c328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_34c32c:
    // 0x34c32c: 0x262400b8  addiu       $a0, $s1, 0xB8
    ctx->pc = 0x34c32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
label_34c330:
    // 0x34c330: 0x24a54110  addiu       $a1, $a1, 0x4110
    ctx->pc = 0x34c330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16656));
label_34c334:
    // 0x34c334: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x34c334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_34c338:
    // 0x34c338: 0xc0407e8  jal         func_101FA0
label_34c33c:
    if (ctx->pc == 0x34C33Cu) {
        ctx->pc = 0x34C33Cu;
            // 0x34c33c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x34C340u;
        goto label_34c340;
    }
    ctx->pc = 0x34C338u;
    SET_GPR_U32(ctx, 31, 0x34C340u);
    ctx->pc = 0x34C33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C338u;
            // 0x34c33c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C340u; }
        if (ctx->pc != 0x34C340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C340u; }
        if (ctx->pc != 0x34C340u) { return; }
    }
    ctx->pc = 0x34C340u;
label_34c340:
    // 0x34c340: 0x26240098  addiu       $a0, $s1, 0x98
    ctx->pc = 0x34c340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
label_34c344:
    // 0x34c344: 0xc0a8c98  jal         func_2A3260
label_34c348:
    if (ctx->pc == 0x34C348u) {
        ctx->pc = 0x34C348u;
            // 0x34c348: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C34Cu;
        goto label_34c34c;
    }
    ctx->pc = 0x34C344u;
    SET_GPR_U32(ctx, 31, 0x34C34Cu);
    ctx->pc = 0x34C348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C344u;
            // 0x34c348: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C34Cu; }
        if (ctx->pc != 0x34C34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C34Cu; }
        if (ctx->pc != 0x34C34Cu) { return; }
    }
    ctx->pc = 0x34C34Cu;
label_34c34c:
    // 0x34c34c: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x34c34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_34c350:
    // 0x34c350: 0xc0a8c98  jal         func_2A3260
label_34c354:
    if (ctx->pc == 0x34C354u) {
        ctx->pc = 0x34C354u;
            // 0x34c354: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C358u;
        goto label_34c358;
    }
    ctx->pc = 0x34C350u;
    SET_GPR_U32(ctx, 31, 0x34C358u);
    ctx->pc = 0x34C354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C350u;
            // 0x34c354: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C358u; }
        if (ctx->pc != 0x34C358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C358u; }
        if (ctx->pc != 0x34C358u) { return; }
    }
    ctx->pc = 0x34C358u;
label_34c358:
    // 0x34c358: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x34c358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_34c35c:
    // 0x34c35c: 0xc0a8c98  jal         func_2A3260
label_34c360:
    if (ctx->pc == 0x34C360u) {
        ctx->pc = 0x34C360u;
            // 0x34c360: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x34C364u;
        goto label_34c364;
    }
    ctx->pc = 0x34C35Cu;
    SET_GPR_U32(ctx, 31, 0x34C364u);
    ctx->pc = 0x34C360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C35Cu;
            // 0x34c360: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C364u; }
        if (ctx->pc != 0x34C364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C364u; }
        if (ctx->pc != 0x34C364u) { return; }
    }
    ctx->pc = 0x34C364u;
label_34c364:
    // 0x34c364: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_34c368:
    if (ctx->pc == 0x34C368u) {
        ctx->pc = 0x34C368u;
            // 0x34c368: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x34C36Cu;
        goto label_34c36c;
    }
    ctx->pc = 0x34C364u;
    {
        const bool branch_taken_0x34c364 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c364) {
            ctx->pc = 0x34C368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34C364u;
            // 0x34c368: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34C388u;
            goto label_34c388;
        }
    }
    ctx->pc = 0x34C36Cu;
label_34c36c:
    // 0x34c36c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_34c370:
    // 0x34c370: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34c370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34c374:
    // 0x34c374: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x34c374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_34c378:
    // 0x34c378: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34c378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34c37c:
    // 0x34c37c: 0xc057a68  jal         func_15E9A0
label_34c380:
    if (ctx->pc == 0x34C380u) {
        ctx->pc = 0x34C380u;
            // 0x34c380: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x34C384u;
        goto label_34c384;
    }
    ctx->pc = 0x34C37Cu;
    SET_GPR_U32(ctx, 31, 0x34C384u);
    ctx->pc = 0x34C380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C37Cu;
            // 0x34c380: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C384u; }
        if (ctx->pc != 0x34C384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C384u; }
        if (ctx->pc != 0x34C384u) { return; }
    }
    ctx->pc = 0x34C384u;
label_34c384:
    // 0x34c384: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x34c384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_34c388:
    // 0x34c388: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x34c388u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_34c38c:
    // 0x34c38c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_34c390:
    if (ctx->pc == 0x34C390u) {
        ctx->pc = 0x34C390u;
            // 0x34c390: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34C394u;
        goto label_34c394;
    }
    ctx->pc = 0x34C38Cu;
    {
        const bool branch_taken_0x34c38c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x34c38c) {
            ctx->pc = 0x34C390u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34C38Cu;
            // 0x34c390: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34C3A0u;
            goto label_34c3a0;
        }
    }
    ctx->pc = 0x34C394u;
label_34c394:
    // 0x34c394: 0xc0400a8  jal         func_1002A0
label_34c398:
    if (ctx->pc == 0x34C398u) {
        ctx->pc = 0x34C398u;
            // 0x34c398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34C39Cu;
        goto label_34c39c;
    }
    ctx->pc = 0x34C394u;
    SET_GPR_U32(ctx, 31, 0x34C39Cu);
    ctx->pc = 0x34C398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C394u;
            // 0x34c398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C39Cu; }
        if (ctx->pc != 0x34C39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C39Cu; }
        if (ctx->pc != 0x34C39Cu) { return; }
    }
    ctx->pc = 0x34C39Cu;
label_34c39c:
    // 0x34c39c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x34c39cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34c3a0:
    // 0x34c3a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34c3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34c3a4:
    // 0x34c3a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34c3a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34c3a8:
    // 0x34c3a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34c3a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34c3ac:
    // 0x34c3ac: 0x3e00008  jr          $ra
label_34c3b0:
    if (ctx->pc == 0x34C3B0u) {
        ctx->pc = 0x34C3B0u;
            // 0x34c3b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x34C3B4u;
        goto label_34c3b4;
    }
    ctx->pc = 0x34C3ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34C3ACu;
            // 0x34c3b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34C3B4u;
label_34c3b4:
    // 0x34c3b4: 0x0  nop
    ctx->pc = 0x34c3b4u;
    // NOP
label_34c3b8:
    // 0x34c3b8: 0x0  nop
    ctx->pc = 0x34c3b8u;
    // NOP
label_34c3bc:
    // 0x34c3bc: 0x0  nop
    ctx->pc = 0x34c3bcu;
    // NOP
label_34c3c0:
    // 0x34c3c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34c3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34c3c4:
    // 0x34c3c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34c3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_34c3c8:
    // 0x34c3c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34c3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34c3cc:
    // 0x34c3cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34c3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34c3d0:
    // 0x34c3d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34c3d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34c3d4:
    // 0x34c3d4: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_34c3d8:
    if (ctx->pc == 0x34C3D8u) {
        ctx->pc = 0x34C3D8u;
            // 0x34c3d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34C3DCu;
        goto label_34c3dc;
    }
    ctx->pc = 0x34C3D4u;
    {
        const bool branch_taken_0x34c3d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34C3D4u;
            // 0x34c3d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c3d4) {
            ctx->pc = 0x34C41Cu;
            goto label_34c41c;
        }
    }
    ctx->pc = 0x34C3DCu;
label_34c3dc:
    // 0x34c3dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_34c3e0:
    // 0x34c3e0: 0x24425a68  addiu       $v0, $v0, 0x5A68
    ctx->pc = 0x34c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23144));
label_34c3e4:
    // 0x34c3e4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x34c3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_34c3e8:
    // 0x34c3e8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x34c3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_34c3ec:
    // 0x34c3ec: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_34c3f0:
    if (ctx->pc == 0x34C3F0u) {
        ctx->pc = 0x34C3F0u;
            // 0x34c3f0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x34C3F4u;
        goto label_34c3f4;
    }
    ctx->pc = 0x34C3ECu;
    {
        const bool branch_taken_0x34c3ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c3ec) {
            ctx->pc = 0x34C3F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34C3ECu;
            // 0x34c3f0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34C408u;
            goto label_34c408;
        }
    }
    ctx->pc = 0x34C3F4u;
label_34c3f4:
    // 0x34c3f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34c3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_34c3f8:
    // 0x34c3f8: 0xc0fe48c  jal         func_3F9230
label_34c3fc:
    if (ctx->pc == 0x34C3FCu) {
        ctx->pc = 0x34C3FCu;
            // 0x34c3fc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x34C400u;
        goto label_34c400;
    }
    ctx->pc = 0x34C3F8u;
    SET_GPR_U32(ctx, 31, 0x34C400u);
    ctx->pc = 0x34C3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C3F8u;
            // 0x34c3fc: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C400u; }
        if (ctx->pc != 0x34C400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C400u; }
        if (ctx->pc != 0x34C400u) { return; }
    }
    ctx->pc = 0x34C400u;
label_34c400:
    // 0x34c400: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x34c400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_34c404:
    // 0x34c404: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x34c404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_34c408:
    // 0x34c408: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x34c408u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_34c40c:
    // 0x34c40c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_34c410:
    if (ctx->pc == 0x34C410u) {
        ctx->pc = 0x34C410u;
            // 0x34c410: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34C414u;
        goto label_34c414;
    }
    ctx->pc = 0x34C40Cu;
    {
        const bool branch_taken_0x34c40c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x34c40c) {
            ctx->pc = 0x34C410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34C40Cu;
            // 0x34c410: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34C420u;
            goto label_34c420;
        }
    }
    ctx->pc = 0x34C414u;
label_34c414:
    // 0x34c414: 0xc0400a8  jal         func_1002A0
label_34c418:
    if (ctx->pc == 0x34C418u) {
        ctx->pc = 0x34C418u;
            // 0x34c418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34C41Cu;
        goto label_34c41c;
    }
    ctx->pc = 0x34C414u;
    SET_GPR_U32(ctx, 31, 0x34C41Cu);
    ctx->pc = 0x34C418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C414u;
            // 0x34c418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C41Cu; }
        if (ctx->pc != 0x34C41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C41Cu; }
        if (ctx->pc != 0x34C41Cu) { return; }
    }
    ctx->pc = 0x34C41Cu;
label_34c41c:
    // 0x34c41c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x34c41cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34c420:
    // 0x34c420: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34c420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34c424:
    // 0x34c424: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34c424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34c428:
    // 0x34c428: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34c428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34c42c:
    // 0x34c42c: 0x3e00008  jr          $ra
label_34c430:
    if (ctx->pc == 0x34C430u) {
        ctx->pc = 0x34C430u;
            // 0x34c430: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x34C434u;
        goto label_34c434;
    }
    ctx->pc = 0x34C42Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34C42Cu;
            // 0x34c430: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34C434u;
label_34c434:
    // 0x34c434: 0x0  nop
    ctx->pc = 0x34c434u;
    // NOP
label_34c438:
    // 0x34c438: 0x0  nop
    ctx->pc = 0x34c438u;
    // NOP
label_34c43c:
    // 0x34c43c: 0x0  nop
    ctx->pc = 0x34c43cu;
    // NOP
label_34c440:
    // 0x34c440: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34c440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_34c444:
    // 0x34c444: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x34c444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_34c448:
    // 0x34c448: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34c448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_34c44c:
    // 0x34c44c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34c44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34c450:
    // 0x34c450: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34c450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34c454:
    // 0x34c454: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34c454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34c458:
    // 0x34c458: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
label_34c45c:
    if (ctx->pc == 0x34C45Cu) {
        ctx->pc = 0x34C45Cu;
            // 0x34c45c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34C460u;
        goto label_34c460;
    }
    ctx->pc = 0x34C458u;
    {
        const bool branch_taken_0x34c458 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34C458u;
            // 0x34c45c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c458) {
            ctx->pc = 0x34C4F0u;
            goto label_34c4f0;
        }
    }
    ctx->pc = 0x34C460u;
label_34c460:
    // 0x34c460: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34c460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_34c464:
    // 0x34c464: 0x24425a58  addiu       $v0, $v0, 0x5A58
    ctx->pc = 0x34c464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23128));
label_34c468:
    // 0x34c468: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x34c468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_34c46c:
    // 0x34c46c: 0x8e25055c  lw          $a1, 0x55C($s1)
    ctx->pc = 0x34c46cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1372)));
label_34c470:
    // 0x34c470: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_34c474:
    if (ctx->pc == 0x34C474u) {
        ctx->pc = 0x34C474u;
            // 0x34c474: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34C478u;
        goto label_34c478;
    }
    ctx->pc = 0x34C470u;
    {
        const bool branch_taken_0x34c470 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c470) {
            ctx->pc = 0x34C474u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34C470u;
            // 0x34c474: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34C48Cu;
            goto label_34c48c;
        }
    }
    ctx->pc = 0x34C478u;
label_34c478:
    // 0x34c478: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34c478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_34c47c:
    // 0x34c47c: 0xc0fe48c  jal         func_3F9230
label_34c480:
    if (ctx->pc == 0x34C480u) {
        ctx->pc = 0x34C480u;
            // 0x34c480: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x34C484u;
        goto label_34c484;
    }
    ctx->pc = 0x34C47Cu;
    SET_GPR_U32(ctx, 31, 0x34C484u);
    ctx->pc = 0x34C480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C47Cu;
            // 0x34c480: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C484u; }
        if (ctx->pc != 0x34C484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C484u; }
        if (ctx->pc != 0x34C484u) { return; }
    }
    ctx->pc = 0x34C484u;
label_34c484:
    // 0x34c484: 0xae20055c  sw          $zero, 0x55C($s1)
    ctx->pc = 0x34c484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1372), GPR_U32(ctx, 0));
label_34c488:
    // 0x34c488: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x34c488u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34c48c:
    // 0x34c48c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34c48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_34c490:
    // 0x34c490: 0xc04e894  jal         func_13A250
label_34c494:
    if (ctx->pc == 0x34C494u) {
        ctx->pc = 0x34C494u;
            // 0x34c494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34C498u;
        goto label_34c498;
    }
    ctx->pc = 0x34C490u;
    SET_GPR_U32(ctx, 31, 0x34C498u);
    ctx->pc = 0x34C494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C490u;
            // 0x34c494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A250u;
    if (runtime->hasFunction(0x13A250u)) {
        auto targetFn = runtime->lookupFunction(0x13A250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C498u; }
        if (ctx->pc != 0x34C498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A250_0x13a250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C498u; }
        if (ctx->pc != 0x34C498u) { return; }
    }
    ctx->pc = 0x34C498u;
label_34c498:
    // 0x34c498: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x34c498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
label_34c49c:
    // 0x34c49c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x34c49cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_34c4a0:
    // 0x34c4a0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_34c4a4:
    if (ctx->pc == 0x34C4A4u) {
        ctx->pc = 0x34C4A8u;
        goto label_34c4a8;
    }
    ctx->pc = 0x34C4A0u;
    {
        const bool branch_taken_0x34c4a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c4a0) {
            ctx->pc = 0x34C48Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34c48c;
        }
    }
    ctx->pc = 0x34C4A8u;
label_34c4a8:
    // 0x34c4a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x34c4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34c4ac:
    // 0x34c4ac: 0xc04e894  jal         func_13A250
label_34c4b0:
    if (ctx->pc == 0x34C4B0u) {
        ctx->pc = 0x34C4B0u;
            // 0x34c4b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x34C4B4u;
        goto label_34c4b4;
    }
    ctx->pc = 0x34C4ACu;
    SET_GPR_U32(ctx, 31, 0x34C4B4u);
    ctx->pc = 0x34C4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C4ACu;
            // 0x34c4b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A250u;
    if (runtime->hasFunction(0x13A250u)) {
        auto targetFn = runtime->lookupFunction(0x13A250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C4B4u; }
        if (ctx->pc != 0x34C4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A250_0x13a250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C4B4u; }
        if (ctx->pc != 0x34C4B4u) { return; }
    }
    ctx->pc = 0x34C4B4u;
label_34c4b4:
    // 0x34c4b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34c4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34c4b8:
    // 0x34c4b8: 0xc04e894  jal         func_13A250
label_34c4bc:
    if (ctx->pc == 0x34C4BCu) {
        ctx->pc = 0x34C4BCu;
            // 0x34c4bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34C4C0u;
        goto label_34c4c0;
    }
    ctx->pc = 0x34C4B8u;
    SET_GPR_U32(ctx, 31, 0x34C4C0u);
    ctx->pc = 0x34C4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C4B8u;
            // 0x34c4bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A250u;
    if (runtime->hasFunction(0x13A250u)) {
        auto targetFn = runtime->lookupFunction(0x13A250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C4C0u; }
        if (ctx->pc != 0x34C4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A250_0x13a250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C4C0u; }
        if (ctx->pc != 0x34C4C0u) { return; }
    }
    ctx->pc = 0x34C4C0u;
label_34c4c0:
    // 0x34c4c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x34c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_34c4c4:
    // 0x34c4c4: 0x8c44e418  lw          $a0, -0x1BE8($v0)
    ctx->pc = 0x34c4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960152)));
label_34c4c8:
    // 0x34c4c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x34c4c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_34c4cc:
    // 0x34c4cc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x34c4ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_34c4d0:
    // 0x34c4d0: 0x320f809  jalr        $t9
label_34c4d4:
    if (ctx->pc == 0x34C4D4u) {
        ctx->pc = 0x34C4D4u;
            // 0x34c4d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34C4D8u;
        goto label_34c4d8;
    }
    ctx->pc = 0x34C4D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34C4D8u);
        ctx->pc = 0x34C4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34C4D0u;
            // 0x34c4d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34C4D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34C4D8u; }
            if (ctx->pc != 0x34C4D8u) { return; }
        }
        }
    }
    ctx->pc = 0x34C4D8u;
label_34c4d8:
    // 0x34c4d8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x34c4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_34c4dc:
    // 0x34c4dc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x34c4dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_34c4e0:
    // 0x34c4e0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_34c4e4:
    if (ctx->pc == 0x34C4E4u) {
        ctx->pc = 0x34C4E4u;
            // 0x34c4e4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34C4E8u;
        goto label_34c4e8;
    }
    ctx->pc = 0x34C4E0u;
    {
        const bool branch_taken_0x34c4e0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x34c4e0) {
            ctx->pc = 0x34C4E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34C4E0u;
            // 0x34c4e4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34C4F4u;
            goto label_34c4f4;
        }
    }
    ctx->pc = 0x34C4E8u;
label_34c4e8:
    // 0x34c4e8: 0xc0400a8  jal         func_1002A0
label_34c4ec:
    if (ctx->pc == 0x34C4ECu) {
        ctx->pc = 0x34C4ECu;
            // 0x34c4ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34C4F0u;
        goto label_34c4f0;
    }
    ctx->pc = 0x34C4E8u;
    SET_GPR_U32(ctx, 31, 0x34C4F0u);
    ctx->pc = 0x34C4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C4E8u;
            // 0x34c4ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C4F0u; }
        if (ctx->pc != 0x34C4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C4F0u; }
        if (ctx->pc != 0x34C4F0u) { return; }
    }
    ctx->pc = 0x34C4F0u;
label_34c4f0:
    // 0x34c4f0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x34c4f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34c4f4:
    // 0x34c4f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x34c4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_34c4f8:
    // 0x34c4f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34c4f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_34c4fc:
    // 0x34c4fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34c4fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34c500:
    // 0x34c500: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34c500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34c504:
    // 0x34c504: 0x3e00008  jr          $ra
label_34c508:
    if (ctx->pc == 0x34C508u) {
        ctx->pc = 0x34C508u;
            // 0x34c508: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x34C50Cu;
        goto label_34c50c;
    }
    ctx->pc = 0x34C504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34C504u;
            // 0x34c508: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34C50Cu;
label_34c50c:
    // 0x34c50c: 0x0  nop
    ctx->pc = 0x34c50cu;
    // NOP
label_34c510:
    // 0x34c510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34c510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34c514:
    // 0x34c514: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34c514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_34c518:
    // 0x34c518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34c518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34c51c:
    // 0x34c51c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34c51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34c520:
    // 0x34c520: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34c520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34c524:
    // 0x34c524: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_34c528:
    if (ctx->pc == 0x34C528u) {
        ctx->pc = 0x34C528u;
            // 0x34c528: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34C52Cu;
        goto label_34c52c;
    }
    ctx->pc = 0x34C524u;
    {
        const bool branch_taken_0x34c524 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34C528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34C524u;
            // 0x34c528: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c524) {
            ctx->pc = 0x34C584u;
            goto label_34c584;
        }
    }
    ctx->pc = 0x34C52Cu;
label_34c52c:
    // 0x34c52c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x34c52cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_34c530:
    // 0x34c530: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34c530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_34c534:
    // 0x34c534: 0x24635a40  addiu       $v1, $v1, 0x5A40
    ctx->pc = 0x34c534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23104));
label_34c538:
    // 0x34c538: 0x24425a4c  addiu       $v0, $v0, 0x5A4C
    ctx->pc = 0x34c538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23116));
label_34c53c:
    // 0x34c53c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x34c53cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_34c540:
    // 0x34c540: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x34c540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_34c544:
    // 0x34c544: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x34c544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_34c548:
    // 0x34c548: 0xc0fe620  jal         func_3F9880
label_34c54c:
    if (ctx->pc == 0x34C54Cu) {
        ctx->pc = 0x34C54Cu;
            // 0x34c54c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34C550u;
        goto label_34c550;
    }
    ctx->pc = 0x34C548u;
    SET_GPR_U32(ctx, 31, 0x34C550u);
    ctx->pc = 0x34C54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C548u;
            // 0x34c54c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9880u;
    if (runtime->hasFunction(0x3F9880u)) {
        auto targetFn = runtime->lookupFunction(0x3F9880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C550u; }
        if (ctx->pc != 0x34C550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9880_0x3f9880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C550u; }
        if (ctx->pc != 0x34C550u) { return; }
    }
    ctx->pc = 0x34C550u;
label_34c550:
    // 0x34c550: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_34c554:
    if (ctx->pc == 0x34C554u) {
        ctx->pc = 0x34C554u;
            // 0x34c554: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x34C558u;
        goto label_34c558;
    }
    ctx->pc = 0x34C550u;
    {
        const bool branch_taken_0x34c550 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c550) {
            ctx->pc = 0x34C554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34C550u;
            // 0x34c554: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34C570u;
            goto label_34c570;
        }
    }
    ctx->pc = 0x34C558u;
label_34c558:
    // 0x34c558: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x34c558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_34c55c:
    // 0x34c55c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34c55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_34c560:
    // 0x34c560: 0x24635a30  addiu       $v1, $v1, 0x5A30
    ctx->pc = 0x34c560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23088));
label_34c564:
    // 0x34c564: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x34c564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_34c568:
    // 0x34c568: 0xac403eb8  sw          $zero, 0x3EB8($v0)
    ctx->pc = 0x34c568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16056), GPR_U32(ctx, 0));
label_34c56c:
    // 0x34c56c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x34c56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_34c570:
    // 0x34c570: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x34c570u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_34c574:
    // 0x34c574: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_34c578:
    if (ctx->pc == 0x34C578u) {
        ctx->pc = 0x34C578u;
            // 0x34c578: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34C57Cu;
        goto label_34c57c;
    }
    ctx->pc = 0x34C574u;
    {
        const bool branch_taken_0x34c574 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x34c574) {
            ctx->pc = 0x34C578u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34C574u;
            // 0x34c578: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34C588u;
            goto label_34c588;
        }
    }
    ctx->pc = 0x34C57Cu;
label_34c57c:
    // 0x34c57c: 0xc0400a8  jal         func_1002A0
label_34c580:
    if (ctx->pc == 0x34C580u) {
        ctx->pc = 0x34C580u;
            // 0x34c580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34C584u;
        goto label_34c584;
    }
    ctx->pc = 0x34C57Cu;
    SET_GPR_U32(ctx, 31, 0x34C584u);
    ctx->pc = 0x34C580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34C57Cu;
            // 0x34c580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C584u; }
        if (ctx->pc != 0x34C584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34C584u; }
        if (ctx->pc != 0x34C584u) { return; }
    }
    ctx->pc = 0x34C584u;
label_34c584:
    // 0x34c584: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34c584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34c588:
    // 0x34c588: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34c588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34c58c:
    // 0x34c58c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34c58cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34c590:
    // 0x34c590: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34c590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34c594:
    // 0x34c594: 0x3e00008  jr          $ra
label_34c598:
    if (ctx->pc == 0x34C598u) {
        ctx->pc = 0x34C598u;
            // 0x34c598: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x34C59Cu;
        goto label_34c59c;
    }
    ctx->pc = 0x34C594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34C594u;
            // 0x34c598: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34C59Cu;
label_34c59c:
    // 0x34c59c: 0x0  nop
    ctx->pc = 0x34c59cu;
    // NOP
}
