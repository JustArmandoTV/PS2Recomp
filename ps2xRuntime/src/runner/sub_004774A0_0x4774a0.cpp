#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004774A0
// Address: 0x4774a0 - 0x477760
void sub_004774A0_0x4774a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004774A0_0x4774a0");
#endif

    switch (ctx->pc) {
        case 0x4774a0u: goto label_4774a0;
        case 0x4774a4u: goto label_4774a4;
        case 0x4774a8u: goto label_4774a8;
        case 0x4774acu: goto label_4774ac;
        case 0x4774b0u: goto label_4774b0;
        case 0x4774b4u: goto label_4774b4;
        case 0x4774b8u: goto label_4774b8;
        case 0x4774bcu: goto label_4774bc;
        case 0x4774c0u: goto label_4774c0;
        case 0x4774c4u: goto label_4774c4;
        case 0x4774c8u: goto label_4774c8;
        case 0x4774ccu: goto label_4774cc;
        case 0x4774d0u: goto label_4774d0;
        case 0x4774d4u: goto label_4774d4;
        case 0x4774d8u: goto label_4774d8;
        case 0x4774dcu: goto label_4774dc;
        case 0x4774e0u: goto label_4774e0;
        case 0x4774e4u: goto label_4774e4;
        case 0x4774e8u: goto label_4774e8;
        case 0x4774ecu: goto label_4774ec;
        case 0x4774f0u: goto label_4774f0;
        case 0x4774f4u: goto label_4774f4;
        case 0x4774f8u: goto label_4774f8;
        case 0x4774fcu: goto label_4774fc;
        case 0x477500u: goto label_477500;
        case 0x477504u: goto label_477504;
        case 0x477508u: goto label_477508;
        case 0x47750cu: goto label_47750c;
        case 0x477510u: goto label_477510;
        case 0x477514u: goto label_477514;
        case 0x477518u: goto label_477518;
        case 0x47751cu: goto label_47751c;
        case 0x477520u: goto label_477520;
        case 0x477524u: goto label_477524;
        case 0x477528u: goto label_477528;
        case 0x47752cu: goto label_47752c;
        case 0x477530u: goto label_477530;
        case 0x477534u: goto label_477534;
        case 0x477538u: goto label_477538;
        case 0x47753cu: goto label_47753c;
        case 0x477540u: goto label_477540;
        case 0x477544u: goto label_477544;
        case 0x477548u: goto label_477548;
        case 0x47754cu: goto label_47754c;
        case 0x477550u: goto label_477550;
        case 0x477554u: goto label_477554;
        case 0x477558u: goto label_477558;
        case 0x47755cu: goto label_47755c;
        case 0x477560u: goto label_477560;
        case 0x477564u: goto label_477564;
        case 0x477568u: goto label_477568;
        case 0x47756cu: goto label_47756c;
        case 0x477570u: goto label_477570;
        case 0x477574u: goto label_477574;
        case 0x477578u: goto label_477578;
        case 0x47757cu: goto label_47757c;
        case 0x477580u: goto label_477580;
        case 0x477584u: goto label_477584;
        case 0x477588u: goto label_477588;
        case 0x47758cu: goto label_47758c;
        case 0x477590u: goto label_477590;
        case 0x477594u: goto label_477594;
        case 0x477598u: goto label_477598;
        case 0x47759cu: goto label_47759c;
        case 0x4775a0u: goto label_4775a0;
        case 0x4775a4u: goto label_4775a4;
        case 0x4775a8u: goto label_4775a8;
        case 0x4775acu: goto label_4775ac;
        case 0x4775b0u: goto label_4775b0;
        case 0x4775b4u: goto label_4775b4;
        case 0x4775b8u: goto label_4775b8;
        case 0x4775bcu: goto label_4775bc;
        case 0x4775c0u: goto label_4775c0;
        case 0x4775c4u: goto label_4775c4;
        case 0x4775c8u: goto label_4775c8;
        case 0x4775ccu: goto label_4775cc;
        case 0x4775d0u: goto label_4775d0;
        case 0x4775d4u: goto label_4775d4;
        case 0x4775d8u: goto label_4775d8;
        case 0x4775dcu: goto label_4775dc;
        case 0x4775e0u: goto label_4775e0;
        case 0x4775e4u: goto label_4775e4;
        case 0x4775e8u: goto label_4775e8;
        case 0x4775ecu: goto label_4775ec;
        case 0x4775f0u: goto label_4775f0;
        case 0x4775f4u: goto label_4775f4;
        case 0x4775f8u: goto label_4775f8;
        case 0x4775fcu: goto label_4775fc;
        case 0x477600u: goto label_477600;
        case 0x477604u: goto label_477604;
        case 0x477608u: goto label_477608;
        case 0x47760cu: goto label_47760c;
        case 0x477610u: goto label_477610;
        case 0x477614u: goto label_477614;
        case 0x477618u: goto label_477618;
        case 0x47761cu: goto label_47761c;
        case 0x477620u: goto label_477620;
        case 0x477624u: goto label_477624;
        case 0x477628u: goto label_477628;
        case 0x47762cu: goto label_47762c;
        case 0x477630u: goto label_477630;
        case 0x477634u: goto label_477634;
        case 0x477638u: goto label_477638;
        case 0x47763cu: goto label_47763c;
        case 0x477640u: goto label_477640;
        case 0x477644u: goto label_477644;
        case 0x477648u: goto label_477648;
        case 0x47764cu: goto label_47764c;
        case 0x477650u: goto label_477650;
        case 0x477654u: goto label_477654;
        case 0x477658u: goto label_477658;
        case 0x47765cu: goto label_47765c;
        case 0x477660u: goto label_477660;
        case 0x477664u: goto label_477664;
        case 0x477668u: goto label_477668;
        case 0x47766cu: goto label_47766c;
        case 0x477670u: goto label_477670;
        case 0x477674u: goto label_477674;
        case 0x477678u: goto label_477678;
        case 0x47767cu: goto label_47767c;
        case 0x477680u: goto label_477680;
        case 0x477684u: goto label_477684;
        case 0x477688u: goto label_477688;
        case 0x47768cu: goto label_47768c;
        case 0x477690u: goto label_477690;
        case 0x477694u: goto label_477694;
        case 0x477698u: goto label_477698;
        case 0x47769cu: goto label_47769c;
        case 0x4776a0u: goto label_4776a0;
        case 0x4776a4u: goto label_4776a4;
        case 0x4776a8u: goto label_4776a8;
        case 0x4776acu: goto label_4776ac;
        case 0x4776b0u: goto label_4776b0;
        case 0x4776b4u: goto label_4776b4;
        case 0x4776b8u: goto label_4776b8;
        case 0x4776bcu: goto label_4776bc;
        case 0x4776c0u: goto label_4776c0;
        case 0x4776c4u: goto label_4776c4;
        case 0x4776c8u: goto label_4776c8;
        case 0x4776ccu: goto label_4776cc;
        case 0x4776d0u: goto label_4776d0;
        case 0x4776d4u: goto label_4776d4;
        case 0x4776d8u: goto label_4776d8;
        case 0x4776dcu: goto label_4776dc;
        case 0x4776e0u: goto label_4776e0;
        case 0x4776e4u: goto label_4776e4;
        case 0x4776e8u: goto label_4776e8;
        case 0x4776ecu: goto label_4776ec;
        case 0x4776f0u: goto label_4776f0;
        case 0x4776f4u: goto label_4776f4;
        case 0x4776f8u: goto label_4776f8;
        case 0x4776fcu: goto label_4776fc;
        case 0x477700u: goto label_477700;
        case 0x477704u: goto label_477704;
        case 0x477708u: goto label_477708;
        case 0x47770cu: goto label_47770c;
        case 0x477710u: goto label_477710;
        case 0x477714u: goto label_477714;
        case 0x477718u: goto label_477718;
        case 0x47771cu: goto label_47771c;
        case 0x477720u: goto label_477720;
        case 0x477724u: goto label_477724;
        case 0x477728u: goto label_477728;
        case 0x47772cu: goto label_47772c;
        case 0x477730u: goto label_477730;
        case 0x477734u: goto label_477734;
        case 0x477738u: goto label_477738;
        case 0x47773cu: goto label_47773c;
        case 0x477740u: goto label_477740;
        case 0x477744u: goto label_477744;
        case 0x477748u: goto label_477748;
        case 0x47774cu: goto label_47774c;
        case 0x477750u: goto label_477750;
        case 0x477754u: goto label_477754;
        case 0x477758u: goto label_477758;
        case 0x47775cu: goto label_47775c;
        default: break;
    }

    ctx->pc = 0x4774a0u;

label_4774a0:
    // 0x4774a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4774a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4774a4:
    // 0x4774a4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4774a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_4774a8:
    // 0x4774a8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4774a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4774ac:
    // 0x4774ac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4774acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4774b0:
    // 0x4774b0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4774b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4774b4:
    // 0x4774b4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4774b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4774b8:
    // 0x4774b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4774b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4774bc:
    // 0x4774bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4774bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4774c0:
    // 0x4774c0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4774c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4774c4:
    // 0x4774c4: 0x8c860054  lw          $a2, 0x54($a0)
    ctx->pc = 0x4774c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_4774c8:
    // 0x4774c8: 0x30c30004  andi        $v1, $a2, 0x4
    ctx->pc = 0x4774c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_4774cc:
    // 0x4774cc: 0x10600099  beqz        $v1, . + 4 + (0x99 << 2)
label_4774d0:
    if (ctx->pc == 0x4774D0u) {
        ctx->pc = 0x4774D0u;
            // 0x4774d0: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4774D4u;
        goto label_4774d4;
    }
    ctx->pc = 0x4774CCu;
    {
        const bool branch_taken_0x4774cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4774D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4774CCu;
            // 0x4774d0: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4774cc) {
            ctx->pc = 0x477734u;
            goto label_477734;
        }
    }
    ctx->pc = 0x4774D4u;
label_4774d4:
    // 0x4774d4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4774d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4774d8:
    // 0x4774d8: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x4774d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
label_4774dc:
    // 0x4774dc: 0xc460f324  lwc1        $f0, -0xCDC($v1)
    ctx->pc = 0x4774dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4774e0:
    // 0x4774e0: 0xc6a30018  lwc1        $f3, 0x18($s5)
    ctx->pc = 0x4774e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4774e4:
    // 0x4774e4: 0x46001832  c.eq.s      $f3, $f0
    ctx->pc = 0x4774e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4774e8:
    // 0x4774e8: 0x45010092  bc1t        . + 4 + (0x92 << 2)
label_4774ec:
    if (ctx->pc == 0x4774ECu) {
        ctx->pc = 0x4774ECu;
            // 0x4774ec: 0x24e7f300  addiu       $a3, $a3, -0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963968));
        ctx->pc = 0x4774F0u;
        goto label_4774f0;
    }
    ctx->pc = 0x4774E8u;
    {
        const bool branch_taken_0x4774e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4774ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4774E8u;
            // 0x4774ec: 0x24e7f300  addiu       $a3, $a3, -0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4774e8) {
            ctx->pc = 0x477734u;
            goto label_477734;
        }
    }
    ctx->pc = 0x4774F0u;
label_4774f0:
    // 0x4774f0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4774f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4774f4:
    // 0x4774f4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x4774f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_4774f8:
    // 0x4774f8: 0x5060008f  beql        $v1, $zero, . + 4 + (0x8F << 2)
label_4774fc:
    if (ctx->pc == 0x4774FCu) {
        ctx->pc = 0x4774FCu;
            // 0x4774fc: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x477500u;
        goto label_477500;
    }
    ctx->pc = 0x4774F8u;
    {
        const bool branch_taken_0x4774f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4774f8) {
            ctx->pc = 0x4774FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4774F8u;
            // 0x4774fc: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x477738u;
            goto label_477738;
        }
    }
    ctx->pc = 0x477500u;
label_477500:
    // 0x477500: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x477500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_477504:
    // 0x477504: 0x2c610004  sltiu       $at, $v1, 0x4
    ctx->pc = 0x477504u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_477508:
    // 0x477508: 0x1020008a  beqz        $at, . + 4 + (0x8A << 2)
label_47750c:
    if (ctx->pc == 0x47750Cu) {
        ctx->pc = 0x477510u;
        goto label_477510;
    }
    ctx->pc = 0x477508u;
    {
        const bool branch_taken_0x477508 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x477508) {
            ctx->pc = 0x477734u;
            goto label_477734;
        }
    }
    ctx->pc = 0x477510u;
label_477510:
    // 0x477510: 0x8ea3003c  lw          $v1, 0x3C($s5)
    ctx->pc = 0x477510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
label_477514:
    // 0x477514: 0x10600087  beqz        $v1, . + 4 + (0x87 << 2)
label_477518:
    if (ctx->pc == 0x477518u) {
        ctx->pc = 0x47751Cu;
        goto label_47751c;
    }
    ctx->pc = 0x477514u;
    {
        const bool branch_taken_0x477514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x477514) {
            ctx->pc = 0x477734u;
            goto label_477734;
        }
    }
    ctx->pc = 0x47751Cu;
label_47751c:
    // 0x47751c: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x47751cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_477520:
    // 0x477520: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x477520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_477524:
    // 0x477524: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x477524u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_477528:
    // 0x477528: 0x8c450eac  lw          $a1, 0xEAC($v0)
    ctx->pc = 0x477528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_47752c:
    // 0x47752c: 0x46031042  mul.s       $f1, $f2, $f3
    ctx->pc = 0x47752cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_477530:
    // 0x477530: 0x3c130067  lui         $s3, 0x67
    ctx->pc = 0x477530u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)103 << 16));
label_477534:
    // 0x477534: 0x3c120064  lui         $s2, 0x64
    ctx->pc = 0x477534u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)100 << 16));
label_477538:
    // 0x477538: 0x267398e0  addiu       $s3, $s3, -0x6720
    ctx->pc = 0x477538u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294940896));
label_47753c:
    // 0x47753c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x47753cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_477540:
    // 0x477540: 0x26522114  addiu       $s2, $s2, 0x2114
    ctx->pc = 0x477540u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8468));
label_477544:
    // 0x477544: 0x8ca50080  lw          $a1, 0x80($a1)
    ctx->pc = 0x477544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
label_477548:
    // 0x477548: 0xc4e40024  lwc1        $f4, 0x24($a3)
    ctx->pc = 0x477548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_47754c:
    // 0x47754c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47754cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477550:
    // 0x477550: 0x0  nop
    ctx->pc = 0x477550u;
    // NOP
label_477554:
    // 0x477554: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x477554u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
label_477558:
    // 0x477558: 0x0  nop
    ctx->pc = 0x477558u;
    // NOP
label_47755c:
    // 0x47755c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x47755cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_477560:
    // 0x477560: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x477560u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_477564:
    // 0x477564: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_477568:
    if (ctx->pc == 0x477568u) {
        ctx->pc = 0x477568u;
            // 0x477568: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x47756Cu;
        goto label_47756c;
    }
    ctx->pc = 0x477564u;
    {
        const bool branch_taken_0x477564 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x477564) {
            ctx->pc = 0x477568u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x477564u;
            // 0x477568: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x47757Cu;
            goto label_47757c;
        }
    }
    ctx->pc = 0x47756Cu;
label_47756c:
    // 0x47756c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47756cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_477570:
    // 0x477570: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x477570u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_477574:
    // 0x477574: 0x10000007  b           . + 4 + (0x7 << 2)
label_477578:
    if (ctx->pc == 0x477578u) {
        ctx->pc = 0x477578u;
            // 0x477578: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x47757Cu;
        goto label_47757c;
    }
    ctx->pc = 0x477574u;
    {
        const bool branch_taken_0x477574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x477578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x477574u;
            // 0x477578: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x477574) {
            ctx->pc = 0x477594u;
            goto label_477594;
        }
    }
    ctx->pc = 0x47757Cu;
label_47757c:
    // 0x47757c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x47757cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_477580:
    // 0x477580: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x477580u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_477584:
    // 0x477584: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x477584u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_477588:
    // 0x477588: 0x0  nop
    ctx->pc = 0x477588u;
    // NOP
label_47758c:
    // 0x47758c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x47758cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_477590:
    // 0x477590: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x477590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_477594:
    // 0x477594: 0xc4e50050  lwc1        $f5, 0x50($a3)
    ctx->pc = 0x477594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_477598:
    // 0x477598: 0x30c20002  andi        $v0, $a2, 0x2
    ctx->pc = 0x477598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
label_47759c:
    // 0x47759c: 0xc4e00054  lwc1        $f0, 0x54($a3)
    ctx->pc = 0x47759cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4775a0:
    // 0x4775a0: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x4775a0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4775a4:
    // 0x4775a4: 0x86a6001e  lh          $a2, 0x1E($s5)
    ctx->pc = 0x4775a4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 30)));
label_4775a8:
    // 0x4775a8: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x4775a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_4775ac:
    // 0x4775ac: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x4775acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_4775b0:
    // 0x4775b0: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x4775b0u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
label_4775b4:
    // 0x4775b4: 0x0  nop
    ctx->pc = 0x4775b4u;
    // NOP
label_4775b8:
    // 0x4775b8: 0x0  nop
    ctx->pc = 0x4775b8u;
    // NOP
label_4775bc:
    // 0x4775bc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_4775c0:
    if (ctx->pc == 0x4775C0u) {
        ctx->pc = 0x4775C0u;
            // 0x4775c0: 0x46002d00  add.s       $f20, $f5, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
        ctx->pc = 0x4775C4u;
        goto label_4775c4;
    }
    ctx->pc = 0x4775BCu;
    {
        const bool branch_taken_0x4775bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4775C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4775BCu;
            // 0x4775c0: 0x46002d00  add.s       $f20, $f5, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4775bc) {
            ctx->pc = 0x477628u;
            goto label_477628;
        }
    }
    ctx->pc = 0x4775C4u;
label_4775c4:
    // 0x4775c4: 0xc6a20030  lwc1        $f2, 0x30($s5)
    ctx->pc = 0x4775c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4775c8:
    // 0x4775c8: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x4775c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_4775cc:
    // 0x4775cc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x4775ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4775d0:
    // 0x4775d0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4775d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_4775d4:
    // 0x4775d4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x4775d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_4775d8:
    // 0x4775d8: 0xc4810064  lwc1        $f1, 0x64($a0)
    ctx->pc = 0x4775d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4775dc:
    // 0x4775dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4775dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4775e0:
    // 0x4775e0: 0x0  nop
    ctx->pc = 0x4775e0u;
    // NOP
label_4775e4:
    // 0x4775e4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x4775e4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_4775e8:
    // 0x4775e8: 0x0  nop
    ctx->pc = 0x4775e8u;
    // NOP
label_4775ec:
    // 0x4775ec: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x4775ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_4775f0:
    // 0x4775f0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4775f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4775f4:
    // 0x4775f4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4775f8:
    if (ctx->pc == 0x4775F8u) {
        ctx->pc = 0x4775F8u;
            // 0x4775f8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4775FCu;
        goto label_4775fc;
    }
    ctx->pc = 0x4775F4u;
    {
        const bool branch_taken_0x4775f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4775f4) {
            ctx->pc = 0x4775F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4775F4u;
            // 0x4775f8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x47760Cu;
            goto label_47760c;
        }
    }
    ctx->pc = 0x4775FCu;
label_4775fc:
    // 0x4775fc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4775fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_477600:
    // 0x477600: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x477600u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_477604:
    // 0x477604: 0x10000007  b           . + 4 + (0x7 << 2)
label_477608:
    if (ctx->pc == 0x477608u) {
        ctx->pc = 0x477608u;
            // 0x477608: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x47760Cu;
        goto label_47760c;
    }
    ctx->pc = 0x477604u;
    {
        const bool branch_taken_0x477604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x477608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x477604u;
            // 0x477608: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x477604) {
            ctx->pc = 0x477624u;
            goto label_477624;
        }
    }
    ctx->pc = 0x47760Cu;
label_47760c:
    // 0x47760c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x47760cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_477610:
    // 0x477610: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x477610u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_477614:
    // 0x477614: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x477614u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_477618:
    // 0x477618: 0x0  nop
    ctx->pc = 0x477618u;
    // NOP
label_47761c:
    // 0x47761c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x47761cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_477620:
    // 0x477620: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x477620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_477624:
    // 0x477624: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x477624u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_477628:
    // 0x477628: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x477628u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47762c:
    // 0x47762c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x47762cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_477630:
    // 0x477630: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x477630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_477634:
    // 0x477634: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x477634u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477638:
    // 0x477638: 0x0  nop
    ctx->pc = 0x477638u;
    // NOP
label_47763c:
    // 0x47763c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x47763cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_477640:
    // 0x477640: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x477640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477644:
    // 0x477644: 0xc6640228  lwc1        $f4, 0x228($s3)
    ctx->pc = 0x477644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_477648:
    // 0x477648: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x477648u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_47764c:
    // 0x47764c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x47764cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_477650:
    // 0x477650: 0x46052002  mul.s       $f0, $f4, $f5
    ctx->pc = 0x477650u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_477654:
    // 0x477654: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x477654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_477658:
    // 0x477658: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x477658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_47765c:
    // 0x47765c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x47765cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_477660:
    // 0x477660: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x477660u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_477664:
    // 0x477664: 0x4600181d  msub.s      $f0, $f3, $f0
    ctx->pc = 0x477664u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_477668:
    // 0x477668: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x477668u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_47766c:
    // 0x47766c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47766cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_477670:
    // 0x477670: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x477670u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_477674:
    // 0x477674: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x477674u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_477678:
    // 0x477678: 0xc0506ac  jal         func_141AB0
label_47767c:
    if (ctx->pc == 0x47767Cu) {
        ctx->pc = 0x47767Cu;
            // 0x47767c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x477680u;
        goto label_477680;
    }
    ctx->pc = 0x477678u;
    SET_GPR_U32(ctx, 31, 0x477680u);
    ctx->pc = 0x47767Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x477678u;
            // 0x47767c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x477680u; }
        if (ctx->pc != 0x477680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x477680u; }
        if (ctx->pc != 0x477680u) { return; }
    }
    ctx->pc = 0x477680u;
label_477680:
    // 0x477680: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x477680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_477684:
    // 0x477684: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x477684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_477688:
    // 0x477688: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x477688u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47768c:
    // 0x47768c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x47768cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_477690:
    // 0x477690: 0x320f809  jalr        $t9
label_477694:
    if (ctx->pc == 0x477694u) {
        ctx->pc = 0x477694u;
            // 0x477694: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x477698u;
        goto label_477698;
    }
    ctx->pc = 0x477690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x477698u);
        ctx->pc = 0x477694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x477690u;
            // 0x477694: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x477698u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x477698u; }
            if (ctx->pc != 0x477698u) { return; }
        }
        }
    }
    ctx->pc = 0x477698u;
label_477698:
    // 0x477698: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x477698u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47769c:
    // 0x47769c: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x47769cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_4776a0:
    // 0x4776a0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4776a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4776a4:
    // 0x4776a4: 0x3c073f00  lui         $a3, 0x3F00
    ctx->pc = 0x4776a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16128 << 16));
label_4776a8:
    // 0x4776a8: 0x86490000  lh          $t1, 0x0($s2)
    ctx->pc = 0x4776a8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4776ac:
    // 0x4776ac: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x4776acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_4776b0:
    // 0x4776b0: 0x24420021  addiu       $v0, $v0, 0x21
    ctx->pc = 0x4776b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 33));
label_4776b4:
    // 0x4776b4: 0x86480002  lh          $t0, 0x2($s2)
    ctx->pc = 0x4776b4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_4776b8:
    // 0x4776b8: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x4776b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4776bc:
    // 0x4776bc: 0x2642821  addu        $a1, $s3, $a0
    ctx->pc = 0x4776bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_4776c0:
    // 0x4776c0: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4776c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4776c4:
    // 0x4776c4: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x4776c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4776c8:
    // 0x4776c8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4776c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4776cc:
    // 0x4776cc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4776ccu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4776d0:
    // 0x4776d0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4776d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4776d4:
    // 0x4776d4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4776d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4776d8:
    // 0x4776d8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x4776d8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4776dc:
    // 0x4776dc: 0x0  nop
    ctx->pc = 0x4776dcu;
    // NOP
label_4776e0:
    // 0x4776e0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4776e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4776e4:
    // 0x4776e4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4776e4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4776e8:
    // 0x4776e8: 0x0  nop
    ctx->pc = 0x4776e8u;
    // NOP
label_4776ec:
    // 0x4776ec: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4776ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4776f0:
    // 0x4776f0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x4776f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4776f4:
    // 0x4776f4: 0x44871800  mtc1        $a3, $f3
    ctx->pc = 0x4776f4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4776f8:
    // 0x4776f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4776f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4776fc:
    // 0x4776fc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x4776fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_477700:
    // 0x477700: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x477700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_477704:
    // 0x477704: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x477704u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_477708:
    // 0x477708: 0x46001380  add.s       $f14, $f2, $f0
    ctx->pc = 0x477708u;
    ctx->f[14] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_47770c:
    // 0x47770c: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x47770cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_477710:
    // 0x477710: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x477710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_477714:
    // 0x477714: 0xc0bc284  jal         func_2F0A10
label_477718:
    if (ctx->pc == 0x477718u) {
        ctx->pc = 0x477718u;
            // 0x477718: 0x46000bc0  add.s       $f15, $f1, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x47771Cu;
        goto label_47771c;
    }
    ctx->pc = 0x477714u;
    SET_GPR_U32(ctx, 31, 0x47771Cu);
    ctx->pc = 0x477718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x477714u;
            // 0x477718: 0x46000bc0  add.s       $f15, $f1, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47771Cu; }
        if (ctx->pc != 0x47771Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47771Cu; }
        if (ctx->pc != 0x47771Cu) { return; }
    }
    ctx->pc = 0x47771Cu;
label_47771c:
    // 0x47771c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47771cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_477720:
    // 0x477720: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x477720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_477724:
    // 0x477724: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x477724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_477728:
    // 0x477728: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x477728u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_47772c:
    // 0x47772c: 0x320f809  jalr        $t9
label_477730:
    if (ctx->pc == 0x477730u) {
        ctx->pc = 0x477734u;
        goto label_477734;
    }
    ctx->pc = 0x47772Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x477734u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x477734u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x477734u; }
            if (ctx->pc != 0x477734u) { return; }
        }
        }
    }
    ctx->pc = 0x477734u;
label_477734:
    // 0x477734: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x477734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_477738:
    // 0x477738: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x477738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_47773c:
    // 0x47773c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x47773cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_477740:
    // 0x477740: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x477740u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_477744:
    // 0x477744: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x477744u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_477748:
    // 0x477748: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x477748u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47774c:
    // 0x47774c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x47774cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_477750:
    // 0x477750: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x477750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_477754:
    // 0x477754: 0x3e00008  jr          $ra
label_477758:
    if (ctx->pc == 0x477758u) {
        ctx->pc = 0x477758u;
            // 0x477758: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x47775Cu;
        goto label_47775c;
    }
    ctx->pc = 0x477754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x477758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x477754u;
            // 0x477758: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47775Cu;
label_47775c:
    // 0x47775c: 0x0  nop
    ctx->pc = 0x47775cu;
    // NOP
}
