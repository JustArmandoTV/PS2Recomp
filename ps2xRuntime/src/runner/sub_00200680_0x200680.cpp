#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00200680
// Address: 0x200680 - 0x200940
void sub_00200680_0x200680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200680_0x200680");
#endif

    switch (ctx->pc) {
        case 0x200680u: goto label_200680;
        case 0x200684u: goto label_200684;
        case 0x200688u: goto label_200688;
        case 0x20068cu: goto label_20068c;
        case 0x200690u: goto label_200690;
        case 0x200694u: goto label_200694;
        case 0x200698u: goto label_200698;
        case 0x20069cu: goto label_20069c;
        case 0x2006a0u: goto label_2006a0;
        case 0x2006a4u: goto label_2006a4;
        case 0x2006a8u: goto label_2006a8;
        case 0x2006acu: goto label_2006ac;
        case 0x2006b0u: goto label_2006b0;
        case 0x2006b4u: goto label_2006b4;
        case 0x2006b8u: goto label_2006b8;
        case 0x2006bcu: goto label_2006bc;
        case 0x2006c0u: goto label_2006c0;
        case 0x2006c4u: goto label_2006c4;
        case 0x2006c8u: goto label_2006c8;
        case 0x2006ccu: goto label_2006cc;
        case 0x2006d0u: goto label_2006d0;
        case 0x2006d4u: goto label_2006d4;
        case 0x2006d8u: goto label_2006d8;
        case 0x2006dcu: goto label_2006dc;
        case 0x2006e0u: goto label_2006e0;
        case 0x2006e4u: goto label_2006e4;
        case 0x2006e8u: goto label_2006e8;
        case 0x2006ecu: goto label_2006ec;
        case 0x2006f0u: goto label_2006f0;
        case 0x2006f4u: goto label_2006f4;
        case 0x2006f8u: goto label_2006f8;
        case 0x2006fcu: goto label_2006fc;
        case 0x200700u: goto label_200700;
        case 0x200704u: goto label_200704;
        case 0x200708u: goto label_200708;
        case 0x20070cu: goto label_20070c;
        case 0x200710u: goto label_200710;
        case 0x200714u: goto label_200714;
        case 0x200718u: goto label_200718;
        case 0x20071cu: goto label_20071c;
        case 0x200720u: goto label_200720;
        case 0x200724u: goto label_200724;
        case 0x200728u: goto label_200728;
        case 0x20072cu: goto label_20072c;
        case 0x200730u: goto label_200730;
        case 0x200734u: goto label_200734;
        case 0x200738u: goto label_200738;
        case 0x20073cu: goto label_20073c;
        case 0x200740u: goto label_200740;
        case 0x200744u: goto label_200744;
        case 0x200748u: goto label_200748;
        case 0x20074cu: goto label_20074c;
        case 0x200750u: goto label_200750;
        case 0x200754u: goto label_200754;
        case 0x200758u: goto label_200758;
        case 0x20075cu: goto label_20075c;
        case 0x200760u: goto label_200760;
        case 0x200764u: goto label_200764;
        case 0x200768u: goto label_200768;
        case 0x20076cu: goto label_20076c;
        case 0x200770u: goto label_200770;
        case 0x200774u: goto label_200774;
        case 0x200778u: goto label_200778;
        case 0x20077cu: goto label_20077c;
        case 0x200780u: goto label_200780;
        case 0x200784u: goto label_200784;
        case 0x200788u: goto label_200788;
        case 0x20078cu: goto label_20078c;
        case 0x200790u: goto label_200790;
        case 0x200794u: goto label_200794;
        case 0x200798u: goto label_200798;
        case 0x20079cu: goto label_20079c;
        case 0x2007a0u: goto label_2007a0;
        case 0x2007a4u: goto label_2007a4;
        case 0x2007a8u: goto label_2007a8;
        case 0x2007acu: goto label_2007ac;
        case 0x2007b0u: goto label_2007b0;
        case 0x2007b4u: goto label_2007b4;
        case 0x2007b8u: goto label_2007b8;
        case 0x2007bcu: goto label_2007bc;
        case 0x2007c0u: goto label_2007c0;
        case 0x2007c4u: goto label_2007c4;
        case 0x2007c8u: goto label_2007c8;
        case 0x2007ccu: goto label_2007cc;
        case 0x2007d0u: goto label_2007d0;
        case 0x2007d4u: goto label_2007d4;
        case 0x2007d8u: goto label_2007d8;
        case 0x2007dcu: goto label_2007dc;
        case 0x2007e0u: goto label_2007e0;
        case 0x2007e4u: goto label_2007e4;
        case 0x2007e8u: goto label_2007e8;
        case 0x2007ecu: goto label_2007ec;
        case 0x2007f0u: goto label_2007f0;
        case 0x2007f4u: goto label_2007f4;
        case 0x2007f8u: goto label_2007f8;
        case 0x2007fcu: goto label_2007fc;
        case 0x200800u: goto label_200800;
        case 0x200804u: goto label_200804;
        case 0x200808u: goto label_200808;
        case 0x20080cu: goto label_20080c;
        case 0x200810u: goto label_200810;
        case 0x200814u: goto label_200814;
        case 0x200818u: goto label_200818;
        case 0x20081cu: goto label_20081c;
        case 0x200820u: goto label_200820;
        case 0x200824u: goto label_200824;
        case 0x200828u: goto label_200828;
        case 0x20082cu: goto label_20082c;
        case 0x200830u: goto label_200830;
        case 0x200834u: goto label_200834;
        case 0x200838u: goto label_200838;
        case 0x20083cu: goto label_20083c;
        case 0x200840u: goto label_200840;
        case 0x200844u: goto label_200844;
        case 0x200848u: goto label_200848;
        case 0x20084cu: goto label_20084c;
        case 0x200850u: goto label_200850;
        case 0x200854u: goto label_200854;
        case 0x200858u: goto label_200858;
        case 0x20085cu: goto label_20085c;
        case 0x200860u: goto label_200860;
        case 0x200864u: goto label_200864;
        case 0x200868u: goto label_200868;
        case 0x20086cu: goto label_20086c;
        case 0x200870u: goto label_200870;
        case 0x200874u: goto label_200874;
        case 0x200878u: goto label_200878;
        case 0x20087cu: goto label_20087c;
        case 0x200880u: goto label_200880;
        case 0x200884u: goto label_200884;
        case 0x200888u: goto label_200888;
        case 0x20088cu: goto label_20088c;
        case 0x200890u: goto label_200890;
        case 0x200894u: goto label_200894;
        case 0x200898u: goto label_200898;
        case 0x20089cu: goto label_20089c;
        case 0x2008a0u: goto label_2008a0;
        case 0x2008a4u: goto label_2008a4;
        case 0x2008a8u: goto label_2008a8;
        case 0x2008acu: goto label_2008ac;
        case 0x2008b0u: goto label_2008b0;
        case 0x2008b4u: goto label_2008b4;
        case 0x2008b8u: goto label_2008b8;
        case 0x2008bcu: goto label_2008bc;
        case 0x2008c0u: goto label_2008c0;
        case 0x2008c4u: goto label_2008c4;
        case 0x2008c8u: goto label_2008c8;
        case 0x2008ccu: goto label_2008cc;
        case 0x2008d0u: goto label_2008d0;
        case 0x2008d4u: goto label_2008d4;
        case 0x2008d8u: goto label_2008d8;
        case 0x2008dcu: goto label_2008dc;
        case 0x2008e0u: goto label_2008e0;
        case 0x2008e4u: goto label_2008e4;
        case 0x2008e8u: goto label_2008e8;
        case 0x2008ecu: goto label_2008ec;
        case 0x2008f0u: goto label_2008f0;
        case 0x2008f4u: goto label_2008f4;
        case 0x2008f8u: goto label_2008f8;
        case 0x2008fcu: goto label_2008fc;
        case 0x200900u: goto label_200900;
        case 0x200904u: goto label_200904;
        case 0x200908u: goto label_200908;
        case 0x20090cu: goto label_20090c;
        case 0x200910u: goto label_200910;
        case 0x200914u: goto label_200914;
        case 0x200918u: goto label_200918;
        case 0x20091cu: goto label_20091c;
        case 0x200920u: goto label_200920;
        case 0x200924u: goto label_200924;
        case 0x200928u: goto label_200928;
        case 0x20092cu: goto label_20092c;
        case 0x200930u: goto label_200930;
        case 0x200934u: goto label_200934;
        case 0x200938u: goto label_200938;
        case 0x20093cu: goto label_20093c;
        default: break;
    }

    ctx->pc = 0x200680u;

label_200680:
    // 0x200680: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x200680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_200684:
    // 0x200684: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x200684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_200688:
    // 0x200688: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x200688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_20068c:
    // 0x20068c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20068cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_200690:
    // 0x200690: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x200690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_200694:
    // 0x200694: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x200694u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_200698:
    // 0x200698: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x200698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20069c:
    // 0x20069c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20069cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2006a0:
    // 0x2006a0: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x2006a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2006a4:
    // 0x2006a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2006a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2006a8:
    // 0x2006a8: 0x61940  sll         $v1, $a2, 5
    ctx->pc = 0x2006a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_2006ac:
    // 0x2006ac: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x2006acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2006b0:
    // 0x2006b0: 0x96630004  lhu         $v1, 0x4($s3)
    ctx->pc = 0x2006b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_2006b4:
    // 0x2006b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2006b8:
    if (ctx->pc == 0x2006B8u) {
        ctx->pc = 0x2006BCu;
        goto label_2006bc;
    }
    ctx->pc = 0x2006B4u;
    {
        const bool branch_taken_0x2006b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2006b4) {
            ctx->pc = 0x2006C8u;
            goto label_2006c8;
        }
    }
    ctx->pc = 0x2006BCu;
label_2006bc:
    // 0x2006bc: 0x86630006  lh          $v1, 0x6($s3)
    ctx->pc = 0x2006bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
label_2006c0:
    // 0x2006c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2006c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2006c4:
    // 0x2006c4: 0xa6630006  sh          $v1, 0x6($s3)
    ctx->pc = 0x2006c4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 3));
label_2006c8:
    // 0x2006c8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2006c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2006cc:
    // 0x2006cc: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x2006ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_2006d0:
    // 0x2006d0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_2006d4:
    if (ctx->pc == 0x2006D4u) {
        ctx->pc = 0x2006D8u;
        goto label_2006d8;
    }
    ctx->pc = 0x2006D0u;
    {
        const bool branch_taken_0x2006d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2006d0) {
            ctx->pc = 0x200710u;
            goto label_200710;
        }
    }
    ctx->pc = 0x2006D8u;
label_2006d8:
    // 0x2006d8: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x2006d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_2006dc:
    // 0x2006dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2006dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2006e0:
    // 0x2006e0: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x2006e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_2006e4:
    // 0x2006e4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2006e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_2006e8:
    // 0x2006e8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2006e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_2006ec:
    // 0x2006ec: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_2006f0:
    if (ctx->pc == 0x2006F0u) {
        ctx->pc = 0x2006F4u;
        goto label_2006f4;
    }
    ctx->pc = 0x2006ECu;
    {
        const bool branch_taken_0x2006ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2006ec) {
            ctx->pc = 0x200710u;
            goto label_200710;
        }
    }
    ctx->pc = 0x2006F4u;
label_2006f4:
    // 0x2006f4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2006f8:
    if (ctx->pc == 0x2006F8u) {
        ctx->pc = 0x2006FCu;
        goto label_2006fc;
    }
    ctx->pc = 0x2006F4u;
    {
        const bool branch_taken_0x2006f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2006f4) {
            ctx->pc = 0x200710u;
            goto label_200710;
        }
    }
    ctx->pc = 0x2006FCu;
label_2006fc:
    // 0x2006fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2006fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_200700:
    // 0x200700: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x200700u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_200704:
    // 0x200704: 0x320f809  jalr        $t9
label_200708:
    if (ctx->pc == 0x200708u) {
        ctx->pc = 0x200708u;
            // 0x200708: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20070Cu;
        goto label_20070c;
    }
    ctx->pc = 0x200704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20070Cu);
        ctx->pc = 0x200708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200704u;
            // 0x200708: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20070Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20070Cu; }
            if (ctx->pc != 0x20070Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20070Cu;
label_20070c:
    // 0x20070c: 0x0  nop
    ctx->pc = 0x20070cu;
    // NOP
label_200710:
    // 0x200710: 0xae33000c  sw          $s3, 0xC($s1)
    ctx->pc = 0x200710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 19));
label_200714:
    // 0x200714: 0x96630004  lhu         $v1, 0x4($s3)
    ctx->pc = 0x200714u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_200718:
    // 0x200718: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_20071c:
    if (ctx->pc == 0x20071Cu) {
        ctx->pc = 0x200720u;
        goto label_200720;
    }
    ctx->pc = 0x200718u;
    {
        const bool branch_taken_0x200718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x200718) {
            ctx->pc = 0x200730u;
            goto label_200730;
        }
    }
    ctx->pc = 0x200720u;
label_200720:
    // 0x200720: 0x86630006  lh          $v1, 0x6($s3)
    ctx->pc = 0x200720u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
label_200724:
    // 0x200724: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x200724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_200728:
    // 0x200728: 0xa6630006  sh          $v1, 0x6($s3)
    ctx->pc = 0x200728u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 3));
label_20072c:
    // 0x20072c: 0x0  nop
    ctx->pc = 0x20072cu;
    // NOP
label_200730:
    // 0x200730: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x200730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_200734:
    // 0x200734: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x200734u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_200738:
    // 0x200738: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_20073c:
    if (ctx->pc == 0x20073Cu) {
        ctx->pc = 0x200740u;
        goto label_200740;
    }
    ctx->pc = 0x200738u;
    {
        const bool branch_taken_0x200738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x200738) {
            ctx->pc = 0x200778u;
            goto label_200778;
        }
    }
    ctx->pc = 0x200740u;
label_200740:
    // 0x200740: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x200740u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_200744:
    // 0x200744: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x200744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_200748:
    // 0x200748: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x200748u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_20074c:
    // 0x20074c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x20074cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_200750:
    // 0x200750: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x200750u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_200754:
    // 0x200754: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_200758:
    if (ctx->pc == 0x200758u) {
        ctx->pc = 0x20075Cu;
        goto label_20075c;
    }
    ctx->pc = 0x200754u;
    {
        const bool branch_taken_0x200754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x200754) {
            ctx->pc = 0x200778u;
            goto label_200778;
        }
    }
    ctx->pc = 0x20075Cu;
label_20075c:
    // 0x20075c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_200760:
    if (ctx->pc == 0x200760u) {
        ctx->pc = 0x200764u;
        goto label_200764;
    }
    ctx->pc = 0x20075Cu;
    {
        const bool branch_taken_0x20075c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20075c) {
            ctx->pc = 0x200778u;
            goto label_200778;
        }
    }
    ctx->pc = 0x200764u;
label_200764:
    // 0x200764: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x200764u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_200768:
    // 0x200768: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x200768u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_20076c:
    // 0x20076c: 0x320f809  jalr        $t9
label_200770:
    if (ctx->pc == 0x200770u) {
        ctx->pc = 0x200770u;
            // 0x200770: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x200774u;
        goto label_200774;
    }
    ctx->pc = 0x20076Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x200774u);
        ctx->pc = 0x200770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20076Cu;
            // 0x200770: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x200774u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x200774u; }
            if (ctx->pc != 0x200774u) { return; }
        }
        }
    }
    ctx->pc = 0x200774u;
label_200774:
    // 0x200774: 0x0  nop
    ctx->pc = 0x200774u;
    // NOP
label_200778:
    // 0x200778: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x200778u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_20077c:
    // 0x20077c: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x20077cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
label_200780:
    // 0x200780: 0x2a430008  slti        $v1, $s2, 0x8
    ctx->pc = 0x200780u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
label_200784:
    // 0x200784: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x200784u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_200788:
    // 0x200788: 0x1460ffc9  bnez        $v1, . + 4 + (-0x37 << 2)
label_20078c:
    if (ctx->pc == 0x20078Cu) {
        ctx->pc = 0x20078Cu;
            // 0x20078c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x200790u;
        goto label_200790;
    }
    ctx->pc = 0x200788u;
    {
        const bool branch_taken_0x200788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20078Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200788u;
            // 0x20078c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200788) {
            ctx->pc = 0x2006B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2006b0;
        }
    }
    ctx->pc = 0x200790u;
label_200790:
    // 0x200790: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x200790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_200794:
    // 0x200794: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x200794u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_200798:
    // 0x200798: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x200798u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20079c:
    // 0x20079c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20079cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2007a0:
    // 0x2007a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2007a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2007a4:
    // 0x2007a4: 0x3e00008  jr          $ra
label_2007a8:
    if (ctx->pc == 0x2007A8u) {
        ctx->pc = 0x2007A8u;
            // 0x2007a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2007ACu;
        goto label_2007ac;
    }
    ctx->pc = 0x2007A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2007A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2007A4u;
            // 0x2007a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2007ACu;
label_2007ac:
    // 0x2007ac: 0x0  nop
    ctx->pc = 0x2007acu;
    // NOP
label_2007b0:
    // 0x2007b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2007b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2007b4:
    // 0x2007b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2007b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2007b8:
    // 0x2007b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2007b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2007bc:
    // 0x2007bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2007bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2007c0:
    // 0x2007c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2007c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2007c4:
    // 0x2007c4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2007c8:
    if (ctx->pc == 0x2007C8u) {
        ctx->pc = 0x2007C8u;
            // 0x2007c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2007CCu;
        goto label_2007cc;
    }
    ctx->pc = 0x2007C4u;
    {
        const bool branch_taken_0x2007c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2007C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2007C4u;
            // 0x2007c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2007c4) {
            ctx->pc = 0x200808u;
            goto label_200808;
        }
    }
    ctx->pc = 0x2007CCu;
label_2007cc:
    // 0x2007cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2007ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2007d0:
    // 0x2007d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2007d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2007d4:
    // 0x2007d4: 0x2442e030  addiu       $v0, $v0, -0x1FD0
    ctx->pc = 0x2007d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959152));
label_2007d8:
    // 0x2007d8: 0xc0a7f78  jal         func_29FDE0
label_2007dc:
    if (ctx->pc == 0x2007DCu) {
        ctx->pc = 0x2007DCu;
            // 0x2007dc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2007E0u;
        goto label_2007e0;
    }
    ctx->pc = 0x2007D8u;
    SET_GPR_U32(ctx, 31, 0x2007E0u);
    ctx->pc = 0x2007DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2007D8u;
            // 0x2007dc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FDE0u;
    if (runtime->hasFunction(0x29FDE0u)) {
        auto targetFn = runtime->lookupFunction(0x29FDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2007E0u; }
        if (ctx->pc != 0x2007E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FDE0_0x29fde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2007E0u; }
        if (ctx->pc != 0x2007E0u) { return; }
    }
    ctx->pc = 0x2007E0u;
label_2007e0:
    // 0x2007e0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2007e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2007e4:
    // 0x2007e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2007e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2007e8:
    // 0x2007e8: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_2007ec:
    if (ctx->pc == 0x2007ECu) {
        ctx->pc = 0x2007ECu;
            // 0x2007ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2007F0u;
        goto label_2007f0;
    }
    ctx->pc = 0x2007E8u;
    {
        const bool branch_taken_0x2007e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2007e8) {
            ctx->pc = 0x2007ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2007E8u;
            // 0x2007ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20080Cu;
            goto label_20080c;
        }
    }
    ctx->pc = 0x2007F0u;
label_2007f0:
    // 0x2007f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2007f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2007f4:
    // 0x2007f4: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x2007f4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_2007f8:
    // 0x2007f8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2007f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2007fc:
    // 0x2007fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2007fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_200800:
    // 0x200800: 0xc0a7ab4  jal         func_29EAD0
label_200804:
    if (ctx->pc == 0x200804u) {
        ctx->pc = 0x200804u;
            // 0x200804: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x200808u;
        goto label_200808;
    }
    ctx->pc = 0x200800u;
    SET_GPR_U32(ctx, 31, 0x200808u);
    ctx->pc = 0x200804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200800u;
            // 0x200804: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200808u; }
        if (ctx->pc != 0x200808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200808u; }
        if (ctx->pc != 0x200808u) { return; }
    }
    ctx->pc = 0x200808u;
label_200808:
    // 0x200808: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x200808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20080c:
    // 0x20080c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20080cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_200810:
    // 0x200810: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x200810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_200814:
    // 0x200814: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x200814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_200818:
    // 0x200818: 0x3e00008  jr          $ra
label_20081c:
    if (ctx->pc == 0x20081Cu) {
        ctx->pc = 0x20081Cu;
            // 0x20081c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x200820u;
        goto label_200820;
    }
    ctx->pc = 0x200818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20081Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200818u;
            // 0x20081c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200820u;
label_200820:
    // 0x200820: 0x3e00008  jr          $ra
label_200824:
    if (ctx->pc == 0x200824u) {
        ctx->pc = 0x200828u;
        goto label_200828;
    }
    ctx->pc = 0x200820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200828u;
label_200828:
    // 0x200828: 0x0  nop
    ctx->pc = 0x200828u;
    // NOP
label_20082c:
    // 0x20082c: 0x0  nop
    ctx->pc = 0x20082cu;
    // NOP
label_200830:
    // 0x200830: 0x3e00008  jr          $ra
label_200834:
    if (ctx->pc == 0x200834u) {
        ctx->pc = 0x200838u;
        goto label_200838;
    }
    ctx->pc = 0x200830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200838u;
label_200838:
    // 0x200838: 0x0  nop
    ctx->pc = 0x200838u;
    // NOP
label_20083c:
    // 0x20083c: 0x0  nop
    ctx->pc = 0x20083cu;
    // NOP
label_200840:
    // 0x200840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x200840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_200844:
    // 0x200844: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x200844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_200848:
    // 0x200848: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x200848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_20084c:
    // 0x20084c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20084cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_200850:
    // 0x200850: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x200850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_200854:
    // 0x200854: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x200854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_200858:
    // 0x200858: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x200858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20085c:
    // 0x20085c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x20085cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_200860:
    // 0x200860: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x200860u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_200864:
    // 0x200864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200868:
    // 0x200868: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x200868u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_20086c:
    // 0x20086c: 0x320f809  jalr        $t9
label_200870:
    if (ctx->pc == 0x200870u) {
        ctx->pc = 0x200870u;
            // 0x200870: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x200874u;
        goto label_200874;
    }
    ctx->pc = 0x20086Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x200874u);
        ctx->pc = 0x200870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20086Cu;
            // 0x200870: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x200874u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x200874u; }
            if (ctx->pc != 0x200874u) { return; }
        }
        }
    }
    ctx->pc = 0x200874u;
label_200874:
    // 0x200874: 0x8e271c40  lw          $a3, 0x1C40($s1)
    ctx->pc = 0x200874u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7232)));
label_200878:
    // 0x200878: 0x50e00029  beql        $a3, $zero, . + 4 + (0x29 << 2)
label_20087c:
    if (ctx->pc == 0x20087Cu) {
        ctx->pc = 0x20087Cu;
            // 0x20087c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x200880u;
        goto label_200880;
    }
    ctx->pc = 0x200878u;
    {
        const bool branch_taken_0x200878 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x200878) {
            ctx->pc = 0x20087Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x200878u;
            // 0x20087c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x200920u;
            goto label_200920;
        }
    }
    ctx->pc = 0x200880u;
label_200880:
    // 0x200880: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x200880u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_200884:
    // 0x200884: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x200884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_200888:
    // 0x200888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20088c:
    // 0x20088c: 0x24a5b448  addiu       $a1, $a1, -0x4BB8
    ctx->pc = 0x20088cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947912));
label_200890:
    // 0x200890: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x200890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_200894:
    // 0x200894: 0x24080c00  addiu       $t0, $zero, 0xC00
    ctx->pc = 0x200894u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
label_200898:
    // 0x200898: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x200898u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_20089c:
    // 0x20089c: 0x320f809  jalr        $t9
label_2008a0:
    if (ctx->pc == 0x2008A0u) {
        ctx->pc = 0x2008A0u;
            // 0x2008a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2008A4u;
        goto label_2008a4;
    }
    ctx->pc = 0x20089Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2008A4u);
        ctx->pc = 0x2008A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20089Cu;
            // 0x2008a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2008A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2008A4u; }
            if (ctx->pc != 0x2008A4u) { return; }
        }
        }
    }
    ctx->pc = 0x2008A4u;
label_2008a4:
    // 0x2008a4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2008a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2008a8:
    // 0x2008a8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2008a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_2008ac:
    // 0x2008ac: 0x8e271c44  lw          $a3, 0x1C44($s1)
    ctx->pc = 0x2008acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7236)));
label_2008b0:
    // 0x2008b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2008b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2008b4:
    // 0x2008b4: 0x24a5b448  addiu       $a1, $a1, -0x4BB8
    ctx->pc = 0x2008b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947912));
label_2008b8:
    // 0x2008b8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2008b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2008bc:
    // 0x2008bc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2008bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2008c0:
    // 0x2008c0: 0x24080c00  addiu       $t0, $zero, 0xC00
    ctx->pc = 0x2008c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
label_2008c4:
    // 0x2008c4: 0x320f809  jalr        $t9
label_2008c8:
    if (ctx->pc == 0x2008C8u) {
        ctx->pc = 0x2008C8u;
            // 0x2008c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2008CCu;
        goto label_2008cc;
    }
    ctx->pc = 0x2008C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2008CCu);
        ctx->pc = 0x2008C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2008C4u;
            // 0x2008c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2008CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2008CCu; }
            if (ctx->pc != 0x2008CCu) { return; }
        }
        }
    }
    ctx->pc = 0x2008CCu;
label_2008cc:
    // 0x2008cc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2008ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2008d0:
    // 0x2008d0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2008d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_2008d4:
    // 0x2008d4: 0x8e271c48  lw          $a3, 0x1C48($s1)
    ctx->pc = 0x2008d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7240)));
label_2008d8:
    // 0x2008d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2008d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2008dc:
    // 0x2008dc: 0x24a5b448  addiu       $a1, $a1, -0x4BB8
    ctx->pc = 0x2008dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947912));
label_2008e0:
    // 0x2008e0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2008e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2008e4:
    // 0x2008e4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2008e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2008e8:
    // 0x2008e8: 0x24080c00  addiu       $t0, $zero, 0xC00
    ctx->pc = 0x2008e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
label_2008ec:
    // 0x2008ec: 0x320f809  jalr        $t9
label_2008f0:
    if (ctx->pc == 0x2008F0u) {
        ctx->pc = 0x2008F0u;
            // 0x2008f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2008F4u;
        goto label_2008f4;
    }
    ctx->pc = 0x2008ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2008F4u);
        ctx->pc = 0x2008F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2008ECu;
            // 0x2008f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2008F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2008F4u; }
            if (ctx->pc != 0x2008F4u) { return; }
        }
        }
    }
    ctx->pc = 0x2008F4u;
label_2008f4:
    // 0x2008f4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2008f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2008f8:
    // 0x2008f8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2008f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_2008fc:
    // 0x2008fc: 0x8e271c4c  lw          $a3, 0x1C4C($s1)
    ctx->pc = 0x2008fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7244)));
label_200900:
    // 0x200900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200904:
    // 0x200904: 0x24a5b448  addiu       $a1, $a1, -0x4BB8
    ctx->pc = 0x200904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947912));
label_200908:
    // 0x200908: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x200908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20090c:
    // 0x20090c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x20090cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_200910:
    // 0x200910: 0x24080c00  addiu       $t0, $zero, 0xC00
    ctx->pc = 0x200910u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
label_200914:
    // 0x200914: 0x320f809  jalr        $t9
label_200918:
    if (ctx->pc == 0x200918u) {
        ctx->pc = 0x200918u;
            // 0x200918: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20091Cu;
        goto label_20091c;
    }
    ctx->pc = 0x200914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20091Cu);
        ctx->pc = 0x200918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200914u;
            // 0x200918: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20091Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20091Cu; }
            if (ctx->pc != 0x20091Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20091Cu;
label_20091c:
    // 0x20091c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x20091cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_200920:
    // 0x200920: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x200920u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_200924:
    // 0x200924: 0x320f809  jalr        $t9
label_200928:
    if (ctx->pc == 0x200928u) {
        ctx->pc = 0x200928u;
            // 0x200928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20092Cu;
        goto label_20092c;
    }
    ctx->pc = 0x200924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20092Cu);
        ctx->pc = 0x200928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200924u;
            // 0x200928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20092Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20092Cu; }
            if (ctx->pc != 0x20092Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20092Cu;
label_20092c:
    // 0x20092c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20092cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_200930:
    // 0x200930: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x200930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_200934:
    // 0x200934: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x200934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_200938:
    // 0x200938: 0x3e00008  jr          $ra
label_20093c:
    if (ctx->pc == 0x20093Cu) {
        ctx->pc = 0x20093Cu;
            // 0x20093c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x200940u;
        goto label_fallthrough_0x200938;
    }
    ctx->pc = 0x200938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20093Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200938u;
            // 0x20093c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x200938:
    ctx->pc = 0x200940u;
}
