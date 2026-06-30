#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E8630
// Address: 0x1e8630 - 0x1e8900
void sub_001E8630_0x1e8630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8630_0x1e8630");
#endif

    switch (ctx->pc) {
        case 0x1e8630u: goto label_1e8630;
        case 0x1e8634u: goto label_1e8634;
        case 0x1e8638u: goto label_1e8638;
        case 0x1e863cu: goto label_1e863c;
        case 0x1e8640u: goto label_1e8640;
        case 0x1e8644u: goto label_1e8644;
        case 0x1e8648u: goto label_1e8648;
        case 0x1e864cu: goto label_1e864c;
        case 0x1e8650u: goto label_1e8650;
        case 0x1e8654u: goto label_1e8654;
        case 0x1e8658u: goto label_1e8658;
        case 0x1e865cu: goto label_1e865c;
        case 0x1e8660u: goto label_1e8660;
        case 0x1e8664u: goto label_1e8664;
        case 0x1e8668u: goto label_1e8668;
        case 0x1e866cu: goto label_1e866c;
        case 0x1e8670u: goto label_1e8670;
        case 0x1e8674u: goto label_1e8674;
        case 0x1e8678u: goto label_1e8678;
        case 0x1e867cu: goto label_1e867c;
        case 0x1e8680u: goto label_1e8680;
        case 0x1e8684u: goto label_1e8684;
        case 0x1e8688u: goto label_1e8688;
        case 0x1e868cu: goto label_1e868c;
        case 0x1e8690u: goto label_1e8690;
        case 0x1e8694u: goto label_1e8694;
        case 0x1e8698u: goto label_1e8698;
        case 0x1e869cu: goto label_1e869c;
        case 0x1e86a0u: goto label_1e86a0;
        case 0x1e86a4u: goto label_1e86a4;
        case 0x1e86a8u: goto label_1e86a8;
        case 0x1e86acu: goto label_1e86ac;
        case 0x1e86b0u: goto label_1e86b0;
        case 0x1e86b4u: goto label_1e86b4;
        case 0x1e86b8u: goto label_1e86b8;
        case 0x1e86bcu: goto label_1e86bc;
        case 0x1e86c0u: goto label_1e86c0;
        case 0x1e86c4u: goto label_1e86c4;
        case 0x1e86c8u: goto label_1e86c8;
        case 0x1e86ccu: goto label_1e86cc;
        case 0x1e86d0u: goto label_1e86d0;
        case 0x1e86d4u: goto label_1e86d4;
        case 0x1e86d8u: goto label_1e86d8;
        case 0x1e86dcu: goto label_1e86dc;
        case 0x1e86e0u: goto label_1e86e0;
        case 0x1e86e4u: goto label_1e86e4;
        case 0x1e86e8u: goto label_1e86e8;
        case 0x1e86ecu: goto label_1e86ec;
        case 0x1e86f0u: goto label_1e86f0;
        case 0x1e86f4u: goto label_1e86f4;
        case 0x1e86f8u: goto label_1e86f8;
        case 0x1e86fcu: goto label_1e86fc;
        case 0x1e8700u: goto label_1e8700;
        case 0x1e8704u: goto label_1e8704;
        case 0x1e8708u: goto label_1e8708;
        case 0x1e870cu: goto label_1e870c;
        case 0x1e8710u: goto label_1e8710;
        case 0x1e8714u: goto label_1e8714;
        case 0x1e8718u: goto label_1e8718;
        case 0x1e871cu: goto label_1e871c;
        case 0x1e8720u: goto label_1e8720;
        case 0x1e8724u: goto label_1e8724;
        case 0x1e8728u: goto label_1e8728;
        case 0x1e872cu: goto label_1e872c;
        case 0x1e8730u: goto label_1e8730;
        case 0x1e8734u: goto label_1e8734;
        case 0x1e8738u: goto label_1e8738;
        case 0x1e873cu: goto label_1e873c;
        case 0x1e8740u: goto label_1e8740;
        case 0x1e8744u: goto label_1e8744;
        case 0x1e8748u: goto label_1e8748;
        case 0x1e874cu: goto label_1e874c;
        case 0x1e8750u: goto label_1e8750;
        case 0x1e8754u: goto label_1e8754;
        case 0x1e8758u: goto label_1e8758;
        case 0x1e875cu: goto label_1e875c;
        case 0x1e8760u: goto label_1e8760;
        case 0x1e8764u: goto label_1e8764;
        case 0x1e8768u: goto label_1e8768;
        case 0x1e876cu: goto label_1e876c;
        case 0x1e8770u: goto label_1e8770;
        case 0x1e8774u: goto label_1e8774;
        case 0x1e8778u: goto label_1e8778;
        case 0x1e877cu: goto label_1e877c;
        case 0x1e8780u: goto label_1e8780;
        case 0x1e8784u: goto label_1e8784;
        case 0x1e8788u: goto label_1e8788;
        case 0x1e878cu: goto label_1e878c;
        case 0x1e8790u: goto label_1e8790;
        case 0x1e8794u: goto label_1e8794;
        case 0x1e8798u: goto label_1e8798;
        case 0x1e879cu: goto label_1e879c;
        case 0x1e87a0u: goto label_1e87a0;
        case 0x1e87a4u: goto label_1e87a4;
        case 0x1e87a8u: goto label_1e87a8;
        case 0x1e87acu: goto label_1e87ac;
        case 0x1e87b0u: goto label_1e87b0;
        case 0x1e87b4u: goto label_1e87b4;
        case 0x1e87b8u: goto label_1e87b8;
        case 0x1e87bcu: goto label_1e87bc;
        case 0x1e87c0u: goto label_1e87c0;
        case 0x1e87c4u: goto label_1e87c4;
        case 0x1e87c8u: goto label_1e87c8;
        case 0x1e87ccu: goto label_1e87cc;
        case 0x1e87d0u: goto label_1e87d0;
        case 0x1e87d4u: goto label_1e87d4;
        case 0x1e87d8u: goto label_1e87d8;
        case 0x1e87dcu: goto label_1e87dc;
        case 0x1e87e0u: goto label_1e87e0;
        case 0x1e87e4u: goto label_1e87e4;
        case 0x1e87e8u: goto label_1e87e8;
        case 0x1e87ecu: goto label_1e87ec;
        case 0x1e87f0u: goto label_1e87f0;
        case 0x1e87f4u: goto label_1e87f4;
        case 0x1e87f8u: goto label_1e87f8;
        case 0x1e87fcu: goto label_1e87fc;
        case 0x1e8800u: goto label_1e8800;
        case 0x1e8804u: goto label_1e8804;
        case 0x1e8808u: goto label_1e8808;
        case 0x1e880cu: goto label_1e880c;
        case 0x1e8810u: goto label_1e8810;
        case 0x1e8814u: goto label_1e8814;
        case 0x1e8818u: goto label_1e8818;
        case 0x1e881cu: goto label_1e881c;
        case 0x1e8820u: goto label_1e8820;
        case 0x1e8824u: goto label_1e8824;
        case 0x1e8828u: goto label_1e8828;
        case 0x1e882cu: goto label_1e882c;
        case 0x1e8830u: goto label_1e8830;
        case 0x1e8834u: goto label_1e8834;
        case 0x1e8838u: goto label_1e8838;
        case 0x1e883cu: goto label_1e883c;
        case 0x1e8840u: goto label_1e8840;
        case 0x1e8844u: goto label_1e8844;
        case 0x1e8848u: goto label_1e8848;
        case 0x1e884cu: goto label_1e884c;
        case 0x1e8850u: goto label_1e8850;
        case 0x1e8854u: goto label_1e8854;
        case 0x1e8858u: goto label_1e8858;
        case 0x1e885cu: goto label_1e885c;
        case 0x1e8860u: goto label_1e8860;
        case 0x1e8864u: goto label_1e8864;
        case 0x1e8868u: goto label_1e8868;
        case 0x1e886cu: goto label_1e886c;
        case 0x1e8870u: goto label_1e8870;
        case 0x1e8874u: goto label_1e8874;
        case 0x1e8878u: goto label_1e8878;
        case 0x1e887cu: goto label_1e887c;
        case 0x1e8880u: goto label_1e8880;
        case 0x1e8884u: goto label_1e8884;
        case 0x1e8888u: goto label_1e8888;
        case 0x1e888cu: goto label_1e888c;
        case 0x1e8890u: goto label_1e8890;
        case 0x1e8894u: goto label_1e8894;
        case 0x1e8898u: goto label_1e8898;
        case 0x1e889cu: goto label_1e889c;
        case 0x1e88a0u: goto label_1e88a0;
        case 0x1e88a4u: goto label_1e88a4;
        case 0x1e88a8u: goto label_1e88a8;
        case 0x1e88acu: goto label_1e88ac;
        case 0x1e88b0u: goto label_1e88b0;
        case 0x1e88b4u: goto label_1e88b4;
        case 0x1e88b8u: goto label_1e88b8;
        case 0x1e88bcu: goto label_1e88bc;
        case 0x1e88c0u: goto label_1e88c0;
        case 0x1e88c4u: goto label_1e88c4;
        case 0x1e88c8u: goto label_1e88c8;
        case 0x1e88ccu: goto label_1e88cc;
        case 0x1e88d0u: goto label_1e88d0;
        case 0x1e88d4u: goto label_1e88d4;
        case 0x1e88d8u: goto label_1e88d8;
        case 0x1e88dcu: goto label_1e88dc;
        case 0x1e88e0u: goto label_1e88e0;
        case 0x1e88e4u: goto label_1e88e4;
        case 0x1e88e8u: goto label_1e88e8;
        case 0x1e88ecu: goto label_1e88ec;
        case 0x1e88f0u: goto label_1e88f0;
        case 0x1e88f4u: goto label_1e88f4;
        case 0x1e88f8u: goto label_1e88f8;
        case 0x1e88fcu: goto label_1e88fc;
        default: break;
    }

    ctx->pc = 0x1e8630u;

label_1e8630:
    // 0x1e8630: 0x27bdfae0  addiu       $sp, $sp, -0x520
    ctx->pc = 0x1e8630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965984));
label_1e8634:
    // 0x1e8634: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e8634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e8638:
    // 0x1e8638: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1e8638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1e863c:
    // 0x1e863c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e863cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e8640:
    // 0x1e8640: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e8640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1e8644:
    // 0x1e8644: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e8644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1e8648:
    // 0x1e8648: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e8648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1e864c:
    // 0x1e864c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1e864cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e8650:
    // 0x1e8650: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e8650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e8654:
    // 0x1e8654: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e8654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e8658:
    // 0x1e8658: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e8658u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e865c:
    // 0x1e865c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e865cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e8660:
    // 0x1e8660: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e8660u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e8664:
    // 0x1e8664: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e8664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e8668:
    // 0x1e8668: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1e8668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1e866c:
    // 0x1e866c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e866cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e8670:
    // 0x1e8670: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1e8670u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e8674:
    // 0x1e8674: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x1e8674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1e8678:
    // 0x1e8678: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1e8678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1e867c:
    // 0x1e867c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e867cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e8680:
    // 0x1e8680: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1e8684:
    if (ctx->pc == 0x1E8684u) {
        ctx->pc = 0x1E8684u;
            // 0x1e8684: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1E8688u;
        goto label_1e8688;
    }
    ctx->pc = 0x1E8680u;
    {
        const bool branch_taken_0x1e8680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8680u;
            // 0x1e8684: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8680) {
            ctx->pc = 0x1E86BCu;
            goto label_1e86bc;
        }
    }
    ctx->pc = 0x1E8688u;
label_1e8688:
    // 0x1e8688: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1e8688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1e868c:
    // 0x1e868c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e868cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1e8690:
    // 0x1e8690: 0x2463aa28  addiu       $v1, $v1, -0x55D8
    ctx->pc = 0x1e8690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945320));
label_1e8694:
    // 0x1e8694: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e8694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e8698:
    // 0x1e8698: 0x2442aa38  addiu       $v0, $v0, -0x55C8
    ctx->pc = 0x1e8698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945336));
label_1e869c:
    // 0x1e869c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e869cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1e86a0:
    // 0x1e86a0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1e86a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1e86a4:
    // 0x1e86a4: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e86a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1e86a8:
    // 0x1e86a8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e86a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1e86ac:
    // 0x1e86ac: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e86acu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1e86b0:
    // 0x1e86b0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1e86b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1e86b4:
    // 0x1e86b4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1e86b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1e86b8:
    // 0x1e86b8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1e86b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_1e86bc:
    // 0x1e86bc: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1e86bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1e86c0:
    // 0x1e86c0: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x1e86c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1e86c4:
    // 0x1e86c4: 0xc0a45a0  jal         func_291680
label_1e86c8:
    if (ctx->pc == 0x1E86C8u) {
        ctx->pc = 0x1E86C8u;
            // 0x1e86c8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1E86CCu;
        goto label_1e86cc;
    }
    ctx->pc = 0x1E86C4u;
    SET_GPR_U32(ctx, 31, 0x1E86CCu);
    ctx->pc = 0x1E86C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E86C4u;
            // 0x1e86c8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E86CCu; }
        if (ctx->pc != 0x1E86CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E86CCu; }
        if (ctx->pc != 0x1E86CCu) { return; }
    }
    ctx->pc = 0x1E86CCu;
label_1e86cc:
    // 0x1e86cc: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1e86ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e86d0:
    // 0x1e86d0: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x1e86d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e86d4:
    // 0x1e86d4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1e86d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1e86d8:
    // 0x1e86d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e86d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e86dc:
    // 0x1e86dc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e86dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e86e0:
    // 0x1e86e0: 0x320f809  jalr        $t9
label_1e86e4:
    if (ctx->pc == 0x1E86E4u) {
        ctx->pc = 0x1E86E4u;
            // 0x1e86e4: 0x27a604f0  addiu       $a2, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->pc = 0x1E86E8u;
        goto label_1e86e8;
    }
    ctx->pc = 0x1E86E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E86E8u);
        ctx->pc = 0x1E86E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E86E0u;
            // 0x1e86e4: 0x27a604f0  addiu       $a2, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E86E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E86E8u; }
            if (ctx->pc != 0x1E86E8u) { return; }
        }
        }
    }
    ctx->pc = 0x1E86E8u;
label_1e86e8:
    // 0x1e86e8: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1e86e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e86ec:
    // 0x1e86ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1e86ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1e86f0:
    // 0x1e86f0: 0x27a302ec  addiu       $v1, $sp, 0x2EC
    ctx->pc = 0x1e86f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 748));
label_1e86f4:
    // 0x1e86f4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1e86f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_1e86f8:
    // 0x1e86f8: 0x27a504f0  addiu       $a1, $sp, 0x4F0
    ctx->pc = 0x1e86f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
label_1e86fc:
    // 0x1e86fc: 0x27a602e0  addiu       $a2, $sp, 0x2E0
    ctx->pc = 0x1e86fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_1e8700:
    // 0x1e8700: 0xafa302e0  sw          $v1, 0x2E0($sp)
    ctx->pc = 0x1e8700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 3));
label_1e8704:
    // 0x1e8704: 0xafa202e8  sw          $v0, 0x2E8($sp)
    ctx->pc = 0x1e8704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 2));
label_1e8708:
    // 0x1e8708: 0xafa002e4  sw          $zero, 0x2E4($sp)
    ctx->pc = 0x1e8708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 0));
label_1e870c:
    // 0x1e870c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1e870cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e8710:
    // 0x1e8710: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1e8710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1e8714:
    // 0x1e8714: 0x320f809  jalr        $t9
label_1e8718:
    if (ctx->pc == 0x1E8718u) {
        ctx->pc = 0x1E8718u;
            // 0x1e8718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E871Cu;
        goto label_1e871c;
    }
    ctx->pc = 0x1E8714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E871Cu);
        ctx->pc = 0x1E8718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8714u;
            // 0x1e8718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E871Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E871Cu; }
            if (ctx->pc != 0x1E871Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E871Cu;
label_1e871c:
    // 0x1e871c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e871cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e8720:
    // 0x1e8720: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1e8720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1e8724:
    // 0x1e8724: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1e8724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1e8728:
    // 0x1e8728: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e8728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e872c:
    // 0x1e872c: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1e872cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1e8730:
    // 0x1e8730: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e8730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e8734:
    // 0x1e8734: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1e8738:
    if (ctx->pc == 0x1E8738u) {
        ctx->pc = 0x1E8738u;
            // 0x1e8738: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1E873Cu;
        goto label_1e873c;
    }
    ctx->pc = 0x1E8734u;
    {
        const bool branch_taken_0x1e8734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8734u;
            // 0x1e8738: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8734) {
            ctx->pc = 0x1E8764u;
            goto label_1e8764;
        }
    }
    ctx->pc = 0x1E873Cu;
label_1e873c:
    // 0x1e873c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1e873cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1e8740:
    // 0x1e8740: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e8740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e8744:
    // 0x1e8744: 0x2442aa48  addiu       $v0, $v0, -0x55B8
    ctx->pc = 0x1e8744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945352));
label_1e8748:
    // 0x1e8748: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e8748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1e874c:
    // 0x1e874c: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e874cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1e8750:
    // 0x1e8750: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e8750u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1e8754:
    // 0x1e8754: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e8754u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1e8758:
    // 0x1e8758: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1e8758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1e875c:
    // 0x1e875c: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1e875cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1e8760:
    // 0x1e8760: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e8760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1e8764:
    // 0x1e8764: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1e8764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e8768:
    // 0x1e8768: 0x8fa202e4  lw          $v0, 0x2E4($sp)
    ctx->pc = 0x1e8768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
label_1e876c:
    // 0x1e876c: 0x8fb102e0  lw          $s1, 0x2E0($sp)
    ctx->pc = 0x1e876cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_1e8770:
    // 0x1e8770: 0x8c77000c  lw          $s7, 0xC($v1)
    ctx->pc = 0x1e8770u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1e8774:
    // 0x1e8774: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e8774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e8778:
    // 0x1e8778: 0x222a821  addu        $s5, $s1, $v0
    ctx->pc = 0x1e8778u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1e877c:
    // 0x1e877c: 0xafb302dc  sw          $s3, 0x2DC($sp)
    ctx->pc = 0x1e877cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 19));
label_1e8780:
    // 0x1e8780: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1e8780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1e8784:
    // 0x1e8784: 0xafa202d8  sw          $v0, 0x2D8($sp)
    ctx->pc = 0x1e8784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 2));
label_1e8788:
    // 0x1e8788: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1e8788u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e878c:
    // 0x1e878c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e878cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e8790:
    // 0x1e8790: 0x320f809  jalr        $t9
label_1e8794:
    if (ctx->pc == 0x1E8794u) {
        ctx->pc = 0x1E8794u;
            // 0x1e8794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E8798u;
        goto label_1e8798;
    }
    ctx->pc = 0x1E8790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E8798u);
        ctx->pc = 0x1E8794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8790u;
            // 0x1e8794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E8798u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E8798u; }
            if (ctx->pc != 0x1E8798u) { return; }
        }
        }
    }
    ctx->pc = 0x1E8798u;
label_1e8798:
    // 0x1e8798: 0x1235002d  beq         $s1, $s5, . + 4 + (0x2D << 2)
label_1e879c:
    if (ctx->pc == 0x1E879Cu) {
        ctx->pc = 0x1E879Cu;
            // 0x1e879c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E87A0u;
        goto label_1e87a0;
    }
    ctx->pc = 0x1E8798u;
    {
        const bool branch_taken_0x1e8798 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        ctx->pc = 0x1E879Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8798u;
            // 0x1e879c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8798) {
            ctx->pc = 0x1E8850u;
            goto label_1e8850;
        }
    }
    ctx->pc = 0x1E87A0u;
label_1e87a0:
    // 0x1e87a0: 0x17b940  sll         $s7, $s7, 5
    ctx->pc = 0x1e87a0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
label_1e87a4:
    // 0x1e87a4: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1e87a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1e87a8:
    // 0x1e87a8: 0x27a4051c  addiu       $a0, $sp, 0x51C
    ctx->pc = 0x1e87a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1308));
label_1e87ac:
    // 0x1e87ac: 0x8e2a0000  lw          $t2, 0x0($s1)
    ctx->pc = 0x1e87acu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e87b0:
    // 0x1e87b0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e87b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e87b4:
    // 0x1e87b4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1e87b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e87b8:
    // 0x1e87b8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1e87b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e87bc:
    // 0x1e87bc: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x1e87bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e87c0:
    // 0x1e87c0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e87c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e87c4:
    // 0x1e87c4: 0x320f809  jalr        $t9
label_1e87c8:
    if (ctx->pc == 0x1E87C8u) {
        ctx->pc = 0x1E87C8u;
            // 0x1e87c8: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E87CCu;
        goto label_1e87cc;
    }
    ctx->pc = 0x1E87C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E87CCu);
        ctx->pc = 0x1E87C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E87C4u;
            // 0x1e87c8: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E87CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E87CCu; }
            if (ctx->pc != 0x1E87CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1E87CCu;
label_1e87cc:
    // 0x1e87cc: 0x27a3051c  addiu       $v1, $sp, 0x51C
    ctx->pc = 0x1e87ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1308));
label_1e87d0:
    // 0x1e87d0: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1e87d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e87d4:
    // 0x1e87d4: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_1e87d8:
    if (ctx->pc == 0x1E87D8u) {
        ctx->pc = 0x1E87DCu;
        goto label_1e87dc;
    }
    ctx->pc = 0x1E87D4u;
    {
        const bool branch_taken_0x1e87d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e87d4) {
            ctx->pc = 0x1E8840u;
            goto label_1e8840;
        }
    }
    ctx->pc = 0x1E87DCu;
label_1e87dc:
    // 0x1e87dc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1e87dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e87e0:
    // 0x1e87e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e87e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e87e4:
    // 0x1e87e4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1e87e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e87e8:
    // 0x1e87e8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1e87e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1e87ec:
    // 0x1e87ec: 0x320f809  jalr        $t9
label_1e87f0:
    if (ctx->pc == 0x1E87F0u) {
        ctx->pc = 0x1E87F0u;
            // 0x1e87f0: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1E87F4u;
        goto label_1e87f4;
    }
    ctx->pc = 0x1E87ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E87F4u);
        ctx->pc = 0x1E87F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E87ECu;
            // 0x1e87f0: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E87F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E87F4u; }
            if (ctx->pc != 0x1E87F4u) { return; }
        }
        }
    }
    ctx->pc = 0x1E87F4u;
label_1e87f4:
    // 0x1e87f4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e87f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e87f8:
    // 0x1e87f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e87f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1e87fc:
    // 0x1e87fc: 0x27a502d0  addiu       $a1, $sp, 0x2D0
    ctx->pc = 0x1e87fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_1e8800:
    // 0x1e8800: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e8800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e8804:
    // 0x1e8804: 0xafa302d4  sw          $v1, 0x2D4($sp)
    ctx->pc = 0x1e8804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 3));
label_1e8808:
    // 0x1e8808: 0xafa202d0  sw          $v0, 0x2D0($sp)
    ctx->pc = 0x1e8808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 2));
label_1e880c:
    // 0x1e880c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1e880cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1e8810:
    // 0x1e8810: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x1e8810u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e8814:
    // 0x1e8814: 0x2e81021  addu        $v0, $s7, $t0
    ctx->pc = 0x1e8814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 8)));
label_1e8818:
    // 0x1e8818: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e8818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e881c:
    // 0x1e881c: 0x904301a0  lbu         $v1, 0x1A0($v0)
    ctx->pc = 0x1e881cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 416)));
label_1e8820:
    // 0x1e8820: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e8820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e8824:
    // 0x1e8824: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e8824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e8828:
    // 0x1e8828: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e8828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e882c:
    // 0x1e882c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1e882cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1e8830:
    // 0x1e8830: 0x8c4209a8  lw          $v0, 0x9A8($v0)
    ctx->pc = 0x1e8830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2472)));
label_1e8834:
    // 0x1e8834: 0x40f809  jalr        $v0
label_1e8838:
    if (ctx->pc == 0x1E8838u) {
        ctx->pc = 0x1E8838u;
            // 0x1e8838: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E883Cu;
        goto label_1e883c;
    }
    ctx->pc = 0x1E8834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E883Cu);
        ctx->pc = 0x1E8838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8834u;
            // 0x1e8838: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E883Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E883Cu; }
            if (ctx->pc != 0x1E883Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E883Cu;
label_1e883c:
    // 0x1e883c: 0x0  nop
    ctx->pc = 0x1e883cu;
    // NOP
label_1e8840:
    // 0x1e8840: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1e8840u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1e8844:
    // 0x1e8844: 0x5635ffd8  bnel        $s1, $s5, . + 4 + (-0x28 << 2)
label_1e8848:
    if (ctx->pc == 0x1E8848u) {
        ctx->pc = 0x1E8848u;
            // 0x1e8848: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x1E884Cu;
        goto label_1e884c;
    }
    ctx->pc = 0x1E8844u;
    {
        const bool branch_taken_0x1e8844 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        if (branch_taken_0x1e8844) {
            ctx->pc = 0x1E8848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8844u;
            // 0x1e8848: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E87A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e87a8;
        }
    }
    ctx->pc = 0x1E884Cu;
label_1e884c:
    // 0x1e884c: 0x0  nop
    ctx->pc = 0x1e884cu;
    // NOP
label_1e8850:
    // 0x1e8850: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1e8850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1e8854:
    // 0x1e8854: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e8854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e8858:
    // 0x1e8858: 0x8c84ea64  lw          $a0, -0x159C($a0)
    ctx->pc = 0x1e8858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961764)));
label_1e885c:
    // 0x1e885c: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1e885cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1e8860:
    // 0x1e8860: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1e8860u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1e8864:
    // 0x1e8864: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1e8864u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e8868:
    // 0x1e8868: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1e886c:
    if (ctx->pc == 0x1E886Cu) {
        ctx->pc = 0x1E886Cu;
            // 0x1e886c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1E8870u;
        goto label_1e8870;
    }
    ctx->pc = 0x1E8868u;
    {
        const bool branch_taken_0x1e8868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E886Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8868u;
            // 0x1e886c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8868) {
            ctx->pc = 0x1E8898u;
            goto label_1e8898;
        }
    }
    ctx->pc = 0x1E8870u;
label_1e8870:
    // 0x1e8870: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1e8870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1e8874:
    // 0x1e8874: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e8874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1e8878:
    // 0x1e8878: 0x2463aa58  addiu       $v1, $v1, -0x55A8
    ctx->pc = 0x1e8878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945368));
label_1e887c:
    // 0x1e887c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e887cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1e8880:
    // 0x1e8880: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e8880u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1e8884:
    // 0x1e8884: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1e8884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1e8888:
    // 0x1e8888: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e8888u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1e888c:
    // 0x1e888c: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1e888cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1e8890:
    // 0x1e8890: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1e8890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1e8894:
    // 0x1e8894: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1e8894u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1e8898:
    // 0x1e8898: 0x8fa402e8  lw          $a0, 0x2E8($sp)
    ctx->pc = 0x1e8898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
label_1e889c:
    // 0x1e889c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1e889cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1e88a0:
    // 0x1e88a0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e88a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1e88a4:
    // 0x1e88a4: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_1e88a8:
    if (ctx->pc == 0x1E88A8u) {
        ctx->pc = 0x1E88A8u;
            // 0x1e88a8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x1E88ACu;
        goto label_1e88ac;
    }
    ctx->pc = 0x1E88A4u;
    {
        const bool branch_taken_0x1e88a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e88a4) {
            ctx->pc = 0x1E88A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E88A4u;
            // 0x1e88a8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E88D4u;
            goto label_1e88d4;
        }
    }
    ctx->pc = 0x1E88ACu;
label_1e88ac:
    // 0x1e88ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e88acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e88b0:
    // 0x1e88b0: 0x8fa302e8  lw          $v1, 0x2E8($sp)
    ctx->pc = 0x1e88b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
label_1e88b4:
    // 0x1e88b4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e88b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1e88b8:
    // 0x1e88b8: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1e88b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1e88bc:
    // 0x1e88bc: 0x8fa502e0  lw          $a1, 0x2E0($sp)
    ctx->pc = 0x1e88bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_1e88c0:
    // 0x1e88c0: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x1e88c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_1e88c4:
    // 0x1e88c4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x1e88c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_1e88c8:
    // 0x1e88c8: 0xc0a7ab4  jal         func_29EAD0
label_1e88cc:
    if (ctx->pc == 0x1E88CCu) {
        ctx->pc = 0x1E88CCu;
            // 0x1e88cc: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x1E88D0u;
        goto label_1e88d0;
    }
    ctx->pc = 0x1E88C8u;
    SET_GPR_U32(ctx, 31, 0x1E88D0u);
    ctx->pc = 0x1E88CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E88C8u;
            // 0x1e88cc: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E88D0u; }
        if (ctx->pc != 0x1E88D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E88D0u; }
        if (ctx->pc != 0x1E88D0u) { return; }
    }
    ctx->pc = 0x1E88D0u;
label_1e88d0:
    // 0x1e88d0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1e88d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1e88d4:
    // 0x1e88d4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e88d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e88d8:
    // 0x1e88d8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e88d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e88dc:
    // 0x1e88dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e88dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e88e0:
    // 0x1e88e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e88e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e88e4:
    // 0x1e88e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e88e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e88e8:
    // 0x1e88e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e88e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e88ec:
    // 0x1e88ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e88ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e88f0:
    // 0x1e88f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e88f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e88f4:
    // 0x1e88f4: 0x3e00008  jr          $ra
label_1e88f8:
    if (ctx->pc == 0x1E88F8u) {
        ctx->pc = 0x1E88F8u;
            // 0x1e88f8: 0x27bd0520  addiu       $sp, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->pc = 0x1E88FCu;
        goto label_1e88fc;
    }
    ctx->pc = 0x1E88F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E88F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E88F4u;
            // 0x1e88f8: 0x27bd0520  addiu       $sp, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E88FCu;
label_1e88fc:
    // 0x1e88fc: 0x0  nop
    ctx->pc = 0x1e88fcu;
    // NOP
}
