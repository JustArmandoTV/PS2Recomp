#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00392880
// Address: 0x392880 - 0x392980
void sub_00392880_0x392880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00392880_0x392880");
#endif

    switch (ctx->pc) {
        case 0x392880u: goto label_392880;
        case 0x392884u: goto label_392884;
        case 0x392888u: goto label_392888;
        case 0x39288cu: goto label_39288c;
        case 0x392890u: goto label_392890;
        case 0x392894u: goto label_392894;
        case 0x392898u: goto label_392898;
        case 0x39289cu: goto label_39289c;
        case 0x3928a0u: goto label_3928a0;
        case 0x3928a4u: goto label_3928a4;
        case 0x3928a8u: goto label_3928a8;
        case 0x3928acu: goto label_3928ac;
        case 0x3928b0u: goto label_3928b0;
        case 0x3928b4u: goto label_3928b4;
        case 0x3928b8u: goto label_3928b8;
        case 0x3928bcu: goto label_3928bc;
        case 0x3928c0u: goto label_3928c0;
        case 0x3928c4u: goto label_3928c4;
        case 0x3928c8u: goto label_3928c8;
        case 0x3928ccu: goto label_3928cc;
        case 0x3928d0u: goto label_3928d0;
        case 0x3928d4u: goto label_3928d4;
        case 0x3928d8u: goto label_3928d8;
        case 0x3928dcu: goto label_3928dc;
        case 0x3928e0u: goto label_3928e0;
        case 0x3928e4u: goto label_3928e4;
        case 0x3928e8u: goto label_3928e8;
        case 0x3928ecu: goto label_3928ec;
        case 0x3928f0u: goto label_3928f0;
        case 0x3928f4u: goto label_3928f4;
        case 0x3928f8u: goto label_3928f8;
        case 0x3928fcu: goto label_3928fc;
        case 0x392900u: goto label_392900;
        case 0x392904u: goto label_392904;
        case 0x392908u: goto label_392908;
        case 0x39290cu: goto label_39290c;
        case 0x392910u: goto label_392910;
        case 0x392914u: goto label_392914;
        case 0x392918u: goto label_392918;
        case 0x39291cu: goto label_39291c;
        case 0x392920u: goto label_392920;
        case 0x392924u: goto label_392924;
        case 0x392928u: goto label_392928;
        case 0x39292cu: goto label_39292c;
        case 0x392930u: goto label_392930;
        case 0x392934u: goto label_392934;
        case 0x392938u: goto label_392938;
        case 0x39293cu: goto label_39293c;
        case 0x392940u: goto label_392940;
        case 0x392944u: goto label_392944;
        case 0x392948u: goto label_392948;
        case 0x39294cu: goto label_39294c;
        case 0x392950u: goto label_392950;
        case 0x392954u: goto label_392954;
        case 0x392958u: goto label_392958;
        case 0x39295cu: goto label_39295c;
        case 0x392960u: goto label_392960;
        case 0x392964u: goto label_392964;
        case 0x392968u: goto label_392968;
        case 0x39296cu: goto label_39296c;
        case 0x392970u: goto label_392970;
        case 0x392974u: goto label_392974;
        case 0x392978u: goto label_392978;
        case 0x39297cu: goto label_39297c;
        default: break;
    }

    ctx->pc = 0x392880u;

label_392880:
    // 0x392880: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x392880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_392884:
    // 0x392884: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x392884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_392888:
    // 0x392888: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x392888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_39288c:
    // 0x39288c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39288cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_392890:
    // 0x392890: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x392890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_392894:
    // 0x392894: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x392894u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_392898:
    // 0x392898: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x392898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39289c:
    // 0x39289c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x39289cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3928a0:
    // 0x3928a0: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x3928a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_3928a4:
    // 0x3928a4: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
label_3928a8:
    if (ctx->pc == 0x3928A8u) {
        ctx->pc = 0x3928A8u;
            // 0x3928a8: 0x8ca4000c  lw          $a0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->pc = 0x3928ACu;
        goto label_3928ac;
    }
    ctx->pc = 0x3928A4u;
    {
        const bool branch_taken_0x3928a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3928A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3928A4u;
            // 0x3928a8: 0x8ca4000c  lw          $a0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3928a4) {
            ctx->pc = 0x392968u;
            goto label_392968;
        }
    }
    ctx->pc = 0x3928ACu;
label_3928ac:
    // 0x3928ac: 0xae300020  sw          $s0, 0x20($s1)
    ctx->pc = 0x3928acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 16));
label_3928b0:
    // 0x3928b0: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3928b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3928b4:
    // 0x3928b4: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x3928b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_3928b8:
    // 0x3928b8: 0xa082004c  sb          $v0, 0x4C($a0)
    ctx->pc = 0x3928b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 76), (uint8_t)GPR_U32(ctx, 2));
label_3928bc:
    // 0x3928bc: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x3928bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_3928c0:
    // 0x3928c0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x3928c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_3928c4:
    // 0x3928c4: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x3928c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_3928c8:
    // 0x3928c8: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x3928c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_3928cc:
    // 0x3928cc: 0x8e320024  lw          $s2, 0x24($s1)
    ctx->pc = 0x3928ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3928d0:
    // 0x3928d0: 0xc088b74  jal         func_222DD0
label_3928d4:
    if (ctx->pc == 0x3928D4u) {
        ctx->pc = 0x3928D4u;
            // 0x3928d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3928D8u;
        goto label_3928d8;
    }
    ctx->pc = 0x3928D0u;
    SET_GPR_U32(ctx, 31, 0x3928D8u);
    ctx->pc = 0x3928D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3928D0u;
            // 0x3928d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3928D8u; }
        if (ctx->pc != 0x3928D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3928D8u; }
        if (ctx->pc != 0x3928D8u) { return; }
    }
    ctx->pc = 0x3928D8u;
label_3928d8:
    // 0x3928d8: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x3928d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_3928dc:
    // 0x3928dc: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x3928dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_3928e0:
    // 0x3928e0: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3928e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3928e4:
    // 0x3928e4: 0x320f809  jalr        $t9
label_3928e8:
    if (ctx->pc == 0x3928E8u) {
        ctx->pc = 0x3928E8u;
            // 0x3928e8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3928ECu;
        goto label_3928ec;
    }
    ctx->pc = 0x3928E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3928ECu);
        ctx->pc = 0x3928E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3928E4u;
            // 0x3928e8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3928ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3928ECu; }
            if (ctx->pc != 0x3928ECu) { return; }
        }
        }
    }
    ctx->pc = 0x3928ECu;
label_3928ec:
    // 0x3928ec: 0x8e320024  lw          $s2, 0x24($s1)
    ctx->pc = 0x3928ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3928f0:
    // 0x3928f0: 0xc088b74  jal         func_222DD0
label_3928f4:
    if (ctx->pc == 0x3928F4u) {
        ctx->pc = 0x3928F4u;
            // 0x3928f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3928F8u;
        goto label_3928f8;
    }
    ctx->pc = 0x3928F0u;
    SET_GPR_U32(ctx, 31, 0x3928F8u);
    ctx->pc = 0x3928F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3928F0u;
            // 0x3928f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3928F8u; }
        if (ctx->pc != 0x3928F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3928F8u; }
        if (ctx->pc != 0x3928F8u) { return; }
    }
    ctx->pc = 0x3928F8u;
label_3928f8:
    // 0x3928f8: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x3928f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_3928fc:
    // 0x3928fc: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x3928fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_392900:
    // 0x392900: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x392900u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_392904:
    // 0x392904: 0x320f809  jalr        $t9
label_392908:
    if (ctx->pc == 0x392908u) {
        ctx->pc = 0x392908u;
            // 0x392908: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x39290Cu;
        goto label_39290c;
    }
    ctx->pc = 0x392904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39290Cu);
        ctx->pc = 0x392908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392904u;
            // 0x392908: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39290Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39290Cu; }
            if (ctx->pc != 0x39290Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39290Cu;
label_39290c:
    // 0x39290c: 0x8e040a6c  lw          $a0, 0xA6C($s0)
    ctx->pc = 0x39290cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2668)));
label_392910:
    // 0x392910: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x392910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_392914:
    // 0x392914: 0x5083000f  beql        $a0, $v1, . + 4 + (0xF << 2)
label_392918:
    if (ctx->pc == 0x392918u) {
        ctx->pc = 0x392918u;
            // 0x392918: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x39291Cu;
        goto label_39291c;
    }
    ctx->pc = 0x392914u;
    {
        const bool branch_taken_0x392914 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x392914) {
            ctx->pc = 0x392918u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x392914u;
            // 0x392918: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x392954u;
            goto label_392954;
        }
    }
    ctx->pc = 0x39291Cu;
label_39291c:
    // 0x39291c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x39291cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_392920:
    // 0x392920: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_392924:
    if (ctx->pc == 0x392924u) {
        ctx->pc = 0x392928u;
        goto label_392928;
    }
    ctx->pc = 0x392920u;
    {
        const bool branch_taken_0x392920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x392920) {
            ctx->pc = 0x392950u;
            goto label_392950;
        }
    }
    ctx->pc = 0x392928u;
label_392928:
    // 0x392928: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x392928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39292c:
    // 0x39292c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_392930:
    if (ctx->pc == 0x392930u) {
        ctx->pc = 0x392934u;
        goto label_392934;
    }
    ctx->pc = 0x39292Cu;
    {
        const bool branch_taken_0x39292c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x39292c) {
            ctx->pc = 0x392950u;
            goto label_392950;
        }
    }
    ctx->pc = 0x392934u;
label_392934:
    // 0x392934: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x392934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_392938:
    // 0x392938: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_39293c:
    if (ctx->pc == 0x39293Cu) {
        ctx->pc = 0x39293Cu;
            // 0x39293c: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->pc = 0x392940u;
        goto label_392940;
    }
    ctx->pc = 0x392938u;
    {
        const bool branch_taken_0x392938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x392938) {
            ctx->pc = 0x39293Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x392938u;
            // 0x39293c: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x392948u;
            goto label_392948;
        }
    }
    ctx->pc = 0x392940u;
label_392940:
    // 0x392940: 0x10000008  b           . + 4 + (0x8 << 2)
label_392944:
    if (ctx->pc == 0x392944u) {
        ctx->pc = 0x392944u;
            // 0x392944: 0xae200030  sw          $zero, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
        ctx->pc = 0x392948u;
        goto label_392948;
    }
    ctx->pc = 0x392940u;
    {
        const bool branch_taken_0x392940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392940u;
            // 0x392944: 0xae200030  sw          $zero, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392940) {
            ctx->pc = 0x392964u;
            goto label_392964;
        }
    }
    ctx->pc = 0x392948u;
label_392948:
    // 0x392948: 0x10000007  b           . + 4 + (0x7 << 2)
label_39294c:
    if (ctx->pc == 0x39294Cu) {
        ctx->pc = 0x39294Cu;
            // 0x39294c: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
        ctx->pc = 0x392950u;
        goto label_392950;
    }
    ctx->pc = 0x392948u;
    {
        const bool branch_taken_0x392948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39294Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392948u;
            // 0x39294c: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392948) {
            ctx->pc = 0x392968u;
            goto label_392968;
        }
    }
    ctx->pc = 0x392950u;
label_392950:
    // 0x392950: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x392950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_392954:
    // 0x392954: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x392954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_392958:
    // 0x392958: 0xae240030  sw          $a0, 0x30($s1)
    ctx->pc = 0x392958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 4));
label_39295c:
    // 0x39295c: 0x10000002  b           . + 4 + (0x2 << 2)
label_392960:
    if (ctx->pc == 0x392960u) {
        ctx->pc = 0x392960u;
            // 0x392960: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
        ctx->pc = 0x392964u;
        goto label_392964;
    }
    ctx->pc = 0x39295Cu;
    {
        const bool branch_taken_0x39295c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39295Cu;
            // 0x392960: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39295c) {
            ctx->pc = 0x392968u;
            goto label_392968;
        }
    }
    ctx->pc = 0x392964u;
label_392964:
    // 0x392964: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x392964u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
label_392968:
    // 0x392968: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x392968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_39296c:
    // 0x39296c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39296cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_392970:
    // 0x392970: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x392970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_392974:
    // 0x392974: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x392974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_392978:
    // 0x392978: 0x3e00008  jr          $ra
label_39297c:
    if (ctx->pc == 0x39297Cu) {
        ctx->pc = 0x39297Cu;
            // 0x39297c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x392980u;
        goto label_fallthrough_0x392978;
    }
    ctx->pc = 0x392978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39297Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x392978u;
            // 0x39297c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x392978:
    ctx->pc = 0x392980u;
}
