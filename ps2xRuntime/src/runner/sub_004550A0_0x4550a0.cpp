#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004550A0
// Address: 0x4550a0 - 0x455490
void sub_004550A0_0x4550a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004550A0_0x4550a0");
#endif

    switch (ctx->pc) {
        case 0x4550a0u: goto label_4550a0;
        case 0x4550a4u: goto label_4550a4;
        case 0x4550a8u: goto label_4550a8;
        case 0x4550acu: goto label_4550ac;
        case 0x4550b0u: goto label_4550b0;
        case 0x4550b4u: goto label_4550b4;
        case 0x4550b8u: goto label_4550b8;
        case 0x4550bcu: goto label_4550bc;
        case 0x4550c0u: goto label_4550c0;
        case 0x4550c4u: goto label_4550c4;
        case 0x4550c8u: goto label_4550c8;
        case 0x4550ccu: goto label_4550cc;
        case 0x4550d0u: goto label_4550d0;
        case 0x4550d4u: goto label_4550d4;
        case 0x4550d8u: goto label_4550d8;
        case 0x4550dcu: goto label_4550dc;
        case 0x4550e0u: goto label_4550e0;
        case 0x4550e4u: goto label_4550e4;
        case 0x4550e8u: goto label_4550e8;
        case 0x4550ecu: goto label_4550ec;
        case 0x4550f0u: goto label_4550f0;
        case 0x4550f4u: goto label_4550f4;
        case 0x4550f8u: goto label_4550f8;
        case 0x4550fcu: goto label_4550fc;
        case 0x455100u: goto label_455100;
        case 0x455104u: goto label_455104;
        case 0x455108u: goto label_455108;
        case 0x45510cu: goto label_45510c;
        case 0x455110u: goto label_455110;
        case 0x455114u: goto label_455114;
        case 0x455118u: goto label_455118;
        case 0x45511cu: goto label_45511c;
        case 0x455120u: goto label_455120;
        case 0x455124u: goto label_455124;
        case 0x455128u: goto label_455128;
        case 0x45512cu: goto label_45512c;
        case 0x455130u: goto label_455130;
        case 0x455134u: goto label_455134;
        case 0x455138u: goto label_455138;
        case 0x45513cu: goto label_45513c;
        case 0x455140u: goto label_455140;
        case 0x455144u: goto label_455144;
        case 0x455148u: goto label_455148;
        case 0x45514cu: goto label_45514c;
        case 0x455150u: goto label_455150;
        case 0x455154u: goto label_455154;
        case 0x455158u: goto label_455158;
        case 0x45515cu: goto label_45515c;
        case 0x455160u: goto label_455160;
        case 0x455164u: goto label_455164;
        case 0x455168u: goto label_455168;
        case 0x45516cu: goto label_45516c;
        case 0x455170u: goto label_455170;
        case 0x455174u: goto label_455174;
        case 0x455178u: goto label_455178;
        case 0x45517cu: goto label_45517c;
        case 0x455180u: goto label_455180;
        case 0x455184u: goto label_455184;
        case 0x455188u: goto label_455188;
        case 0x45518cu: goto label_45518c;
        case 0x455190u: goto label_455190;
        case 0x455194u: goto label_455194;
        case 0x455198u: goto label_455198;
        case 0x45519cu: goto label_45519c;
        case 0x4551a0u: goto label_4551a0;
        case 0x4551a4u: goto label_4551a4;
        case 0x4551a8u: goto label_4551a8;
        case 0x4551acu: goto label_4551ac;
        case 0x4551b0u: goto label_4551b0;
        case 0x4551b4u: goto label_4551b4;
        case 0x4551b8u: goto label_4551b8;
        case 0x4551bcu: goto label_4551bc;
        case 0x4551c0u: goto label_4551c0;
        case 0x4551c4u: goto label_4551c4;
        case 0x4551c8u: goto label_4551c8;
        case 0x4551ccu: goto label_4551cc;
        case 0x4551d0u: goto label_4551d0;
        case 0x4551d4u: goto label_4551d4;
        case 0x4551d8u: goto label_4551d8;
        case 0x4551dcu: goto label_4551dc;
        case 0x4551e0u: goto label_4551e0;
        case 0x4551e4u: goto label_4551e4;
        case 0x4551e8u: goto label_4551e8;
        case 0x4551ecu: goto label_4551ec;
        case 0x4551f0u: goto label_4551f0;
        case 0x4551f4u: goto label_4551f4;
        case 0x4551f8u: goto label_4551f8;
        case 0x4551fcu: goto label_4551fc;
        case 0x455200u: goto label_455200;
        case 0x455204u: goto label_455204;
        case 0x455208u: goto label_455208;
        case 0x45520cu: goto label_45520c;
        case 0x455210u: goto label_455210;
        case 0x455214u: goto label_455214;
        case 0x455218u: goto label_455218;
        case 0x45521cu: goto label_45521c;
        case 0x455220u: goto label_455220;
        case 0x455224u: goto label_455224;
        case 0x455228u: goto label_455228;
        case 0x45522cu: goto label_45522c;
        case 0x455230u: goto label_455230;
        case 0x455234u: goto label_455234;
        case 0x455238u: goto label_455238;
        case 0x45523cu: goto label_45523c;
        case 0x455240u: goto label_455240;
        case 0x455244u: goto label_455244;
        case 0x455248u: goto label_455248;
        case 0x45524cu: goto label_45524c;
        case 0x455250u: goto label_455250;
        case 0x455254u: goto label_455254;
        case 0x455258u: goto label_455258;
        case 0x45525cu: goto label_45525c;
        case 0x455260u: goto label_455260;
        case 0x455264u: goto label_455264;
        case 0x455268u: goto label_455268;
        case 0x45526cu: goto label_45526c;
        case 0x455270u: goto label_455270;
        case 0x455274u: goto label_455274;
        case 0x455278u: goto label_455278;
        case 0x45527cu: goto label_45527c;
        case 0x455280u: goto label_455280;
        case 0x455284u: goto label_455284;
        case 0x455288u: goto label_455288;
        case 0x45528cu: goto label_45528c;
        case 0x455290u: goto label_455290;
        case 0x455294u: goto label_455294;
        case 0x455298u: goto label_455298;
        case 0x45529cu: goto label_45529c;
        case 0x4552a0u: goto label_4552a0;
        case 0x4552a4u: goto label_4552a4;
        case 0x4552a8u: goto label_4552a8;
        case 0x4552acu: goto label_4552ac;
        case 0x4552b0u: goto label_4552b0;
        case 0x4552b4u: goto label_4552b4;
        case 0x4552b8u: goto label_4552b8;
        case 0x4552bcu: goto label_4552bc;
        case 0x4552c0u: goto label_4552c0;
        case 0x4552c4u: goto label_4552c4;
        case 0x4552c8u: goto label_4552c8;
        case 0x4552ccu: goto label_4552cc;
        case 0x4552d0u: goto label_4552d0;
        case 0x4552d4u: goto label_4552d4;
        case 0x4552d8u: goto label_4552d8;
        case 0x4552dcu: goto label_4552dc;
        case 0x4552e0u: goto label_4552e0;
        case 0x4552e4u: goto label_4552e4;
        case 0x4552e8u: goto label_4552e8;
        case 0x4552ecu: goto label_4552ec;
        case 0x4552f0u: goto label_4552f0;
        case 0x4552f4u: goto label_4552f4;
        case 0x4552f8u: goto label_4552f8;
        case 0x4552fcu: goto label_4552fc;
        case 0x455300u: goto label_455300;
        case 0x455304u: goto label_455304;
        case 0x455308u: goto label_455308;
        case 0x45530cu: goto label_45530c;
        case 0x455310u: goto label_455310;
        case 0x455314u: goto label_455314;
        case 0x455318u: goto label_455318;
        case 0x45531cu: goto label_45531c;
        case 0x455320u: goto label_455320;
        case 0x455324u: goto label_455324;
        case 0x455328u: goto label_455328;
        case 0x45532cu: goto label_45532c;
        case 0x455330u: goto label_455330;
        case 0x455334u: goto label_455334;
        case 0x455338u: goto label_455338;
        case 0x45533cu: goto label_45533c;
        case 0x455340u: goto label_455340;
        case 0x455344u: goto label_455344;
        case 0x455348u: goto label_455348;
        case 0x45534cu: goto label_45534c;
        case 0x455350u: goto label_455350;
        case 0x455354u: goto label_455354;
        case 0x455358u: goto label_455358;
        case 0x45535cu: goto label_45535c;
        case 0x455360u: goto label_455360;
        case 0x455364u: goto label_455364;
        case 0x455368u: goto label_455368;
        case 0x45536cu: goto label_45536c;
        case 0x455370u: goto label_455370;
        case 0x455374u: goto label_455374;
        case 0x455378u: goto label_455378;
        case 0x45537cu: goto label_45537c;
        case 0x455380u: goto label_455380;
        case 0x455384u: goto label_455384;
        case 0x455388u: goto label_455388;
        case 0x45538cu: goto label_45538c;
        case 0x455390u: goto label_455390;
        case 0x455394u: goto label_455394;
        case 0x455398u: goto label_455398;
        case 0x45539cu: goto label_45539c;
        case 0x4553a0u: goto label_4553a0;
        case 0x4553a4u: goto label_4553a4;
        case 0x4553a8u: goto label_4553a8;
        case 0x4553acu: goto label_4553ac;
        case 0x4553b0u: goto label_4553b0;
        case 0x4553b4u: goto label_4553b4;
        case 0x4553b8u: goto label_4553b8;
        case 0x4553bcu: goto label_4553bc;
        case 0x4553c0u: goto label_4553c0;
        case 0x4553c4u: goto label_4553c4;
        case 0x4553c8u: goto label_4553c8;
        case 0x4553ccu: goto label_4553cc;
        case 0x4553d0u: goto label_4553d0;
        case 0x4553d4u: goto label_4553d4;
        case 0x4553d8u: goto label_4553d8;
        case 0x4553dcu: goto label_4553dc;
        case 0x4553e0u: goto label_4553e0;
        case 0x4553e4u: goto label_4553e4;
        case 0x4553e8u: goto label_4553e8;
        case 0x4553ecu: goto label_4553ec;
        case 0x4553f0u: goto label_4553f0;
        case 0x4553f4u: goto label_4553f4;
        case 0x4553f8u: goto label_4553f8;
        case 0x4553fcu: goto label_4553fc;
        case 0x455400u: goto label_455400;
        case 0x455404u: goto label_455404;
        case 0x455408u: goto label_455408;
        case 0x45540cu: goto label_45540c;
        case 0x455410u: goto label_455410;
        case 0x455414u: goto label_455414;
        case 0x455418u: goto label_455418;
        case 0x45541cu: goto label_45541c;
        case 0x455420u: goto label_455420;
        case 0x455424u: goto label_455424;
        case 0x455428u: goto label_455428;
        case 0x45542cu: goto label_45542c;
        case 0x455430u: goto label_455430;
        case 0x455434u: goto label_455434;
        case 0x455438u: goto label_455438;
        case 0x45543cu: goto label_45543c;
        case 0x455440u: goto label_455440;
        case 0x455444u: goto label_455444;
        case 0x455448u: goto label_455448;
        case 0x45544cu: goto label_45544c;
        case 0x455450u: goto label_455450;
        case 0x455454u: goto label_455454;
        case 0x455458u: goto label_455458;
        case 0x45545cu: goto label_45545c;
        case 0x455460u: goto label_455460;
        case 0x455464u: goto label_455464;
        case 0x455468u: goto label_455468;
        case 0x45546cu: goto label_45546c;
        case 0x455470u: goto label_455470;
        case 0x455474u: goto label_455474;
        case 0x455478u: goto label_455478;
        case 0x45547cu: goto label_45547c;
        case 0x455480u: goto label_455480;
        case 0x455484u: goto label_455484;
        case 0x455488u: goto label_455488;
        case 0x45548cu: goto label_45548c;
        default: break;
    }

    ctx->pc = 0x4550a0u;

label_4550a0:
    // 0x4550a0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4550a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4550a4:
    // 0x4550a4: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x4550a4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_4550a8:
    // 0x4550a8: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x4550a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4550ac:
    // 0x4550ac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4550acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4550b0:
    // 0x4550b0: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x4550b0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4550b4:
    // 0x4550b4: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x4550b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_4550b8:
    // 0x4550b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4550b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4550bc:
    // 0x4550bc: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x4550bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_4550c0:
    // 0x4550c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4550c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4550c4:
    // 0x4550c4: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x4550c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4550c8:
    // 0x4550c8: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x4550c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_4550cc:
    // 0x4550cc: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x4550ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_4550d0:
    // 0x4550d0: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x4550d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_4550d4:
    // 0x4550d4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4550d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4550d8:
    // 0x4550d8: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x4550d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_4550dc:
    // 0x4550dc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4550dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4550e0:
    // 0x4550e0: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x4550e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_4550e4:
    // 0x4550e4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4550e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4550e8:
    // 0x4550e8: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x4550e8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_4550ec:
    // 0x4550ec: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4550ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4550f0:
    // 0x4550f0: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x4550f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_4550f4:
    // 0x4550f4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4550f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4550f8:
    // 0x4550f8: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x4550f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4550fc:
    // 0x4550fc: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x4550fcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_455100:
    // 0x455100: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x455100u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_455104:
    // 0x455104: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x455104u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_455108:
    // 0x455108: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x455108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_45510c:
    // 0x45510c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x45510cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_455110:
    // 0x455110: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x455110u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_455114:
    // 0x455114: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x455114u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_455118:
    // 0x455118: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x455118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_45511c:
    // 0x45511c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x45511cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_455120:
    // 0x455120: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x455120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_455124:
    // 0x455124: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x455124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_455128:
    // 0x455128: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x455128u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_45512c:
    // 0x45512c: 0x3e00008  jr          $ra
label_455130:
    if (ctx->pc == 0x455130u) {
        ctx->pc = 0x455130u;
            // 0x455130: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x455134u;
        goto label_455134;
    }
    ctx->pc = 0x45512Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x455130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45512Cu;
            // 0x455130: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x455134u;
label_455134:
    // 0x455134: 0x0  nop
    ctx->pc = 0x455134u;
    // NOP
label_455138:
    // 0x455138: 0x0  nop
    ctx->pc = 0x455138u;
    // NOP
label_45513c:
    // 0x45513c: 0x0  nop
    ctx->pc = 0x45513cu;
    // NOP
label_455140:
    // 0x455140: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x455140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_455144:
    // 0x455144: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x455144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_455148:
    // 0x455148: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x455148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_45514c:
    // 0x45514c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x45514cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_455150:
    // 0x455150: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x455150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_455154:
    // 0x455154: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x455154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_455158:
    // 0x455158: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x455158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_45515c:
    // 0x45515c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x45515cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_455160:
    // 0x455160: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x455160u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_455164:
    // 0x455164: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x455164u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_455168:
    // 0x455168: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_45516c:
    if (ctx->pc == 0x45516Cu) {
        ctx->pc = 0x45516Cu;
            // 0x45516c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x455170u;
        goto label_455170;
    }
    ctx->pc = 0x455168u;
    {
        const bool branch_taken_0x455168 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x45516Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x455168u;
            // 0x45516c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455168) {
            ctx->pc = 0x45519Cu;
            goto label_45519c;
        }
    }
    ctx->pc = 0x455170u;
label_455170:
    // 0x455170: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x455170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_455174:
    // 0x455174: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_455178:
    if (ctx->pc == 0x455178u) {
        ctx->pc = 0x455178u;
            // 0x455178: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x45517Cu;
        goto label_45517c;
    }
    ctx->pc = 0x455174u;
    {
        const bool branch_taken_0x455174 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x455174) {
            ctx->pc = 0x455178u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x455174u;
            // 0x455178: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x455190u;
            goto label_455190;
        }
    }
    ctx->pc = 0x45517Cu;
label_45517c:
    // 0x45517c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x45517cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_455180:
    // 0x455180: 0x10a300b9  beq         $a1, $v1, . + 4 + (0xB9 << 2)
label_455184:
    if (ctx->pc == 0x455184u) {
        ctx->pc = 0x455188u;
        goto label_455188;
    }
    ctx->pc = 0x455180u;
    {
        const bool branch_taken_0x455180 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x455180) {
            ctx->pc = 0x455468u;
            goto label_455468;
        }
    }
    ctx->pc = 0x455188u;
label_455188:
    // 0x455188: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_45518c:
    if (ctx->pc == 0x45518Cu) {
        ctx->pc = 0x455190u;
        goto label_455190;
    }
    ctx->pc = 0x455188u;
    {
        const bool branch_taken_0x455188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x455188) {
            ctx->pc = 0x455468u;
            goto label_455468;
        }
    }
    ctx->pc = 0x455190u;
label_455190:
    // 0x455190: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x455190u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_455194:
    // 0x455194: 0x320f809  jalr        $t9
label_455198:
    if (ctx->pc == 0x455198u) {
        ctx->pc = 0x45519Cu;
        goto label_45519c;
    }
    ctx->pc = 0x455194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45519Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x45519Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45519Cu; }
            if (ctx->pc != 0x45519Cu) { return; }
        }
        }
    }
    ctx->pc = 0x45519Cu;
label_45519c:
    // 0x45519c: 0x8e900070  lw          $s0, 0x70($s4)
    ctx->pc = 0x45519cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_4551a0:
    // 0x4551a0: 0x120000b1  beqz        $s0, . + 4 + (0xB1 << 2)
label_4551a4:
    if (ctx->pc == 0x4551A4u) {
        ctx->pc = 0x4551A8u;
        goto label_4551a8;
    }
    ctx->pc = 0x4551A0u;
    {
        const bool branch_taken_0x4551a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4551a0) {
            ctx->pc = 0x455468u;
            goto label_455468;
        }
    }
    ctx->pc = 0x4551A8u;
label_4551a8:
    // 0x4551a8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4551a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4551ac:
    // 0x4551ac: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4551acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4551b0:
    // 0x4551b0: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x4551b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_4551b4:
    // 0x4551b4: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x4551b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_4551b8:
    // 0x4551b8: 0x146000ab  bnez        $v1, . + 4 + (0xAB << 2)
label_4551bc:
    if (ctx->pc == 0x4551BCu) {
        ctx->pc = 0x4551C0u;
        goto label_4551c0;
    }
    ctx->pc = 0x4551B8u;
    {
        const bool branch_taken_0x4551b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4551b8) {
            ctx->pc = 0x455468u;
            goto label_455468;
        }
    }
    ctx->pc = 0x4551C0u;
label_4551c0:
    // 0x4551c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4551c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4551c4:
    // 0x4551c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4551c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4551c8:
    // 0x4551c8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4551c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4551cc:
    // 0x4551cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4551ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4551d0:
    // 0x4551d0: 0xc0e3658  jal         func_38D960
label_4551d4:
    if (ctx->pc == 0x4551D4u) {
        ctx->pc = 0x4551D4u;
            // 0x4551d4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4551D8u;
        goto label_4551d8;
    }
    ctx->pc = 0x4551D0u;
    SET_GPR_U32(ctx, 31, 0x4551D8u);
    ctx->pc = 0x4551D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4551D0u;
            // 0x4551d4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4551D8u; }
        if (ctx->pc != 0x4551D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4551D8u; }
        if (ctx->pc != 0x4551D8u) { return; }
    }
    ctx->pc = 0x4551D8u;
label_4551d8:
    // 0x4551d8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4551d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4551dc:
    // 0x4551dc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4551dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4551e0:
    // 0x4551e0: 0xc0775b8  jal         func_1DD6E0
label_4551e4:
    if (ctx->pc == 0x4551E4u) {
        ctx->pc = 0x4551E4u;
            // 0x4551e4: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4551E8u;
        goto label_4551e8;
    }
    ctx->pc = 0x4551E0u;
    SET_GPR_U32(ctx, 31, 0x4551E8u);
    ctx->pc = 0x4551E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4551E0u;
            // 0x4551e4: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4551E8u; }
        if (ctx->pc != 0x4551E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4551E8u; }
        if (ctx->pc != 0x4551E8u) { return; }
    }
    ctx->pc = 0x4551E8u;
label_4551e8:
    // 0x4551e8: 0xc0775b4  jal         func_1DD6D0
label_4551ec:
    if (ctx->pc == 0x4551ECu) {
        ctx->pc = 0x4551ECu;
            // 0x4551ec: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4551F0u;
        goto label_4551f0;
    }
    ctx->pc = 0x4551E8u;
    SET_GPR_U32(ctx, 31, 0x4551F0u);
    ctx->pc = 0x4551ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4551E8u;
            // 0x4551ec: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4551F0u; }
        if (ctx->pc != 0x4551F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4551F0u; }
        if (ctx->pc != 0x4551F0u) { return; }
    }
    ctx->pc = 0x4551F0u;
label_4551f0:
    // 0x4551f0: 0xc6420100  lwc1        $f2, 0x100($s2)
    ctx->pc = 0x4551f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4551f4:
    // 0x4551f4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4551f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4551f8:
    // 0x4551f8: 0x0  nop
    ctx->pc = 0x4551f8u;
    // NOP
label_4551fc:
    // 0x4551fc: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x4551fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_455200:
    // 0x455200: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_455204:
    if (ctx->pc == 0x455204u) {
        ctx->pc = 0x455204u;
            // 0x455204: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x455208u;
        goto label_455208;
    }
    ctx->pc = 0x455200u;
    {
        const bool branch_taken_0x455200 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x455204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x455200u;
            // 0x455204: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455200) {
            ctx->pc = 0x45520Cu;
            goto label_45520c;
        }
    }
    ctx->pc = 0x455208u;
label_455208:
    // 0x455208: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x455208u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45520c:
    // 0x45520c: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_455210:
    if (ctx->pc == 0x455210u) {
        ctx->pc = 0x455210u;
            // 0x455210: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x455214u;
        goto label_455214;
    }
    ctx->pc = 0x45520Cu;
    {
        const bool branch_taken_0x45520c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x45520c) {
            ctx->pc = 0x455210u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45520Cu;
            // 0x455210: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x455220u;
            goto label_455220;
        }
    }
    ctx->pc = 0x455214u;
label_455214:
    // 0x455214: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x455214u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_455218:
    // 0x455218: 0x10000007  b           . + 4 + (0x7 << 2)
label_45521c:
    if (ctx->pc == 0x45521Cu) {
        ctx->pc = 0x45521Cu;
            // 0x45521c: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x455220u;
        goto label_455220;
    }
    ctx->pc = 0x455218u;
    {
        const bool branch_taken_0x455218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45521Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x455218u;
            // 0x45521c: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x455218) {
            ctx->pc = 0x455238u;
            goto label_455238;
        }
    }
    ctx->pc = 0x455220u;
label_455220:
    // 0x455220: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x455220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_455224:
    // 0x455224: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x455224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_455228:
    // 0x455228: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x455228u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_45522c:
    // 0x45522c: 0x0  nop
    ctx->pc = 0x45522cu;
    // NOP
label_455230:
    // 0x455230: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x455230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_455234:
    // 0x455234: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x455234u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_455238:
    // 0x455238: 0xc6420100  lwc1        $f2, 0x100($s2)
    ctx->pc = 0x455238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45523c:
    // 0x45523c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x45523cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_455240:
    // 0x455240: 0x0  nop
    ctx->pc = 0x455240u;
    // NOP
label_455244:
    // 0x455244: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x455244u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_455248:
    // 0x455248: 0x4600181d  msub.s      $f0, $f3, $f0
    ctx->pc = 0x455248u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_45524c:
    // 0x45524c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x45524cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_455250:
    // 0x455250: 0x45000081  bc1f        . + 4 + (0x81 << 2)
label_455254:
    if (ctx->pc == 0x455254u) {
        ctx->pc = 0x455254u;
            // 0x455254: 0xe6400100  swc1        $f0, 0x100($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
        ctx->pc = 0x455258u;
        goto label_455258;
    }
    ctx->pc = 0x455250u;
    {
        const bool branch_taken_0x455250 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x455254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x455250u;
            // 0x455254: 0xe6400100  swc1        $f0, 0x100($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x455250) {
            ctx->pc = 0x455458u;
            goto label_455458;
        }
    }
    ctx->pc = 0x455258u;
label_455258:
    // 0x455258: 0x8e4400e4  lw          $a0, 0xE4($s2)
    ctx->pc = 0x455258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 228)));
label_45525c:
    // 0x45525c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x45525cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_455260:
    // 0x455260: 0x1083007b  beq         $a0, $v1, . + 4 + (0x7B << 2)
label_455264:
    if (ctx->pc == 0x455264u) {
        ctx->pc = 0x455268u;
        goto label_455268;
    }
    ctx->pc = 0x455260u;
    {
        const bool branch_taken_0x455260 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x455260) {
            ctx->pc = 0x455450u;
            goto label_455450;
        }
    }
    ctx->pc = 0x455268u;
label_455268:
    // 0x455268: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x455268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45526c:
    // 0x45526c: 0x10830046  beq         $a0, $v1, . + 4 + (0x46 << 2)
label_455270:
    if (ctx->pc == 0x455270u) {
        ctx->pc = 0x455274u;
        goto label_455274;
    }
    ctx->pc = 0x45526Cu;
    {
        const bool branch_taken_0x45526c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x45526c) {
            ctx->pc = 0x455388u;
            goto label_455388;
        }
    }
    ctx->pc = 0x455274u;
label_455274:
    // 0x455274: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_455278:
    if (ctx->pc == 0x455278u) {
        ctx->pc = 0x45527Cu;
        goto label_45527c;
    }
    ctx->pc = 0x455274u;
    {
        const bool branch_taken_0x455274 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x455274) {
            ctx->pc = 0x455288u;
            goto label_455288;
        }
    }
    ctx->pc = 0x45527Cu;
label_45527c:
    // 0x45527c: 0x10000076  b           . + 4 + (0x76 << 2)
label_455280:
    if (ctx->pc == 0x455280u) {
        ctx->pc = 0x455284u;
        goto label_455284;
    }
    ctx->pc = 0x45527Cu;
    {
        const bool branch_taken_0x45527c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45527c) {
            ctx->pc = 0x455458u;
            goto label_455458;
        }
    }
    ctx->pc = 0x455284u;
label_455284:
    // 0x455284: 0x0  nop
    ctx->pc = 0x455284u;
    // NOP
label_455288:
    // 0x455288: 0xc0dd4bc  jal         func_3752F0
label_45528c:
    if (ctx->pc == 0x45528Cu) {
        ctx->pc = 0x45528Cu;
            // 0x45528c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x455290u;
        goto label_455290;
    }
    ctx->pc = 0x455288u;
    SET_GPR_U32(ctx, 31, 0x455290u);
    ctx->pc = 0x45528Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455288u;
            // 0x45528c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3752F0u;
    if (runtime->hasFunction(0x3752F0u)) {
        auto targetFn = runtime->lookupFunction(0x3752F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455290u; }
        if (ctx->pc != 0x455290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003752F0_0x3752f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455290u; }
        if (ctx->pc != 0x455290u) { return; }
    }
    ctx->pc = 0x455290u;
label_455290:
    // 0x455290: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
label_455294:
    if (ctx->pc == 0x455294u) {
        ctx->pc = 0x455298u;
        goto label_455298;
    }
    ctx->pc = 0x455290u;
    {
        const bool branch_taken_0x455290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x455290) {
            ctx->pc = 0x455370u;
            goto label_455370;
        }
    }
    ctx->pc = 0x455298u;
label_455298:
    // 0x455298: 0xc0b6e68  jal         func_2DB9A0
label_45529c:
    if (ctx->pc == 0x45529Cu) {
        ctx->pc = 0x45529Cu;
            // 0x45529c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4552A0u;
        goto label_4552a0;
    }
    ctx->pc = 0x455298u;
    SET_GPR_U32(ctx, 31, 0x4552A0u);
    ctx->pc = 0x45529Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455298u;
            // 0x45529c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4552A0u; }
        if (ctx->pc != 0x4552A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4552A0u; }
        if (ctx->pc != 0x4552A0u) { return; }
    }
    ctx->pc = 0x4552A0u;
label_4552a0:
    // 0x4552a0: 0x8e4200e8  lw          $v0, 0xE8($s2)
    ctx->pc = 0x4552a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
label_4552a4:
    // 0x4552a4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4552a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4552a8:
    // 0x4552a8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4552a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4552ac:
    // 0x4552ac: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4552b0:
    if (ctx->pc == 0x4552B0u) {
        ctx->pc = 0x4552B0u;
            // 0x4552b0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4552B4u;
        goto label_4552b4;
    }
    ctx->pc = 0x4552ACu;
    {
        const bool branch_taken_0x4552ac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4552ac) {
            ctx->pc = 0x4552B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4552ACu;
            // 0x4552b0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4552C0u;
            goto label_4552c0;
        }
    }
    ctx->pc = 0x4552B4u;
label_4552b4:
    // 0x4552b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4552b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4552b8:
    // 0x4552b8: 0x10000007  b           . + 4 + (0x7 << 2)
label_4552bc:
    if (ctx->pc == 0x4552BCu) {
        ctx->pc = 0x4552BCu;
            // 0x4552bc: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4552C0u;
        goto label_4552c0;
    }
    ctx->pc = 0x4552B8u;
    {
        const bool branch_taken_0x4552b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4552BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4552B8u;
            // 0x4552bc: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4552b8) {
            ctx->pc = 0x4552D8u;
            goto label_4552d8;
        }
    }
    ctx->pc = 0x4552C0u;
label_4552c0:
    // 0x4552c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4552c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4552c4:
    // 0x4552c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4552c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4552c8:
    // 0x4552c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4552c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4552cc:
    // 0x4552cc: 0x0  nop
    ctx->pc = 0x4552ccu;
    // NOP
label_4552d0:
    // 0x4552d0: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x4552d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_4552d4:
    // 0x4552d4: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x4552d4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_4552d8:
    // 0x4552d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4552d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4552dc:
    // 0x4552dc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x4552dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_4552e0:
    // 0x4552e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4552e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4552e4:
    // 0x4552e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4552e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4552e8:
    // 0x4552e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4552e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4552ec:
    // 0x4552ec: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4552ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4552f0:
    // 0x4552f0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4552f0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4552f4:
    // 0x4552f4: 0xc115538  jal         func_4554E0
label_4552f8:
    if (ctx->pc == 0x4552F8u) {
        ctx->pc = 0x4552F8u;
            // 0x4552f8: 0x4603151d  msub.s      $f20, $f2, $f3 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->pc = 0x4552FCu;
        goto label_4552fc;
    }
    ctx->pc = 0x4552F4u;
    SET_GPR_U32(ctx, 31, 0x4552FCu);
    ctx->pc = 0x4552F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4552F4u;
            // 0x4552f8: 0x4603151d  msub.s      $f20, $f2, $f3 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4554E0u;
    if (runtime->hasFunction(0x4554E0u)) {
        auto targetFn = runtime->lookupFunction(0x4554E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4552FCu; }
        if (ctx->pc != 0x4552FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004554E0_0x4554e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4552FCu; }
        if (ctx->pc != 0x4552FCu) { return; }
    }
    ctx->pc = 0x4552FCu;
label_4552fc:
    // 0x4552fc: 0x4600a342  mul.s       $f13, $f20, $f0
    ctx->pc = 0x4552fcu;
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_455300:
    // 0x455300: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x455300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_455304:
    // 0x455304: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x455304u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_455308:
    // 0x455308: 0x0  nop
    ctx->pc = 0x455308u;
    // NOP
label_45530c:
    // 0x45530c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x45530cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_455310:
    // 0x455310: 0xc0b6e3c  jal         func_2DB8F0
label_455314:
    if (ctx->pc == 0x455314u) {
        ctx->pc = 0x455314u;
            // 0x455314: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x455318u;
        goto label_455318;
    }
    ctx->pc = 0x455310u;
    SET_GPR_U32(ctx, 31, 0x455318u);
    ctx->pc = 0x455314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455310u;
            // 0x455314: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (runtime->hasFunction(0x2DB8F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455318u; }
        if (ctx->pc != 0x455318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8F0_0x2db8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455318u; }
        if (ctx->pc != 0x455318u) { return; }
    }
    ctx->pc = 0x455318u;
label_455318:
    // 0x455318: 0xc0775b8  jal         func_1DD6E0
label_45531c:
    if (ctx->pc == 0x45531Cu) {
        ctx->pc = 0x455320u;
        goto label_455320;
    }
    ctx->pc = 0x455318u;
    SET_GPR_U32(ctx, 31, 0x455320u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455320u; }
        if (ctx->pc != 0x455320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455320u; }
        if (ctx->pc != 0x455320u) { return; }
    }
    ctx->pc = 0x455320u;
label_455320:
    // 0x455320: 0xc0b6e5c  jal         func_2DB970
label_455324:
    if (ctx->pc == 0x455324u) {
        ctx->pc = 0x455324u;
            // 0x455324: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x455328u;
        goto label_455328;
    }
    ctx->pc = 0x455320u;
    SET_GPR_U32(ctx, 31, 0x455328u);
    ctx->pc = 0x455324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455320u;
            // 0x455324: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB970u;
    if (runtime->hasFunction(0x2DB970u)) {
        auto targetFn = runtime->lookupFunction(0x2DB970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455328u; }
        if (ctx->pc != 0x455328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB970_0x2db970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455328u; }
        if (ctx->pc != 0x455328u) { return; }
    }
    ctx->pc = 0x455328u;
label_455328:
    // 0x455328: 0xc0775b8  jal         func_1DD6E0
label_45532c:
    if (ctx->pc == 0x45532Cu) {
        ctx->pc = 0x45532Cu;
            // 0x45532c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x455330u;
        goto label_455330;
    }
    ctx->pc = 0x455328u;
    SET_GPR_U32(ctx, 31, 0x455330u);
    ctx->pc = 0x45532Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455328u;
            // 0x45532c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455330u; }
        if (ctx->pc != 0x455330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455330u; }
        if (ctx->pc != 0x455330u) { return; }
    }
    ctx->pc = 0x455330u;
label_455330:
    // 0x455330: 0xc0775b4  jal         func_1DD6D0
label_455334:
    if (ctx->pc == 0x455334u) {
        ctx->pc = 0x455334u;
            // 0x455334: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x455338u;
        goto label_455338;
    }
    ctx->pc = 0x455330u;
    SET_GPR_U32(ctx, 31, 0x455338u);
    ctx->pc = 0x455334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455330u;
            // 0x455334: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455338u; }
        if (ctx->pc != 0x455338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455338u; }
        if (ctx->pc != 0x455338u) { return; }
    }
    ctx->pc = 0x455338u;
label_455338:
    // 0x455338: 0x4600a302  mul.s       $f12, $f20, $f0
    ctx->pc = 0x455338u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_45533c:
    // 0x45533c: 0xc0b6e28  jal         func_2DB8A0
label_455340:
    if (ctx->pc == 0x455340u) {
        ctx->pc = 0x455340u;
            // 0x455340: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x455344u;
        goto label_455344;
    }
    ctx->pc = 0x45533Cu;
    SET_GPR_U32(ctx, 31, 0x455344u);
    ctx->pc = 0x455340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45533Cu;
            // 0x455340: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8A0u;
    if (runtime->hasFunction(0x2DB8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455344u; }
        if (ctx->pc != 0x455344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8A0_0x2db8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455344u; }
        if (ctx->pc != 0x455344u) { return; }
    }
    ctx->pc = 0x455344u;
label_455344:
    // 0x455344: 0xc0dc408  jal         func_371020
label_455348:
    if (ctx->pc == 0x455348u) {
        ctx->pc = 0x455348u;
            // 0x455348: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x45534Cu;
        goto label_45534c;
    }
    ctx->pc = 0x455344u;
    SET_GPR_U32(ctx, 31, 0x45534Cu);
    ctx->pc = 0x455348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455344u;
            // 0x455348: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45534Cu; }
        if (ctx->pc != 0x45534Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45534Cu; }
        if (ctx->pc != 0x45534Cu) { return; }
    }
    ctx->pc = 0x45534Cu;
label_45534c:
    // 0x45534c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x45534cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455350:
    // 0x455350: 0xc0e07f8  jal         func_381FE0
label_455354:
    if (ctx->pc == 0x455354u) {
        ctx->pc = 0x455354u;
            // 0x455354: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x455358u;
        goto label_455358;
    }
    ctx->pc = 0x455350u;
    SET_GPR_U32(ctx, 31, 0x455358u);
    ctx->pc = 0x455354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455350u;
            // 0x455354: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455358u; }
        if (ctx->pc != 0x455358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455358u; }
        if (ctx->pc != 0x455358u) { return; }
    }
    ctx->pc = 0x455358u;
label_455358:
    // 0x455358: 0xc0d1c10  jal         func_347040
label_45535c:
    if (ctx->pc == 0x45535Cu) {
        ctx->pc = 0x45535Cu;
            // 0x45535c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x455360u;
        goto label_455360;
    }
    ctx->pc = 0x455358u;
    SET_GPR_U32(ctx, 31, 0x455360u);
    ctx->pc = 0x45535Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455358u;
            // 0x45535c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455360u; }
        if (ctx->pc != 0x455360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455360u; }
        if (ctx->pc != 0x455360u) { return; }
    }
    ctx->pc = 0x455360u;
label_455360:
    // 0x455360: 0x8e4400ec  lw          $a0, 0xEC($s2)
    ctx->pc = 0x455360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 236)));
label_455364:
    // 0x455364: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x455364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_455368:
    // 0x455368: 0xc122d2c  jal         func_48B4B0
label_45536c:
    if (ctx->pc == 0x45536Cu) {
        ctx->pc = 0x45536Cu;
            // 0x45536c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x455370u;
        goto label_455370;
    }
    ctx->pc = 0x455368u;
    SET_GPR_U32(ctx, 31, 0x455370u);
    ctx->pc = 0x45536Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455368u;
            // 0x45536c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455370u; }
        if (ctx->pc != 0x455370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455370u; }
        if (ctx->pc != 0x455370u) { return; }
    }
    ctx->pc = 0x455370u;
label_455370:
    // 0x455370: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x455370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_455374:
    // 0x455374: 0xae4300e4  sw          $v1, 0xE4($s2)
    ctx->pc = 0x455374u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 3));
label_455378:
    // 0x455378: 0xc64000fc  lwc1        $f0, 0xFC($s2)
    ctx->pc = 0x455378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45537c:
    // 0x45537c: 0x10000036  b           . + 4 + (0x36 << 2)
label_455380:
    if (ctx->pc == 0x455380u) {
        ctx->pc = 0x455380u;
            // 0x455380: 0xe6400100  swc1        $f0, 0x100($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
        ctx->pc = 0x455384u;
        goto label_455384;
    }
    ctx->pc = 0x45537Cu;
    {
        const bool branch_taken_0x45537c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x455380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45537Cu;
            // 0x455380: 0xe6400100  swc1        $f0, 0x100($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x45537c) {
            ctx->pc = 0x455458u;
            goto label_455458;
        }
    }
    ctx->pc = 0x455384u;
label_455384:
    // 0x455384: 0x0  nop
    ctx->pc = 0x455384u;
    // NOP
label_455388:
    // 0x455388: 0xc0dd4bc  jal         func_3752F0
label_45538c:
    if (ctx->pc == 0x45538Cu) {
        ctx->pc = 0x45538Cu;
            // 0x45538c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x455390u;
        goto label_455390;
    }
    ctx->pc = 0x455388u;
    SET_GPR_U32(ctx, 31, 0x455390u);
    ctx->pc = 0x45538Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455388u;
            // 0x45538c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3752F0u;
    if (runtime->hasFunction(0x3752F0u)) {
        auto targetFn = runtime->lookupFunction(0x3752F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455390u; }
        if (ctx->pc != 0x455390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003752F0_0x3752f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455390u; }
        if (ctx->pc != 0x455390u) { return; }
    }
    ctx->pc = 0x455390u;
label_455390:
    // 0x455390: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_455394:
    if (ctx->pc == 0x455394u) {
        ctx->pc = 0x455398u;
        goto label_455398;
    }
    ctx->pc = 0x455390u;
    {
        const bool branch_taken_0x455390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x455390) {
            ctx->pc = 0x455430u;
            goto label_455430;
        }
    }
    ctx->pc = 0x455398u;
label_455398:
    // 0x455398: 0xc0b6e68  jal         func_2DB9A0
label_45539c:
    if (ctx->pc == 0x45539Cu) {
        ctx->pc = 0x45539Cu;
            // 0x45539c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4553A0u;
        goto label_4553a0;
    }
    ctx->pc = 0x455398u;
    SET_GPR_U32(ctx, 31, 0x4553A0u);
    ctx->pc = 0x45539Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455398u;
            // 0x45539c: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4553A0u; }
        if (ctx->pc != 0x4553A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4553A0u; }
        if (ctx->pc != 0x4553A0u) { return; }
    }
    ctx->pc = 0x4553A0u;
label_4553a0:
    // 0x4553a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4553a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4553a4:
    // 0x4553a4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4553a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4553a8:
    // 0x4553a8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4553a8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4553ac:
    // 0x4553ac: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4553acu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_4553b0:
    // 0x4553b0: 0xc0b6e3c  jal         func_2DB8F0
label_4553b4:
    if (ctx->pc == 0x4553B4u) {
        ctx->pc = 0x4553B4u;
            // 0x4553b4: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4553B8u;
        goto label_4553b8;
    }
    ctx->pc = 0x4553B0u;
    SET_GPR_U32(ctx, 31, 0x4553B8u);
    ctx->pc = 0x4553B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4553B0u;
            // 0x4553b4: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (runtime->hasFunction(0x2DB8F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4553B8u; }
        if (ctx->pc != 0x4553B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8F0_0x2db8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4553B8u; }
        if (ctx->pc != 0x4553B8u) { return; }
    }
    ctx->pc = 0x4553B8u;
label_4553b8:
    // 0x4553b8: 0xc0dc408  jal         func_371020
label_4553bc:
    if (ctx->pc == 0x4553BCu) {
        ctx->pc = 0x4553BCu;
            // 0x4553bc: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x4553C0u;
        goto label_4553c0;
    }
    ctx->pc = 0x4553B8u;
    SET_GPR_U32(ctx, 31, 0x4553C0u);
    ctx->pc = 0x4553BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4553B8u;
            // 0x4553bc: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4553C0u; }
        if (ctx->pc != 0x4553C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4553C0u; }
        if (ctx->pc != 0x4553C0u) { return; }
    }
    ctx->pc = 0x4553C0u;
label_4553c0:
    // 0x4553c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4553c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4553c4:
    // 0x4553c4: 0xc0e07f8  jal         func_381FE0
label_4553c8:
    if (ctx->pc == 0x4553C8u) {
        ctx->pc = 0x4553C8u;
            // 0x4553c8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4553CCu;
        goto label_4553cc;
    }
    ctx->pc = 0x4553C4u;
    SET_GPR_U32(ctx, 31, 0x4553CCu);
    ctx->pc = 0x4553C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4553C4u;
            // 0x4553c8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4553CCu; }
        if (ctx->pc != 0x4553CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4553CCu; }
        if (ctx->pc != 0x4553CCu) { return; }
    }
    ctx->pc = 0x4553CCu;
label_4553cc:
    // 0x4553cc: 0xc115534  jal         func_4554D0
label_4553d0:
    if (ctx->pc == 0x4553D0u) {
        ctx->pc = 0x4553D0u;
            // 0x4553d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4553D4u;
        goto label_4553d4;
    }
    ctx->pc = 0x4553CCu;
    SET_GPR_U32(ctx, 31, 0x4553D4u);
    ctx->pc = 0x4553D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4553CCu;
            // 0x4553d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4554D0u;
    if (runtime->hasFunction(0x4554D0u)) {
        auto targetFn = runtime->lookupFunction(0x4554D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4553D4u; }
        if (ctx->pc != 0x4553D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004554D0_0x4554d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4553D4u; }
        if (ctx->pc != 0x4553D4u) { return; }
    }
    ctx->pc = 0x4553D4u;
label_4553d4:
    // 0x4553d4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x4553d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_4553d8:
    // 0x4553d8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4553d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4553dc:
    // 0x4553dc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4553dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4553e0:
    // 0x4553e0: 0x2442dcd0  addiu       $v0, $v0, -0x2330
    ctx->pc = 0x4553e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958288));
label_4553e4:
    // 0x4553e4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x4553e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4553e8:
    // 0x4553e8: 0x8e4200e8  lw          $v0, 0xE8($s2)
    ctx->pc = 0x4553e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
label_4553ec:
    // 0x4553ec: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x4553ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_4553f0:
    // 0x4553f0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4553f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4553f4:
    // 0x4553f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4553f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4553f8:
    // 0x4553f8: 0xc04cc04  jal         func_133010
label_4553fc:
    if (ctx->pc == 0x4553FCu) {
        ctx->pc = 0x4553FCu;
            // 0x4553fc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x455400u;
        goto label_455400;
    }
    ctx->pc = 0x4553F8u;
    SET_GPR_U32(ctx, 31, 0x455400u);
    ctx->pc = 0x4553FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4553F8u;
            // 0x4553fc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455400u; }
        if (ctx->pc != 0x455400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455400u; }
        if (ctx->pc != 0x455400u) { return; }
    }
    ctx->pc = 0x455400u;
label_455400:
    // 0x455400: 0xc0dc408  jal         func_371020
label_455404:
    if (ctx->pc == 0x455404u) {
        ctx->pc = 0x455404u;
            // 0x455404: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x455408u;
        goto label_455408;
    }
    ctx->pc = 0x455400u;
    SET_GPR_U32(ctx, 31, 0x455408u);
    ctx->pc = 0x455404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455400u;
            // 0x455404: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455408u; }
        if (ctx->pc != 0x455408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455408u; }
        if (ctx->pc != 0x455408u) { return; }
    }
    ctx->pc = 0x455408u;
label_455408:
    // 0x455408: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x455408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45540c:
    // 0x45540c: 0xc115524  jal         func_455490
label_455410:
    if (ctx->pc == 0x455410u) {
        ctx->pc = 0x455410u;
            // 0x455410: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x455414u;
        goto label_455414;
    }
    ctx->pc = 0x45540Cu;
    SET_GPR_U32(ctx, 31, 0x455414u);
    ctx->pc = 0x455410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45540Cu;
            // 0x455410: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x455490u;
    if (runtime->hasFunction(0x455490u)) {
        auto targetFn = runtime->lookupFunction(0x455490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455414u; }
        if (ctx->pc != 0x455414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00455490_0x455490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455414u; }
        if (ctx->pc != 0x455414u) { return; }
    }
    ctx->pc = 0x455414u;
label_455414:
    // 0x455414: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x455414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_455418:
    // 0x455418: 0xc0f8e34  jal         func_3E38D0
label_45541c:
    if (ctx->pc == 0x45541Cu) {
        ctx->pc = 0x45541Cu;
            // 0x45541c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x455420u;
        goto label_455420;
    }
    ctx->pc = 0x455418u;
    SET_GPR_U32(ctx, 31, 0x455420u);
    ctx->pc = 0x45541Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455418u;
            // 0x45541c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E38D0u;
    if (runtime->hasFunction(0x3E38D0u)) {
        auto targetFn = runtime->lookupFunction(0x3E38D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455420u; }
        if (ctx->pc != 0x455420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E38D0_0x3e38d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455420u; }
        if (ctx->pc != 0x455420u) { return; }
    }
    ctx->pc = 0x455420u;
label_455420:
    // 0x455420: 0x8e4400ec  lw          $a0, 0xEC($s2)
    ctx->pc = 0x455420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 236)));
label_455424:
    // 0x455424: 0xc122c5c  jal         func_48B170
label_455428:
    if (ctx->pc == 0x455428u) {
        ctx->pc = 0x455428u;
            // 0x455428: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x45542Cu;
        goto label_45542c;
    }
    ctx->pc = 0x455424u;
    SET_GPR_U32(ctx, 31, 0x45542Cu);
    ctx->pc = 0x455428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455424u;
            // 0x455428: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45542Cu; }
        if (ctx->pc != 0x45542Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B170_0x48b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45542Cu; }
        if (ctx->pc != 0x45542Cu) { return; }
    }
    ctx->pc = 0x45542Cu;
label_45542c:
    // 0x45542c: 0x0  nop
    ctx->pc = 0x45542cu;
    // NOP
label_455430:
    // 0x455430: 0xae4000e4  sw          $zero, 0xE4($s2)
    ctx->pc = 0x455430u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 0));
label_455434:
    // 0x455434: 0x8e4300e8  lw          $v1, 0xE8($s2)
    ctx->pc = 0x455434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
label_455438:
    // 0x455438: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x455438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_45543c:
    // 0x45543c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x45543cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_455440:
    // 0x455440: 0xae4300e8  sw          $v1, 0xE8($s2)
    ctx->pc = 0x455440u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 3));
label_455444:
    // 0x455444: 0xc64000f8  lwc1        $f0, 0xF8($s2)
    ctx->pc = 0x455444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_455448:
    // 0x455448: 0x10000003  b           . + 4 + (0x3 << 2)
label_45544c:
    if (ctx->pc == 0x45544Cu) {
        ctx->pc = 0x45544Cu;
            // 0x45544c: 0xe6400100  swc1        $f0, 0x100($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
        ctx->pc = 0x455450u;
        goto label_455450;
    }
    ctx->pc = 0x455448u;
    {
        const bool branch_taken_0x455448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45544Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x455448u;
            // 0x45544c: 0xe6400100  swc1        $f0, 0x100($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x455448) {
            ctx->pc = 0x455458u;
            goto label_455458;
        }
    }
    ctx->pc = 0x455450u;
label_455450:
    // 0x455450: 0xe6410100  swc1        $f1, 0x100($s2)
    ctx->pc = 0x455450u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
label_455454:
    // 0x455454: 0x0  nop
    ctx->pc = 0x455454u;
    // NOP
label_455458:
    // 0x455458: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x455458u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_45545c:
    // 0x45545c: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x45545cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_455460:
    // 0x455460: 0x1460ff59  bnez        $v1, . + 4 + (-0xA7 << 2)
label_455464:
    if (ctx->pc == 0x455464u) {
        ctx->pc = 0x455464u;
            // 0x455464: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x455468u;
        goto label_455468;
    }
    ctx->pc = 0x455460u;
    {
        const bool branch_taken_0x455460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x455464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x455460u;
            // 0x455464: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455460) {
            ctx->pc = 0x4551C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4551c8;
        }
    }
    ctx->pc = 0x455468u;
label_455468:
    // 0x455468: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x455468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_45546c:
    // 0x45546c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x45546cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_455470:
    // 0x455470: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x455470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_455474:
    // 0x455474: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x455474u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_455478:
    // 0x455478: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x455478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_45547c:
    // 0x45547c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x45547cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_455480:
    // 0x455480: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x455480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_455484:
    // 0x455484: 0x3e00008  jr          $ra
label_455488:
    if (ctx->pc == 0x455488u) {
        ctx->pc = 0x455488u;
            // 0x455488: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x45548Cu;
        goto label_45548c;
    }
    ctx->pc = 0x455484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x455488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x455484u;
            // 0x455488: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45548Cu;
label_45548c:
    // 0x45548c: 0x0  nop
    ctx->pc = 0x45548cu;
    // NOP
}
