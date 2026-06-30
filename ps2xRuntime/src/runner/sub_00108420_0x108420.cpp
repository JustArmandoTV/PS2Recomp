#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00108420
// Address: 0x108420 - 0x1089b8
void sub_00108420_0x108420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108420_0x108420");
#endif

    switch (ctx->pc) {
        case 0x10843cu: goto label_10843c;
        case 0x10844cu: goto label_10844c;
        case 0x10845cu: goto label_10845c;
        case 0x108478u: goto label_108478;
        case 0x108488u: goto label_108488;
        case 0x1084a4u: goto label_1084a4;
        case 0x1084b4u: goto label_1084b4;
        case 0x1084c0u: goto label_1084c0;
        case 0x1084c8u: goto label_1084c8;
        case 0x1084d4u: goto label_1084d4;
        case 0x1084e4u: goto label_1084e4;
        case 0x1085b8u: goto label_1085b8;
        case 0x1085f4u: goto label_1085f4;
        case 0x108610u: goto label_108610;
        case 0x10863cu: goto label_10863c;
        case 0x1086c0u: goto label_1086c0;
        case 0x1086d0u: goto label_1086d0;
        case 0x1086f4u: goto label_1086f4;
        case 0x108700u: goto label_108700;
        case 0x108710u: goto label_108710;
        case 0x108738u: goto label_108738;
        case 0x108744u: goto label_108744;
        case 0x108758u: goto label_108758;
        case 0x108764u: goto label_108764;
        case 0x1087c8u: goto label_1087c8;
        case 0x1087d8u: goto label_1087d8;
        case 0x1087e8u: goto label_1087e8;
        case 0x1087f8u: goto label_1087f8;
        case 0x108808u: goto label_108808;
        case 0x108838u: goto label_108838;
        case 0x108858u: goto label_108858;
        case 0x108868u: goto label_108868;
        case 0x108878u: goto label_108878;
        case 0x108888u: goto label_108888;
        case 0x1088b8u: goto label_1088b8;
        case 0x1088e8u: goto label_1088e8;
        case 0x108918u: goto label_108918;
        case 0x108928u: goto label_108928;
        case 0x108934u: goto label_108934;
        case 0x108944u: goto label_108944;
        case 0x108954u: goto label_108954;
        case 0x108960u: goto label_108960;
        case 0x10896cu: goto label_10896c;
        case 0x108978u: goto label_108978;
        case 0x108984u: goto label_108984;
        default: break;
    }

    ctx->pc = 0x108420u;

    // 0x108420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x108420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x108424: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x108424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x108428: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10842c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10842cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x108430: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x108430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x108434: 0xc041a12  jal         func_106848
    ctx->pc = 0x108434u;
    SET_GPR_U32(ctx, 31, 0x10843Cu);
    ctx->pc = 0x108438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108434u;
            // 0x108438: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10843Cu; }
        if (ctx->pc != 0x10843Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10843Cu; }
        if (ctx->pc != 0x10843Cu) { return; }
    }
    ctx->pc = 0x10843Cu;
label_10843c:
    // 0x10843c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10843cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108444: 0xc041a12  jal         func_106848
    ctx->pc = 0x108444u;
    SET_GPR_U32(ctx, 31, 0x10844Cu);
    ctx->pc = 0x108448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108444u;
            // 0x108448: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10844Cu; }
        if (ctx->pc != 0x10844Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10844Cu; }
        if (ctx->pc != 0x10844Cu) { return; }
    }
    ctx->pc = 0x10844Cu;
label_10844c:
    // 0x10844c: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x10844cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x108450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108454: 0xc041a12  jal         func_106848
    ctx->pc = 0x108454u;
    SET_GPR_U32(ctx, 31, 0x10845Cu);
    ctx->pc = 0x108458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108454u;
            // 0x108458: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10845Cu; }
        if (ctx->pc != 0x10845Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10845Cu; }
        if (ctx->pc != 0x10845Cu) { return; }
    }
    ctx->pc = 0x10845Cu;
label_10845c:
    // 0x10845c: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x10845cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x108460: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x108460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x108464: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x108464u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x108468: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x108468u;
    {
        const bool branch_taken_0x108468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10846Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108468u;
            // 0x10846c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108468) {
            ctx->pc = 0x108490u;
            goto label_108490;
        }
    }
    ctx->pc = 0x108470u;
    // 0x108470: 0xc041a12  jal         func_106848
    ctx->pc = 0x108470u;
    SET_GPR_U32(ctx, 31, 0x108478u);
    ctx->pc = 0x108474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108470u;
            // 0x108474: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108478u; }
        if (ctx->pc != 0x108478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108478u; }
        if (ctx->pc != 0x108478u) { return; }
    }
    ctx->pc = 0x108478u;
label_108478:
    // 0x108478: 0xae020164  sw          $v0, 0x164($s0)
    ctx->pc = 0x108478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 2));
    // 0x10847c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10847cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108480: 0xc041a12  jal         func_106848
    ctx->pc = 0x108480u;
    SET_GPR_U32(ctx, 31, 0x108488u);
    ctx->pc = 0x108484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108480u;
            // 0x108484: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108488u; }
        if (ctx->pc != 0x108488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108488u; }
        if (ctx->pc != 0x108488u) { return; }
    }
    ctx->pc = 0x108488u;
label_108488:
    // 0x108488: 0xae020168  sw          $v0, 0x168($s0)
    ctx->pc = 0x108488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
    // 0x10848c: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x10848cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_108490:
    // 0x108490: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x108490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x108494: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x108494u;
    {
        const bool branch_taken_0x108494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x108498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108494u;
            // 0x108498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108494) {
            ctx->pc = 0x1084CCu;
            goto label_1084cc;
        }
    }
    ctx->pc = 0x10849Cu;
    // 0x10849c: 0xc041a12  jal         func_106848
    ctx->pc = 0x10849Cu;
    SET_GPR_U32(ctx, 31, 0x1084A4u);
    ctx->pc = 0x1084A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10849Cu;
            // 0x1084a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1084A4u; }
        if (ctx->pc != 0x1084A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1084A4u; }
        if (ctx->pc != 0x1084A4u) { return; }
    }
    ctx->pc = 0x1084A4u;
label_1084a4:
    // 0x1084a4: 0xae02016c  sw          $v0, 0x16C($s0)
    ctx->pc = 0x1084a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 2));
    // 0x1084a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1084a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1084ac: 0xc041a12  jal         func_106848
    ctx->pc = 0x1084ACu;
    SET_GPR_U32(ctx, 31, 0x1084B4u);
    ctx->pc = 0x1084B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1084ACu;
            // 0x1084b0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1084B4u; }
        if (ctx->pc != 0x1084B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1084B4u; }
        if (ctx->pc != 0x1084B4u) { return; }
    }
    ctx->pc = 0x1084B4u;
label_1084b4:
    // 0x1084b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1084B4u;
    {
        const bool branch_taken_0x1084b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1084B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1084B4u;
            // 0x1084b8: 0xae020170  sw          $v0, 0x170($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084b4) {
            ctx->pc = 0x1084C8u;
            goto label_1084c8;
        }
    }
    ctx->pc = 0x1084BCu;
    // 0x1084bc: 0x0  nop
    ctx->pc = 0x1084bcu;
    // NOP
label_1084c0:
    // 0x1084c0: 0xc0422f0  jal         func_108BC0
    ctx->pc = 0x1084C0u;
    SET_GPR_U32(ctx, 31, 0x1084C8u);
    ctx->pc = 0x1084C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1084C0u;
            // 0x1084c4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108BC0u;
    if (runtime->hasFunction(0x108BC0u)) {
        auto targetFn = runtime->lookupFunction(0x108BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1084C8u; }
        if (ctx->pc != 0x1084C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108BC0_0x108bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1084C8u; }
        if (ctx->pc != 0x1084C8u) { return; }
    }
    ctx->pc = 0x1084C8u;
label_1084c8:
    // 0x1084c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1084c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1084cc:
    // 0x1084cc: 0xc041a12  jal         func_106848
    ctx->pc = 0x1084CCu;
    SET_GPR_U32(ctx, 31, 0x1084D4u);
    ctx->pc = 0x1084D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1084CCu;
            // 0x1084d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1084D4u; }
        if (ctx->pc != 0x1084D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1084D4u; }
        if (ctx->pc != 0x1084D4u) { return; }
    }
    ctx->pc = 0x1084D4u;
label_1084d4:
    // 0x1084d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1084D4u;
    {
        const bool branch_taken_0x1084d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1084D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1084D4u;
            // 0x1084d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084d4) {
            ctx->pc = 0x1084C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1084c0;
        }
    }
    ctx->pc = 0x1084DCu;
    // 0x1084dc: 0xc04226e  jal         func_1089B8
    ctx->pc = 0x1084DCu;
    SET_GPR_U32(ctx, 31, 0x1084E4u);
    ctx->pc = 0x1084E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1084DCu;
            // 0x1084e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1089B8u;
    if (runtime->hasFunction(0x1089B8u)) {
        auto targetFn = runtime->lookupFunction(0x1089B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1084E4u; }
        if (ctx->pc != 0x1084E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001089B8_0x1089b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1084E4u; }
        if (ctx->pc != 0x1084E4u) { return; }
    }
    ctx->pc = 0x1084E4u;
label_1084e4:
    // 0x1084e4: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x1084e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x1084e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1084e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1084ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1084ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1084f0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1084F0u;
    {
        const bool branch_taken_0x1084f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1084F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1084F0u;
            // 0x1084f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084f0) {
            ctx->pc = 0x108518u;
            goto label_108518;
        }
    }
    ctx->pc = 0x1084F8u;
    // 0x1084f8: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1084F8u;
    {
        const bool branch_taken_0x1084f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1084f8) {
            ctx->pc = 0x1084FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1084F8u;
            // 0x1084fc: 0x8e02085c  lw          $v0, 0x85C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10851Cu;
            goto label_10851c;
        }
    }
    ctx->pc = 0x108500u;
    // 0x108500: 0x6230004  bgezl       $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x108500u;
    {
        const bool branch_taken_0x108500 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x108500) {
            ctx->pc = 0x108504u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x108500u;
            // 0x108504: 0xae000864  sw          $zero, 0x864($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x108514u;
            goto label_108514;
        }
    }
    ctx->pc = 0x108508u;
    // 0x108508: 0x8e020864  lw          $v0, 0x864($s0)
    ctx->pc = 0x108508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2148)));
    // 0x10850c: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x10850cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x108510: 0xae000864  sw          $zero, 0x864($s0)
    ctx->pc = 0x108510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2148), GPR_U32(ctx, 0));
label_108514:
    // 0x108514: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_108518:
    // 0x108518: 0x8e02085c  lw          $v0, 0x85C($s0)
    ctx->pc = 0x108518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2140)));
label_10851c:
    // 0x10851c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x10851cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x108520: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x108520u;
    {
        const bool branch_taken_0x108520 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x108524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108520u;
            // 0x108524: 0xae0301bc  sw          $v1, 0x1BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108520) {
            ctx->pc = 0x10853Cu;
            goto label_10853c;
        }
    }
    ctx->pc = 0x108528u;
    // 0x108528: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x108528u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x10852c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10852Cu;
    {
        const bool branch_taken_0x10852c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10852c) {
            ctx->pc = 0x108530u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10852Cu;
            // 0x108530: 0x8e020860  lw          $v0, 0x860($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x108540u;
            goto label_108540;
        }
    }
    ctx->pc = 0x108534u;
    // 0x108534: 0x24620400  addiu       $v0, $v1, 0x400
    ctx->pc = 0x108534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x108538: 0xae0201bc  sw          $v0, 0x1BC($s0)
    ctx->pc = 0x108538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
label_10853c:
    // 0x10853c: 0x8e020860  lw          $v0, 0x860($s0)
    ctx->pc = 0x10853cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2144)));
label_108540:
    // 0x108540: 0x8e0401bc  lw          $a0, 0x1BC($s0)
    ctx->pc = 0x108540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x108544: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x108544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108548: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x108548u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x10854c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10854cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108550: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x108550u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x108554: 0xae020860  sw          $v0, 0x860($s0)
    ctx->pc = 0x108554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2144), GPR_U32(ctx, 2));
    // 0x108558: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10855c: 0x3e00008  jr          $ra
    ctx->pc = 0x10855Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10855Cu;
            // 0x108560: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108564u;
    // 0x108564: 0x0  nop
    ctx->pc = 0x108564u;
    // NOP
    // 0x108568: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x108568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10856c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10856cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x108570: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x108570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x108574: 0x34c62010  ori         $a2, $a2, 0x2010
    ctx->pc = 0x108574u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8208);
    // 0x108578: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10857c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10857cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108580: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x108580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x108584: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x108584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108588: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x108588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10858c: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x10858cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x108590: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x108590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x108594: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x108594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x108598: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x108598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10859c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10859cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1085a0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1085a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1085a4: 0xae300858  sw          $s0, 0x858($s1)
    ctx->pc = 0x1085a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2136), GPR_U32(ctx, 16));
    // 0x1085a8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1085a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1085ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1085acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1085b0: 0xc041a12  jal         func_106848
    ctx->pc = 0x1085B0u;
    SET_GPR_U32(ctx, 31, 0x1085B8u);
    ctx->pc = 0x1085B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1085B0u;
            // 0x1085b4: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1085B8u; }
        if (ctx->pc != 0x1085B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1085B8u; }
        if (ctx->pc != 0x1085B8u) { return; }
    }
    ctx->pc = 0x1085B8u;
label_1085b8:
    // 0x1085b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1085b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085bc: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x1085bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x1085c0: 0x121442  srl         $v0, $s2, 17
    ctx->pc = 0x1085c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 17));
    // 0x1085c4: 0x30750fff  andi        $s5, $v1, 0xFFF
    ctx->pc = 0x1085c4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1085c8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1085c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1085cc: 0x122342  srl         $a0, $s2, 13
    ctx->pc = 0x1085ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 13));
    // 0x1085d0: 0x121bc2  srl         $v1, $s2, 15
    ctx->pc = 0x1085d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 15));
    // 0x1085d4: 0x30940003  andi        $s4, $a0, 0x3
    ctx->pc = 0x1085d4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x1085d8: 0x30730003  andi        $s3, $v1, 0x3
    ctx->pc = 0x1085d8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1085dc: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1085DCu;
    {
        const bool branch_taken_0x1085dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1085E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1085DCu;
            // 0x1085e0: 0xae220150  sw          $v0, 0x150($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1085dc) {
            ctx->pc = 0x1085F4u;
            goto label_1085f4;
        }
    }
    ctx->pc = 0x1085E4u;
    // 0x1085e4: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1085e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x1085e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1085e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085ec: 0xc042e16  jal         func_10B858
    ctx->pc = 0x1085ECu;
    SET_GPR_U32(ctx, 31, 0x1085F4u);
    ctx->pc = 0x1085F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1085ECu;
            // 0x1085f0: 0x24a5e800  addiu       $a1, $a1, -0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B858u;
    if (runtime->hasFunction(0x10B858u)) {
        auto targetFn = runtime->lookupFunction(0x10B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1085F4u; }
        if (ctx->pc != 0x1085F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B858_0x10b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1085F4u; }
        if (ctx->pc != 0x1085F4u) { return; }
    }
    ctx->pc = 0x1085F4u;
label_1085f4:
    // 0x1085f4: 0x1214c2  srl         $v0, $s2, 19
    ctx->pc = 0x1085f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 19));
    // 0x1085f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1085f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1085fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x108600: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x108600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x108604: 0xae22014c  sw          $v0, 0x14C($s1)
    ctx->pc = 0x108604u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 2));
    // 0x108608: 0xc041a12  jal         func_106848
    ctx->pc = 0x108608u;
    SET_GPR_U32(ctx, 31, 0x108610u);
    ctx->pc = 0x10860Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108608u;
            // 0x10860c: 0x128502  srl         $s0, $s2, 20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108610u; }
        if (ctx->pc != 0x108610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108610u; }
        if (ctx->pc != 0x108610u) { return; }
    }
    ctx->pc = 0x108610u;
label_108610:
    // 0x108610: 0x29202  srl         $s2, $v0, 8
    ctx->pc = 0x108610u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x108614: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x108614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x108618: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x108618u;
    {
        const bool branch_taken_0x108618 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x10861Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108618u;
            // 0x10861c: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108618) {
            ctx->pc = 0x10863Cu;
            goto label_10863c;
        }
    }
    ctx->pc = 0x108620u;
    // 0x108620: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x108620u;
    {
        const bool branch_taken_0x108620 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x108624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108620u;
            // 0x108624: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108620) {
            ctx->pc = 0x10863Cu;
            goto label_10863c;
        }
    }
    ctx->pc = 0x108628u;
    // 0x108628: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x108628u;
    {
        const bool branch_taken_0x108628 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x10862Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108628u;
            // 0x10862c: 0x3c050063  lui         $a1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108628) {
            ctx->pc = 0x10863Cu;
            goto label_10863c;
        }
    }
    ctx->pc = 0x108630u;
    // 0x108630: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108634: 0xc042e16  jal         func_10B858
    ctx->pc = 0x108634u;
    SET_GPR_U32(ctx, 31, 0x10863Cu);
    ctx->pc = 0x108638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108634u;
            // 0x108638: 0x24a5e828  addiu       $a1, $a1, -0x17D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B858u;
    if (runtime->hasFunction(0x10B858u)) {
        auto targetFn = runtime->lookupFunction(0x10B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10863Cu; }
        if (ctx->pc != 0x10863Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B858_0x10b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10863Cu; }
        if (ctx->pc != 0x10863Cu) { return; }
    }
    ctx->pc = 0x10863Cu;
label_10863c:
    // 0x10863c: 0x8e240134  lw          $a0, 0x134($s1)
    ctx->pc = 0x10863cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x108640: 0x154480  sll         $t0, $s5, 18
    ctx->pc = 0x108640u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 18));
    // 0x108644: 0x8e230138  lw          $v1, 0x138($s1)
    ctx->pc = 0x108644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x108648: 0x124a80  sll         $t1, $s2, 10
    ctx->pc = 0x108648u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 18), 10));
    // 0x10864c: 0x8e260144  lw          $a2, 0x144($s1)
    ctx->pc = 0x10864cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x108650: 0x133b00  sll         $a3, $s3, 12
    ctx->pc = 0x108650u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 12));
    // 0x108654: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x108654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x108658: 0x142b00  sll         $a1, $s4, 12
    ctx->pc = 0x108658u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 12));
    // 0x10865c: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x10865cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x108660: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x108660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x108664: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x108664u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x108668: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x108668u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x10866c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x10866cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x108670: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x108670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x108674: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x108674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    // 0x108678: 0xae270134  sw          $a3, 0x134($s1)
    ctx->pc = 0x108678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 7));
    // 0x10867c: 0xae250138  sw          $a1, 0x138($s1)
    ctx->pc = 0x10867cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 5));
    // 0x108680: 0xae260144  sw          $a2, 0x144($s1)
    ctx->pc = 0x108680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 6));
    // 0x108684: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x108684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x108688: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x108688u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10868c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10868cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x108690: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x108690u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108694: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x108694u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108698: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x108698u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10869c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10869cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1086a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1086A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1086A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1086A0u;
            // 0x1086a4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1086A8u;
    // 0x1086a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1086a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1086ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1086acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1086b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1086b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1086b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1086b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1086b8: 0xc041a12  jal         func_106848
    ctx->pc = 0x1086B8u;
    SET_GPR_U32(ctx, 31, 0x1086C0u);
    ctx->pc = 0x1086BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1086B8u;
            // 0x1086bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1086C0u; }
        if (ctx->pc != 0x1086C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1086C0u; }
        if (ctx->pc != 0x1086C0u) { return; }
    }
    ctx->pc = 0x1086C0u;
label_1086c0:
    // 0x1086c0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1086C0u;
    {
        const bool branch_taken_0x1086c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1086C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1086C0u;
            // 0x1086c4: 0xae020850  sw          $v0, 0x850($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1086c0) {
            ctx->pc = 0x1086F4u;
            goto label_1086f4;
        }
    }
    ctx->pc = 0x1086C8u;
    // 0x1086c8: 0xc0422e2  jal         func_108B88
    ctx->pc = 0x1086C8u;
    SET_GPR_U32(ctx, 31, 0x1086D0u);
    ctx->pc = 0x1086CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1086C8u;
            // 0x1086cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108B88u;
    if (runtime->hasFunction(0x108B88u)) {
        auto targetFn = runtime->lookupFunction(0x108B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1086D0u; }
        if (ctx->pc != 0x1086D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108B88_0x108b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1086D0u; }
        if (ctx->pc != 0x1086D0u) { return; }
    }
    ctx->pc = 0x1086D0u;
label_1086d0:
    // 0x1086d0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1086d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1086d4: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1086d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1086d8: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1086d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1086dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1086dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1086e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1086e0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x1086e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1086e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1086e8: 0xae03082c  sw          $v1, 0x82C($s0)
    ctx->pc = 0x1086e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
    // 0x1086ec: 0xc0422e2  jal         func_108B88
    ctx->pc = 0x1086ECu;
    SET_GPR_U32(ctx, 31, 0x1086F4u);
    ctx->pc = 0x1086F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1086ECu;
            // 0x1086f0: 0xae050828  sw          $a1, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108B88u;
    if (runtime->hasFunction(0x108B88u)) {
        auto targetFn = runtime->lookupFunction(0x108B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1086F4u; }
        if (ctx->pc != 0x1086F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108B88_0x108b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1086F4u; }
        if (ctx->pc != 0x1086F4u) { return; }
    }
    ctx->pc = 0x1086F4u;
label_1086f4:
    // 0x1086f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1086f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1086f8: 0xc041a12  jal         func_106848
    ctx->pc = 0x1086F8u;
    SET_GPR_U32(ctx, 31, 0x108700u);
    ctx->pc = 0x1086FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1086F8u;
            // 0x1086fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108700u; }
        if (ctx->pc != 0x108700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108700u; }
        if (ctx->pc != 0x108700u) { return; }
    }
    ctx->pc = 0x108700u;
label_108700:
    // 0x108700: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x108700u;
    {
        const bool branch_taken_0x108700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108700u;
            // 0x108704: 0xae020854  sw          $v0, 0x854($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108700) {
            ctx->pc = 0x108738u;
            goto label_108738;
        }
    }
    ctx->pc = 0x108708u;
    // 0x108708: 0xc0422e2  jal         func_108B88
    ctx->pc = 0x108708u;
    SET_GPR_U32(ctx, 31, 0x108710u);
    ctx->pc = 0x10870Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108708u;
            // 0x10870c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108B88u;
    if (runtime->hasFunction(0x108B88u)) {
        auto targetFn = runtime->lookupFunction(0x108B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108710u; }
        if (ctx->pc != 0x108710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108B88_0x108b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108710u; }
        if (ctx->pc != 0x108710u) { return; }
    }
    ctx->pc = 0x108710u;
label_108710:
    // 0x108710: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x108710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x108714: 0x3c035800  lui         $v1, 0x5800
    ctx->pc = 0x108714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22528 << 16));
    // 0x108718: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x108718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10871c: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x10871cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x108720: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x108720u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x108724: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x108724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108728: 0xae04082c  sw          $a0, 0x82C($s0)
    ctx->pc = 0x108728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 4));
    // 0x10872c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10872cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108730: 0xc0422e2  jal         func_108B88
    ctx->pc = 0x108730u;
    SET_GPR_U32(ctx, 31, 0x108738u);
    ctx->pc = 0x108734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108730u;
            // 0x108734: 0xae050828  sw          $a1, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108B88u;
    if (runtime->hasFunction(0x108B88u)) {
        auto targetFn = runtime->lookupFunction(0x108B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108738u; }
        if (ctx->pc != 0x108738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108B88_0x108b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108738u; }
        if (ctx->pc != 0x108738u) { return; }
    }
    ctx->pc = 0x108738u;
label_108738:
    // 0x108738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10873c: 0xc041a12  jal         func_106848
    ctx->pc = 0x10873Cu;
    SET_GPR_U32(ctx, 31, 0x108744u);
    ctx->pc = 0x108740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10873Cu;
            // 0x108740: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108744u; }
        if (ctx->pc != 0x108744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108744u; }
        if (ctx->pc != 0x108744u) { return; }
    }
    ctx->pc = 0x108744u;
label_108744:
    // 0x108744: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x108744u;
    {
        const bool branch_taken_0x108744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108744u;
            // 0x108748: 0x3c050063  lui         $a1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108744) {
            ctx->pc = 0x108758u;
            goto label_108758;
        }
    }
    ctx->pc = 0x10874Cu;
    // 0x10874c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10874cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108750: 0xc042e16  jal         func_10B858
    ctx->pc = 0x108750u;
    SET_GPR_U32(ctx, 31, 0x108758u);
    ctx->pc = 0x108754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108750u;
            // 0x108754: 0x24a5e848  addiu       $a1, $a1, -0x17B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B858u;
    if (runtime->hasFunction(0x10B858u)) {
        auto targetFn = runtime->lookupFunction(0x10B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108758u; }
        if (ctx->pc != 0x108758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B858_0x10b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108758u; }
        if (ctx->pc != 0x108758u) { return; }
    }
    ctx->pc = 0x108758u;
label_108758:
    // 0x108758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10875c: 0xc041a12  jal         func_106848
    ctx->pc = 0x10875Cu;
    SET_GPR_U32(ctx, 31, 0x108764u);
    ctx->pc = 0x108760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10875Cu;
            // 0x108760: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108764u; }
        if (ctx->pc != 0x108764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108764u; }
        if (ctx->pc != 0x108764u) { return; }
    }
    ctx->pc = 0x108764u;
label_108764:
    // 0x108764: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x108764u;
    {
        const bool branch_taken_0x108764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108764u;
            // 0x108768: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108764) {
            ctx->pc = 0x108784u;
            goto label_108784;
        }
    }
    ctx->pc = 0x10876Cu;
    // 0x10876c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10876cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108770: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x108770u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x108774: 0x24a5e870  addiu       $a1, $a1, -0x1790
    ctx->pc = 0x108774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961264));
    // 0x108778: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108778u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10877c: 0x8042e16  j           func_10B858
    ctx->pc = 0x10877Cu;
    ctx->pc = 0x108780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10877Cu;
            // 0x108780: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B858u;
    if (runtime->hasFunction(0x10B858u)) {
        auto targetFn = runtime->lookupFunction(0x10B858u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010B858_0x10b858(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x108784u;
label_108784:
    // 0x108784: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108788: 0x3e00008  jr          $ra
    ctx->pc = 0x108788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10878Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108788u;
            // 0x10878c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108790u;
    // 0x108790: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x108790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x108794: 0x8042e16  j           func_10B858
    ctx->pc = 0x108794u;
    ctx->pc = 0x108798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108794u;
            // 0x108798: 0x24a5e8a0  addiu       $a1, $a1, -0x1760 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B858u;
    if (runtime->hasFunction(0x10B858u)) {
        auto targetFn = runtime->lookupFunction(0x10B858u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010B858_0x10b858(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10879Cu;
    // 0x10879c: 0x0  nop
    ctx->pc = 0x10879cu;
    // NOP
    // 0x1087a0: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1087a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x1087a4: 0x8042e16  j           func_10B858
    ctx->pc = 0x1087A4u;
    ctx->pc = 0x1087A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1087A4u;
            // 0x1087a8: 0x24a5e8d0  addiu       $a1, $a1, -0x1730 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B858u;
    if (runtime->hasFunction(0x10B858u)) {
        auto targetFn = runtime->lookupFunction(0x10B858u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010B858_0x10b858(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1087ACu;
    // 0x1087ac: 0x0  nop
    ctx->pc = 0x1087acu;
    // NOP
    // 0x1087b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1087b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1087b4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1087b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1087b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1087b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1087bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1087bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1087c0: 0xc041a12  jal         func_106848
    ctx->pc = 0x1087C0u;
    SET_GPR_U32(ctx, 31, 0x1087C8u);
    ctx->pc = 0x1087C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1087C0u;
            // 0x1087c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1087C8u; }
        if (ctx->pc != 0x1087C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1087C8u; }
        if (ctx->pc != 0x1087C8u) { return; }
    }
    ctx->pc = 0x1087C8u;
label_1087c8:
    // 0x1087c8: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x1087c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x1087cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1087ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1087d0: 0xc041a12  jal         func_106848
    ctx->pc = 0x1087D0u;
    SET_GPR_U32(ctx, 31, 0x1087D8u);
    ctx->pc = 0x1087D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1087D0u;
            // 0x1087d4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1087D8u; }
        if (ctx->pc != 0x1087D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1087D8u; }
        if (ctx->pc != 0x1087D8u) { return; }
    }
    ctx->pc = 0x1087D8u;
label_1087d8:
    // 0x1087d8: 0xae020178  sw          $v0, 0x178($s0)
    ctx->pc = 0x1087d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 2));
    // 0x1087dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1087dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1087e0: 0xc041a12  jal         func_106848
    ctx->pc = 0x1087E0u;
    SET_GPR_U32(ctx, 31, 0x1087E8u);
    ctx->pc = 0x1087E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1087E0u;
            // 0x1087e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1087E8u; }
        if (ctx->pc != 0x1087E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1087E8u; }
        if (ctx->pc != 0x1087E8u) { return; }
    }
    ctx->pc = 0x1087E8u;
label_1087e8:
    // 0x1087e8: 0xae02017c  sw          $v0, 0x17C($s0)
    ctx->pc = 0x1087e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
    // 0x1087ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1087ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1087f0: 0xc041a12  jal         func_106848
    ctx->pc = 0x1087F0u;
    SET_GPR_U32(ctx, 31, 0x1087F8u);
    ctx->pc = 0x1087F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1087F0u;
            // 0x1087f4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1087F8u; }
        if (ctx->pc != 0x1087F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1087F8u; }
        if (ctx->pc != 0x1087F8u) { return; }
    }
    ctx->pc = 0x1087F8u;
label_1087f8:
    // 0x1087f8: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x1087f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
    // 0x1087fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1087fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108800: 0xc041a12  jal         func_106848
    ctx->pc = 0x108800u;
    SET_GPR_U32(ctx, 31, 0x108808u);
    ctx->pc = 0x108804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108800u;
            // 0x108804: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108808u; }
        if (ctx->pc != 0x108808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108808u; }
        if (ctx->pc != 0x108808u) { return; }
    }
    ctx->pc = 0x108808u;
label_108808:
    // 0x108808: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x108808u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x10880c: 0x3c06fffc  lui         $a2, 0xFFFC
    ctx->pc = 0x10880cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65532 << 16));
    // 0x108810: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x108810u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8208);
    // 0x108814: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x108814u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x108818: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x108818u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 7), 0))); // MMIO: 0x10000000
    // 0x10881c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x10881cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x108820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108824: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x108824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x108828: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x108828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x10882c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x10882cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x108830: 0xc041a12  jal         func_106848
    ctx->pc = 0x108830u;
    SET_GPR_U32(ctx, 31, 0x108838u);
    ctx->pc = 0x108834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108830u;
            // 0x108834: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108838u; }
        if (ctx->pc != 0x108838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108838u; }
        if (ctx->pc != 0x108838u) { return; }
    }
    ctx->pc = 0x108838u;
label_108838:
    // 0x108838: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x108838u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10883c: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x10883cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x108840: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x108840u;
    {
        const bool branch_taken_0x108840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108840u;
            // 0x108844: 0xae030184  sw          $v1, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108840) {
            ctx->pc = 0x10884Cu;
            goto label_10884c;
        }
    }
    ctx->pc = 0x108848u;
    // 0x108848: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x108848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
label_10884c:
    // 0x10884c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10884cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108850: 0xc041a12  jal         func_106848
    ctx->pc = 0x108850u;
    SET_GPR_U32(ctx, 31, 0x108858u);
    ctx->pc = 0x108854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108850u;
            // 0x108854: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108858u; }
        if (ctx->pc != 0x108858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108858u; }
        if (ctx->pc != 0x108858u) { return; }
    }
    ctx->pc = 0x108858u;
label_108858:
    // 0x108858: 0xae020188  sw          $v0, 0x188($s0)
    ctx->pc = 0x108858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
    // 0x10885c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10885cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108860: 0xc041a12  jal         func_106848
    ctx->pc = 0x108860u;
    SET_GPR_U32(ctx, 31, 0x108868u);
    ctx->pc = 0x108864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108860u;
            // 0x108864: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108868u; }
        if (ctx->pc != 0x108868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108868u; }
        if (ctx->pc != 0x108868u) { return; }
    }
    ctx->pc = 0x108868u;
label_108868:
    // 0x108868: 0xae02018c  sw          $v0, 0x18C($s0)
    ctx->pc = 0x108868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 2));
    // 0x10886c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10886cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108870: 0xc041a12  jal         func_106848
    ctx->pc = 0x108870u;
    SET_GPR_U32(ctx, 31, 0x108878u);
    ctx->pc = 0x108874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108870u;
            // 0x108874: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108878u; }
        if (ctx->pc != 0x108878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108878u; }
        if (ctx->pc != 0x108878u) { return; }
    }
    ctx->pc = 0x108878u;
label_108878:
    // 0x108878: 0xae020190  sw          $v0, 0x190($s0)
    ctx->pc = 0x108878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
    // 0x10887c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10887cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108880: 0xc041a12  jal         func_106848
    ctx->pc = 0x108880u;
    SET_GPR_U32(ctx, 31, 0x108888u);
    ctx->pc = 0x108884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108880u;
            // 0x108884: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108888u; }
        if (ctx->pc != 0x108888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108888u; }
        if (ctx->pc != 0x108888u) { return; }
    }
    ctx->pc = 0x108888u;
label_108888:
    // 0x108888: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x108888u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10888c: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x10888cu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 8208))); // MMIO: 0x10002010
    // 0x108890: 0x3c03ffbf  lui         $v1, 0xFFBF
    ctx->pc = 0x108890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65471 << 16));
    // 0x108894: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x108894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x108898: 0x21580  sll         $v0, $v0, 22
    ctx->pc = 0x108898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 22));
    // 0x10889c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x10889cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1088a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1088a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1088a4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1088a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1088a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1088a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1088ac: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1088acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x1088b0: 0xc041a12  jal         func_106848
    ctx->pc = 0x1088B0u;
    SET_GPR_U32(ctx, 31, 0x1088B8u);
    ctx->pc = 0x1088B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1088B0u;
            // 0x1088b4: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1088B8u; }
        if (ctx->pc != 0x1088B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1088B8u; }
        if (ctx->pc != 0x1088B8u) { return; }
    }
    ctx->pc = 0x1088B8u;
label_1088b8:
    // 0x1088b8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1088b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1088bc: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x1088bcu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 8208))); // MMIO: 0x10002010
    // 0x1088c0: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x1088c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x1088c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1088c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1088c8: 0x21540  sll         $v0, $v0, 21
    ctx->pc = 0x1088c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
    // 0x1088cc: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1088ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1088d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1088d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1088d4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1088d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1088d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1088d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1088dc: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1088dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x1088e0: 0xc041a12  jal         func_106848
    ctx->pc = 0x1088E0u;
    SET_GPR_U32(ctx, 31, 0x1088E8u);
    ctx->pc = 0x1088E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1088E0u;
            // 0x1088e4: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1088E8u; }
        if (ctx->pc != 0x1088E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1088E8u; }
        if (ctx->pc != 0x1088E8u) { return; }
    }
    ctx->pc = 0x1088E8u;
label_1088e8:
    // 0x1088e8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1088e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1088ec: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x1088ecu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 8208))); // MMIO: 0x10002010
    // 0x1088f0: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x1088f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
    // 0x1088f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1088f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1088f8: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x1088f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x1088fc: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1088fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x108900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108904: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x108904u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x108908: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x108908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10890c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x10890cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x108910: 0xc041a12  jal         func_106848
    ctx->pc = 0x108910u;
    SET_GPR_U32(ctx, 31, 0x108918u);
    ctx->pc = 0x108914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108910u;
            // 0x108914: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108918u; }
        if (ctx->pc != 0x108918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108918u; }
        if (ctx->pc != 0x108918u) { return; }
    }
    ctx->pc = 0x108918u;
label_108918:
    // 0x108918: 0xae020194  sw          $v0, 0x194($s0)
    ctx->pc = 0x108918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 2));
    // 0x10891c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10891cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108920: 0xc041a12  jal         func_106848
    ctx->pc = 0x108920u;
    SET_GPR_U32(ctx, 31, 0x108928u);
    ctx->pc = 0x108924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108920u;
            // 0x108924: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108928u; }
        if (ctx->pc != 0x108928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108928u; }
        if (ctx->pc != 0x108928u) { return; }
    }
    ctx->pc = 0x108928u;
label_108928:
    // 0x108928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10892c: 0xc041a12  jal         func_106848
    ctx->pc = 0x10892Cu;
    SET_GPR_U32(ctx, 31, 0x108934u);
    ctx->pc = 0x108930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10892Cu;
            // 0x108930: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108934u; }
        if (ctx->pc != 0x108934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108934u; }
        if (ctx->pc != 0x108934u) { return; }
    }
    ctx->pc = 0x108934u;
label_108934:
    // 0x108934: 0xae020198  sw          $v0, 0x198($s0)
    ctx->pc = 0x108934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 2));
    // 0x108938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10893c: 0xc041a12  jal         func_106848
    ctx->pc = 0x10893Cu;
    SET_GPR_U32(ctx, 31, 0x108944u);
    ctx->pc = 0x108940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10893Cu;
            // 0x108940: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108944u; }
        if (ctx->pc != 0x108944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108944u; }
        if (ctx->pc != 0x108944u) { return; }
    }
    ctx->pc = 0x108944u;
label_108944:
    // 0x108944: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x108944u;
    {
        const bool branch_taken_0x108944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108944u;
            // 0x108948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108944) {
            ctx->pc = 0x108984u;
            goto label_108984;
        }
    }
    ctx->pc = 0x10894Cu;
    // 0x10894c: 0xc041a12  jal         func_106848
    ctx->pc = 0x10894Cu;
    SET_GPR_U32(ctx, 31, 0x108954u);
    ctx->pc = 0x108950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10894Cu;
            // 0x108950: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108954u; }
        if (ctx->pc != 0x108954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108954u; }
        if (ctx->pc != 0x108954u) { return; }
    }
    ctx->pc = 0x108954u;
label_108954:
    // 0x108954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108958: 0xc041a12  jal         func_106848
    ctx->pc = 0x108958u;
    SET_GPR_U32(ctx, 31, 0x108960u);
    ctx->pc = 0x10895Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108958u;
            // 0x10895c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108960u; }
        if (ctx->pc != 0x108960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108960u; }
        if (ctx->pc != 0x108960u) { return; }
    }
    ctx->pc = 0x108960u;
label_108960:
    // 0x108960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108964: 0xc041a12  jal         func_106848
    ctx->pc = 0x108964u;
    SET_GPR_U32(ctx, 31, 0x10896Cu);
    ctx->pc = 0x108968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108964u;
            // 0x108968: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10896Cu; }
        if (ctx->pc != 0x10896Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10896Cu; }
        if (ctx->pc != 0x10896Cu) { return; }
    }
    ctx->pc = 0x10896Cu;
label_10896c:
    // 0x10896c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10896cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108970: 0xc041a12  jal         func_106848
    ctx->pc = 0x108970u;
    SET_GPR_U32(ctx, 31, 0x108978u);
    ctx->pc = 0x108974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108970u;
            // 0x108974: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108978u; }
        if (ctx->pc != 0x108978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108978u; }
        if (ctx->pc != 0x108978u) { return; }
    }
    ctx->pc = 0x108978u;
label_108978:
    // 0x108978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10897c: 0xc041a12  jal         func_106848
    ctx->pc = 0x10897Cu;
    SET_GPR_U32(ctx, 31, 0x108984u);
    ctx->pc = 0x108980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10897Cu;
            // 0x108980: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108984u; }
        if (ctx->pc != 0x108984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108984u; }
        if (ctx->pc != 0x108984u) { return; }
    }
    ctx->pc = 0x108984u;
label_108984:
    // 0x108984: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x108984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108988: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108988u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10898c: 0x3e00008  jr          $ra
    ctx->pc = 0x10898Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10898Cu;
            // 0x108990: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108994u;
    // 0x108994: 0x0  nop
    ctx->pc = 0x108994u;
    // NOP
    // 0x108998: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x108998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x10899c: 0x8042e16  j           func_10B858
    ctx->pc = 0x10899Cu;
    ctx->pc = 0x1089A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10899Cu;
            // 0x1089a0: 0x24a5e8e8  addiu       $a1, $a1, -0x1718 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B858u;
    if (runtime->hasFunction(0x10B858u)) {
        auto targetFn = runtime->lookupFunction(0x10B858u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010B858_0x10b858(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1089A4u;
    // 0x1089a4: 0x0  nop
    ctx->pc = 0x1089a4u;
    // NOP
    // 0x1089a8: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1089a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x1089ac: 0x8042e16  j           func_10B858
    ctx->pc = 0x1089ACu;
    ctx->pc = 0x1089B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1089ACu;
            // 0x1089b0: 0x24a5e920  addiu       $a1, $a1, -0x16E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B858u;
    if (runtime->hasFunction(0x10B858u)) {
        auto targetFn = runtime->lookupFunction(0x10B858u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010B858_0x10b858(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1089B4u;
    // 0x1089b4: 0x0  nop
    ctx->pc = 0x1089b4u;
    // NOP
}
