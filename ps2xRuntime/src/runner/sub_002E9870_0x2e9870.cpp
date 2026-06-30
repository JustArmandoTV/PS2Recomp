#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E9870
// Address: 0x2e9870 - 0x2e9940
void sub_002E9870_0x2e9870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9870_0x2e9870");
#endif

    switch (ctx->pc) {
        case 0x2e98d8u: goto label_2e98d8;
        case 0x2e9904u: goto label_2e9904;
        case 0x2e9930u: goto label_2e9930;
        default: break;
    }

    ctx->pc = 0x2e9870u;

    // 0x2e9870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e9870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e9874: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2e9874u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9878: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e9878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e987c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e987cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2e9880: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x2e9880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x2e9884: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2e9884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e9888: 0x8c650968  lw          $a1, 0x968($v1)
    ctx->pc = 0x2e9888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
    // 0x2e988c: 0x10a4001f  beq         $a1, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2E988Cu;
    {
        const bool branch_taken_0x2e988c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2e988c) {
            ctx->pc = 0x2E990Cu;
            goto label_2e990c;
        }
    }
    ctx->pc = 0x2E9894u;
    // 0x2e9894: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2e9894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e9898: 0x10a30011  beq         $a1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E9898u;
    {
        const bool branch_taken_0x2e9898 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e9898) {
            ctx->pc = 0x2E98E0u;
            goto label_2e98e0;
        }
    }
    ctx->pc = 0x2E98A0u;
    // 0x2e98a0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2e98a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e98a4: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E98A4u;
    {
        const bool branch_taken_0x2e98a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e98a4) {
            ctx->pc = 0x2E98B4u;
            goto label_2e98b4;
        }
    }
    ctx->pc = 0x2E98ACu;
    // 0x2e98ac: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2E98ACu;
    {
        const bool branch_taken_0x2e98ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E98B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E98ACu;
            // 0x2e98b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e98ac) {
            ctx->pc = 0x2E9934u;
            goto label_2e9934;
        }
    }
    ctx->pc = 0x2E98B4u;
label_2e98b4:
    // 0x2e98b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e98b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e98b8: 0x90e411aa  lbu         $a0, 0x11AA($a3)
    ctx->pc = 0x2e98b8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4522)));
    // 0x2e98bc: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2e98bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2e98c0: 0x24e60890  addiu       $a2, $a3, 0x890
    ctx->pc = 0x2e98c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 2192));
    // 0x2e98c4: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x2e98c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2e98c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e98c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e98cc: 0x24e702c0  addiu       $a3, $a3, 0x2C0
    ctx->pc = 0x2e98ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 704));
    // 0x2e98d0: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2E98D0u;
    SET_GPR_U32(ctx, 31, 0x2E98D8u);
    ctx->pc = 0x2E98D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E98D0u;
            // 0x2e98d4: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E98D8u; }
        if (ctx->pc != 0x2E98D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E98D8u; }
        if (ctx->pc != 0x2E98D8u) { return; }
    }
    ctx->pc = 0x2E98D8u;
label_2e98d8:
    // 0x2e98d8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2E98D8u;
    {
        const bool branch_taken_0x2e98d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e98d8) {
            ctx->pc = 0x2E9930u;
            goto label_2e9930;
        }
    }
    ctx->pc = 0x2E98E0u;
label_2e98e0:
    // 0x2e98e0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e98e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e98e4: 0x90e411aa  lbu         $a0, 0x11AA($a3)
    ctx->pc = 0x2e98e4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4522)));
    // 0x2e98e8: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2e98e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2e98ec: 0x24e60890  addiu       $a2, $a3, 0x890
    ctx->pc = 0x2e98ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 2192));
    // 0x2e98f0: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x2e98f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2e98f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e98f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e98f8: 0x24e702c0  addiu       $a3, $a3, 0x2C0
    ctx->pc = 0x2e98f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 704));
    // 0x2e98fc: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2E98FCu;
    SET_GPR_U32(ctx, 31, 0x2E9904u);
    ctx->pc = 0x2E9900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E98FCu;
            // 0x2e9900: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9904u; }
        if (ctx->pc != 0x2E9904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9904u; }
        if (ctx->pc != 0x2E9904u) { return; }
    }
    ctx->pc = 0x2E9904u;
label_2e9904:
    // 0x2e9904: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E9904u;
    {
        const bool branch_taken_0x2e9904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9904) {
            ctx->pc = 0x2E9930u;
            goto label_2e9930;
        }
    }
    ctx->pc = 0x2E990Cu;
label_2e990c:
    // 0x2e990c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2e990cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2e9910: 0x90e411aa  lbu         $a0, 0x11AA($a3)
    ctx->pc = 0x2e9910u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4522)));
    // 0x2e9914: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2e9914u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2e9918: 0x24e60890  addiu       $a2, $a3, 0x890
    ctx->pc = 0x2e9918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 2192));
    // 0x2e991c: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x2e991cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2e9920: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e9920u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9924: 0x24e702c0  addiu       $a3, $a3, 0x2C0
    ctx->pc = 0x2e9924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 704));
    // 0x2e9928: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2E9928u;
    SET_GPR_U32(ctx, 31, 0x2E9930u);
    ctx->pc = 0x2E992Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9928u;
            // 0x2e992c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9930u; }
        if (ctx->pc != 0x2E9930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9930u; }
        if (ctx->pc != 0x2E9930u) { return; }
    }
    ctx->pc = 0x2E9930u;
label_2e9930:
    // 0x2e9930: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e9930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e9934:
    // 0x2e9934: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9934u;
            // 0x2e9938: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E993Cu;
    // 0x2e993c: 0x0  nop
    ctx->pc = 0x2e993cu;
    // NOP
}
