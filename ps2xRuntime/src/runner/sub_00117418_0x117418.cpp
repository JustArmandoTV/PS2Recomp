#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00117418
// Address: 0x117418 - 0x117708
void sub_00117418_0x117418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117418_0x117418");
#endif

    switch (ctx->pc) {
        case 0x117418u: goto label_117418;
        case 0x11741cu: goto label_11741c;
        case 0x117420u: goto label_117420;
        case 0x117424u: goto label_117424;
        case 0x117428u: goto label_117428;
        case 0x11742cu: goto label_11742c;
        case 0x117430u: goto label_117430;
        case 0x117434u: goto label_117434;
        case 0x117438u: goto label_117438;
        case 0x11743cu: goto label_11743c;
        case 0x117440u: goto label_117440;
        case 0x117444u: goto label_117444;
        case 0x117448u: goto label_117448;
        case 0x11744cu: goto label_11744c;
        case 0x117450u: goto label_117450;
        case 0x117454u: goto label_117454;
        case 0x117458u: goto label_117458;
        case 0x11745cu: goto label_11745c;
        case 0x117460u: goto label_117460;
        case 0x117464u: goto label_117464;
        case 0x117468u: goto label_117468;
        case 0x11746cu: goto label_11746c;
        case 0x117470u: goto label_117470;
        case 0x117474u: goto label_117474;
        case 0x117478u: goto label_117478;
        case 0x11747cu: goto label_11747c;
        case 0x117480u: goto label_117480;
        case 0x117484u: goto label_117484;
        case 0x117488u: goto label_117488;
        case 0x11748cu: goto label_11748c;
        case 0x117490u: goto label_117490;
        case 0x117494u: goto label_117494;
        case 0x117498u: goto label_117498;
        case 0x11749cu: goto label_11749c;
        case 0x1174a0u: goto label_1174a0;
        case 0x1174a4u: goto label_1174a4;
        case 0x1174a8u: goto label_1174a8;
        case 0x1174acu: goto label_1174ac;
        case 0x1174b0u: goto label_1174b0;
        case 0x1174b4u: goto label_1174b4;
        case 0x1174b8u: goto label_1174b8;
        case 0x1174bcu: goto label_1174bc;
        case 0x1174c0u: goto label_1174c0;
        case 0x1174c4u: goto label_1174c4;
        case 0x1174c8u: goto label_1174c8;
        case 0x1174ccu: goto label_1174cc;
        case 0x1174d0u: goto label_1174d0;
        case 0x1174d4u: goto label_1174d4;
        case 0x1174d8u: goto label_1174d8;
        case 0x1174dcu: goto label_1174dc;
        case 0x1174e0u: goto label_1174e0;
        case 0x1174e4u: goto label_1174e4;
        case 0x1174e8u: goto label_1174e8;
        case 0x1174ecu: goto label_1174ec;
        case 0x1174f0u: goto label_1174f0;
        case 0x1174f4u: goto label_1174f4;
        case 0x1174f8u: goto label_1174f8;
        case 0x1174fcu: goto label_1174fc;
        case 0x117500u: goto label_117500;
        case 0x117504u: goto label_117504;
        case 0x117508u: goto label_117508;
        case 0x11750cu: goto label_11750c;
        case 0x117510u: goto label_117510;
        case 0x117514u: goto label_117514;
        case 0x117518u: goto label_117518;
        case 0x11751cu: goto label_11751c;
        case 0x117520u: goto label_117520;
        case 0x117524u: goto label_117524;
        case 0x117528u: goto label_117528;
        case 0x11752cu: goto label_11752c;
        case 0x117530u: goto label_117530;
        case 0x117534u: goto label_117534;
        case 0x117538u: goto label_117538;
        case 0x11753cu: goto label_11753c;
        case 0x117540u: goto label_117540;
        case 0x117544u: goto label_117544;
        case 0x117548u: goto label_117548;
        case 0x11754cu: goto label_11754c;
        case 0x117550u: goto label_117550;
        case 0x117554u: goto label_117554;
        case 0x117558u: goto label_117558;
        case 0x11755cu: goto label_11755c;
        case 0x117560u: goto label_117560;
        case 0x117564u: goto label_117564;
        case 0x117568u: goto label_117568;
        case 0x11756cu: goto label_11756c;
        case 0x117570u: goto label_117570;
        case 0x117574u: goto label_117574;
        case 0x117578u: goto label_117578;
        case 0x11757cu: goto label_11757c;
        case 0x117580u: goto label_117580;
        case 0x117584u: goto label_117584;
        case 0x117588u: goto label_117588;
        case 0x11758cu: goto label_11758c;
        case 0x117590u: goto label_117590;
        case 0x117594u: goto label_117594;
        case 0x117598u: goto label_117598;
        case 0x11759cu: goto label_11759c;
        case 0x1175a0u: goto label_1175a0;
        case 0x1175a4u: goto label_1175a4;
        case 0x1175a8u: goto label_1175a8;
        case 0x1175acu: goto label_1175ac;
        case 0x1175b0u: goto label_1175b0;
        case 0x1175b4u: goto label_1175b4;
        case 0x1175b8u: goto label_1175b8;
        case 0x1175bcu: goto label_1175bc;
        case 0x1175c0u: goto label_1175c0;
        case 0x1175c4u: goto label_1175c4;
        case 0x1175c8u: goto label_1175c8;
        case 0x1175ccu: goto label_1175cc;
        case 0x1175d0u: goto label_1175d0;
        case 0x1175d4u: goto label_1175d4;
        case 0x1175d8u: goto label_1175d8;
        case 0x1175dcu: goto label_1175dc;
        case 0x1175e0u: goto label_1175e0;
        case 0x1175e4u: goto label_1175e4;
        case 0x1175e8u: goto label_1175e8;
        case 0x1175ecu: goto label_1175ec;
        case 0x1175f0u: goto label_1175f0;
        case 0x1175f4u: goto label_1175f4;
        case 0x1175f8u: goto label_1175f8;
        case 0x1175fcu: goto label_1175fc;
        case 0x117600u: goto label_117600;
        case 0x117604u: goto label_117604;
        case 0x117608u: goto label_117608;
        case 0x11760cu: goto label_11760c;
        case 0x117610u: goto label_117610;
        case 0x117614u: goto label_117614;
        case 0x117618u: goto label_117618;
        case 0x11761cu: goto label_11761c;
        case 0x117620u: goto label_117620;
        case 0x117624u: goto label_117624;
        case 0x117628u: goto label_117628;
        case 0x11762cu: goto label_11762c;
        case 0x117630u: goto label_117630;
        case 0x117634u: goto label_117634;
        case 0x117638u: goto label_117638;
        case 0x11763cu: goto label_11763c;
        case 0x117640u: goto label_117640;
        case 0x117644u: goto label_117644;
        case 0x117648u: goto label_117648;
        case 0x11764cu: goto label_11764c;
        case 0x117650u: goto label_117650;
        case 0x117654u: goto label_117654;
        case 0x117658u: goto label_117658;
        case 0x11765cu: goto label_11765c;
        case 0x117660u: goto label_117660;
        case 0x117664u: goto label_117664;
        case 0x117668u: goto label_117668;
        case 0x11766cu: goto label_11766c;
        case 0x117670u: goto label_117670;
        case 0x117674u: goto label_117674;
        case 0x117678u: goto label_117678;
        case 0x11767cu: goto label_11767c;
        case 0x117680u: goto label_117680;
        case 0x117684u: goto label_117684;
        case 0x117688u: goto label_117688;
        case 0x11768cu: goto label_11768c;
        case 0x117690u: goto label_117690;
        case 0x117694u: goto label_117694;
        case 0x117698u: goto label_117698;
        case 0x11769cu: goto label_11769c;
        case 0x1176a0u: goto label_1176a0;
        case 0x1176a4u: goto label_1176a4;
        case 0x1176a8u: goto label_1176a8;
        case 0x1176acu: goto label_1176ac;
        case 0x1176b0u: goto label_1176b0;
        case 0x1176b4u: goto label_1176b4;
        case 0x1176b8u: goto label_1176b8;
        case 0x1176bcu: goto label_1176bc;
        case 0x1176c0u: goto label_1176c0;
        case 0x1176c4u: goto label_1176c4;
        case 0x1176c8u: goto label_1176c8;
        case 0x1176ccu: goto label_1176cc;
        case 0x1176d0u: goto label_1176d0;
        case 0x1176d4u: goto label_1176d4;
        case 0x1176d8u: goto label_1176d8;
        case 0x1176dcu: goto label_1176dc;
        case 0x1176e0u: goto label_1176e0;
        case 0x1176e4u: goto label_1176e4;
        case 0x1176e8u: goto label_1176e8;
        case 0x1176ecu: goto label_1176ec;
        case 0x1176f0u: goto label_1176f0;
        case 0x1176f4u: goto label_1176f4;
        case 0x1176f8u: goto label_1176f8;
        case 0x1176fcu: goto label_1176fc;
        case 0x117700u: goto label_117700;
        case 0x117704u: goto label_117704;
        default: break;
    }

    ctx->pc = 0x117418u;

label_117418:
    // 0x117418: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x117418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_11741c:
    // 0x11741c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_117420:
    if (ctx->pc == 0x117420u) {
        ctx->pc = 0x117420u;
            // 0x117420: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x117424u;
        goto label_117424;
    }
    ctx->pc = 0x11741Cu;
    {
        const bool branch_taken_0x11741c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11741Cu;
            // 0x117420: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11741c) {
            ctx->pc = 0x11742Cu;
            goto label_11742c;
        }
    }
    ctx->pc = 0x117424u;
label_117424:
    // 0x117424: 0x10000003  b           . + 4 + (0x3 << 2)
label_117428:
    if (ctx->pc == 0x117428u) {
        ctx->pc = 0x117428u;
            // 0x117428: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x11742Cu;
        goto label_11742c;
    }
    ctx->pc = 0x117424u;
    {
        const bool branch_taken_0x117424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117424u;
            // 0x117428: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117424) {
            ctx->pc = 0x117434u;
            goto label_117434;
        }
    }
    ctx->pc = 0x11742Cu;
label_11742c:
    // 0x11742c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x11742cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_117430:
    // 0x117430: 0xac43fa60  sw          $v1, -0x5A0($v0)
    ctx->pc = 0x117430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965856), GPR_U32(ctx, 3));
label_117434:
    // 0x117434: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_117438:
    if (ctx->pc == 0x117438u) {
        ctx->pc = 0x117438u;
            // 0x117438: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x11743Cu;
        goto label_11743c;
    }
    ctx->pc = 0x117434u;
    {
        const bool branch_taken_0x117434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x117434) {
            ctx->pc = 0x117438u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117434u;
            // 0x117438: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117448u;
            goto label_117448;
        }
    }
    ctx->pc = 0x11743Cu;
label_11743c:
    // 0x11743c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x11743cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_117440:
    // 0x117440: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x117440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_117444:
    // 0x117444: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x117444u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_117448:
    // 0x117448: 0x3e00008  jr          $ra
label_11744c:
    if (ctx->pc == 0x11744Cu) {
        ctx->pc = 0x11744Cu;
            // 0x11744c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x117450u;
        goto label_117450;
    }
    ctx->pc = 0x117448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11744Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117448u;
            // 0x11744c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117450u;
label_117450:
    // 0x117450: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x117450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_117454:
    // 0x117454: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x117454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_117458:
    // 0x117458: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x117458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_11745c:
    // 0x11745c: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x11745cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
label_117460:
    // 0x117460: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x117460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_117464:
    // 0x117464: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x117464u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_117468:
    // 0x117468: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x117468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_11746c:
    // 0x11746c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x11746cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_117470:
    // 0x117470: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x117470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_117474:
    // 0x117474: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x117474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_117478:
    // 0x117478: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x117478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_11747c:
    // 0x11747c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11747cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_117480:
    // 0x117480: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x117480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_117484:
    // 0x117484: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_117488:
    // 0x117488: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x117488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_11748c:
    // 0x11748c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x11748cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_117490:
    // 0x117490: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
label_117494:
    if (ctx->pc == 0x117494u) {
        ctx->pc = 0x117494u;
            // 0x117494: 0x3c15005d  lui         $s5, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)93 << 16));
        ctx->pc = 0x117498u;
        goto label_117498;
    }
    ctx->pc = 0x117490u;
    {
        const bool branch_taken_0x117490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117490u;
            // 0x117494: 0x3c15005d  lui         $s5, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117490) {
            ctx->pc = 0x11760Cu;
            goto label_11760c;
        }
    }
    ctx->pc = 0x117498u;
label_117498:
    // 0x117498: 0x26a2fa48  addiu       $v0, $s5, -0x5B8
    ctx->pc = 0x117498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965832));
label_11749c:
    // 0x11749c: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x11749cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1174a0:
    // 0x1174a0: 0x1200005a  beqz        $s0, . + 4 + (0x5A << 2)
label_1174a4:
    if (ctx->pc == 0x1174A4u) {
        ctx->pc = 0x1174A4u;
            // 0x1174a4: 0x2a0f02d  daddu       $fp, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1174A8u;
        goto label_1174a8;
    }
    ctx->pc = 0x1174A0u;
    {
        const bool branch_taken_0x1174a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1174A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1174A0u;
            // 0x1174a4: 0x2a0f02d  daddu       $fp, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1174a0) {
            ctx->pc = 0x11760Cu;
            goto label_11760c;
        }
    }
    ctx->pc = 0x1174A8u;
label_1174a8:
    // 0x1174a8: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x1174a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1174ac:
    // 0x1174ac: 0x24173999  addiu       $s7, $zero, 0x3999
    ctx->pc = 0x1174acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 14745));
label_1174b0:
    // 0x1174b0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1174b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1174b4:
    // 0x1174b4: 0x0  nop
    ctx->pc = 0x1174b4u;
    // NOP
label_1174b8:
    // 0x1174b8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1174b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1174bc:
    // 0x1174bc: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1174bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_1174c0:
    // 0x1174c0: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x1174c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
label_1174c4:
    // 0x1174c4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1174c4u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
label_1174c8:
    // 0x1174c8: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1174c8u;
    SET_GPR_S32(ctx, 17, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
label_1174cc:
    // 0x1174cc: 0xde040020  ld          $a0, 0x20($s0)
    ctx->pc = 0x1174ccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_1174d0:
    // 0x1174d0: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x1174d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_1174d4:
    // 0x1174d4: 0x32250800  andi        $a1, $s1, 0x800
    ctx->pc = 0x1174d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2048);
label_1174d8:
    // 0x1174d8: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x1174d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_1174dc:
    // 0x1174dc: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x1174dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_1174e0:
    // 0x1174e0: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1174e4:
    if (ctx->pc == 0x1174E4u) {
        ctx->pc = 0x1174E4u;
            // 0x1174e4: 0x83982f  dsubu       $s3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
        ctx->pc = 0x1174E8u;
        goto label_1174e8;
    }
    ctx->pc = 0x1174E0u;
    {
        const bool branch_taken_0x1174e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1174E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1174E0u;
            // 0x1174e4: 0x83982f  dsubu       $s3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1174e0) {
            ctx->pc = 0x11750Cu;
            goto label_11750c;
        }
    }
    ctx->pc = 0x1174E8u;
label_1174e8:
    // 0x1174e8: 0xde82fa48  ld          $v0, -0x5B8($s4)
    ctx->pc = 0x1174e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 4294965832)));
label_1174ec:
    // 0x1174ec: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1174ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_1174f0:
    // 0x1174f0: 0x3484fbff  ori         $a0, $a0, 0xFBFF
    ctx->pc = 0x1174f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64511);
label_1174f4:
    // 0x1174f4: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1174f4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_1174f8:
    // 0x1174f8: 0x2242024  and         $a0, $s1, $a0
    ctx->pc = 0x1174f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_1174fc:
    // 0x1174fc: 0xc045ba4  jal         func_116E90
label_117500:
    if (ctx->pc == 0x117500u) {
        ctx->pc = 0x117500u;
            // 0x117500: 0xfe82fa48  sd          $v0, -0x5B8($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 4294965832), GPR_U64(ctx, 2));
        ctx->pc = 0x117504u;
        goto label_117504;
    }
    ctx->pc = 0x1174FCu;
    SET_GPR_U32(ctx, 31, 0x117504u);
    ctx->pc = 0x117500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1174FCu;
            // 0x117500: 0xfe82fa48  sd          $v0, -0x5B8($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 4294965832), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116E90u;
    if (runtime->hasFunction(0x116E90u)) {
        auto targetFn = runtime->lookupFunction(0x116E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117504u; }
        if (ctx->pc != 0x117504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116E90_0x116e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117504u; }
        if (ctx->pc != 0x117504u) { return; }
    }
    ctx->pc = 0x117504u;
label_117504:
    // 0x117504: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x117504u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_117508:
    // 0x117508: 0x8cc61000  lw          $a2, 0x1000($a2)
    ctx->pc = 0x117508u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 4096))); // MMIO: 0x10001000
label_11750c:
    // 0x11750c: 0xde84fa48  ld          $a0, -0x5B8($s4)
    ctx->pc = 0x11750cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 4294965832)));
label_117510:
    // 0x117510: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x117510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_117514:
    // 0x117514: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x117514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_117518:
    // 0x117518: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x117518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_11751c:
    // 0x11751c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x11751cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_117520:
    // 0x117520: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x117520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_117524:
    // 0x117524: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x117524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_117528:
    // 0x117528: 0x648814  dsllv       $s1, $a0, $v1
    ctx->pc = 0x117528u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
label_11752c:
    // 0x11752c: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x11752cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_117530:
    // 0x117530: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
label_117534:
    if (ctx->pc == 0x117534u) {
        ctx->pc = 0x117534u;
            // 0x117534: 0x2692fa48  addiu       $s2, $s4, -0x5B8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965832));
        ctx->pc = 0x117538u;
        goto label_117538;
    }
    ctx->pc = 0x117530u;
    {
        const bool branch_taken_0x117530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117530u;
            // 0x117534: 0x2692fa48  addiu       $s2, $s4, -0x5B8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117530) {
            ctx->pc = 0x11760Cu;
            goto label_11760c;
        }
    }
    ctx->pc = 0x117538u;
label_117538:
    // 0x117538: 0xc045d06  jal         func_117418
label_11753c:
    if (ctx->pc == 0x11753Cu) {
        ctx->pc = 0x11753Cu;
            // 0x11753c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x117540u;
        goto label_117540;
    }
    ctx->pc = 0x117538u;
    SET_GPR_U32(ctx, 31, 0x117540u);
    ctx->pc = 0x11753Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117538u;
            // 0x11753c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117418u;
    goto label_117418;
    ctx->pc = 0x117540u;
label_117540:
    // 0x117540: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x117540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_117544:
    // 0x117544: 0x103900  sll         $a3, $s0, 4
    ctx->pc = 0x117544u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_117548:
    // 0x117548: 0xde060018  ld          $a2, 0x18($s0)
    ctx->pc = 0x117548u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_11754c:
    // 0x11754c: 0xde040010  ld          $a0, 0x10($s0)
    ctx->pc = 0x11754cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_117550:
    // 0x117550: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x117550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_117554:
    // 0x117554: 0x226302d  daddu       $a2, $s1, $a2
    ctx->pc = 0x117554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 6));
label_117558:
    // 0x117558: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x117558u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_11755c:
    // 0x11755c: 0xc4302f  dsubu       $a2, $a2, $a0
    ctx->pc = 0x11755cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 4));
label_117560:
    // 0x117560: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x117560u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_117564:
    // 0x117564: 0x8e1c002c  lw          $gp, 0x2C($s0)
    ctx->pc = 0x117564u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_117568:
    // 0x117568: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x117568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_11756c:
    // 0x11756c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x11756cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_117570:
    // 0x117570: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x117570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_117574:
    // 0x117574: 0xe42025  or          $a0, $a3, $a0
    ctx->pc = 0x117574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_117578:
    // 0x117578: 0xde050020  ld          $a1, 0x20($s0)
    ctx->pc = 0x117578u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_11757c:
    // 0x11757c: 0x40f809  jalr        $v0
label_117580:
    if (ctx->pc == 0x117580u) {
        ctx->pc = 0x117580u;
            // 0x117580: 0x8e070030  lw          $a3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x117584u;
        goto label_117584;
    }
    ctx->pc = 0x11757Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x117584u);
        ctx->pc = 0x117580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11757Cu;
            // 0x117580: 0x8e070030  lw          $a3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x117584u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x117584u; }
            if (ctx->pc != 0x117584u) { return; }
        }
        }
    }
    ctx->pc = 0x117584u;
label_117584:
    // 0x117584: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x117584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_117588:
    // 0x117588: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_11758c:
    if (ctx->pc == 0x11758Cu) {
        ctx->pc = 0x11758Cu;
            // 0x11758c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x117590u;
        goto label_117590;
    }
    ctx->pc = 0x117588u;
    {
        const bool branch_taken_0x117588 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11758Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117588u;
            // 0x11758c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117588) {
            ctx->pc = 0x1175A8u;
            goto label_1175a8;
        }
    }
    ctx->pc = 0x117590u;
label_117590:
    // 0x117590: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x117590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_117594:
    // 0x117594: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x117594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_117598:
    // 0x117598: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x117598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_11759c:
    // 0x11759c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x11759cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1175a0:
    // 0x1175a0: 0x10000014  b           . + 4 + (0x14 << 2)
label_1175a4:
    if (ctx->pc == 0x1175A4u) {
        ctx->pc = 0x1175A4u;
            // 0x1175a4: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x1175A8u;
        goto label_1175a8;
    }
    ctx->pc = 0x1175A0u;
    {
        const bool branch_taken_0x1175a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1175A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1175A0u;
            // 0x1175a4: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1175a0) {
            ctx->pc = 0x1175F4u;
            goto label_1175f4;
        }
    }
    ctx->pc = 0x1175A8u;
label_1175a8:
    // 0x1175a8: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
label_1175ac:
    if (ctx->pc == 0x1175ACu) {
        ctx->pc = 0x1175ACu;
            // 0x1175ac: 0x24023998  addiu       $v0, $zero, 0x3998 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14744));
        ctx->pc = 0x1175B0u;
        goto label_1175b0;
    }
    ctx->pc = 0x1175A8u;
    {
        const bool branch_taken_0x1175a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1175ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1175A8u;
            // 0x1175ac: 0x24023998  addiu       $v0, $zero, 0x3998 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1175a8) {
            ctx->pc = 0x1175D8u;
            goto label_1175d8;
        }
    }
    ctx->pc = 0x1175B0u;
label_1175b0:
    // 0x1175b0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1175b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1175b4:
    // 0x1175b4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1175b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1175b8:
    // 0x1175b8: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1175b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1175bc:
    // 0x1175bc: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1175bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1175c0:
    // 0x1175c0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1175c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1175c4:
    // 0x1175c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1175c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1175c8:
    // 0x1175c8: 0xae500014  sw          $s0, 0x14($s2)
    ctx->pc = 0x1175c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
label_1175cc:
    // 0x1175cc: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1175ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_1175d0:
    // 0x1175d0: 0x10000009  b           . + 4 + (0x9 << 2)
label_1175d4:
    if (ctx->pc == 0x1175D4u) {
        ctx->pc = 0x1175D4u;
            // 0x1175d4: 0x27c2fa48  addiu       $v0, $fp, -0x5B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294965832));
        ctx->pc = 0x1175D8u;
        goto label_1175d8;
    }
    ctx->pc = 0x1175D0u;
    {
        const bool branch_taken_0x1175d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1175D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1175D0u;
            // 0x1175d4: 0x27c2fa48  addiu       $v0, $fp, -0x5B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294965832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1175d0) {
            ctx->pc = 0x1175F8u;
            goto label_1175f8;
        }
    }
    ctx->pc = 0x1175D8u;
label_1175d8:
    // 0x1175d8: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x1175d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_1175dc:
    // 0x1175dc: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x1175dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1175e0:
    // 0x1175e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1175e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1175e4:
    // 0x1175e4: 0x2e2280a  movz        $a1, $s7, $v0
    ctx->pc = 0x1175e4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 23));
label_1175e8:
    // 0x1175e8: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x1175e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
label_1175ec:
    // 0x1175ec: 0xc045ce4  jal         func_117390
label_1175f0:
    if (ctx->pc == 0x1175F0u) {
        ctx->pc = 0x1175F0u;
            // 0x1175f0: 0xfe030020  sd          $v1, 0x20($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
        ctx->pc = 0x1175F4u;
        goto label_1175f4;
    }
    ctx->pc = 0x1175ECu;
    SET_GPR_U32(ctx, 31, 0x1175F4u);
    ctx->pc = 0x1175F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1175ECu;
            // 0x1175f0: 0xfe030020  sd          $v1, 0x20($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117390u;
    if (runtime->hasFunction(0x117390u)) {
        auto targetFn = runtime->lookupFunction(0x117390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1175F4u; }
        if (ctx->pc != 0x1175F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117390_0x117390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1175F4u; }
        if (ctx->pc != 0x1175F4u) { return; }
    }
    ctx->pc = 0x1175F4u;
label_1175f4:
    // 0x1175f4: 0x27c2fa48  addiu       $v0, $fp, -0x5B8
    ctx->pc = 0x1175f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294965832));
label_1175f8:
    // 0x1175f8: 0x8c500020  lw          $s0, 0x20($v0)
    ctx->pc = 0x1175f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_1175fc:
    // 0x1175fc: 0x1600ffae  bnez        $s0, . + 4 + (-0x52 << 2)
label_117600:
    if (ctx->pc == 0x117600u) {
        ctx->pc = 0x117600u;
            // 0x117600: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->pc = 0x117604u;
        goto label_117604;
    }
    ctx->pc = 0x1175FCu;
    {
        const bool branch_taken_0x1175fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x117600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1175FCu;
            // 0x117600: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1175fc) {
            ctx->pc = 0x1174B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1174b8;
        }
    }
    ctx->pc = 0x117604u;
label_117604:
    // 0x117604: 0x10000002  b           . + 4 + (0x2 << 2)
label_117608:
    if (ctx->pc == 0x117608u) {
        ctx->pc = 0x117608u;
            // 0x117608: 0x26a4fa48  addiu       $a0, $s5, -0x5B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965832));
        ctx->pc = 0x11760Cu;
        goto label_11760c;
    }
    ctx->pc = 0x117604u;
    {
        const bool branch_taken_0x117604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117604u;
            // 0x117608: 0x26a4fa48  addiu       $a0, $s5, -0x5B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117604) {
            ctx->pc = 0x117610u;
            goto label_117610;
        }
    }
    ctx->pc = 0x11760Cu;
label_11760c:
    // 0x11760c: 0x26a4fa48  addiu       $a0, $s5, -0x5B8
    ctx->pc = 0x11760cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965832));
label_117610:
    // 0x117610: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x117610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_117614:
    // 0x117614: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x117614u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
label_117618:
    // 0x117618: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x117618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_11761c:
    // 0x11761c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x11761cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_117620:
    // 0x117620: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x117620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_117624:
    // 0x117624: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x117624u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
label_117628:
    // 0x117628: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x117628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
label_11762c:
    // 0x11762c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x11762cu;
    SET_GPR_S32(ctx, 16, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
label_117630:
    // 0x117630: 0x32020800  andi        $v0, $s0, 0x800
    ctx->pc = 0x117630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2048);
label_117634:
    // 0x117634: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_117638:
    if (ctx->pc == 0x117638u) {
        ctx->pc = 0x117638u;
            // 0x117638: 0xac800020  sw          $zero, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
        ctx->pc = 0x11763Cu;
        goto label_11763c;
    }
    ctx->pc = 0x117634u;
    {
        const bool branch_taken_0x117634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117634u;
            // 0x117638: 0xac800020  sw          $zero, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117634) {
            ctx->pc = 0x117660u;
            goto label_117660;
        }
    }
    ctx->pc = 0x11763Cu;
label_11763c:
    // 0x11763c: 0xdea2fa48  ld          $v0, -0x5B8($s5)
    ctx->pc = 0x11763cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 4294965832)));
label_117640:
    // 0x117640: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x117640u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_117644:
    // 0x117644: 0x3484fbff  ori         $a0, $a0, 0xFBFF
    ctx->pc = 0x117644u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64511);
label_117648:
    // 0x117648: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x117648u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_11764c:
    // 0x11764c: 0x2042024  and         $a0, $s0, $a0
    ctx->pc = 0x11764cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
label_117650:
    // 0x117650: 0xc045ba4  jal         func_116E90
label_117654:
    if (ctx->pc == 0x117654u) {
        ctx->pc = 0x117654u;
            // 0x117654: 0xfea2fa48  sd          $v0, -0x5B8($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 4294965832), GPR_U64(ctx, 2));
        ctx->pc = 0x117658u;
        goto label_117658;
    }
    ctx->pc = 0x117650u;
    SET_GPR_U32(ctx, 31, 0x117658u);
    ctx->pc = 0x117654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117650u;
            // 0x117654: 0xfea2fa48  sd          $v0, -0x5B8($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 4294965832), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116E90u;
    if (runtime->hasFunction(0x116E90u)) {
        auto targetFn = runtime->lookupFunction(0x116E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117658u; }
        if (ctx->pc != 0x117658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116E90_0x116e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117658u; }
        if (ctx->pc != 0x117658u) { return; }
    }
    ctx->pc = 0x117658u;
label_117658:
    // 0x117658: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x117658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_11765c:
    // 0x11765c: 0x8ca51000  lw          $a1, 0x1000($a1)
    ctx->pc = 0x11765cu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 4096))); // MMIO: 0x10001000
label_117660:
    // 0x117660: 0xdea2fa48  ld          $v0, -0x5B8($s5)
    ctx->pc = 0x117660u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 4294965832)));
label_117664:
    // 0x117664: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x117664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_117668:
    // 0x117668: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x117668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_11766c:
    // 0x11766c: 0x32040003  andi        $a0, $s0, 0x3
    ctx->pc = 0x11766cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
label_117670:
    // 0x117670: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x117670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_117674:
    // 0x117674: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x117674u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_117678:
    // 0x117678: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x117678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_11767c:
    // 0x11767c: 0xc045c80  jal         func_117200
label_117680:
    if (ctx->pc == 0x117680u) {
        ctx->pc = 0x117680u;
            // 0x117680: 0x822014  dsllv       $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
        ctx->pc = 0x117684u;
        goto label_117684;
    }
    ctx->pc = 0x11767Cu;
    SET_GPR_U32(ctx, 31, 0x117684u);
    ctx->pc = 0x117680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11767Cu;
            // 0x117680: 0x822014  dsllv       $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117684u; }
        if (ctx->pc != 0x117684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117200_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117684u; }
        if (ctx->pc != 0x117684u) { return; }
    }
    ctx->pc = 0x117684u;
label_117684:
    // 0x117684: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x117684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_117688:
    // 0x117688: 0x8c421000  lw          $v0, 0x1000($v0)
    ctx->pc = 0x117688u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4096))); // MMIO: 0x10001000
label_11768c:
    // 0x11768c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x11768cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_117690:
    // 0x117690: 0x8c631010  lw          $v1, 0x1010($v1)
    ctx->pc = 0x117690u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4112))); // MMIO: 0x10001010
label_117694:
    // 0x117694: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x117694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_117698:
    // 0x117698: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_11769c:
    if (ctx->pc == 0x11769Cu) {
        ctx->pc = 0x1176A0u;
        goto label_1176a0;
    }
    ctx->pc = 0x117698u;
    {
        const bool branch_taken_0x117698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117698) {
            ctx->pc = 0x1176C4u;
            goto label_1176c4;
        }
    }
    ctx->pc = 0x1176A0u;
label_1176a0:
    // 0x1176a0: 0xdea2fa48  ld          $v0, -0x5B8($s5)
    ctx->pc = 0x1176a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 4294965832)));
label_1176a4:
    // 0x1176a4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1176a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_1176a8:
    // 0x1176a8: 0x3484fbff  ori         $a0, $a0, 0xFBFF
    ctx->pc = 0x1176a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64511);
label_1176ac:
    // 0x1176ac: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1176acu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_1176b0:
    // 0x1176b0: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x1176b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1176b4:
    // 0x1176b4: 0xc045ba4  jal         func_116E90
label_1176b8:
    if (ctx->pc == 0x1176B8u) {
        ctx->pc = 0x1176B8u;
            // 0x1176b8: 0xfea2fa48  sd          $v0, -0x5B8($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 4294965832), GPR_U64(ctx, 2));
        ctx->pc = 0x1176BCu;
        goto label_1176bc;
    }
    ctx->pc = 0x1176B4u;
    SET_GPR_U32(ctx, 31, 0x1176BCu);
    ctx->pc = 0x1176B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1176B4u;
            // 0x1176b8: 0xfea2fa48  sd          $v0, -0x5B8($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 4294965832), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116E90u;
    if (runtime->hasFunction(0x116E90u)) {
        auto targetFn = runtime->lookupFunction(0x116E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1176BCu; }
        if (ctx->pc != 0x1176BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116E90_0x116e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1176BCu; }
        if (ctx->pc != 0x1176BCu) { return; }
    }
    ctx->pc = 0x1176BCu;
label_1176bc:
    // 0x1176bc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1176bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1176c0:
    // 0x1176c0: 0x8c421000  lw          $v0, 0x1000($v0)
    ctx->pc = 0x1176c0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4096))); // MMIO: 0x10001000
label_1176c4:
    // 0x1176c4: 0xdea2fa48  ld          $v0, -0x5B8($s5)
    ctx->pc = 0x1176c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 4294965832)));
label_1176c8:
    // 0x1176c8: 0xf  sync
    ctx->pc = 0x1176c8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1176cc:
    // 0x1176cc: 0x42000038  ei
    ctx->pc = 0x1176ccu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_1176d0:
    // 0x1176d0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1176d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1176d4:
    // 0x1176d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1176d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1176d8:
    // 0x1176d8: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x1176d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1176dc:
    // 0x1176dc: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x1176dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1176e0:
    // 0x1176e0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1176e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1176e4:
    // 0x1176e4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1176e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1176e8:
    // 0x1176e8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1176e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1176ec:
    // 0x1176ec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1176ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1176f0:
    // 0x1176f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1176f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1176f4:
    // 0x1176f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1176f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1176f8:
    // 0x1176f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1176f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1176fc:
    // 0x1176fc: 0x3e00008  jr          $ra
label_117700:
    if (ctx->pc == 0x117700u) {
        ctx->pc = 0x117700u;
            // 0x117700: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x117704u;
        goto label_117704;
    }
    ctx->pc = 0x1176FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1176FCu;
            // 0x117700: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x117704u;
label_117704:
    // 0x117704: 0x0  nop
    ctx->pc = 0x117704u;
    // NOP
}
