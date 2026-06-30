#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A9760
// Address: 0x2a9760 - 0x2a9930
void sub_002A9760_0x2a9760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9760_0x2a9760");
#endif

    switch (ctx->pc) {
        case 0x2a9760u: goto label_2a9760;
        case 0x2a9764u: goto label_2a9764;
        case 0x2a9768u: goto label_2a9768;
        case 0x2a976cu: goto label_2a976c;
        case 0x2a9770u: goto label_2a9770;
        case 0x2a9774u: goto label_2a9774;
        case 0x2a9778u: goto label_2a9778;
        case 0x2a977cu: goto label_2a977c;
        case 0x2a9780u: goto label_2a9780;
        case 0x2a9784u: goto label_2a9784;
        case 0x2a9788u: goto label_2a9788;
        case 0x2a978cu: goto label_2a978c;
        case 0x2a9790u: goto label_2a9790;
        case 0x2a9794u: goto label_2a9794;
        case 0x2a9798u: goto label_2a9798;
        case 0x2a979cu: goto label_2a979c;
        case 0x2a97a0u: goto label_2a97a0;
        case 0x2a97a4u: goto label_2a97a4;
        case 0x2a97a8u: goto label_2a97a8;
        case 0x2a97acu: goto label_2a97ac;
        case 0x2a97b0u: goto label_2a97b0;
        case 0x2a97b4u: goto label_2a97b4;
        case 0x2a97b8u: goto label_2a97b8;
        case 0x2a97bcu: goto label_2a97bc;
        case 0x2a97c0u: goto label_2a97c0;
        case 0x2a97c4u: goto label_2a97c4;
        case 0x2a97c8u: goto label_2a97c8;
        case 0x2a97ccu: goto label_2a97cc;
        case 0x2a97d0u: goto label_2a97d0;
        case 0x2a97d4u: goto label_2a97d4;
        case 0x2a97d8u: goto label_2a97d8;
        case 0x2a97dcu: goto label_2a97dc;
        case 0x2a97e0u: goto label_2a97e0;
        case 0x2a97e4u: goto label_2a97e4;
        case 0x2a97e8u: goto label_2a97e8;
        case 0x2a97ecu: goto label_2a97ec;
        case 0x2a97f0u: goto label_2a97f0;
        case 0x2a97f4u: goto label_2a97f4;
        case 0x2a97f8u: goto label_2a97f8;
        case 0x2a97fcu: goto label_2a97fc;
        case 0x2a9800u: goto label_2a9800;
        case 0x2a9804u: goto label_2a9804;
        case 0x2a9808u: goto label_2a9808;
        case 0x2a980cu: goto label_2a980c;
        case 0x2a9810u: goto label_2a9810;
        case 0x2a9814u: goto label_2a9814;
        case 0x2a9818u: goto label_2a9818;
        case 0x2a981cu: goto label_2a981c;
        case 0x2a9820u: goto label_2a9820;
        case 0x2a9824u: goto label_2a9824;
        case 0x2a9828u: goto label_2a9828;
        case 0x2a982cu: goto label_2a982c;
        case 0x2a9830u: goto label_2a9830;
        case 0x2a9834u: goto label_2a9834;
        case 0x2a9838u: goto label_2a9838;
        case 0x2a983cu: goto label_2a983c;
        case 0x2a9840u: goto label_2a9840;
        case 0x2a9844u: goto label_2a9844;
        case 0x2a9848u: goto label_2a9848;
        case 0x2a984cu: goto label_2a984c;
        case 0x2a9850u: goto label_2a9850;
        case 0x2a9854u: goto label_2a9854;
        case 0x2a9858u: goto label_2a9858;
        case 0x2a985cu: goto label_2a985c;
        case 0x2a9860u: goto label_2a9860;
        case 0x2a9864u: goto label_2a9864;
        case 0x2a9868u: goto label_2a9868;
        case 0x2a986cu: goto label_2a986c;
        case 0x2a9870u: goto label_2a9870;
        case 0x2a9874u: goto label_2a9874;
        case 0x2a9878u: goto label_2a9878;
        case 0x2a987cu: goto label_2a987c;
        case 0x2a9880u: goto label_2a9880;
        case 0x2a9884u: goto label_2a9884;
        case 0x2a9888u: goto label_2a9888;
        case 0x2a988cu: goto label_2a988c;
        case 0x2a9890u: goto label_2a9890;
        case 0x2a9894u: goto label_2a9894;
        case 0x2a9898u: goto label_2a9898;
        case 0x2a989cu: goto label_2a989c;
        case 0x2a98a0u: goto label_2a98a0;
        case 0x2a98a4u: goto label_2a98a4;
        case 0x2a98a8u: goto label_2a98a8;
        case 0x2a98acu: goto label_2a98ac;
        case 0x2a98b0u: goto label_2a98b0;
        case 0x2a98b4u: goto label_2a98b4;
        case 0x2a98b8u: goto label_2a98b8;
        case 0x2a98bcu: goto label_2a98bc;
        case 0x2a98c0u: goto label_2a98c0;
        case 0x2a98c4u: goto label_2a98c4;
        case 0x2a98c8u: goto label_2a98c8;
        case 0x2a98ccu: goto label_2a98cc;
        case 0x2a98d0u: goto label_2a98d0;
        case 0x2a98d4u: goto label_2a98d4;
        case 0x2a98d8u: goto label_2a98d8;
        case 0x2a98dcu: goto label_2a98dc;
        case 0x2a98e0u: goto label_2a98e0;
        case 0x2a98e4u: goto label_2a98e4;
        case 0x2a98e8u: goto label_2a98e8;
        case 0x2a98ecu: goto label_2a98ec;
        case 0x2a98f0u: goto label_2a98f0;
        case 0x2a98f4u: goto label_2a98f4;
        case 0x2a98f8u: goto label_2a98f8;
        case 0x2a98fcu: goto label_2a98fc;
        case 0x2a9900u: goto label_2a9900;
        case 0x2a9904u: goto label_2a9904;
        case 0x2a9908u: goto label_2a9908;
        case 0x2a990cu: goto label_2a990c;
        case 0x2a9910u: goto label_2a9910;
        case 0x2a9914u: goto label_2a9914;
        case 0x2a9918u: goto label_2a9918;
        case 0x2a991cu: goto label_2a991c;
        case 0x2a9920u: goto label_2a9920;
        case 0x2a9924u: goto label_2a9924;
        case 0x2a9928u: goto label_2a9928;
        case 0x2a992cu: goto label_2a992c;
        default: break;
    }

    ctx->pc = 0x2a9760u;

label_2a9760:
    // 0x2a9760: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a9760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2a9764:
    // 0x2a9764: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a9764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2a9768:
    // 0x2a9768: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a9768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2a976c:
    // 0x2a976c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a976cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2a9770:
    // 0x2a9770: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a9770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2a9774:
    // 0x2a9774: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2a9774u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a9778:
    // 0x2a9778: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a9778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a977c:
    // 0x2a977c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2a977cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a9780:
    // 0x2a9780: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a9780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a9784:
    // 0x2a9784: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2a9784u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a9788:
    // 0x2a9788: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a9788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a978c:
    // 0x2a978c: 0x8c42e178  lw          $v0, -0x1E88($v0)
    ctx->pc = 0x2a978cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959480)));
label_2a9790:
    // 0x2a9790: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x2a9790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_2a9794:
    // 0x2a9794: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2a9798:
    if (ctx->pc == 0x2A9798u) {
        ctx->pc = 0x2A9798u;
            // 0x2a9798: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A979Cu;
        goto label_2a979c;
    }
    ctx->pc = 0x2A9794u;
    {
        const bool branch_taken_0x2a9794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9794u;
            // 0x2a9798: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9794) {
            ctx->pc = 0x2A97A8u;
            goto label_2a97a8;
        }
    }
    ctx->pc = 0x2A979Cu;
label_2a979c:
    // 0x2a979c: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x2a979cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_2a97a0:
    // 0x2a97a0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a97a4:
    if (ctx->pc == 0x2A97A4u) {
        ctx->pc = 0x2A97A4u;
            // 0x2a97a4: 0x2610fb70  addiu       $s0, $s0, -0x490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966128));
        ctx->pc = 0x2A97A8u;
        goto label_2a97a8;
    }
    ctx->pc = 0x2A97A0u;
    {
        const bool branch_taken_0x2a97a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A97A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A97A0u;
            // 0x2a97a4: 0x2610fb70  addiu       $s0, $s0, -0x490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a97a0) {
            ctx->pc = 0x2A97B0u;
            goto label_2a97b0;
        }
    }
    ctx->pc = 0x2A97A8u;
label_2a97a8:
    // 0x2a97a8: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x2a97a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_2a97ac:
    // 0x2a97ac: 0x2610fbf0  addiu       $s0, $s0, -0x410
    ctx->pc = 0x2a97acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966256));
label_2a97b0:
    // 0x2a97b0: 0xc04afe8  jal         func_12BFA0
label_2a97b4:
    if (ctx->pc == 0x2A97B4u) {
        ctx->pc = 0x2A97B4u;
            // 0x2a97b4: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x2A97B8u;
        goto label_2a97b8;
    }
    ctx->pc = 0x2A97B0u;
    SET_GPR_U32(ctx, 31, 0x2A97B8u);
    ctx->pc = 0x2A97B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A97B0u;
            // 0x2a97b4: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BFA0u;
    if (runtime->hasFunction(0x12BFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12BFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A97B8u; }
        if (ctx->pc != 0x2A97B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BFA0_0x12bfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A97B8u; }
        if (ctx->pc != 0x2A97B8u) { return; }
    }
    ctx->pc = 0x2A97B8u;
label_2a97b8:
    // 0x2a97b8: 0xae120054  sw          $s2, 0x54($s0)
    ctx->pc = 0x2a97b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 18));
label_2a97bc:
    // 0x2a97bc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2a97bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a97c0:
    // 0x2a97c0: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2a97c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_2a97c4:
    // 0x2a97c4: 0xae13004c  sw          $s3, 0x4C($s0)
    ctx->pc = 0x2a97c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 19));
label_2a97c8:
    // 0x2a97c8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_2a97cc:
    if (ctx->pc == 0x2A97CCu) {
        ctx->pc = 0x2A97CCu;
            // 0x2a97cc: 0xae110058  sw          $s1, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 17));
        ctx->pc = 0x2A97D0u;
        goto label_2a97d0;
    }
    ctx->pc = 0x2A97C8u;
    {
        const bool branch_taken_0x2a97c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A97CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A97C8u;
            // 0x2a97cc: 0xae110058  sw          $s1, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a97c8) {
            ctx->pc = 0x2A97D8u;
            goto label_2a97d8;
        }
    }
    ctx->pc = 0x2A97D0u;
label_2a97d0:
    // 0x2a97d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a97d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a97d4:
    // 0x2a97d4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2a97d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2a97d8:
    // 0x2a97d8: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2a97d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_2a97dc:
    // 0x2a97dc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2a97dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2a97e0:
    // 0x2a97e0: 0x8c42e180  lw          $v0, -0x1E80($v0)
    ctx->pc = 0x2a97e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959488)));
label_2a97e4:
    // 0x2a97e4: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x2a97e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_2a97e8:
    // 0x2a97e8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2a97ec:
    if (ctx->pc == 0x2A97ECu) {
        ctx->pc = 0x2A97ECu;
            // 0x2a97ec: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x2A97F0u;
        goto label_2a97f0;
    }
    ctx->pc = 0x2A97E8u;
    {
        const bool branch_taken_0x2a97e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a97e8) {
            ctx->pc = 0x2A97ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A97E8u;
            // 0x2a97ec: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A9804u;
            goto label_2a9804;
        }
    }
    ctx->pc = 0x2A97F0u;
label_2a97f0:
    // 0x2a97f0: 0x2684001c  addiu       $a0, $s4, 0x1C
    ctx->pc = 0x2a97f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
label_2a97f4:
    // 0x2a97f4: 0xc0ab0d4  jal         func_2AC350
label_2a97f8:
    if (ctx->pc == 0x2A97F8u) {
        ctx->pc = 0x2A97F8u;
            // 0x2a97f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A97FCu;
        goto label_2a97fc;
    }
    ctx->pc = 0x2A97F4u;
    SET_GPR_U32(ctx, 31, 0x2A97FCu);
    ctx->pc = 0x2A97F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A97F4u;
            // 0x2a97f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AC350u;
    if (runtime->hasFunction(0x2AC350u)) {
        auto targetFn = runtime->lookupFunction(0x2AC350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A97FCu; }
        if (ctx->pc != 0x2A97FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AC350_0x2ac350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A97FCu; }
        if (ctx->pc != 0x2A97FCu) { return; }
    }
    ctx->pc = 0x2A97FCu;
label_2a97fc:
    // 0x2a97fc: 0x10000040  b           . + 4 + (0x40 << 2)
label_2a9800:
    if (ctx->pc == 0x2A9800u) {
        ctx->pc = 0x2A9800u;
            // 0x2a9800: 0x8602005c  lh          $v0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->pc = 0x2A9804u;
        goto label_2a9804;
    }
    ctx->pc = 0x2A97FCu;
    {
        const bool branch_taken_0x2a97fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A97FCu;
            // 0x2a9800: 0x8602005c  lh          $v0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a97fc) {
            ctx->pc = 0x2A9900u;
            goto label_2a9900;
        }
    }
    ctx->pc = 0x2A9804u;
label_2a9804:
    // 0x2a9804: 0xc05a626  jal         func_169898
label_2a9808:
    if (ctx->pc == 0x2A9808u) {
        ctx->pc = 0x2A9808u;
            // 0x2a9808: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A980Cu;
        goto label_2a980c;
    }
    ctx->pc = 0x2A9804u;
    SET_GPR_U32(ctx, 31, 0x2A980Cu);
    ctx->pc = 0x2A9808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9804u;
            // 0x2a9808: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169898u;
    if (runtime->hasFunction(0x169898u)) {
        auto targetFn = runtime->lookupFunction(0x169898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A980Cu; }
        if (ctx->pc != 0x2A980Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169898_0x169898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A980Cu; }
        if (ctx->pc != 0x2A980Cu) { return; }
    }
    ctx->pc = 0x2A980Cu;
label_2a980c:
    // 0x2a980c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2a9810:
    if (ctx->pc == 0x2A9810u) {
        ctx->pc = 0x2A9810u;
            // 0x2a9810: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x2A9814u;
        goto label_2a9814;
    }
    ctx->pc = 0x2A980Cu;
    {
        const bool branch_taken_0x2a980c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A980Cu;
            // 0x2a9810: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a980c) {
            ctx->pc = 0x2A982Cu;
            goto label_2a982c;
        }
    }
    ctx->pc = 0x2A9814u;
label_2a9814:
    // 0x2a9814: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x2a9814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_2a9818:
    // 0x2a9818: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
label_2a981c:
    if (ctx->pc == 0x2A981Cu) {
        ctx->pc = 0x2A9820u;
        goto label_2a9820;
    }
    ctx->pc = 0x2A9818u;
    {
        const bool branch_taken_0x2a9818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9818) {
            ctx->pc = 0x2A98FCu;
            goto label_2a98fc;
        }
    }
    ctx->pc = 0x2A9820u;
label_2a9820:
    // 0x2a9820: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a9820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a9824:
    // 0x2a9824: 0x10000035  b           . + 4 + (0x35 << 2)
label_2a9828:
    if (ctx->pc == 0x2A9828u) {
        ctx->pc = 0x2A9828u;
            // 0x2a9828: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2A982Cu;
        goto label_2a982c;
    }
    ctx->pc = 0x2A9824u;
    {
        const bool branch_taken_0x2a9824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9824u;
            // 0x2a9828: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9824) {
            ctx->pc = 0x2A98FCu;
            goto label_2a98fc;
        }
    }
    ctx->pc = 0x2A982Cu;
label_2a982c:
    // 0x2a982c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a982cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a9830:
    // 0x2a9830: 0xa282008c  sb          $v0, 0x8C($s4)
    ctx->pc = 0x2a9830u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 140), (uint8_t)GPR_U32(ctx, 2));
label_2a9834:
    // 0x2a9834: 0xae900088  sw          $s0, 0x88($s4)
    ctx->pc = 0x2a9834u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 136), GPR_U32(ctx, 16));
label_2a9838:
    // 0x2a9838: 0x8e840084  lw          $a0, 0x84($s4)
    ctx->pc = 0x2a9838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_2a983c:
    // 0x2a983c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a983cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a9840:
    // 0x2a9840: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2a9840u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2a9844:
    // 0x2a9844: 0x320f809  jalr        $t9
label_2a9848:
    if (ctx->pc == 0x2A9848u) {
        ctx->pc = 0x2A984Cu;
        goto label_2a984c;
    }
    ctx->pc = 0x2A9844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A984Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A984Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A984Cu; }
            if (ctx->pc != 0x2A984Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2A984Cu;
label_2a984c:
    // 0x2a984c: 0x10000004  b           . + 4 + (0x4 << 2)
label_2a9850:
    if (ctx->pc == 0x2A9850u) {
        ctx->pc = 0x2A9854u;
        goto label_2a9854;
    }
    ctx->pc = 0x2A984Cu;
    {
        const bool branch_taken_0x2a984c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a984c) {
            ctx->pc = 0x2A9860u;
            goto label_2a9860;
        }
    }
    ctx->pc = 0x2A9854u;
label_2a9854:
    // 0x2a9854: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x2a9854u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_2a9858:
    // 0x2a9858: 0x320f809  jalr        $t9
label_2a985c:
    if (ctx->pc == 0x2A985Cu) {
        ctx->pc = 0x2A985Cu;
            // 0x2a985c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9860u;
        goto label_2a9860;
    }
    ctx->pc = 0x2A9858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A9860u);
        ctx->pc = 0x2A985Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9858u;
            // 0x2a985c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A9860u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A9860u; }
            if (ctx->pc != 0x2A9860u) { return; }
        }
        }
    }
    ctx->pc = 0x2A9860u;
label_2a9860:
    // 0x2a9860: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2a9860u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2a9864:
    // 0x2a9864: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2a9864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2a9868:
    // 0x2a9868: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x2a9868u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_2a986c:
    // 0x2a986c: 0x320f809  jalr        $t9
label_2a9870:
    if (ctx->pc == 0x2A9870u) {
        ctx->pc = 0x2A9870u;
            // 0x2a9870: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9874u;
        goto label_2a9874;
    }
    ctx->pc = 0x2A986Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A9874u);
        ctx->pc = 0x2A9870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A986Cu;
            // 0x2a9870: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A9874u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A9874u; }
            if (ctx->pc != 0x2A9874u) { return; }
        }
        }
    }
    ctx->pc = 0x2A9874u;
label_2a9874:
    // 0x2a9874: 0xa602005e  sh          $v0, 0x5E($s0)
    ctx->pc = 0x2a9874u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 94), (uint16_t)GPR_U32(ctx, 2));
label_2a9878:
    // 0x2a9878: 0x8603005c  lh          $v1, 0x5C($s0)
    ctx->pc = 0x2a9878u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
label_2a987c:
    // 0x2a987c: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x2a987cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2a9880:
    // 0x2a9880: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a9880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2a9884:
    // 0x2a9884: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_2a9888:
    if (ctx->pc == 0x2A9888u) {
        ctx->pc = 0x2A988Cu;
        goto label_2a988c;
    }
    ctx->pc = 0x2A9884u;
    {
        const bool branch_taken_0x2a9884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9884) {
            ctx->pc = 0x2A98C0u;
            goto label_2a98c0;
        }
    }
    ctx->pc = 0x2A988Cu;
label_2a988c:
    // 0x2a988c: 0x8602005e  lh          $v0, 0x5E($s0)
    ctx->pc = 0x2a988cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 94)));
label_2a9890:
    // 0x2a9890: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9890u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a9894:
    // 0x2a9894: 0x0  nop
    ctx->pc = 0x2a9894u;
    // NOP
label_2a9898:
    // 0x2a9898: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a9898u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2a989c:
    // 0x2a989c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a989cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a98a0:
    // 0x2a98a0: 0x0  nop
    ctx->pc = 0x2a98a0u;
    // NOP
label_2a98a4:
    // 0x2a98a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a98a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2a98a8:
    // 0x2a98a8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2a98a8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_2a98ac:
    // 0x2a98ac: 0x0  nop
    ctx->pc = 0x2a98acu;
    // NOP
label_2a98b0:
    // 0x2a98b0: 0x0  nop
    ctx->pc = 0x2a98b0u;
    // NOP
label_2a98b4:
    // 0x2a98b4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2a98b8:
    if (ctx->pc == 0x2A98B8u) {
        ctx->pc = 0x2A98B8u;
            // 0x2a98b8: 0xe6000050  swc1        $f0, 0x50($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->pc = 0x2A98BCu;
        goto label_2a98bc;
    }
    ctx->pc = 0x2A98B4u;
    {
        const bool branch_taken_0x2a98b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A98B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A98B4u;
            // 0x2a98b8: 0xe6000050  swc1        $f0, 0x50($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a98b4) {
            ctx->pc = 0x2A98C8u;
            goto label_2a98c8;
        }
    }
    ctx->pc = 0x2A98BCu;
label_2a98bc:
    // 0x2a98bc: 0x0  nop
    ctx->pc = 0x2a98bcu;
    // NOP
label_2a98c0:
    // 0x2a98c0: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2a98c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_2a98c4:
    // 0x2a98c4: 0x0  nop
    ctx->pc = 0x2a98c4u;
    // NOP
label_2a98c8:
    // 0x2a98c8: 0x9282008c  lbu         $v0, 0x8C($s4)
    ctx->pc = 0x2a98c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 140)));
label_2a98cc:
    // 0x2a98cc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2a98ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2a98d0:
    // 0x2a98d0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a98d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2a98d4:
    // 0x2a98d4: 0x5040ffdf  beql        $v0, $zero, . + 4 + (-0x21 << 2)
label_2a98d8:
    if (ctx->pc == 0x2A98D8u) {
        ctx->pc = 0x2A98D8u;
            // 0x2a98d8: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x2A98DCu;
        goto label_2a98dc;
    }
    ctx->pc = 0x2A98D4u;
    {
        const bool branch_taken_0x2a98d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a98d4) {
            ctx->pc = 0x2A98D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A98D4u;
            // 0x2a98d8: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A9854u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9854;
        }
    }
    ctx->pc = 0x2A98DCu;
label_2a98dc:
    // 0x2a98dc: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2a98dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2a98e0:
    // 0x2a98e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2a98e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a98e4:
    // 0x2a98e4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2a98e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2a98e8:
    // 0x2a98e8: 0x320f809  jalr        $t9
label_2a98ec:
    if (ctx->pc == 0x2A98ECu) {
        ctx->pc = 0x2A98ECu;
            // 0x2a98ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A98F0u;
        goto label_2a98f0;
    }
    ctx->pc = 0x2A98E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A98F0u);
        ctx->pc = 0x2A98ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A98E8u;
            // 0x2a98ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A98F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A98F0u; }
            if (ctx->pc != 0x2A98F0u) { return; }
        }
        }
    }
    ctx->pc = 0x2A98F0u;
label_2a98f0:
    // 0x2a98f0: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x2a98f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2a98f4:
    // 0x2a98f4: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2a98f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_2a98f8:
    // 0x2a98f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a98f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a98fc:
    // 0x2a98fc: 0x8602005c  lh          $v0, 0x5C($s0)
    ctx->pc = 0x2a98fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 92)));
label_2a9900:
    // 0x2a9900: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a9900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2a9904:
    // 0x2a9904: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a9904u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2a9908:
    // 0x2a9908: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a9908u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a990c:
    // 0x2a990c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x2a990cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_2a9910:
    // 0x2a9910: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a9910u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a9914:
    // 0x2a9914: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a9914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a9918:
    // 0x2a9918: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a9918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a991c:
    // 0x2a991c: 0x3e00008  jr          $ra
label_2a9920:
    if (ctx->pc == 0x2A9920u) {
        ctx->pc = 0x2A9920u;
            // 0x2a9920: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2A9924u;
        goto label_2a9924;
    }
    ctx->pc = 0x2A991Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A991Cu;
            // 0x2a9920: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A9924u;
label_2a9924:
    // 0x2a9924: 0x0  nop
    ctx->pc = 0x2a9924u;
    // NOP
label_2a9928:
    // 0x2a9928: 0x0  nop
    ctx->pc = 0x2a9928u;
    // NOP
label_2a992c:
    // 0x2a992c: 0x0  nop
    ctx->pc = 0x2a992cu;
    // NOP
}
