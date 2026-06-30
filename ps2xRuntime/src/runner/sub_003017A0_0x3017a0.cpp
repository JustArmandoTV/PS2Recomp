#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003017A0
// Address: 0x3017a0 - 0x301ad0
void sub_003017A0_0x3017a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003017A0_0x3017a0");
#endif

    switch (ctx->pc) {
        case 0x3017a0u: goto label_3017a0;
        case 0x3017a4u: goto label_3017a4;
        case 0x3017a8u: goto label_3017a8;
        case 0x3017acu: goto label_3017ac;
        case 0x3017b0u: goto label_3017b0;
        case 0x3017b4u: goto label_3017b4;
        case 0x3017b8u: goto label_3017b8;
        case 0x3017bcu: goto label_3017bc;
        case 0x3017c0u: goto label_3017c0;
        case 0x3017c4u: goto label_3017c4;
        case 0x3017c8u: goto label_3017c8;
        case 0x3017ccu: goto label_3017cc;
        case 0x3017d0u: goto label_3017d0;
        case 0x3017d4u: goto label_3017d4;
        case 0x3017d8u: goto label_3017d8;
        case 0x3017dcu: goto label_3017dc;
        case 0x3017e0u: goto label_3017e0;
        case 0x3017e4u: goto label_3017e4;
        case 0x3017e8u: goto label_3017e8;
        case 0x3017ecu: goto label_3017ec;
        case 0x3017f0u: goto label_3017f0;
        case 0x3017f4u: goto label_3017f4;
        case 0x3017f8u: goto label_3017f8;
        case 0x3017fcu: goto label_3017fc;
        case 0x301800u: goto label_301800;
        case 0x301804u: goto label_301804;
        case 0x301808u: goto label_301808;
        case 0x30180cu: goto label_30180c;
        case 0x301810u: goto label_301810;
        case 0x301814u: goto label_301814;
        case 0x301818u: goto label_301818;
        case 0x30181cu: goto label_30181c;
        case 0x301820u: goto label_301820;
        case 0x301824u: goto label_301824;
        case 0x301828u: goto label_301828;
        case 0x30182cu: goto label_30182c;
        case 0x301830u: goto label_301830;
        case 0x301834u: goto label_301834;
        case 0x301838u: goto label_301838;
        case 0x30183cu: goto label_30183c;
        case 0x301840u: goto label_301840;
        case 0x301844u: goto label_301844;
        case 0x301848u: goto label_301848;
        case 0x30184cu: goto label_30184c;
        case 0x301850u: goto label_301850;
        case 0x301854u: goto label_301854;
        case 0x301858u: goto label_301858;
        case 0x30185cu: goto label_30185c;
        case 0x301860u: goto label_301860;
        case 0x301864u: goto label_301864;
        case 0x301868u: goto label_301868;
        case 0x30186cu: goto label_30186c;
        case 0x301870u: goto label_301870;
        case 0x301874u: goto label_301874;
        case 0x301878u: goto label_301878;
        case 0x30187cu: goto label_30187c;
        case 0x301880u: goto label_301880;
        case 0x301884u: goto label_301884;
        case 0x301888u: goto label_301888;
        case 0x30188cu: goto label_30188c;
        case 0x301890u: goto label_301890;
        case 0x301894u: goto label_301894;
        case 0x301898u: goto label_301898;
        case 0x30189cu: goto label_30189c;
        case 0x3018a0u: goto label_3018a0;
        case 0x3018a4u: goto label_3018a4;
        case 0x3018a8u: goto label_3018a8;
        case 0x3018acu: goto label_3018ac;
        case 0x3018b0u: goto label_3018b0;
        case 0x3018b4u: goto label_3018b4;
        case 0x3018b8u: goto label_3018b8;
        case 0x3018bcu: goto label_3018bc;
        case 0x3018c0u: goto label_3018c0;
        case 0x3018c4u: goto label_3018c4;
        case 0x3018c8u: goto label_3018c8;
        case 0x3018ccu: goto label_3018cc;
        case 0x3018d0u: goto label_3018d0;
        case 0x3018d4u: goto label_3018d4;
        case 0x3018d8u: goto label_3018d8;
        case 0x3018dcu: goto label_3018dc;
        case 0x3018e0u: goto label_3018e0;
        case 0x3018e4u: goto label_3018e4;
        case 0x3018e8u: goto label_3018e8;
        case 0x3018ecu: goto label_3018ec;
        case 0x3018f0u: goto label_3018f0;
        case 0x3018f4u: goto label_3018f4;
        case 0x3018f8u: goto label_3018f8;
        case 0x3018fcu: goto label_3018fc;
        case 0x301900u: goto label_301900;
        case 0x301904u: goto label_301904;
        case 0x301908u: goto label_301908;
        case 0x30190cu: goto label_30190c;
        case 0x301910u: goto label_301910;
        case 0x301914u: goto label_301914;
        case 0x301918u: goto label_301918;
        case 0x30191cu: goto label_30191c;
        case 0x301920u: goto label_301920;
        case 0x301924u: goto label_301924;
        case 0x301928u: goto label_301928;
        case 0x30192cu: goto label_30192c;
        case 0x301930u: goto label_301930;
        case 0x301934u: goto label_301934;
        case 0x301938u: goto label_301938;
        case 0x30193cu: goto label_30193c;
        case 0x301940u: goto label_301940;
        case 0x301944u: goto label_301944;
        case 0x301948u: goto label_301948;
        case 0x30194cu: goto label_30194c;
        case 0x301950u: goto label_301950;
        case 0x301954u: goto label_301954;
        case 0x301958u: goto label_301958;
        case 0x30195cu: goto label_30195c;
        case 0x301960u: goto label_301960;
        case 0x301964u: goto label_301964;
        case 0x301968u: goto label_301968;
        case 0x30196cu: goto label_30196c;
        case 0x301970u: goto label_301970;
        case 0x301974u: goto label_301974;
        case 0x301978u: goto label_301978;
        case 0x30197cu: goto label_30197c;
        case 0x301980u: goto label_301980;
        case 0x301984u: goto label_301984;
        case 0x301988u: goto label_301988;
        case 0x30198cu: goto label_30198c;
        case 0x301990u: goto label_301990;
        case 0x301994u: goto label_301994;
        case 0x301998u: goto label_301998;
        case 0x30199cu: goto label_30199c;
        case 0x3019a0u: goto label_3019a0;
        case 0x3019a4u: goto label_3019a4;
        case 0x3019a8u: goto label_3019a8;
        case 0x3019acu: goto label_3019ac;
        case 0x3019b0u: goto label_3019b0;
        case 0x3019b4u: goto label_3019b4;
        case 0x3019b8u: goto label_3019b8;
        case 0x3019bcu: goto label_3019bc;
        case 0x3019c0u: goto label_3019c0;
        case 0x3019c4u: goto label_3019c4;
        case 0x3019c8u: goto label_3019c8;
        case 0x3019ccu: goto label_3019cc;
        case 0x3019d0u: goto label_3019d0;
        case 0x3019d4u: goto label_3019d4;
        case 0x3019d8u: goto label_3019d8;
        case 0x3019dcu: goto label_3019dc;
        case 0x3019e0u: goto label_3019e0;
        case 0x3019e4u: goto label_3019e4;
        case 0x3019e8u: goto label_3019e8;
        case 0x3019ecu: goto label_3019ec;
        case 0x3019f0u: goto label_3019f0;
        case 0x3019f4u: goto label_3019f4;
        case 0x3019f8u: goto label_3019f8;
        case 0x3019fcu: goto label_3019fc;
        case 0x301a00u: goto label_301a00;
        case 0x301a04u: goto label_301a04;
        case 0x301a08u: goto label_301a08;
        case 0x301a0cu: goto label_301a0c;
        case 0x301a10u: goto label_301a10;
        case 0x301a14u: goto label_301a14;
        case 0x301a18u: goto label_301a18;
        case 0x301a1cu: goto label_301a1c;
        case 0x301a20u: goto label_301a20;
        case 0x301a24u: goto label_301a24;
        case 0x301a28u: goto label_301a28;
        case 0x301a2cu: goto label_301a2c;
        case 0x301a30u: goto label_301a30;
        case 0x301a34u: goto label_301a34;
        case 0x301a38u: goto label_301a38;
        case 0x301a3cu: goto label_301a3c;
        case 0x301a40u: goto label_301a40;
        case 0x301a44u: goto label_301a44;
        case 0x301a48u: goto label_301a48;
        case 0x301a4cu: goto label_301a4c;
        case 0x301a50u: goto label_301a50;
        case 0x301a54u: goto label_301a54;
        case 0x301a58u: goto label_301a58;
        case 0x301a5cu: goto label_301a5c;
        case 0x301a60u: goto label_301a60;
        case 0x301a64u: goto label_301a64;
        case 0x301a68u: goto label_301a68;
        case 0x301a6cu: goto label_301a6c;
        case 0x301a70u: goto label_301a70;
        case 0x301a74u: goto label_301a74;
        case 0x301a78u: goto label_301a78;
        case 0x301a7cu: goto label_301a7c;
        case 0x301a80u: goto label_301a80;
        case 0x301a84u: goto label_301a84;
        case 0x301a88u: goto label_301a88;
        case 0x301a8cu: goto label_301a8c;
        case 0x301a90u: goto label_301a90;
        case 0x301a94u: goto label_301a94;
        case 0x301a98u: goto label_301a98;
        case 0x301a9cu: goto label_301a9c;
        case 0x301aa0u: goto label_301aa0;
        case 0x301aa4u: goto label_301aa4;
        case 0x301aa8u: goto label_301aa8;
        case 0x301aacu: goto label_301aac;
        case 0x301ab0u: goto label_301ab0;
        case 0x301ab4u: goto label_301ab4;
        case 0x301ab8u: goto label_301ab8;
        case 0x301abcu: goto label_301abc;
        case 0x301ac0u: goto label_301ac0;
        case 0x301ac4u: goto label_301ac4;
        case 0x301ac8u: goto label_301ac8;
        case 0x301accu: goto label_301acc;
        default: break;
    }

    ctx->pc = 0x3017a0u;

label_3017a0:
    // 0x3017a0: 0x8c830d9c  lw          $v1, 0xD9C($a0)
    ctx->pc = 0x3017a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3484)));
label_3017a4:
    // 0x3017a4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3017a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_3017a8:
    // 0x3017a8: 0x3e00008  jr          $ra
label_3017ac:
    if (ctx->pc == 0x3017ACu) {
        ctx->pc = 0x3017ACu;
            // 0x3017ac: 0xac830d9c  sw          $v1, 0xD9C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3484), GPR_U32(ctx, 3));
        ctx->pc = 0x3017B0u;
        goto label_3017b0;
    }
    ctx->pc = 0x3017A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3017ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3017A8u;
            // 0x3017ac: 0xac830d9c  sw          $v1, 0xD9C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3484), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3017B0u;
label_3017b0:
    // 0x3017b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3017b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3017b4:
    // 0x3017b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3017b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3017b8:
    // 0x3017b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3017b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3017bc:
    // 0x3017bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3017bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3017c0:
    // 0x3017c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3017c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3017c4:
    // 0x3017c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3017c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3017c8:
    // 0x3017c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3017c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3017cc:
    // 0x3017cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3017ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3017d0:
    // 0x3017d0: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x3017d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_3017d4:
    // 0x3017d4: 0x90830c44  lbu         $v1, 0xC44($a0)
    ctx->pc = 0x3017d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3140)));
label_3017d8:
    // 0x3017d8: 0x8c900550  lw          $s0, 0x550($a0)
    ctx->pc = 0x3017d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_3017dc:
    // 0x3017dc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3017dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3017e0:
    // 0x3017e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3017e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3017e4:
    // 0x3017e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3017e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3017e8:
    // 0x3017e8: 0x8c53000c  lw          $s3, 0xC($v0)
    ctx->pc = 0x3017e8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3017ec:
    // 0x3017ec: 0xc0c0e5c  jal         func_303970
label_3017f0:
    if (ctx->pc == 0x3017F0u) {
        ctx->pc = 0x3017F0u;
            // 0x3017f0: 0x26510bf0  addiu       $s1, $s2, 0xBF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 3056));
        ctx->pc = 0x3017F4u;
        goto label_3017f4;
    }
    ctx->pc = 0x3017ECu;
    SET_GPR_U32(ctx, 31, 0x3017F4u);
    ctx->pc = 0x3017F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3017ECu;
            // 0x3017f0: 0x26510bf0  addiu       $s1, $s2, 0xBF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 3056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303970u;
    if (runtime->hasFunction(0x303970u)) {
        auto targetFn = runtime->lookupFunction(0x303970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3017F4u; }
        if (ctx->pc != 0x3017F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303970_0x303970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3017F4u; }
        if (ctx->pc != 0x3017F4u) { return; }
    }
    ctx->pc = 0x3017F4u;
label_3017f4:
    // 0x3017f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3017f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3017f8:
    // 0x3017f8: 0xc077fb0  jal         func_1DFEC0
label_3017fc:
    if (ctx->pc == 0x3017FCu) {
        ctx->pc = 0x3017FCu;
            // 0x3017fc: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->pc = 0x301800u;
        goto label_301800;
    }
    ctx->pc = 0x3017F8u;
    SET_GPR_U32(ctx, 31, 0x301800u);
    ctx->pc = 0x3017FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3017F8u;
            // 0x3017fc: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301800u; }
        if (ctx->pc != 0x301800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301800u; }
        if (ctx->pc != 0x301800u) { return; }
    }
    ctx->pc = 0x301800u;
label_301800:
    // 0x301800: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x301800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_301804:
    // 0x301804: 0xae420e10  sw          $v0, 0xE10($s2)
    ctx->pc = 0x301804u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3600), GPR_U32(ctx, 2));
label_301808:
    // 0x301808: 0xae400de8  sw          $zero, 0xDE8($s2)
    ctx->pc = 0x301808u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3560), GPR_U32(ctx, 0));
label_30180c:
    // 0x30180c: 0x86620020  lh          $v0, 0x20($s3)
    ctx->pc = 0x30180cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
label_301810:
    // 0x301810: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_301814:
    if (ctx->pc == 0x301814u) {
        ctx->pc = 0x301814u;
            // 0x301814: 0xae400dc4  sw          $zero, 0xDC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3524), GPR_U32(ctx, 0));
        ctx->pc = 0x301818u;
        goto label_301818;
    }
    ctx->pc = 0x301810u;
    {
        const bool branch_taken_0x301810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301810) {
            ctx->pc = 0x301814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x301810u;
            // 0x301814: 0xae400dc4  sw          $zero, 0xDC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30186Cu;
            goto label_30186c;
        }
    }
    ctx->pc = 0x301818u;
label_301818:
    // 0x301818: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x301818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30181c:
    // 0x30181c: 0x0  nop
    ctx->pc = 0x30181cu;
    // NOP
label_301820:
    // 0x301820: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x301820u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_301824:
    // 0x301824: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x301824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_301828:
    // 0x301828: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x301828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30182c:
    // 0x30182c: 0x0  nop
    ctx->pc = 0x30182cu;
    // NOP
label_301830:
    // 0x301830: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x301830u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_301834:
    // 0x301834: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x301834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_301838:
    // 0x301838: 0x3443f000  ori         $v1, $v0, 0xF000
    ctx->pc = 0x301838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_30183c:
    // 0x30183c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x30183cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_301840:
    // 0x301840: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301840u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_301844:
    // 0x301844: 0x0  nop
    ctx->pc = 0x301844u;
    // NOP
label_301848:
    // 0x301848: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x301848u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
label_30184c:
    // 0x30184c: 0xc6410de4  lwc1        $f1, 0xDE4($s2)
    ctx->pc = 0x30184cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_301850:
    // 0x301850: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x301850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_301854:
    // 0x301854: 0x0  nop
    ctx->pc = 0x301854u;
    // NOP
label_301858:
    // 0x301858: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x301858u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_30185c:
    // 0x30185c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x30185cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_301860:
    // 0x301860: 0xe6400de8  swc1        $f0, 0xDE8($s2)
    ctx->pc = 0x301860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3560), bits); }
label_301864:
    // 0x301864: 0xe6420de0  swc1        $f2, 0xDE0($s2)
    ctx->pc = 0x301864u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3552), bits); }
label_301868:
    // 0x301868: 0xae400dc4  sw          $zero, 0xDC4($s2)
    ctx->pc = 0x301868u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3524), GPR_U32(ctx, 0));
label_30186c:
    // 0x30186c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x30186cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_301870:
    // 0x301870: 0xae400dc0  sw          $zero, 0xDC0($s2)
    ctx->pc = 0x301870u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3520), GPR_U32(ctx, 0));
label_301874:
    // 0x301874: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x301874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_301878:
    // 0x301878: 0xae400dc8  sw          $zero, 0xDC8($s2)
    ctx->pc = 0x301878u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3528), GPR_U32(ctx, 0));
label_30187c:
    // 0x30187c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30187cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_301880:
    // 0x301880: 0x8205010c  lb          $a1, 0x10C($s0)
    ctx->pc = 0x301880u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_301884:
    // 0x301884: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x301884u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_301888:
    // 0x301888: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x301888u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_30188c:
    // 0x30188c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30188cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_301890:
    // 0x301890: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x301890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_301894:
    // 0x301894: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x301894u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_301898:
    // 0x301898: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x301898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_30189c:
    // 0x30189c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30189cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3018a0:
    // 0x3018a0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3018a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3018a4:
    // 0x3018a4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3018a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3018a8:
    // 0x3018a8: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x3018a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_3018ac:
    // 0x3018ac: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3018acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3018b0:
    // 0x3018b0: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x3018b0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_3018b4:
    // 0x3018b4: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3018b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3018b8:
    // 0x3018b8: 0x320f809  jalr        $t9
label_3018bc:
    if (ctx->pc == 0x3018BCu) {
        ctx->pc = 0x3018BCu;
            // 0x3018bc: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3018C0u;
        goto label_3018c0;
    }
    ctx->pc = 0x3018B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3018C0u);
        ctx->pc = 0x3018BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3018B8u;
            // 0x3018bc: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3018C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3018C0u; }
            if (ctx->pc != 0x3018C0u) { return; }
        }
        }
    }
    ctx->pc = 0x3018C0u;
label_3018c0:
    // 0x3018c0: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3018c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3018c4:
    // 0x3018c4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3018c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3018c8:
    // 0x3018c8: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x3018c8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_3018cc:
    // 0x3018cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3018ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3018d0:
    // 0x3018d0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3018d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3018d4:
    // 0x3018d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3018d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3018d8:
    // 0x3018d8: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x3018d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_3018dc:
    // 0x3018dc: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x3018dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_3018e0:
    // 0x3018e0: 0x320f809  jalr        $t9
label_3018e4:
    if (ctx->pc == 0x3018E4u) {
        ctx->pc = 0x3018E4u;
            // 0x3018e4: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3018E8u;
        goto label_3018e8;
    }
    ctx->pc = 0x3018E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3018E8u);
        ctx->pc = 0x3018E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3018E0u;
            // 0x3018e4: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3018E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3018E8u; }
            if (ctx->pc != 0x3018E8u) { return; }
        }
        }
    }
    ctx->pc = 0x3018E8u;
label_3018e8:
    // 0x3018e8: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x3018e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3018ec:
    // 0x3018ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3018ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3018f0:
    // 0x3018f0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3018f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3018f4:
    // 0x3018f4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x3018f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_3018f8:
    // 0x3018f8: 0x320f809  jalr        $t9
label_3018fc:
    if (ctx->pc == 0x3018FCu) {
        ctx->pc = 0x3018FCu;
            // 0x3018fc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x301900u;
        goto label_301900;
    }
    ctx->pc = 0x3018F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301900u);
        ctx->pc = 0x3018FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3018F8u;
            // 0x3018fc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x301900u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x301900u; }
            if (ctx->pc != 0x301900u) { return; }
        }
        }
    }
    ctx->pc = 0x301900u;
label_301900:
    // 0x301900: 0x8e460d9c  lw          $a2, 0xD9C($s2)
    ctx->pc = 0x301900u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3484)));
label_301904:
    // 0x301904: 0x3c02effe  lui         $v0, 0xEFFE
    ctx->pc = 0x301904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61438 << 16));
label_301908:
    // 0x301908: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x301908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_30190c:
    // 0x30190c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x30190cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_301910:
    // 0x301910: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x301910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_301914:
    // 0x301914: 0xc51024  and         $v0, $a2, $a1
    ctx->pc = 0x301914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_301918:
    // 0x301918: 0xae420d9c  sw          $v0, 0xD9C($s2)
    ctx->pc = 0x301918u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3484), GPR_U32(ctx, 2));
label_30191c:
    // 0x30191c: 0xae440db8  sw          $a0, 0xDB8($s2)
    ctx->pc = 0x30191cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3512), GPR_U32(ctx, 4));
label_301920:
    // 0x301920: 0x8e500d74  lw          $s0, 0xD74($s2)
    ctx->pc = 0x301920u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
label_301924:
    // 0x301924: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x301924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_301928:
    // 0x301928: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x301928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_30192c:
    // 0x30192c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x30192cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_301930:
    // 0x301930: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x301930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_301934:
    // 0x301934: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x301934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_301938:
    // 0x301938: 0xc0a545c  jal         func_295170
label_30193c:
    if (ctx->pc == 0x30193Cu) {
        ctx->pc = 0x30193Cu;
            // 0x30193c: 0x629824  and         $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x301940u;
        goto label_301940;
    }
    ctx->pc = 0x301938u;
    SET_GPR_U32(ctx, 31, 0x301940u);
    ctx->pc = 0x30193Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301938u;
            // 0x30193c: 0x629824  and         $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301940u; }
        if (ctx->pc != 0x301940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301940u; }
        if (ctx->pc != 0x301940u) { return; }
    }
    ctx->pc = 0x301940u;
label_301940:
    // 0x301940: 0xac53002c  sw          $s3, 0x2C($v0)
    ctx->pc = 0x301940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 19));
label_301944:
    // 0x301944: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x301944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_301948:
    // 0x301948: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x301948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_30194c:
    // 0x30194c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x30194cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_301950:
    // 0x301950: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x301950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_301954:
    // 0x301954: 0xc08bf20  jal         func_22FC80
label_301958:
    if (ctx->pc == 0x301958u) {
        ctx->pc = 0x301958u;
            // 0x301958: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30195Cu;
        goto label_30195c;
    }
    ctx->pc = 0x301954u;
    SET_GPR_U32(ctx, 31, 0x30195Cu);
    ctx->pc = 0x301958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301954u;
            // 0x301958: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30195Cu; }
        if (ctx->pc != 0x30195Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30195Cu; }
        if (ctx->pc != 0x30195Cu) { return; }
    }
    ctx->pc = 0x30195Cu;
label_30195c:
    // 0x30195c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x30195cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_301960:
    // 0x301960: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x301960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_301964:
    // 0x301964: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x301964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_301968:
    // 0x301968: 0xc6410de4  lwc1        $f1, 0xDE4($s2)
    ctx->pc = 0x301968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30196c:
    // 0x30196c: 0x264502c0  addiu       $a1, $s2, 0x2C0
    ctx->pc = 0x30196cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
label_301970:
    // 0x301970: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x301970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_301974:
    // 0x301974: 0xc0b8214  jal         func_2E0850
label_301978:
    if (ctx->pc == 0x301978u) {
        ctx->pc = 0x301978u;
            // 0x301978: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x30197Cu;
        goto label_30197c;
    }
    ctx->pc = 0x301974u;
    SET_GPR_U32(ctx, 31, 0x30197Cu);
    ctx->pc = 0x301978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301974u;
            // 0x301978: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0850u;
    if (runtime->hasFunction(0x2E0850u)) {
        auto targetFn = runtime->lookupFunction(0x2E0850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30197Cu; }
        if (ctx->pc != 0x30197Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0850_0x2e0850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30197Cu; }
        if (ctx->pc != 0x30197Cu) { return; }
    }
    ctx->pc = 0x30197Cu;
label_30197c:
    // 0x30197c: 0x26440560  addiu       $a0, $s2, 0x560
    ctx->pc = 0x30197cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
label_301980:
    // 0x301980: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x301980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_301984:
    // 0x301984: 0xc075378  jal         func_1D4DE0
label_301988:
    if (ctx->pc == 0x301988u) {
        ctx->pc = 0x301988u;
            // 0x301988: 0x26460830  addiu       $a2, $s2, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2096));
        ctx->pc = 0x30198Cu;
        goto label_30198c;
    }
    ctx->pc = 0x301984u;
    SET_GPR_U32(ctx, 31, 0x30198Cu);
    ctx->pc = 0x301988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301984u;
            // 0x301988: 0x26460830  addiu       $a2, $s2, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30198Cu; }
        if (ctx->pc != 0x30198Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30198Cu; }
        if (ctx->pc != 0x30198Cu) { return; }
    }
    ctx->pc = 0x30198Cu;
label_30198c:
    // 0x30198c: 0xc6410880  lwc1        $f1, 0x880($s2)
    ctx->pc = 0x30198cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_301990:
    // 0x301990: 0x2644087c  addiu       $a0, $s2, 0x87C
    ctx->pc = 0x301990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2172));
label_301994:
    // 0x301994: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x301994u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_301998:
    // 0x301998: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x301998u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_30199c:
    // 0x30199c: 0xc0c753c  jal         func_31D4F0
label_3019a0:
    if (ctx->pc == 0x3019A0u) {
        ctx->pc = 0x3019A0u;
            // 0x3019a0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3019A4u;
        goto label_3019a4;
    }
    ctx->pc = 0x30199Cu;
    SET_GPR_U32(ctx, 31, 0x3019A4u);
    ctx->pc = 0x3019A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30199Cu;
            // 0x3019a0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3019A4u; }
        if (ctx->pc != 0x3019A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3019A4u; }
        if (ctx->pc != 0x3019A4u) { return; }
    }
    ctx->pc = 0x3019A4u;
label_3019a4:
    // 0x3019a4: 0xc64c0880  lwc1        $f12, 0x880($s2)
    ctx->pc = 0x3019a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3019a8:
    // 0x3019a8: 0x2644092c  addiu       $a0, $s2, 0x92C
    ctx->pc = 0x3019a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2348));
label_3019ac:
    // 0x3019ac: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3019acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3019b0:
    // 0x3019b0: 0xc0c753c  jal         func_31D4F0
label_3019b4:
    if (ctx->pc == 0x3019B4u) {
        ctx->pc = 0x3019B4u;
            // 0x3019b4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3019B8u;
        goto label_3019b8;
    }
    ctx->pc = 0x3019B0u;
    SET_GPR_U32(ctx, 31, 0x3019B8u);
    ctx->pc = 0x3019B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3019B0u;
            // 0x3019b4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3019B8u; }
        if (ctx->pc != 0x3019B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3019B8u; }
        if (ctx->pc != 0x3019B8u) { return; }
    }
    ctx->pc = 0x3019B8u;
label_3019b8:
    // 0x3019b8: 0xc0b9210  jal         func_2E4840
label_3019bc:
    if (ctx->pc == 0x3019BCu) {
        ctx->pc = 0x3019BCu;
            // 0x3019bc: 0x26440890  addiu       $a0, $s2, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
        ctx->pc = 0x3019C0u;
        goto label_3019c0;
    }
    ctx->pc = 0x3019B8u;
    SET_GPR_U32(ctx, 31, 0x3019C0u);
    ctx->pc = 0x3019BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3019B8u;
            // 0x3019bc: 0x26440890  addiu       $a0, $s2, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3019C0u; }
        if (ctx->pc != 0x3019C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3019C0u; }
        if (ctx->pc != 0x3019C0u) { return; }
    }
    ctx->pc = 0x3019C0u;
label_3019c0:
    // 0x3019c0: 0x264402e0  addiu       $a0, $s2, 0x2E0
    ctx->pc = 0x3019c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 736));
label_3019c4:
    // 0x3019c4: 0xc04cc04  jal         func_133010
label_3019c8:
    if (ctx->pc == 0x3019C8u) {
        ctx->pc = 0x3019C8u;
            // 0x3019c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3019CCu;
        goto label_3019cc;
    }
    ctx->pc = 0x3019C4u;
    SET_GPR_U32(ctx, 31, 0x3019CCu);
    ctx->pc = 0x3019C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3019C4u;
            // 0x3019c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3019CCu; }
        if (ctx->pc != 0x3019CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3019CCu; }
        if (ctx->pc != 0x3019CCu) { return; }
    }
    ctx->pc = 0x3019CCu;
label_3019cc:
    // 0x3019cc: 0x26440340  addiu       $a0, $s2, 0x340
    ctx->pc = 0x3019ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
label_3019d0:
    // 0x3019d0: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x3019d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_3019d4:
    // 0x3019d4: 0xc04cc90  jal         func_133240
label_3019d8:
    if (ctx->pc == 0x3019D8u) {
        ctx->pc = 0x3019D8u;
            // 0x3019d8: 0x264602c0  addiu       $a2, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->pc = 0x3019DCu;
        goto label_3019dc;
    }
    ctx->pc = 0x3019D4u;
    SET_GPR_U32(ctx, 31, 0x3019DCu);
    ctx->pc = 0x3019D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3019D4u;
            // 0x3019d8: 0x264602c0  addiu       $a2, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3019DCu; }
        if (ctx->pc != 0x3019DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3019DCu; }
        if (ctx->pc != 0x3019DCu) { return; }
    }
    ctx->pc = 0x3019DCu;
label_3019dc:
    // 0x3019dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3019dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3019e0:
    // 0x3019e0: 0xc075318  jal         func_1D4C60
label_3019e4:
    if (ctx->pc == 0x3019E4u) {
        ctx->pc = 0x3019E4u;
            // 0x3019e4: 0x26440560  addiu       $a0, $s2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
        ctx->pc = 0x3019E8u;
        goto label_3019e8;
    }
    ctx->pc = 0x3019E0u;
    SET_GPR_U32(ctx, 31, 0x3019E8u);
    ctx->pc = 0x3019E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3019E0u;
            // 0x3019e4: 0x26440560  addiu       $a0, $s2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3019E8u; }
        if (ctx->pc != 0x3019E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3019E8u; }
        if (ctx->pc != 0x3019E8u) { return; }
    }
    ctx->pc = 0x3019E8u;
label_3019e8:
    // 0x3019e8: 0x26450560  addiu       $a1, $s2, 0x560
    ctx->pc = 0x3019e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
label_3019ec:
    // 0x3019ec: 0x26440840  addiu       $a0, $s2, 0x840
    ctx->pc = 0x3019ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2112));
label_3019f0:
    // 0x3019f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3019f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3019f4:
    // 0x3019f4: 0xc0c6250  jal         func_318940
label_3019f8:
    if (ctx->pc == 0x3019F8u) {
        ctx->pc = 0x3019F8u;
            // 0x3019f8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3019FCu;
        goto label_3019fc;
    }
    ctx->pc = 0x3019F4u;
    SET_GPR_U32(ctx, 31, 0x3019FCu);
    ctx->pc = 0x3019F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3019F4u;
            // 0x3019f8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3019FCu; }
        if (ctx->pc != 0x3019FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3019FCu; }
        if (ctx->pc != 0x3019FCu) { return; }
    }
    ctx->pc = 0x3019FCu;
label_3019fc:
    // 0x3019fc: 0x26450560  addiu       $a1, $s2, 0x560
    ctx->pc = 0x3019fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
label_301a00:
    // 0x301a00: 0x264408f0  addiu       $a0, $s2, 0x8F0
    ctx->pc = 0x301a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2288));
label_301a04:
    // 0x301a04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x301a04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_301a08:
    // 0x301a08: 0xc0c6250  jal         func_318940
label_301a0c:
    if (ctx->pc == 0x301A0Cu) {
        ctx->pc = 0x301A0Cu;
            // 0x301a0c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301A10u;
        goto label_301a10;
    }
    ctx->pc = 0x301A08u;
    SET_GPR_U32(ctx, 31, 0x301A10u);
    ctx->pc = 0x301A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301A08u;
            // 0x301a0c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301A10u; }
        if (ctx->pc != 0x301A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301A10u; }
        if (ctx->pc != 0x301A10u) { return; }
    }
    ctx->pc = 0x301A10u;
label_301a10:
    // 0x301a10: 0x8e420e34  lw          $v0, 0xE34($s2)
    ctx->pc = 0x301a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_301a14:
    // 0x301a14: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x301a14u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_301a18:
    // 0x301a18: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_301a1c:
    if (ctx->pc == 0x301A1Cu) {
        ctx->pc = 0x301A1Cu;
            // 0x301a1c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301A20u;
        goto label_301a20;
    }
    ctx->pc = 0x301A18u;
    {
        const bool branch_taken_0x301a18 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x301A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301A18u;
            // 0x301a1c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301a18) {
            ctx->pc = 0x301A30u;
            goto label_301a30;
        }
    }
    ctx->pc = 0x301A20u;
label_301a20:
    // 0x301a20: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x301a20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_301a24:
    // 0x301a24: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_301a28:
    if (ctx->pc == 0x301A28u) {
        ctx->pc = 0x301A2Cu;
        goto label_301a2c;
    }
    ctx->pc = 0x301A24u;
    {
        const bool branch_taken_0x301a24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x301a24) {
            ctx->pc = 0x301A30u;
            goto label_301a30;
        }
    }
    ctx->pc = 0x301A2Cu;
label_301a2c:
    // 0x301a2c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x301a2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_301a30:
    // 0x301a30: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_301a34:
    if (ctx->pc == 0x301A34u) {
        ctx->pc = 0x301A38u;
        goto label_301a38;
    }
    ctx->pc = 0x301A30u;
    {
        const bool branch_taken_0x301a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x301a30) {
            ctx->pc = 0x301A4Cu;
            goto label_301a4c;
        }
    }
    ctx->pc = 0x301A38u;
label_301a38:
    // 0x301a38: 0xc075eb4  jal         func_1D7AD0
label_301a3c:
    if (ctx->pc == 0x301A3Cu) {
        ctx->pc = 0x301A3Cu;
            // 0x301a3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301A40u;
        goto label_301a40;
    }
    ctx->pc = 0x301A38u;
    SET_GPR_U32(ctx, 31, 0x301A40u);
    ctx->pc = 0x301A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301A38u;
            // 0x301a3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301A40u; }
        if (ctx->pc != 0x301A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301A40u; }
        if (ctx->pc != 0x301A40u) { return; }
    }
    ctx->pc = 0x301A40u;
label_301a40:
    // 0x301a40: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_301a44:
    if (ctx->pc == 0x301A44u) {
        ctx->pc = 0x301A48u;
        goto label_301a48;
    }
    ctx->pc = 0x301A40u;
    {
        const bool branch_taken_0x301a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301a40) {
            ctx->pc = 0x301A4Cu;
            goto label_301a4c;
        }
    }
    ctx->pc = 0x301A48u;
label_301a48:
    // 0x301a48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x301a48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_301a4c:
    // 0x301a4c: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
label_301a50:
    if (ctx->pc == 0x301A50u) {
        ctx->pc = 0x301A50u;
            // 0x301a50: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->pc = 0x301A54u;
        goto label_301a54;
    }
    ctx->pc = 0x301A4Cu;
    {
        const bool branch_taken_0x301a4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x301a4c) {
            ctx->pc = 0x301A50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x301A4Cu;
            // 0x301a50: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x301A68u;
            goto label_301a68;
        }
    }
    ctx->pc = 0x301A54u;
label_301a54:
    // 0x301a54: 0x8e430e34  lw          $v1, 0xE34($s2)
    ctx->pc = 0x301a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_301a58:
    // 0x301a58: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x301a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_301a5c:
    // 0x301a5c: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_301a60:
    if (ctx->pc == 0x301A60u) {
        ctx->pc = 0x301A60u;
            // 0x301a60: 0x8e440d60  lw          $a0, 0xD60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
        ctx->pc = 0x301A64u;
        goto label_301a64;
    }
    ctx->pc = 0x301A5Cu;
    {
        const bool branch_taken_0x301a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x301a5c) {
            ctx->pc = 0x301A60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x301A5Cu;
            // 0x301a60: 0x8e440d60  lw          $a0, 0xD60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x301A7Cu;
            goto label_301a7c;
        }
    }
    ctx->pc = 0x301A64u;
label_301a64:
    // 0x301a64: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x301a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_301a68:
    // 0x301a68: 0xc073234  jal         func_1CC8D0
label_301a6c:
    if (ctx->pc == 0x301A6Cu) {
        ctx->pc = 0x301A6Cu;
            // 0x301a6c: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x301A70u;
        goto label_301a70;
    }
    ctx->pc = 0x301A68u;
    SET_GPR_U32(ctx, 31, 0x301A70u);
    ctx->pc = 0x301A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301A68u;
            // 0x301a6c: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301A70u; }
        if (ctx->pc != 0x301A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301A70u; }
        if (ctx->pc != 0x301A70u) { return; }
    }
    ctx->pc = 0x301A70u;
label_301a70:
    // 0x301a70: 0xc072a56  jal         func_1CA958
label_301a74:
    if (ctx->pc == 0x301A74u) {
        ctx->pc = 0x301A74u;
            // 0x301a74: 0x92440058  lbu         $a0, 0x58($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->pc = 0x301A78u;
        goto label_301a78;
    }
    ctx->pc = 0x301A70u;
    SET_GPR_U32(ctx, 31, 0x301A78u);
    ctx->pc = 0x301A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301A70u;
            // 0x301a74: 0x92440058  lbu         $a0, 0x58($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA958u;
    if (runtime->hasFunction(0x1CA958u)) {
        auto targetFn = runtime->lookupFunction(0x1CA958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301A78u; }
        if (ctx->pc != 0x301A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA958_0x1ca958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301A78u; }
        if (ctx->pc != 0x301A78u) { return; }
    }
    ctx->pc = 0x301A78u;
label_301a78:
    // 0x301a78: 0x8e440d60  lw          $a0, 0xD60($s2)
    ctx->pc = 0x301a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_301a7c:
    // 0x301a7c: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x301a7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_301a80:
    // 0x301a80: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x301a80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_301a84:
    // 0x301a84: 0x320f809  jalr        $t9
label_301a88:
    if (ctx->pc == 0x301A88u) {
        ctx->pc = 0x301A88u;
            // 0x301a88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x301A8Cu;
        goto label_301a8c;
    }
    ctx->pc = 0x301A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x301A8Cu);
        ctx->pc = 0x301A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301A84u;
            // 0x301a88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x301A8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x301A8Cu; }
            if (ctx->pc != 0x301A8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x301A8Cu;
label_301a8c:
    // 0x301a8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x301a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_301a90:
    // 0x301a90: 0xc07649c  jal         func_1D9270
label_301a94:
    if (ctx->pc == 0x301A94u) {
        ctx->pc = 0x301A94u;
            // 0x301a94: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->pc = 0x301A98u;
        goto label_301a98;
    }
    ctx->pc = 0x301A90u;
    SET_GPR_U32(ctx, 31, 0x301A98u);
    ctx->pc = 0x301A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301A90u;
            // 0x301a94: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301A98u; }
        if (ctx->pc != 0x301A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301A98u; }
        if (ctx->pc != 0x301A98u) { return; }
    }
    ctx->pc = 0x301A98u;
label_301a98:
    // 0x301a98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x301a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_301a9c:
    // 0x301a9c: 0xc0c0f84  jal         func_303E10
label_301aa0:
    if (ctx->pc == 0x301AA0u) {
        ctx->pc = 0x301AA0u;
            // 0x301aa0: 0xae400e30  sw          $zero, 0xE30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 0));
        ctx->pc = 0x301AA4u;
        goto label_301aa4;
    }
    ctx->pc = 0x301A9Cu;
    SET_GPR_U32(ctx, 31, 0x301AA4u);
    ctx->pc = 0x301AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301A9Cu;
            // 0x301aa0: 0xae400e30  sw          $zero, 0xE30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303E10u;
    if (runtime->hasFunction(0x303E10u)) {
        auto targetFn = runtime->lookupFunction(0x303E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301AA4u; }
        if (ctx->pc != 0x301AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303E10_0x303e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301AA4u; }
        if (ctx->pc != 0x301AA4u) { return; }
    }
    ctx->pc = 0x301AA4u;
label_301aa4:
    // 0x301aa4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x301aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_301aa8:
    // 0x301aa8: 0xc07626c  jal         func_1D89B0
label_301aac:
    if (ctx->pc == 0x301AACu) {
        ctx->pc = 0x301AACu;
            // 0x301aac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x301AB0u;
        goto label_301ab0;
    }
    ctx->pc = 0x301AA8u;
    SET_GPR_U32(ctx, 31, 0x301AB0u);
    ctx->pc = 0x301AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301AA8u;
            // 0x301aac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D89B0u;
    if (runtime->hasFunction(0x1D89B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D89B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301AB0u; }
        if (ctx->pc != 0x301AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D89B0_0x1d89b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301AB0u; }
        if (ctx->pc != 0x301AB0u) { return; }
    }
    ctx->pc = 0x301AB0u;
label_301ab0:
    // 0x301ab0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x301ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_301ab4:
    // 0x301ab4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x301ab4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_301ab8:
    // 0x301ab8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x301ab8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_301abc:
    // 0x301abc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x301abcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_301ac0:
    // 0x301ac0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x301ac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_301ac4:
    // 0x301ac4: 0x3e00008  jr          $ra
label_301ac8:
    if (ctx->pc == 0x301AC8u) {
        ctx->pc = 0x301AC8u;
            // 0x301ac8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x301ACCu;
        goto label_301acc;
    }
    ctx->pc = 0x301AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301AC4u;
            // 0x301ac8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x301ACCu;
label_301acc:
    // 0x301acc: 0x0  nop
    ctx->pc = 0x301accu;
    // NOP
}
