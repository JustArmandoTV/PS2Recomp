#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00287390
// Address: 0x287390 - 0x2876a0
void sub_00287390_0x287390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287390_0x287390");
#endif

    switch (ctx->pc) {
        case 0x287390u: goto label_287390;
        case 0x287394u: goto label_287394;
        case 0x287398u: goto label_287398;
        case 0x28739cu: goto label_28739c;
        case 0x2873a0u: goto label_2873a0;
        case 0x2873a4u: goto label_2873a4;
        case 0x2873a8u: goto label_2873a8;
        case 0x2873acu: goto label_2873ac;
        case 0x2873b0u: goto label_2873b0;
        case 0x2873b4u: goto label_2873b4;
        case 0x2873b8u: goto label_2873b8;
        case 0x2873bcu: goto label_2873bc;
        case 0x2873c0u: goto label_2873c0;
        case 0x2873c4u: goto label_2873c4;
        case 0x2873c8u: goto label_2873c8;
        case 0x2873ccu: goto label_2873cc;
        case 0x2873d0u: goto label_2873d0;
        case 0x2873d4u: goto label_2873d4;
        case 0x2873d8u: goto label_2873d8;
        case 0x2873dcu: goto label_2873dc;
        case 0x2873e0u: goto label_2873e0;
        case 0x2873e4u: goto label_2873e4;
        case 0x2873e8u: goto label_2873e8;
        case 0x2873ecu: goto label_2873ec;
        case 0x2873f0u: goto label_2873f0;
        case 0x2873f4u: goto label_2873f4;
        case 0x2873f8u: goto label_2873f8;
        case 0x2873fcu: goto label_2873fc;
        case 0x287400u: goto label_287400;
        case 0x287404u: goto label_287404;
        case 0x287408u: goto label_287408;
        case 0x28740cu: goto label_28740c;
        case 0x287410u: goto label_287410;
        case 0x287414u: goto label_287414;
        case 0x287418u: goto label_287418;
        case 0x28741cu: goto label_28741c;
        case 0x287420u: goto label_287420;
        case 0x287424u: goto label_287424;
        case 0x287428u: goto label_287428;
        case 0x28742cu: goto label_28742c;
        case 0x287430u: goto label_287430;
        case 0x287434u: goto label_287434;
        case 0x287438u: goto label_287438;
        case 0x28743cu: goto label_28743c;
        case 0x287440u: goto label_287440;
        case 0x287444u: goto label_287444;
        case 0x287448u: goto label_287448;
        case 0x28744cu: goto label_28744c;
        case 0x287450u: goto label_287450;
        case 0x287454u: goto label_287454;
        case 0x287458u: goto label_287458;
        case 0x28745cu: goto label_28745c;
        case 0x287460u: goto label_287460;
        case 0x287464u: goto label_287464;
        case 0x287468u: goto label_287468;
        case 0x28746cu: goto label_28746c;
        case 0x287470u: goto label_287470;
        case 0x287474u: goto label_287474;
        case 0x287478u: goto label_287478;
        case 0x28747cu: goto label_28747c;
        case 0x287480u: goto label_287480;
        case 0x287484u: goto label_287484;
        case 0x287488u: goto label_287488;
        case 0x28748cu: goto label_28748c;
        case 0x287490u: goto label_287490;
        case 0x287494u: goto label_287494;
        case 0x287498u: goto label_287498;
        case 0x28749cu: goto label_28749c;
        case 0x2874a0u: goto label_2874a0;
        case 0x2874a4u: goto label_2874a4;
        case 0x2874a8u: goto label_2874a8;
        case 0x2874acu: goto label_2874ac;
        case 0x2874b0u: goto label_2874b0;
        case 0x2874b4u: goto label_2874b4;
        case 0x2874b8u: goto label_2874b8;
        case 0x2874bcu: goto label_2874bc;
        case 0x2874c0u: goto label_2874c0;
        case 0x2874c4u: goto label_2874c4;
        case 0x2874c8u: goto label_2874c8;
        case 0x2874ccu: goto label_2874cc;
        case 0x2874d0u: goto label_2874d0;
        case 0x2874d4u: goto label_2874d4;
        case 0x2874d8u: goto label_2874d8;
        case 0x2874dcu: goto label_2874dc;
        case 0x2874e0u: goto label_2874e0;
        case 0x2874e4u: goto label_2874e4;
        case 0x2874e8u: goto label_2874e8;
        case 0x2874ecu: goto label_2874ec;
        case 0x2874f0u: goto label_2874f0;
        case 0x2874f4u: goto label_2874f4;
        case 0x2874f8u: goto label_2874f8;
        case 0x2874fcu: goto label_2874fc;
        case 0x287500u: goto label_287500;
        case 0x287504u: goto label_287504;
        case 0x287508u: goto label_287508;
        case 0x28750cu: goto label_28750c;
        case 0x287510u: goto label_287510;
        case 0x287514u: goto label_287514;
        case 0x287518u: goto label_287518;
        case 0x28751cu: goto label_28751c;
        case 0x287520u: goto label_287520;
        case 0x287524u: goto label_287524;
        case 0x287528u: goto label_287528;
        case 0x28752cu: goto label_28752c;
        case 0x287530u: goto label_287530;
        case 0x287534u: goto label_287534;
        case 0x287538u: goto label_287538;
        case 0x28753cu: goto label_28753c;
        case 0x287540u: goto label_287540;
        case 0x287544u: goto label_287544;
        case 0x287548u: goto label_287548;
        case 0x28754cu: goto label_28754c;
        case 0x287550u: goto label_287550;
        case 0x287554u: goto label_287554;
        case 0x287558u: goto label_287558;
        case 0x28755cu: goto label_28755c;
        case 0x287560u: goto label_287560;
        case 0x287564u: goto label_287564;
        case 0x287568u: goto label_287568;
        case 0x28756cu: goto label_28756c;
        case 0x287570u: goto label_287570;
        case 0x287574u: goto label_287574;
        case 0x287578u: goto label_287578;
        case 0x28757cu: goto label_28757c;
        case 0x287580u: goto label_287580;
        case 0x287584u: goto label_287584;
        case 0x287588u: goto label_287588;
        case 0x28758cu: goto label_28758c;
        case 0x287590u: goto label_287590;
        case 0x287594u: goto label_287594;
        case 0x287598u: goto label_287598;
        case 0x28759cu: goto label_28759c;
        case 0x2875a0u: goto label_2875a0;
        case 0x2875a4u: goto label_2875a4;
        case 0x2875a8u: goto label_2875a8;
        case 0x2875acu: goto label_2875ac;
        case 0x2875b0u: goto label_2875b0;
        case 0x2875b4u: goto label_2875b4;
        case 0x2875b8u: goto label_2875b8;
        case 0x2875bcu: goto label_2875bc;
        case 0x2875c0u: goto label_2875c0;
        case 0x2875c4u: goto label_2875c4;
        case 0x2875c8u: goto label_2875c8;
        case 0x2875ccu: goto label_2875cc;
        case 0x2875d0u: goto label_2875d0;
        case 0x2875d4u: goto label_2875d4;
        case 0x2875d8u: goto label_2875d8;
        case 0x2875dcu: goto label_2875dc;
        case 0x2875e0u: goto label_2875e0;
        case 0x2875e4u: goto label_2875e4;
        case 0x2875e8u: goto label_2875e8;
        case 0x2875ecu: goto label_2875ec;
        case 0x2875f0u: goto label_2875f0;
        case 0x2875f4u: goto label_2875f4;
        case 0x2875f8u: goto label_2875f8;
        case 0x2875fcu: goto label_2875fc;
        case 0x287600u: goto label_287600;
        case 0x287604u: goto label_287604;
        case 0x287608u: goto label_287608;
        case 0x28760cu: goto label_28760c;
        case 0x287610u: goto label_287610;
        case 0x287614u: goto label_287614;
        case 0x287618u: goto label_287618;
        case 0x28761cu: goto label_28761c;
        case 0x287620u: goto label_287620;
        case 0x287624u: goto label_287624;
        case 0x287628u: goto label_287628;
        case 0x28762cu: goto label_28762c;
        case 0x287630u: goto label_287630;
        case 0x287634u: goto label_287634;
        case 0x287638u: goto label_287638;
        case 0x28763cu: goto label_28763c;
        case 0x287640u: goto label_287640;
        case 0x287644u: goto label_287644;
        case 0x287648u: goto label_287648;
        case 0x28764cu: goto label_28764c;
        case 0x287650u: goto label_287650;
        case 0x287654u: goto label_287654;
        case 0x287658u: goto label_287658;
        case 0x28765cu: goto label_28765c;
        case 0x287660u: goto label_287660;
        case 0x287664u: goto label_287664;
        case 0x287668u: goto label_287668;
        case 0x28766cu: goto label_28766c;
        case 0x287670u: goto label_287670;
        case 0x287674u: goto label_287674;
        case 0x287678u: goto label_287678;
        case 0x28767cu: goto label_28767c;
        case 0x287680u: goto label_287680;
        case 0x287684u: goto label_287684;
        case 0x287688u: goto label_287688;
        case 0x28768cu: goto label_28768c;
        case 0x287690u: goto label_287690;
        case 0x287694u: goto label_287694;
        case 0x287698u: goto label_287698;
        case 0x28769cu: goto label_28769c;
        default: break;
    }

    ctx->pc = 0x287390u;

label_287390:
    // 0x287390: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x287390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_287394:
    // 0x287394: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x287394u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287398:
    // 0x287398: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x287398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_28739c:
    // 0x28739c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28739cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2873a0:
    // 0x2873a0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2873a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2873a4:
    // 0x2873a4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2873a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2873a8:
    // 0x2873a8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2873a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2873ac:
    // 0x2873ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2873acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2873b0:
    // 0x2873b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2873b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2873b4:
    // 0x2873b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2873b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2873b8:
    // 0x2873b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2873b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2873bc:
    // 0x2873bc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2873bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2873c0:
    // 0x2873c0: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2873c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2873c4:
    // 0x2873c4: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_2873c8:
    if (ctx->pc == 0x2873C8u) {
        ctx->pc = 0x2873C8u;
            // 0x2873c8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2873CCu;
        goto label_2873cc;
    }
    ctx->pc = 0x2873C4u;
    {
        const bool branch_taken_0x2873c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2873C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2873C4u;
            // 0x2873c8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2873c4) {
            ctx->pc = 0x287408u;
            goto label_287408;
        }
    }
    ctx->pc = 0x2873CCu;
label_2873cc:
    // 0x2873cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2873ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2873d0:
    // 0x2873d0: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x2873d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_2873d4:
    // 0x2873d4: 0x0  nop
    ctx->pc = 0x2873d4u;
    // NOP
label_2873d8:
    // 0x2873d8: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x2873d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2873dc:
    // 0x2873dc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2873dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2873e0:
    // 0x2873e0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2873e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2873e4:
    // 0x2873e4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2873e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2873e8:
    // 0x2873e8: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x2873e8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_2873ec:
    // 0x2873ec: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2873ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2873f0:
    // 0x2873f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2873f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2873f4:
    // 0x2873f4: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x2873f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
label_2873f8:
    // 0x2873f8: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x2873f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_2873fc:
    // 0x2873fc: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x2873fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_287400:
    // 0x287400: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_287404:
    if (ctx->pc == 0x287404u) {
        ctx->pc = 0x287404u;
            // 0x287404: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->pc = 0x287408u;
        goto label_287408;
    }
    ctx->pc = 0x287400u;
    {
        const bool branch_taken_0x287400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x287404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287400u;
            // 0x287404: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287400) {
            ctx->pc = 0x2873D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2873d8;
        }
    }
    ctx->pc = 0x287408u;
label_287408:
    // 0x287408: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x287408u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_28740c:
    // 0x28740c: 0x27b10084  addiu       $s1, $sp, 0x84
    ctx->pc = 0x28740cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_287410:
    // 0x287410: 0x27b00088  addiu       $s0, $sp, 0x88
    ctx->pc = 0x287410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_287414:
    // 0x287414: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x287414u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_287418:
    // 0x287418: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x287418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_28741c:
    // 0x28741c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x28741cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_287420:
    // 0x287420: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x287420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_287424:
    // 0x287424: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x287424u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_287428:
    // 0x287428: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x287428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_28742c:
    // 0x28742c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x28742cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_287430:
    // 0x287430: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x287430u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_287434:
    // 0x287434: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x287434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_287438:
    // 0x287438: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x287438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_28743c:
    // 0x28743c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x28743cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_287440:
    // 0x287440: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x287440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_287444:
    // 0x287444: 0xe53021  addu        $a2, $a3, $a1
    ctx->pc = 0x287444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_287448:
    // 0x287448: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x287448u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_28744c:
    // 0x28744c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_287450:
    if (ctx->pc == 0x287450u) {
        ctx->pc = 0x287450u;
            // 0x287450: 0x27b60080  addiu       $s6, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x287454u;
        goto label_287454;
    }
    ctx->pc = 0x28744Cu;
    {
        const bool branch_taken_0x28744c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x287450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28744Cu;
            // 0x287450: 0x27b60080  addiu       $s6, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28744c) {
            ctx->pc = 0x287460u;
            goto label_287460;
        }
    }
    ctx->pc = 0x287454u;
label_287454:
    // 0x287454: 0x10000008  b           . + 4 + (0x8 << 2)
label_287458:
    if (ctx->pc == 0x287458u) {
        ctx->pc = 0x287458u;
            // 0x287458: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x28745Cu;
        goto label_28745c;
    }
    ctx->pc = 0x287454u;
    {
        const bool branch_taken_0x287454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287454u;
            // 0x287458: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287454) {
            ctx->pc = 0x287478u;
            goto label_287478;
        }
    }
    ctx->pc = 0x28745Cu;
label_28745c:
    // 0x28745c: 0x0  nop
    ctx->pc = 0x28745cu;
    // NOP
label_287460:
    // 0x287460: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x287460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_287464:
    // 0x287464: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x287464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_287468:
    // 0x287468: 0x320f809  jalr        $t9
label_28746c:
    if (ctx->pc == 0x28746Cu) {
        ctx->pc = 0x287470u;
        goto label_287470;
    }
    ctx->pc = 0x287468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x287470u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x287470u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x287470u; }
            if (ctx->pc != 0x287470u) { return; }
        }
        }
    }
    ctx->pc = 0x287470u;
label_287470:
    // 0x287470: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x287470u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_287474:
    // 0x287474: 0x0  nop
    ctx->pc = 0x287474u;
    // NOP
label_287478:
    // 0x287478: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x287478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_28747c:
    // 0x28747c: 0x2432025  or          $a0, $s2, $v1
    ctx->pc = 0x28747cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
label_287480:
    // 0x287480: 0xaec70000  sw          $a3, 0x0($s6)
    ctx->pc = 0x287480u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 7));
label_287484:
    // 0x287484: 0xaec40008  sw          $a0, 0x8($s6)
    ctx->pc = 0x287484u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 4));
label_287488:
    // 0x287488: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x287488u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28748c:
    // 0x28748c: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x28748cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_287490:
    // 0x287490: 0xaec4000c  sw          $a0, 0xC($s6)
    ctx->pc = 0x287490u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 4));
label_287494:
    // 0x287494: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x287494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_287498:
    // 0x287498: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x287498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_28749c:
    // 0x28749c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x28749cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2874a0:
    // 0x2874a0: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x2874a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2874a4:
    // 0x2874a4: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_2874a8:
    if (ctx->pc == 0x2874A8u) {
        ctx->pc = 0x2874A8u;
            // 0x2874a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2874ACu;
        goto label_2874ac;
    }
    ctx->pc = 0x2874A4u;
    {
        const bool branch_taken_0x2874a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2874A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2874A4u;
            // 0x2874a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2874a4) {
            ctx->pc = 0x287548u;
            goto label_287548;
        }
    }
    ctx->pc = 0x2874ACu;
label_2874ac:
    // 0x2874ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2874acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2874b0:
    // 0x2874b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2874b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2874b4:
    // 0x2874b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2874b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2874b8:
    // 0x2874b8: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x2874b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_2874bc:
    // 0x2874bc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2874bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2874c0:
    // 0x2874c0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2874c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2874c4:
    // 0x2874c4: 0x0  nop
    ctx->pc = 0x2874c4u;
    // NOP
label_2874c8:
    // 0x2874c8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2874c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2874cc:
    // 0x2874cc: 0x884821  addu        $t1, $a0, $t0
    ctx->pc = 0x2874ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_2874d0:
    // 0x2874d0: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x2874d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2874d4:
    // 0x2874d4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2874d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2874d8:
    // 0x2874d8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_2874dc:
    if (ctx->pc == 0x2874DCu) {
        ctx->pc = 0x2874E0u;
        goto label_2874e0;
    }
    ctx->pc = 0x2874D8u;
    {
        const bool branch_taken_0x2874d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2874d8) {
            ctx->pc = 0x287520u;
            goto label_287520;
        }
    }
    ctx->pc = 0x2874E0u;
label_2874e0:
    // 0x2874e0: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x2874e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2874e4:
    // 0x2874e4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2874e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_2874e8:
    // 0x2874e8: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x2874e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_2874ec:
    // 0x2874ec: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2874ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2874f0:
    // 0x2874f0: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x2874f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2874f4:
    // 0x2874f4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2874f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_2874f8:
    // 0x2874f8: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x2874f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2874fc:
    // 0x2874fc: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2874fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_287500:
    // 0x287500: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x287500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_287504:
    // 0x287504: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x287504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_287508:
    // 0x287508: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x287508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_28750c:
    // 0x28750c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x28750cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_287510:
    // 0x287510: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x287510u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
label_287514:
    // 0x287514: 0x10000006  b           . + 4 + (0x6 << 2)
label_287518:
    if (ctx->pc == 0x287518u) {
        ctx->pc = 0x287518u;
            // 0x287518: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x28751Cu;
        goto label_28751c;
    }
    ctx->pc = 0x287514u;
    {
        const bool branch_taken_0x287514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287514u;
            // 0x287518: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287514) {
            ctx->pc = 0x287530u;
            goto label_287530;
        }
    }
    ctx->pc = 0x28751Cu;
label_28751c:
    // 0x28751c: 0x0  nop
    ctx->pc = 0x28751cu;
    // NOP
label_287520:
    // 0x287520: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x287520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_287524:
    // 0x287524: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x287524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_287528:
    // 0x287528: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x287528u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_28752c:
    // 0x28752c: 0x0  nop
    ctx->pc = 0x28752cu;
    // NOP
label_287530:
    // 0x287530: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x287530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_287534:
    // 0x287534: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x287534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_287538:
    // 0x287538: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x287538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_28753c:
    // 0x28753c: 0x64202a  slt         $a0, $v1, $a0
    ctx->pc = 0x28753cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_287540:
    // 0x287540: 0x1480ffe1  bnez        $a0, . + 4 + (-0x1F << 2)
label_287544:
    if (ctx->pc == 0x287544u) {
        ctx->pc = 0x287544u;
            // 0x287544: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x287548u;
        goto label_287548;
    }
    ctx->pc = 0x287540u;
    {
        const bool branch_taken_0x287540 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x287544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287540u;
            // 0x287544: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287540) {
            ctx->pc = 0x2874C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2874c8;
        }
    }
    ctx->pc = 0x287548u;
label_287548:
    // 0x287548: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x287548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_28754c:
    // 0x28754c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x28754cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_287550:
    // 0x287550: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x287550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_287554:
    // 0x287554: 0x73082a  slt         $at, $v1, $s3
    ctx->pc = 0x287554u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_287558:
    // 0x287558: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_28755c:
    if (ctx->pc == 0x28755Cu) {
        ctx->pc = 0x287560u;
        goto label_287560;
    }
    ctx->pc = 0x287558u;
    {
        const bool branch_taken_0x287558 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x287558) {
            ctx->pc = 0x287578u;
            goto label_287578;
        }
    }
    ctx->pc = 0x287560u;
label_287560:
    // 0x287560: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x287560u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_287564:
    // 0x287564: 0x265082a  slt         $at, $s3, $a1
    ctx->pc = 0x287564u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_287568:
    // 0x287568: 0x261280a  movz        $a1, $s3, $at
    ctx->pc = 0x287568u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 19));
label_28756c:
    // 0x28756c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28756cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287570:
    // 0x287570: 0xc0a725c  jal         func_29C970
label_287574:
    if (ctx->pc == 0x287574u) {
        ctx->pc = 0x287574u;
            // 0x287574: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x287578u;
        goto label_287578;
    }
    ctx->pc = 0x287570u;
    SET_GPR_U32(ctx, 31, 0x287578u);
    ctx->pc = 0x287574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287570u;
            // 0x287574: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287578u; }
        if (ctx->pc != 0x287578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287578u; }
        if (ctx->pc != 0x287578u) { return; }
    }
    ctx->pc = 0x287578u;
label_287578:
    // 0x287578: 0xae930004  sw          $s3, 0x4($s4)
    ctx->pc = 0x287578u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 19));
label_28757c:
    // 0x28757c: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x28757cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_287580:
    // 0x287580: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x287580u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_287584:
    // 0x287584: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_287588:
    if (ctx->pc == 0x287588u) {
        ctx->pc = 0x287588u;
            // 0x287588: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28758Cu;
        goto label_28758c;
    }
    ctx->pc = 0x287584u;
    {
        const bool branch_taken_0x287584 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x287588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287584u;
            // 0x287588: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287584) {
            ctx->pc = 0x2875C8u;
            goto label_2875c8;
        }
    }
    ctx->pc = 0x28758Cu;
label_28758c:
    // 0x28758c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28758cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287590:
    // 0x287590: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x287590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_287594:
    // 0x287594: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x287594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_287598:
    // 0x287598: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x287598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_28759c:
    // 0x28759c: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x28759cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2875a0:
    // 0x2875a0: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x2875a0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_2875a4:
    // 0x2875a4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2875a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2875a8:
    // 0x2875a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2875a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2875ac:
    // 0x2875ac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2875acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2875b0:
    // 0x2875b0: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x2875b0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_2875b4:
    // 0x2875b4: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x2875b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_2875b8:
    // 0x2875b8: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x2875b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2875bc:
    // 0x2875bc: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_2875c0:
    if (ctx->pc == 0x2875C0u) {
        ctx->pc = 0x2875C0u;
            // 0x2875c0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x2875C4u;
        goto label_2875c4;
    }
    ctx->pc = 0x2875BCu;
    {
        const bool branch_taken_0x2875bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2875C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2875BCu;
            // 0x2875c0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2875bc) {
            ctx->pc = 0x287590u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_287590;
        }
    }
    ctx->pc = 0x2875C4u;
label_2875c4:
    // 0x2875c4: 0x0  nop
    ctx->pc = 0x2875c4u;
    // NOP
label_2875c8:
    // 0x2875c8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2875c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2875cc:
    // 0x2875cc: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x2875ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_2875d0:
    // 0x2875d0: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2875d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_2875d4:
    // 0x2875d4: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x2875d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_2875d8:
    // 0x2875d8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2875d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2875dc:
    // 0x2875dc: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
label_2875e0:
    if (ctx->pc == 0x2875E0u) {
        ctx->pc = 0x2875E4u;
        goto label_2875e4;
    }
    ctx->pc = 0x2875DCu;
    {
        const bool branch_taken_0x2875dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2875dc) {
            ctx->pc = 0x2875F8u;
            goto label_2875f8;
        }
    }
    ctx->pc = 0x2875E4u;
label_2875e4:
    // 0x2875e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2875e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2875e8:
    // 0x2875e8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2875e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2875ec:
    // 0x2875ec: 0x320f809  jalr        $t9
label_2875f0:
    if (ctx->pc == 0x2875F0u) {
        ctx->pc = 0x2875F4u;
        goto label_2875f4;
    }
    ctx->pc = 0x2875ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2875F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2875F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2875F4u; }
            if (ctx->pc != 0x2875F4u) { return; }
        }
        }
    }
    ctx->pc = 0x2875F4u;
label_2875f4:
    // 0x2875f4: 0x0  nop
    ctx->pc = 0x2875f4u;
    // NOP
label_2875f8:
    // 0x2875f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2875f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2875fc:
    // 0x2875fc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2875fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_287600:
    // 0x287600: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x287600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_287604:
    // 0x287604: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_287608:
    if (ctx->pc == 0x287608u) {
        ctx->pc = 0x28760Cu;
        goto label_28760c;
    }
    ctx->pc = 0x287604u;
    {
        const bool branch_taken_0x287604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x287604) {
            ctx->pc = 0x287630u;
            goto label_287630;
        }
    }
    ctx->pc = 0x28760Cu;
label_28760c:
    // 0x28760c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x28760cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_287610:
    // 0x287610: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x287610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_287614:
    // 0x287614: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x287614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_287618:
    // 0x287618: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x287618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_28761c:
    // 0x28761c: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x28761cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_287620:
    // 0x287620: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x287620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_287624:
    // 0x287624: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x287624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_287628:
    // 0x287628: 0xc0a7ab4  jal         func_29EAD0
label_28762c:
    if (ctx->pc == 0x28762Cu) {
        ctx->pc = 0x28762Cu;
            // 0x28762c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x287630u;
        goto label_287630;
    }
    ctx->pc = 0x287628u;
    SET_GPR_U32(ctx, 31, 0x287630u);
    ctx->pc = 0x28762Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x287628u;
            // 0x28762c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287630u; }
        if (ctx->pc != 0x287630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x287630u; }
        if (ctx->pc != 0x287630u) { return; }
    }
    ctx->pc = 0x287630u;
label_287630:
    // 0x287630: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x287630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_287634:
    // 0x287634: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x287634u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_287638:
    // 0x287638: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_28763c:
    if (ctx->pc == 0x28763Cu) {
        ctx->pc = 0x28763Cu;
            // 0x28763c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x287640u;
        goto label_287640;
    }
    ctx->pc = 0x287638u;
    {
        const bool branch_taken_0x287638 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28763Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287638u;
            // 0x28763c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287638) {
            ctx->pc = 0x287678u;
            goto label_287678;
        }
    }
    ctx->pc = 0x287640u;
label_287640:
    // 0x287640: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x287640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287644:
    // 0x287644: 0x0  nop
    ctx->pc = 0x287644u;
    // NOP
label_287648:
    // 0x287648: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x287648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_28764c:
    // 0x28764c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x28764cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_287650:
    // 0x287650: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x287650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_287654:
    // 0x287654: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x287654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_287658:
    // 0x287658: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x287658u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_28765c:
    // 0x28765c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x28765cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_287660:
    // 0x287660: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x287660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_287664:
    // 0x287664: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x287664u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_287668:
    // 0x287668: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x287668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_28766c:
    // 0x28766c: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x28766cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_287670:
    // 0x287670: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_287674:
    if (ctx->pc == 0x287674u) {
        ctx->pc = 0x287674u;
            // 0x287674: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x287678u;
        goto label_287678;
    }
    ctx->pc = 0x287670u;
    {
        const bool branch_taken_0x287670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x287674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287670u;
            // 0x287674: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287670) {
            ctx->pc = 0x287648u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_287648;
        }
    }
    ctx->pc = 0x287678u;
label_287678:
    // 0x287678: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x287678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_28767c:
    // 0x28767c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28767cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_287680:
    // 0x287680: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x287680u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_287684:
    // 0x287684: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x287684u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_287688:
    // 0x287688: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x287688u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28768c:
    // 0x28768c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28768cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_287690:
    // 0x287690: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x287690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_287694:
    // 0x287694: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x287694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_287698:
    // 0x287698: 0x3e00008  jr          $ra
label_28769c:
    if (ctx->pc == 0x28769Cu) {
        ctx->pc = 0x28769Cu;
            // 0x28769c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2876A0u;
        goto label_fallthrough_0x287698;
    }
    ctx->pc = 0x287698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28769Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287698u;
            // 0x28769c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x287698:
    ctx->pc = 0x2876A0u;
}
