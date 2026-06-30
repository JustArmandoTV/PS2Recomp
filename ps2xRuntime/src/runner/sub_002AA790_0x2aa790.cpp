#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AA790
// Address: 0x2aa790 - 0x2aa8a0
void sub_002AA790_0x2aa790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA790_0x2aa790");
#endif

    switch (ctx->pc) {
        case 0x2aa790u: goto label_2aa790;
        case 0x2aa794u: goto label_2aa794;
        case 0x2aa798u: goto label_2aa798;
        case 0x2aa79cu: goto label_2aa79c;
        case 0x2aa7a0u: goto label_2aa7a0;
        case 0x2aa7a4u: goto label_2aa7a4;
        case 0x2aa7a8u: goto label_2aa7a8;
        case 0x2aa7acu: goto label_2aa7ac;
        case 0x2aa7b0u: goto label_2aa7b0;
        case 0x2aa7b4u: goto label_2aa7b4;
        case 0x2aa7b8u: goto label_2aa7b8;
        case 0x2aa7bcu: goto label_2aa7bc;
        case 0x2aa7c0u: goto label_2aa7c0;
        case 0x2aa7c4u: goto label_2aa7c4;
        case 0x2aa7c8u: goto label_2aa7c8;
        case 0x2aa7ccu: goto label_2aa7cc;
        case 0x2aa7d0u: goto label_2aa7d0;
        case 0x2aa7d4u: goto label_2aa7d4;
        case 0x2aa7d8u: goto label_2aa7d8;
        case 0x2aa7dcu: goto label_2aa7dc;
        case 0x2aa7e0u: goto label_2aa7e0;
        case 0x2aa7e4u: goto label_2aa7e4;
        case 0x2aa7e8u: goto label_2aa7e8;
        case 0x2aa7ecu: goto label_2aa7ec;
        case 0x2aa7f0u: goto label_2aa7f0;
        case 0x2aa7f4u: goto label_2aa7f4;
        case 0x2aa7f8u: goto label_2aa7f8;
        case 0x2aa7fcu: goto label_2aa7fc;
        case 0x2aa800u: goto label_2aa800;
        case 0x2aa804u: goto label_2aa804;
        case 0x2aa808u: goto label_2aa808;
        case 0x2aa80cu: goto label_2aa80c;
        case 0x2aa810u: goto label_2aa810;
        case 0x2aa814u: goto label_2aa814;
        case 0x2aa818u: goto label_2aa818;
        case 0x2aa81cu: goto label_2aa81c;
        case 0x2aa820u: goto label_2aa820;
        case 0x2aa824u: goto label_2aa824;
        case 0x2aa828u: goto label_2aa828;
        case 0x2aa82cu: goto label_2aa82c;
        case 0x2aa830u: goto label_2aa830;
        case 0x2aa834u: goto label_2aa834;
        case 0x2aa838u: goto label_2aa838;
        case 0x2aa83cu: goto label_2aa83c;
        case 0x2aa840u: goto label_2aa840;
        case 0x2aa844u: goto label_2aa844;
        case 0x2aa848u: goto label_2aa848;
        case 0x2aa84cu: goto label_2aa84c;
        case 0x2aa850u: goto label_2aa850;
        case 0x2aa854u: goto label_2aa854;
        case 0x2aa858u: goto label_2aa858;
        case 0x2aa85cu: goto label_2aa85c;
        case 0x2aa860u: goto label_2aa860;
        case 0x2aa864u: goto label_2aa864;
        case 0x2aa868u: goto label_2aa868;
        case 0x2aa86cu: goto label_2aa86c;
        case 0x2aa870u: goto label_2aa870;
        case 0x2aa874u: goto label_2aa874;
        case 0x2aa878u: goto label_2aa878;
        case 0x2aa87cu: goto label_2aa87c;
        case 0x2aa880u: goto label_2aa880;
        case 0x2aa884u: goto label_2aa884;
        case 0x2aa888u: goto label_2aa888;
        case 0x2aa88cu: goto label_2aa88c;
        case 0x2aa890u: goto label_2aa890;
        case 0x2aa894u: goto label_2aa894;
        case 0x2aa898u: goto label_2aa898;
        case 0x2aa89cu: goto label_2aa89c;
        default: break;
    }

    ctx->pc = 0x2aa790u;

label_2aa790:
    // 0x2aa790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2aa790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2aa794:
    // 0x2aa794: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2aa794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2aa798:
    // 0x2aa798: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aa798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2aa79c:
    // 0x2aa79c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aa79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2aa7a0:
    // 0x2aa7a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aa7a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2aa7a4:
    // 0x2aa7a4: 0x12200036  beqz        $s1, . + 4 + (0x36 << 2)
label_2aa7a8:
    if (ctx->pc == 0x2AA7A8u) {
        ctx->pc = 0x2AA7A8u;
            // 0x2aa7a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA7ACu;
        goto label_2aa7ac;
    }
    ctx->pc = 0x2AA7A4u;
    {
        const bool branch_taken_0x2aa7a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA7A4u;
            // 0x2aa7a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa7a4) {
            ctx->pc = 0x2AA880u;
            goto label_2aa880;
        }
    }
    ctx->pc = 0x2AA7ACu;
label_2aa7ac:
    // 0x2aa7ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2aa7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2aa7b0:
    // 0x2aa7b0: 0x2442fc80  addiu       $v0, $v0, -0x380
    ctx->pc = 0x2aa7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966400));
label_2aa7b4:
    // 0x2aa7b4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2aa7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2aa7b8:
    // 0x2aa7b8: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x2aa7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_2aa7bc:
    // 0x2aa7bc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2aa7c0:
    if (ctx->pc == 0x2AA7C0u) {
        ctx->pc = 0x2AA7C0u;
            // 0x2aa7c0: 0x8e240090  lw          $a0, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->pc = 0x2AA7C4u;
        goto label_2aa7c4;
    }
    ctx->pc = 0x2AA7BCu;
    {
        const bool branch_taken_0x2aa7bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa7bc) {
            ctx->pc = 0x2AA7C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA7BCu;
            // 0x2aa7c0: 0x8e240090  lw          $a0, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AA7D8u;
            goto label_2aa7d8;
        }
    }
    ctx->pc = 0x2AA7C4u;
label_2aa7c4:
    // 0x2aa7c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2aa7c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2aa7c8:
    // 0x2aa7c8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2aa7c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2aa7cc:
    // 0x2aa7cc: 0x320f809  jalr        $t9
label_2aa7d0:
    if (ctx->pc == 0x2AA7D0u) {
        ctx->pc = 0x2AA7D0u;
            // 0x2aa7d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2AA7D4u;
        goto label_2aa7d4;
    }
    ctx->pc = 0x2AA7CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2AA7D4u);
        ctx->pc = 0x2AA7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA7CCu;
            // 0x2aa7d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AA7D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AA7D4u; }
            if (ctx->pc != 0x2AA7D4u) { return; }
        }
        }
    }
    ctx->pc = 0x2AA7D4u;
label_2aa7d4:
    // 0x2aa7d4: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x2aa7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_2aa7d8:
    // 0x2aa7d8: 0xc04008c  jal         func_100230
label_2aa7dc:
    if (ctx->pc == 0x2AA7DCu) {
        ctx->pc = 0x2AA7E0u;
        goto label_2aa7e0;
    }
    ctx->pc = 0x2AA7D8u;
    SET_GPR_U32(ctx, 31, 0x2AA7E0u);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA7E0u; }
        if (ctx->pc != 0x2AA7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA7E0u; }
        if (ctx->pc != 0x2AA7E0u) { return; }
    }
    ctx->pc = 0x2AA7E0u;
label_2aa7e0:
    // 0x2aa7e0: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x2aa7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_2aa7e4:
    // 0x2aa7e4: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
label_2aa7e8:
    if (ctx->pc == 0x2AA7E8u) {
        ctx->pc = 0x2AA7E8u;
            // 0x2aa7e8: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->pc = 0x2AA7ECu;
        goto label_2aa7ec;
    }
    ctx->pc = 0x2AA7E4u;
    {
        const bool branch_taken_0x2aa7e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa7e4) {
            ctx->pc = 0x2AA7E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA7E4u;
            // 0x2aa7e8: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AA834u;
            goto label_2aa834;
        }
    }
    ctx->pc = 0x2AA7ECu;
label_2aa7ec:
    // 0x2aa7ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2aa7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2aa7f0:
    // 0x2aa7f0: 0x2442fcf0  addiu       $v0, $v0, -0x310
    ctx->pc = 0x2aa7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966512));
label_2aa7f4:
    // 0x2aa7f4: 0xc0aaa58  jal         func_2AA960
label_2aa7f8:
    if (ctx->pc == 0x2AA7F8u) {
        ctx->pc = 0x2AA7F8u;
            // 0x2aa7f8: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x2AA7FCu;
        goto label_2aa7fc;
    }
    ctx->pc = 0x2AA7F4u;
    SET_GPR_U32(ctx, 31, 0x2AA7FCu);
    ctx->pc = 0x2AA7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA7F4u;
            // 0x2aa7f8: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA960u;
    if (runtime->hasFunction(0x2AA960u)) {
        auto targetFn = runtime->lookupFunction(0x2AA960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA7FCu; }
        if (ctx->pc != 0x2AA7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AA960_0x2aa960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA7FCu; }
        if (ctx->pc != 0x2AA7FCu) { return; }
    }
    ctx->pc = 0x2AA7FCu;
label_2aa7fc:
    // 0x2aa7fc: 0xc0aaa4c  jal         func_2AA930
label_2aa800:
    if (ctx->pc == 0x2AA800u) {
        ctx->pc = 0x2AA800u;
            // 0x2aa800: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->pc = 0x2AA804u;
        goto label_2aa804;
    }
    ctx->pc = 0x2AA7FCu;
    SET_GPR_U32(ctx, 31, 0x2AA804u);
    ctx->pc = 0x2AA800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA7FCu;
            // 0x2aa800: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA930u;
    if (runtime->hasFunction(0x2AA930u)) {
        auto targetFn = runtime->lookupFunction(0x2AA930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA804u; }
        if (ctx->pc != 0x2AA804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AA930_0x2aa930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA804u; }
        if (ctx->pc != 0x2AA804u) { return; }
    }
    ctx->pc = 0x2AA804u;
label_2aa804:
    // 0x2aa804: 0xc0aaa48  jal         func_2AA920
label_2aa808:
    if (ctx->pc == 0x2AA808u) {
        ctx->pc = 0x2AA808u;
            // 0x2aa808: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x2AA80Cu;
        goto label_2aa80c;
    }
    ctx->pc = 0x2AA804u;
    SET_GPR_U32(ctx, 31, 0x2AA80Cu);
    ctx->pc = 0x2AA808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA804u;
            // 0x2aa808: 0x8e240050  lw          $a0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA920u;
    if (runtime->hasFunction(0x2AA920u)) {
        auto targetFn = runtime->lookupFunction(0x2AA920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA80Cu; }
        if (ctx->pc != 0x2AA80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AA920_0x2aa920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA80Cu; }
        if (ctx->pc != 0x2AA80Cu) { return; }
    }
    ctx->pc = 0x2AA80Cu;
label_2aa80c:
    // 0x2aa80c: 0x8e250068  lw          $a1, 0x68($s1)
    ctx->pc = 0x2aa80cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2aa810:
    // 0x2aa810: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
label_2aa814:
    if (ctx->pc == 0x2AA814u) {
        ctx->pc = 0x2AA814u;
            // 0x2aa814: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->pc = 0x2AA818u;
        goto label_2aa818;
    }
    ctx->pc = 0x2AA810u;
    {
        const bool branch_taken_0x2aa810 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa810) {
            ctx->pc = 0x2AA814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA810u;
            // 0x2aa814: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AA828u;
            goto label_2aa828;
        }
    }
    ctx->pc = 0x2AA818u;
label_2aa818:
    // 0x2aa818: 0xc0fe48c  jal         func_3F9230
label_2aa81c:
    if (ctx->pc == 0x2AA81Cu) {
        ctx->pc = 0x2AA81Cu;
            // 0x2aa81c: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->pc = 0x2AA820u;
        goto label_2aa820;
    }
    ctx->pc = 0x2AA818u;
    SET_GPR_U32(ctx, 31, 0x2AA820u);
    ctx->pc = 0x2AA81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA818u;
            // 0x2aa81c: 0x8e24003c  lw          $a0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA820u; }
        if (ctx->pc != 0x2AA820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA820u; }
        if (ctx->pc != 0x2AA820u) { return; }
    }
    ctx->pc = 0x2AA820u;
label_2aa820:
    // 0x2aa820: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x2aa820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
label_2aa824:
    // 0x2aa824: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x2aa824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_2aa828:
    // 0x2aa828: 0xc0aaa28  jal         func_2AA8A0
label_2aa82c:
    if (ctx->pc == 0x2AA82Cu) {
        ctx->pc = 0x2AA82Cu;
            // 0x2aa82c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2AA830u;
        goto label_2aa830;
    }
    ctx->pc = 0x2AA828u;
    SET_GPR_U32(ctx, 31, 0x2AA830u);
    ctx->pc = 0x2AA82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA828u;
            // 0x2aa82c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA8A0u;
    if (runtime->hasFunction(0x2AA8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2AA8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA830u; }
        if (ctx->pc != 0x2AA830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AA8A0_0x2aa8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA830u; }
        if (ctx->pc != 0x2AA830u) { return; }
    }
    ctx->pc = 0x2AA830u;
label_2aa830:
    // 0x2aa830: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x2aa830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_2aa834:
    // 0x2aa834: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2aa838:
    if (ctx->pc == 0x2AA838u) {
        ctx->pc = 0x2AA838u;
            // 0x2aa838: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x2AA83Cu;
        goto label_2aa83c;
    }
    ctx->pc = 0x2AA834u;
    {
        const bool branch_taken_0x2aa834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa834) {
            ctx->pc = 0x2AA838u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA834u;
            // 0x2aa838: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AA850u;
            goto label_2aa850;
        }
    }
    ctx->pc = 0x2AA83Cu;
label_2aa83c:
    // 0x2aa83c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2aa840:
    if (ctx->pc == 0x2AA840u) {
        ctx->pc = 0x2AA844u;
        goto label_2aa844;
    }
    ctx->pc = 0x2AA83Cu;
    {
        const bool branch_taken_0x2aa83c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa83c) {
            ctx->pc = 0x2AA84Cu;
            goto label_2aa84c;
        }
    }
    ctx->pc = 0x2AA844u;
label_2aa844:
    // 0x2aa844: 0xc0aad48  jal         func_2AB520
label_2aa848:
    if (ctx->pc == 0x2AA848u) {
        ctx->pc = 0x2AA848u;
            // 0x2aa848: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA84Cu;
        goto label_2aa84c;
    }
    ctx->pc = 0x2AA844u;
    SET_GPR_U32(ctx, 31, 0x2AA84Cu);
    ctx->pc = 0x2AA848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA844u;
            // 0x2aa848: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB520u;
    if (runtime->hasFunction(0x2AB520u)) {
        auto targetFn = runtime->lookupFunction(0x2AB520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA84Cu; }
        if (ctx->pc != 0x2AA84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB520_0x2ab520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA84Cu; }
        if (ctx->pc != 0x2AA84Cu) { return; }
    }
    ctx->pc = 0x2AA84Cu;
label_2aa84c:
    // 0x2aa84c: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x2aa84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2aa850:
    // 0x2aa850: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2aa854:
    if (ctx->pc == 0x2AA854u) {
        ctx->pc = 0x2AA854u;
            // 0x2aa854: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2AA858u;
        goto label_2aa858;
    }
    ctx->pc = 0x2AA850u;
    {
        const bool branch_taken_0x2aa850 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa850) {
            ctx->pc = 0x2AA854u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA850u;
            // 0x2aa854: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AA86Cu;
            goto label_2aa86c;
        }
    }
    ctx->pc = 0x2AA858u;
label_2aa858:
    // 0x2aa858: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2aa85c:
    if (ctx->pc == 0x2AA85Cu) {
        ctx->pc = 0x2AA860u;
        goto label_2aa860;
    }
    ctx->pc = 0x2AA858u;
    {
        const bool branch_taken_0x2aa858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa858) {
            ctx->pc = 0x2AA868u;
            goto label_2aa868;
        }
    }
    ctx->pc = 0x2AA860u;
label_2aa860:
    // 0x2aa860: 0xc0aad48  jal         func_2AB520
label_2aa864:
    if (ctx->pc == 0x2AA864u) {
        ctx->pc = 0x2AA864u;
            // 0x2aa864: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA868u;
        goto label_2aa868;
    }
    ctx->pc = 0x2AA860u;
    SET_GPR_U32(ctx, 31, 0x2AA868u);
    ctx->pc = 0x2AA864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA860u;
            // 0x2aa864: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB520u;
    if (runtime->hasFunction(0x2AB520u)) {
        auto targetFn = runtime->lookupFunction(0x2AB520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA868u; }
        if (ctx->pc != 0x2AA868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB520_0x2ab520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA868u; }
        if (ctx->pc != 0x2AA868u) { return; }
    }
    ctx->pc = 0x2AA868u;
label_2aa868:
    // 0x2aa868: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2aa868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2aa86c:
    // 0x2aa86c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2aa86cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2aa870:
    // 0x2aa870: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2aa874:
    if (ctx->pc == 0x2AA874u) {
        ctx->pc = 0x2AA874u;
            // 0x2aa874: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA878u;
        goto label_2aa878;
    }
    ctx->pc = 0x2AA870u;
    {
        const bool branch_taken_0x2aa870 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2aa870) {
            ctx->pc = 0x2AA874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA870u;
            // 0x2aa874: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AA884u;
            goto label_2aa884;
        }
    }
    ctx->pc = 0x2AA878u;
label_2aa878:
    // 0x2aa878: 0xc0400a8  jal         func_1002A0
label_2aa87c:
    if (ctx->pc == 0x2AA87Cu) {
        ctx->pc = 0x2AA87Cu;
            // 0x2aa87c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AA880u;
        goto label_2aa880;
    }
    ctx->pc = 0x2AA878u;
    SET_GPR_U32(ctx, 31, 0x2AA880u);
    ctx->pc = 0x2AA87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA878u;
            // 0x2aa87c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA880u; }
        if (ctx->pc != 0x2AA880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA880u; }
        if (ctx->pc != 0x2AA880u) { return; }
    }
    ctx->pc = 0x2AA880u;
label_2aa880:
    // 0x2aa880: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2aa880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aa884:
    // 0x2aa884: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2aa884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2aa888:
    // 0x2aa888: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aa888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2aa88c:
    // 0x2aa88c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aa88cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2aa890:
    // 0x2aa890: 0x3e00008  jr          $ra
label_2aa894:
    if (ctx->pc == 0x2AA894u) {
        ctx->pc = 0x2AA894u;
            // 0x2aa894: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2AA898u;
        goto label_2aa898;
    }
    ctx->pc = 0x2AA890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA890u;
            // 0x2aa894: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA898u;
label_2aa898:
    // 0x2aa898: 0x0  nop
    ctx->pc = 0x2aa898u;
    // NOP
label_2aa89c:
    // 0x2aa89c: 0x0  nop
    ctx->pc = 0x2aa89cu;
    // NOP
}
