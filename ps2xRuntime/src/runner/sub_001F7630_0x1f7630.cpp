#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F7630
// Address: 0x1f7630 - 0x1f7900
void sub_001F7630_0x1f7630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7630_0x1f7630");
#endif

    switch (ctx->pc) {
        case 0x1f7630u: goto label_1f7630;
        case 0x1f7634u: goto label_1f7634;
        case 0x1f7638u: goto label_1f7638;
        case 0x1f763cu: goto label_1f763c;
        case 0x1f7640u: goto label_1f7640;
        case 0x1f7644u: goto label_1f7644;
        case 0x1f7648u: goto label_1f7648;
        case 0x1f764cu: goto label_1f764c;
        case 0x1f7650u: goto label_1f7650;
        case 0x1f7654u: goto label_1f7654;
        case 0x1f7658u: goto label_1f7658;
        case 0x1f765cu: goto label_1f765c;
        case 0x1f7660u: goto label_1f7660;
        case 0x1f7664u: goto label_1f7664;
        case 0x1f7668u: goto label_1f7668;
        case 0x1f766cu: goto label_1f766c;
        case 0x1f7670u: goto label_1f7670;
        case 0x1f7674u: goto label_1f7674;
        case 0x1f7678u: goto label_1f7678;
        case 0x1f767cu: goto label_1f767c;
        case 0x1f7680u: goto label_1f7680;
        case 0x1f7684u: goto label_1f7684;
        case 0x1f7688u: goto label_1f7688;
        case 0x1f768cu: goto label_1f768c;
        case 0x1f7690u: goto label_1f7690;
        case 0x1f7694u: goto label_1f7694;
        case 0x1f7698u: goto label_1f7698;
        case 0x1f769cu: goto label_1f769c;
        case 0x1f76a0u: goto label_1f76a0;
        case 0x1f76a4u: goto label_1f76a4;
        case 0x1f76a8u: goto label_1f76a8;
        case 0x1f76acu: goto label_1f76ac;
        case 0x1f76b0u: goto label_1f76b0;
        case 0x1f76b4u: goto label_1f76b4;
        case 0x1f76b8u: goto label_1f76b8;
        case 0x1f76bcu: goto label_1f76bc;
        case 0x1f76c0u: goto label_1f76c0;
        case 0x1f76c4u: goto label_1f76c4;
        case 0x1f76c8u: goto label_1f76c8;
        case 0x1f76ccu: goto label_1f76cc;
        case 0x1f76d0u: goto label_1f76d0;
        case 0x1f76d4u: goto label_1f76d4;
        case 0x1f76d8u: goto label_1f76d8;
        case 0x1f76dcu: goto label_1f76dc;
        case 0x1f76e0u: goto label_1f76e0;
        case 0x1f76e4u: goto label_1f76e4;
        case 0x1f76e8u: goto label_1f76e8;
        case 0x1f76ecu: goto label_1f76ec;
        case 0x1f76f0u: goto label_1f76f0;
        case 0x1f76f4u: goto label_1f76f4;
        case 0x1f76f8u: goto label_1f76f8;
        case 0x1f76fcu: goto label_1f76fc;
        case 0x1f7700u: goto label_1f7700;
        case 0x1f7704u: goto label_1f7704;
        case 0x1f7708u: goto label_1f7708;
        case 0x1f770cu: goto label_1f770c;
        case 0x1f7710u: goto label_1f7710;
        case 0x1f7714u: goto label_1f7714;
        case 0x1f7718u: goto label_1f7718;
        case 0x1f771cu: goto label_1f771c;
        case 0x1f7720u: goto label_1f7720;
        case 0x1f7724u: goto label_1f7724;
        case 0x1f7728u: goto label_1f7728;
        case 0x1f772cu: goto label_1f772c;
        case 0x1f7730u: goto label_1f7730;
        case 0x1f7734u: goto label_1f7734;
        case 0x1f7738u: goto label_1f7738;
        case 0x1f773cu: goto label_1f773c;
        case 0x1f7740u: goto label_1f7740;
        case 0x1f7744u: goto label_1f7744;
        case 0x1f7748u: goto label_1f7748;
        case 0x1f774cu: goto label_1f774c;
        case 0x1f7750u: goto label_1f7750;
        case 0x1f7754u: goto label_1f7754;
        case 0x1f7758u: goto label_1f7758;
        case 0x1f775cu: goto label_1f775c;
        case 0x1f7760u: goto label_1f7760;
        case 0x1f7764u: goto label_1f7764;
        case 0x1f7768u: goto label_1f7768;
        case 0x1f776cu: goto label_1f776c;
        case 0x1f7770u: goto label_1f7770;
        case 0x1f7774u: goto label_1f7774;
        case 0x1f7778u: goto label_1f7778;
        case 0x1f777cu: goto label_1f777c;
        case 0x1f7780u: goto label_1f7780;
        case 0x1f7784u: goto label_1f7784;
        case 0x1f7788u: goto label_1f7788;
        case 0x1f778cu: goto label_1f778c;
        case 0x1f7790u: goto label_1f7790;
        case 0x1f7794u: goto label_1f7794;
        case 0x1f7798u: goto label_1f7798;
        case 0x1f779cu: goto label_1f779c;
        case 0x1f77a0u: goto label_1f77a0;
        case 0x1f77a4u: goto label_1f77a4;
        case 0x1f77a8u: goto label_1f77a8;
        case 0x1f77acu: goto label_1f77ac;
        case 0x1f77b0u: goto label_1f77b0;
        case 0x1f77b4u: goto label_1f77b4;
        case 0x1f77b8u: goto label_1f77b8;
        case 0x1f77bcu: goto label_1f77bc;
        case 0x1f77c0u: goto label_1f77c0;
        case 0x1f77c4u: goto label_1f77c4;
        case 0x1f77c8u: goto label_1f77c8;
        case 0x1f77ccu: goto label_1f77cc;
        case 0x1f77d0u: goto label_1f77d0;
        case 0x1f77d4u: goto label_1f77d4;
        case 0x1f77d8u: goto label_1f77d8;
        case 0x1f77dcu: goto label_1f77dc;
        case 0x1f77e0u: goto label_1f77e0;
        case 0x1f77e4u: goto label_1f77e4;
        case 0x1f77e8u: goto label_1f77e8;
        case 0x1f77ecu: goto label_1f77ec;
        case 0x1f77f0u: goto label_1f77f0;
        case 0x1f77f4u: goto label_1f77f4;
        case 0x1f77f8u: goto label_1f77f8;
        case 0x1f77fcu: goto label_1f77fc;
        case 0x1f7800u: goto label_1f7800;
        case 0x1f7804u: goto label_1f7804;
        case 0x1f7808u: goto label_1f7808;
        case 0x1f780cu: goto label_1f780c;
        case 0x1f7810u: goto label_1f7810;
        case 0x1f7814u: goto label_1f7814;
        case 0x1f7818u: goto label_1f7818;
        case 0x1f781cu: goto label_1f781c;
        case 0x1f7820u: goto label_1f7820;
        case 0x1f7824u: goto label_1f7824;
        case 0x1f7828u: goto label_1f7828;
        case 0x1f782cu: goto label_1f782c;
        case 0x1f7830u: goto label_1f7830;
        case 0x1f7834u: goto label_1f7834;
        case 0x1f7838u: goto label_1f7838;
        case 0x1f783cu: goto label_1f783c;
        case 0x1f7840u: goto label_1f7840;
        case 0x1f7844u: goto label_1f7844;
        case 0x1f7848u: goto label_1f7848;
        case 0x1f784cu: goto label_1f784c;
        case 0x1f7850u: goto label_1f7850;
        case 0x1f7854u: goto label_1f7854;
        case 0x1f7858u: goto label_1f7858;
        case 0x1f785cu: goto label_1f785c;
        case 0x1f7860u: goto label_1f7860;
        case 0x1f7864u: goto label_1f7864;
        case 0x1f7868u: goto label_1f7868;
        case 0x1f786cu: goto label_1f786c;
        case 0x1f7870u: goto label_1f7870;
        case 0x1f7874u: goto label_1f7874;
        case 0x1f7878u: goto label_1f7878;
        case 0x1f787cu: goto label_1f787c;
        case 0x1f7880u: goto label_1f7880;
        case 0x1f7884u: goto label_1f7884;
        case 0x1f7888u: goto label_1f7888;
        case 0x1f788cu: goto label_1f788c;
        case 0x1f7890u: goto label_1f7890;
        case 0x1f7894u: goto label_1f7894;
        case 0x1f7898u: goto label_1f7898;
        case 0x1f789cu: goto label_1f789c;
        case 0x1f78a0u: goto label_1f78a0;
        case 0x1f78a4u: goto label_1f78a4;
        case 0x1f78a8u: goto label_1f78a8;
        case 0x1f78acu: goto label_1f78ac;
        case 0x1f78b0u: goto label_1f78b0;
        case 0x1f78b4u: goto label_1f78b4;
        case 0x1f78b8u: goto label_1f78b8;
        case 0x1f78bcu: goto label_1f78bc;
        case 0x1f78c0u: goto label_1f78c0;
        case 0x1f78c4u: goto label_1f78c4;
        case 0x1f78c8u: goto label_1f78c8;
        case 0x1f78ccu: goto label_1f78cc;
        case 0x1f78d0u: goto label_1f78d0;
        case 0x1f78d4u: goto label_1f78d4;
        case 0x1f78d8u: goto label_1f78d8;
        case 0x1f78dcu: goto label_1f78dc;
        case 0x1f78e0u: goto label_1f78e0;
        case 0x1f78e4u: goto label_1f78e4;
        case 0x1f78e8u: goto label_1f78e8;
        case 0x1f78ecu: goto label_1f78ec;
        case 0x1f78f0u: goto label_1f78f0;
        case 0x1f78f4u: goto label_1f78f4;
        case 0x1f78f8u: goto label_1f78f8;
        case 0x1f78fcu: goto label_1f78fc;
        default: break;
    }

    ctx->pc = 0x1f7630u;

label_1f7630:
    // 0x1f7630: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1f7630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1f7634:
    // 0x1f7634: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f7634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f7638:
    // 0x1f7638: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1f7638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1f763c:
    // 0x1f763c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f763cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f7640:
    // 0x1f7640: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f7640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f7644:
    // 0x1f7644: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f7644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f7648:
    // 0x1f7648: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f7648u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f764c:
    // 0x1f764c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f764cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f7650:
    // 0x1f7650: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1f7650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1f7654:
    // 0x1f7654: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f7654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f7658:
    // 0x1f7658: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f7658u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f765c:
    // 0x1f765c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f765cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f7660:
    // 0x1f7660: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1f7660u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f7664:
    // 0x1f7664: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1f7664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1f7668:
    // 0x1f7668: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f7668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f766c:
    // 0x1f766c: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1f766cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1f7670:
    // 0x1f7670: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1f7670u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f7674:
    // 0x1f7674: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1f7678:
    if (ctx->pc == 0x1F7678u) {
        ctx->pc = 0x1F7678u;
            // 0x1f7678: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1F767Cu;
        goto label_1f767c;
    }
    ctx->pc = 0x1F7674u;
    {
        const bool branch_taken_0x1f7674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7674u;
            // 0x1f7678: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7674) {
            ctx->pc = 0x1F76A4u;
            goto label_1f76a4;
        }
    }
    ctx->pc = 0x1F767Cu;
label_1f767c:
    // 0x1f767c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1f767cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1f7680:
    // 0x1f7680: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1f7680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1f7684:
    // 0x1f7684: 0x2442af90  addiu       $v0, $v0, -0x5070
    ctx->pc = 0x1f7684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946704));
label_1f7688:
    // 0x1f7688: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f7688u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f768c:
    // 0x1f768c: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f768cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1f7690:
    // 0x1f7690: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1f7690u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1f7694:
    // 0x1f7694: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f7694u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1f7698:
    // 0x1f7698: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1f7698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1f769c:
    // 0x1f769c: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1f769cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1f76a0:
    // 0x1f76a0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1f76a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1f76a4:
    // 0x1f76a4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1f76a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1f76a8:
    // 0x1f76a8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1f76a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1f76ac:
    // 0x1f76ac: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1f76acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1f76b0:
    // 0x1f76b0: 0x8e950000  lw          $s5, 0x0($s4)
    ctx->pc = 0x1f76b0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1f76b4:
    // 0x1f76b4: 0x24500030  addiu       $s0, $v0, 0x30
    ctx->pc = 0x1f76b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_1f76b8:
    // 0x1f76b8: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x1f76b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f76bc:
    // 0x1f76bc: 0xc0a4608  jal         func_291820
label_1f76c0:
    if (ctx->pc == 0x1F76C0u) {
        ctx->pc = 0x1F76C0u;
            // 0x1f76c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F76C4u;
        goto label_1f76c4;
    }
    ctx->pc = 0x1F76BCu;
    SET_GPR_U32(ctx, 31, 0x1F76C4u);
    ctx->pc = 0x1F76C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F76BCu;
            // 0x1f76c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291820u;
    if (runtime->hasFunction(0x291820u)) {
        auto targetFn = runtime->lookupFunction(0x291820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F76C4u; }
        if (ctx->pc != 0x1F76C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291820_0x291820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F76C4u; }
        if (ctx->pc != 0x1F76C4u) { return; }
    }
    ctx->pc = 0x1F76C4u;
label_1f76c4:
    // 0x1f76c4: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1f76c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f76c8:
    // 0x1f76c8: 0x46000085  abs.s       $f2, $f0
    ctx->pc = 0x1f76c8u;
    ctx->f[2] = FPU_ABS_S(ctx->f[0]);
label_1f76cc:
    // 0x1f76cc: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1f76ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f76d0:
    // 0x1f76d0: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x1f76d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1f76d4:
    // 0x1f76d4: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x1f76d4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
label_1f76d8:
    // 0x1f76d8: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x1f76d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f76dc:
    // 0x1f76dc: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x1f76dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1f76e0:
    // 0x1f76e0: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x1f76e0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
label_1f76e4:
    // 0x1f76e4: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x1f76e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f76e8:
    // 0x1f76e8: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x1f76e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1f76ec:
    // 0x1f76ec: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1f76ecu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_1f76f0:
    // 0x1f76f0: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1f76f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1f76f4:
    // 0x1f76f4: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1f76f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f76f8:
    // 0x1f76f8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f76f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f76fc:
    // 0x1f76fc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1f7700:
    if (ctx->pc == 0x1F7700u) {
        ctx->pc = 0x1F7700u;
            // 0x1f7700: 0x26230020  addiu       $v1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x1F7704u;
        goto label_1f7704;
    }
    ctx->pc = 0x1F76FCu;
    {
        const bool branch_taken_0x1f76fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F7700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F76FCu;
            // 0x1f7700: 0x26230020  addiu       $v1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f76fc) {
            ctx->pc = 0x1F770Cu;
            goto label_1f770c;
        }
    }
    ctx->pc = 0x1F7704u;
label_1f7704:
    // 0x1f7704: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f7708:
    if (ctx->pc == 0x1F7708u) {
        ctx->pc = 0x1F7708u;
            // 0x1f7708: 0xc4610004  lwc1        $f1, 0x4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x1F770Cu;
        goto label_1f770c;
    }
    ctx->pc = 0x1F7704u;
    {
        const bool branch_taken_0x1f7704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7704u;
            // 0x1f7708: 0xc4610004  lwc1        $f1, 0x4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7704) {
            ctx->pc = 0x1F7714u;
            goto label_1f7714;
        }
    }
    ctx->pc = 0x1F770Cu;
label_1f770c:
    // 0x1f770c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1f770cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_1f7710:
    // 0x1f7710: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1f7710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f7714:
    // 0x1f7714: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x1f7714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7718:
    // 0x1f7718: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f7718u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f771c:
    // 0x1f771c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1f7720:
    if (ctx->pc == 0x1F7720u) {
        ctx->pc = 0x1F7720u;
            // 0x1f7720: 0xe7a20080  swc1        $f2, 0x80($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->pc = 0x1F7724u;
        goto label_1f7724;
    }
    ctx->pc = 0x1F771Cu;
    {
        const bool branch_taken_0x1f771c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F7720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F771Cu;
            // 0x1f7720: 0xe7a20080  swc1        $f2, 0x80($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f771c) {
            ctx->pc = 0x1F772Cu;
            goto label_1f772c;
        }
    }
    ctx->pc = 0x1F7724u;
label_1f7724:
    // 0x1f7724: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f7728:
    if (ctx->pc == 0x1F7728u) {
        ctx->pc = 0x1F7728u;
            // 0x1f7728: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->pc = 0x1F772Cu;
        goto label_1f772c;
    }
    ctx->pc = 0x1F7724u;
    {
        const bool branch_taken_0x1f7724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7724u;
            // 0x1f7728: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7724) {
            ctx->pc = 0x1F7734u;
            goto label_1f7734;
        }
    }
    ctx->pc = 0x1F772Cu;
label_1f772c:
    // 0x1f772c: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1f772cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_1f7730:
    // 0x1f7730: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1f7730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1f7734:
    // 0x1f7734: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1f7734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f7738:
    // 0x1f7738: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1f7738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f773c:
    // 0x1f773c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f773cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f7740:
    // 0x1f7740: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_1f7744:
    if (ctx->pc == 0x1F7744u) {
        ctx->pc = 0x1F7744u;
            // 0x1f7744: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x1F7748u;
        goto label_1f7748;
    }
    ctx->pc = 0x1F7740u;
    {
        const bool branch_taken_0x1f7740 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7740) {
            ctx->pc = 0x1F7744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7740u;
            // 0x1f7744: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F7748u;
            goto label_1f7748;
        }
    }
    ctx->pc = 0x1F7748u;
label_1f7748:
    // 0x1f7748: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1f7748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1f774c:
    // 0x1f774c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1f774cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f7750:
    // 0x1f7750: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x1f7750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7754:
    // 0x1f7754: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f7754u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f7758:
    // 0x1f7758: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_1f775c:
    if (ctx->pc == 0x1F775Cu) {
        ctx->pc = 0x1F775Cu;
            // 0x1f775c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x1F7760u;
        goto label_1f7760;
    }
    ctx->pc = 0x1F7758u;
    {
        const bool branch_taken_0x1f7758 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7758) {
            ctx->pc = 0x1F775Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7758u;
            // 0x1f775c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F7760u;
            goto label_1f7760;
        }
    }
    ctx->pc = 0x1F7760u;
label_1f7760:
    // 0x1f7760: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1f7760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1f7764:
    // 0x1f7764: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1f7764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1f7768:
    // 0x1f7768: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x1f7768u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
label_1f776c:
    // 0x1f776c: 0x8fa50094  lw          $a1, 0x94($sp)
    ctx->pc = 0x1f776cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_1f7770:
    // 0x1f7770: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1f7770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1f7774:
    // 0x1f7774: 0xc6a10010  lwc1        $f1, 0x10($s5)
    ctx->pc = 0x1f7774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f7778:
    // 0x1f7778: 0x883024  and         $a2, $a0, $t0
    ctx->pc = 0x1f7778u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
label_1f777c:
    // 0x1f777c: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x1f777cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_1f7780:
    // 0x1f7780: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f7780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_1f7784:
    // 0x1f7784: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1f7784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f7788:
    // 0x1f7788: 0x663026  xor         $a2, $v1, $a2
    ctx->pc = 0x1f7788u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
label_1f778c:
    // 0x1f778c: 0xa83824  and         $a3, $a1, $t0
    ctx->pc = 0x1f778cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
label_1f7790:
    // 0x1f7790: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x1f7790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
label_1f7794:
    // 0x1f7794: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1f7794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f7798:
    // 0x1f7798: 0x883024  and         $a2, $a0, $t0
    ctx->pc = 0x1f7798u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
label_1f779c:
    // 0x1f779c: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x1f779cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_1f77a0:
    // 0x1f77a0: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x1f77a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_1f77a4:
    // 0x1f77a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f77a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1f77a8:
    // 0x1f77a8: 0x682824  and         $a1, $v1, $t0
    ctx->pc = 0x1f77a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
label_1f77ac:
    // 0x1f77ac: 0x872026  xor         $a0, $a0, $a3
    ctx->pc = 0x1f77acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 7));
label_1f77b0:
    // 0x1f77b0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1f77b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1f77b4:
    // 0x1f77b4: 0xafa40084  sw          $a0, 0x84($sp)
    ctx->pc = 0x1f77b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 4));
label_1f77b8:
    // 0x1f77b8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1f77b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f77bc:
    // 0x1f77bc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1f77bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1f77c0:
    // 0x1f77c0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1f77c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1f77c4:
    // 0x1f77c4: 0x862026  xor         $a0, $a0, $a2
    ctx->pc = 0x1f77c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
label_1f77c8:
    // 0x1f77c8: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x1f77c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
label_1f77cc:
    // 0x1f77cc: 0x8fa4008c  lw          $a0, 0x8C($sp)
    ctx->pc = 0x1f77ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_1f77d0:
    // 0x1f77d0: 0xc46c0010  lwc1        $f12, 0x10($v1)
    ctx->pc = 0x1f77d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f77d4:
    // 0x1f77d4: 0xc46d0000  lwc1        $f13, 0x0($v1)
    ctx->pc = 0x1f77d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1f77d8:
    // 0x1f77d8: 0xc46e0020  lwc1        $f14, 0x20($v1)
    ctx->pc = 0x1f77d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1f77dc:
    // 0x1f77dc: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x1f77dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
label_1f77e0:
    // 0x1f77e0: 0xafa4008c  sw          $a0, 0x8C($sp)
    ctx->pc = 0x1f77e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 4));
label_1f77e4:
    // 0x1f77e4: 0xc4680014  lwc1        $f8, 0x14($v1)
    ctx->pc = 0x1f77e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1f77e8:
    // 0x1f77e8: 0xc7b00084  lwc1        $f16, 0x84($sp)
    ctx->pc = 0x1f77e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1f77ec:
    // 0x1f77ec: 0xc7b10080  lwc1        $f17, 0x80($sp)
    ctx->pc = 0x1f77ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_1f77f0:
    // 0x1f77f0: 0xc7af0088  lwc1        $f15, 0x88($sp)
    ctx->pc = 0x1f77f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1f77f4:
    // 0x1f77f4: 0x460c801a  mula.s      $f16, $f12
    ctx->pc = 0x1f77f4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[16], ctx->f[12]);
label_1f77f8:
    // 0x1f77f8: 0x460d881e  madda.s     $f17, $f13
    ctx->pc = 0x1f77f8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[17], ctx->f[13]));
label_1f77fc:
    // 0x1f77fc: 0x460e7b1c  madd.s      $f12, $f15, $f14
    ctx->pc = 0x1f77fcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[14]));
label_1f7800:
    // 0x1f7800: 0xc4690004  lwc1        $f9, 0x4($v1)
    ctx->pc = 0x1f7800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1f7804:
    // 0x1f7804: 0x4608801a  mula.s      $f16, $f8
    ctx->pc = 0x1f7804u;
    ctx->f[31] = FPU_MUL_S(ctx->f[16], ctx->f[8]);
label_1f7808:
    // 0x1f7808: 0xc46a0024  lwc1        $f10, 0x24($v1)
    ctx->pc = 0x1f7808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1f780c:
    // 0x1f780c: 0x4609881e  madda.s     $f17, $f9
    ctx->pc = 0x1f780cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[17], ctx->f[9]));
label_1f7810:
    // 0x1f7810: 0xc4640018  lwc1        $f4, 0x18($v1)
    ctx->pc = 0x1f7810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1f7814:
    // 0x1f7814: 0x460a7a1c  madd.s      $f8, $f15, $f10
    ctx->pc = 0x1f7814u;
    ctx->f[8] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[10]));
label_1f7818:
    // 0x1f7818: 0xc4650008  lwc1        $f5, 0x8($v1)
    ctx->pc = 0x1f7818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1f781c:
    // 0x1f781c: 0x4604801a  mula.s      $f16, $f4
    ctx->pc = 0x1f781cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[16], ctx->f[4]);
label_1f7820:
    // 0x1f7820: 0xc4670034  lwc1        $f7, 0x34($v1)
    ctx->pc = 0x1f7820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1f7824:
    // 0x1f7824: 0x4605881e  madda.s     $f17, $f5
    ctx->pc = 0x1f7824u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[17], ctx->f[5]));
label_1f7828:
    // 0x1f7828: 0xc46b0030  lwc1        $f11, 0x30($v1)
    ctx->pc = 0x1f7828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1f782c:
    // 0x1f782c: 0x46083940  add.s       $f5, $f7, $f8
    ctx->pc = 0x1f782cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
label_1f7830:
    // 0x1f7830: 0x460c5ac0  add.s       $f11, $f11, $f12
    ctx->pc = 0x1f7830u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[12]);
label_1f7834:
    // 0x1f7834: 0xc4660028  lwc1        $f6, 0x28($v1)
    ctx->pc = 0x1f7834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1f7838:
    // 0x1f7838: 0x46012841  sub.s       $f1, $f5, $f1
    ctx->pc = 0x1f7838u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
label_1f783c:
    // 0x1f783c: 0x4606791c  madd.s      $f4, $f15, $f6
    ctx->pc = 0x1f783cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[6]));
label_1f7840:
    // 0x1f7840: 0xc4630038  lwc1        $f3, 0x38($v1)
    ctx->pc = 0x1f7840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f7844:
    // 0x1f7844: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x1f7844u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_1f7848:
    // 0x1f7848: 0x46025881  sub.s       $f2, $f11, $f2
    ctx->pc = 0x1f7848u;
    ctx->f[2] = FPU_SUB_S(ctx->f[11], ctx->f[2]);
label_1f784c:
    // 0x1f784c: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x1f784cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_1f7850:
    // 0x1f7850: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1f7850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f7854:
    // 0x1f7854: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x1f7854u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_1f7858:
    // 0x1f7858: 0xe7ab0070  swc1        $f11, 0x70($sp)
    ctx->pc = 0x1f7858u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1f785c:
    // 0x1f785c: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x1f785cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_1f7860:
    // 0x1f7860: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x1f7860u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_1f7864:
    // 0x1f7864: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f7864u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f7868:
    // 0x1f7868: 0xe7a50074  swc1        $f5, 0x74($sp)
    ctx->pc = 0x1f7868u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1f786c:
    // 0x1f786c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1f7870:
    if (ctx->pc == 0x1F7870u) {
        ctx->pc = 0x1F7870u;
            // 0x1f7870: 0xe7a30078  swc1        $f3, 0x78($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->pc = 0x1F7874u;
        goto label_1f7874;
    }
    ctx->pc = 0x1F786Cu;
    {
        const bool branch_taken_0x1f786c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F7870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F786Cu;
            // 0x1f7870: 0xe7a30078  swc1        $f3, 0x78($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f786c) {
            ctx->pc = 0x1F788Cu;
            goto label_1f788c;
        }
    }
    ctx->pc = 0x1F7874u;
label_1f7874:
    // 0x1f7874: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1f7874u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f7878:
    // 0x1f7878: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f7878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f787c:
    // 0x1f787c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f787cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f7880:
    // 0x1f7880: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1f7880u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1f7884:
    // 0x1f7884: 0x320f809  jalr        $t9
label_1f7888:
    if (ctx->pc == 0x1F7888u) {
        ctx->pc = 0x1F7888u;
            // 0x1f7888: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F788Cu;
        goto label_1f788c;
    }
    ctx->pc = 0x1F7884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F788Cu);
        ctx->pc = 0x1F7888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7884u;
            // 0x1f7888: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F788Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F788Cu; }
            if (ctx->pc != 0x1F788Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1F788Cu;
label_1f788c:
    // 0x1f788c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f788cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f7890:
    // 0x1f7890: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1f7890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1f7894:
    // 0x1f7894: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1f7894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1f7898:
    // 0x1f7898: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f7898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f789c:
    // 0x1f789c: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1f789cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1f78a0:
    // 0x1f78a0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1f78a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f78a4:
    // 0x1f78a4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f78a8:
    if (ctx->pc == 0x1F78A8u) {
        ctx->pc = 0x1F78A8u;
            // 0x1f78a8: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1F78ACu;
        goto label_1f78ac;
    }
    ctx->pc = 0x1F78A4u;
    {
        const bool branch_taken_0x1f78a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F78A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F78A4u;
            // 0x1f78a8: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f78a4) {
            ctx->pc = 0x1F78D4u;
            goto label_1f78d4;
        }
    }
    ctx->pc = 0x1F78ACu;
label_1f78ac:
    // 0x1f78ac: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1f78acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1f78b0:
    // 0x1f78b0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1f78b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1f78b4:
    // 0x1f78b4: 0x2463afa0  addiu       $v1, $v1, -0x5060
    ctx->pc = 0x1f78b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946720));
label_1f78b8:
    // 0x1f78b8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f78b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1f78bc:
    // 0x1f78bc: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f78bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1f78c0:
    // 0x1f78c0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1f78c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1f78c4:
    // 0x1f78c4: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f78c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1f78c8:
    // 0x1f78c8: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1f78c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1f78cc:
    // 0x1f78cc: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1f78ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1f78d0:
    // 0x1f78d0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1f78d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1f78d4:
    // 0x1f78d4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1f78d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1f78d8:
    // 0x1f78d8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f78d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f78dc:
    // 0x1f78dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f78dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f78e0:
    // 0x1f78e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f78e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f78e4:
    // 0x1f78e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f78e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f78e8:
    // 0x1f78e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f78e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f78ec:
    // 0x1f78ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f78ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f78f0:
    // 0x1f78f0: 0x3e00008  jr          $ra
label_1f78f4:
    if (ctx->pc == 0x1F78F4u) {
        ctx->pc = 0x1F78F4u;
            // 0x1f78f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1F78F8u;
        goto label_1f78f8;
    }
    ctx->pc = 0x1F78F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F78F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F78F0u;
            // 0x1f78f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F78F8u;
label_1f78f8:
    // 0x1f78f8: 0x0  nop
    ctx->pc = 0x1f78f8u;
    // NOP
label_1f78fc:
    // 0x1f78fc: 0x0  nop
    ctx->pc = 0x1f78fcu;
    // NOP
}
