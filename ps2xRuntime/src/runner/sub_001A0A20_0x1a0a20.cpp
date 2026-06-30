#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0A20
// Address: 0x1a0a20 - 0x1a0ae8
void sub_001A0A20_0x1a0a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0A20_0x1a0a20");
#endif

    switch (ctx->pc) {
        case 0x1a0a60u: goto label_1a0a60;
        case 0x1a0a78u: goto label_1a0a78;
        case 0x1a0a9cu: goto label_1a0a9c;
        case 0x1a0ab0u: goto label_1a0ab0;
        default: break;
    }

    ctx->pc = 0x1a0a20u;

    // 0x1a0a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a0a24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a0a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0a28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a0a28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a0a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a0a30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a0a34: 0x8e020554  lw          $v0, 0x554($s0)
    ctx->pc = 0x1a0a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1364)));
    // 0x1a0a38: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1A0A38u;
    {
        const bool branch_taken_0x1a0a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0a38) {
            ctx->pc = 0x1A0A3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0A38u;
            // 0x1a0a3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A0ACCu;
            goto label_1a0acc;
        }
    }
    ctx->pc = 0x1A0A40u;
    // 0x1a0a40: 0x8e020558  lw          $v0, 0x558($s0)
    ctx->pc = 0x1a0a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x1a0a44: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1A0A44u;
    {
        const bool branch_taken_0x1a0a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0A44u;
            // 0x1a0a48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0a44) {
            ctx->pc = 0x1A0AC8u;
            goto label_1a0ac8;
        }
    }
    ctx->pc = 0x1A0A4Cu;
    // 0x1a0a4c: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x1a0a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x1a0a50: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A0A50u;
    {
        const bool branch_taken_0x1a0a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a0a50) {
            ctx->pc = 0x1A0A54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0A50u;
            // 0x1a0a54: 0x2462fffe  addiu       $v0, $v1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A0A88u;
            goto label_1a0a88;
        }
    }
    ctx->pc = 0x1A0A58u;
    // 0x1a0a58: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1A0A58u;
    SET_GPR_U32(ctx, 31, 0x1A0A60u);
    ctx->pc = 0x19D6C0u;
    if (runtime->hasFunction(0x19D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x19D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A60u; }
        if (ctx->pc != 0x1A0A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D6C0_0x19d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A60u; }
        if (ctx->pc != 0x1A0A60u) { return; }
    }
    ctx->pc = 0x1A0A60u;
label_1a0a60:
    // 0x1a0a60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a0a60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a0a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a0a68: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0A68u;
    {
        const bool branch_taken_0x1a0a68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a0a68) {
            ctx->pc = 0x1A0A6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0A68u;
            // 0x1a0a6c: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A0A84u;
            goto label_1a0a84;
        }
    }
    ctx->pc = 0x1A0A70u;
    // 0x1a0a70: 0xc0682e8  jal         func_1A0BA0
    ctx->pc = 0x1A0A70u;
    SET_GPR_U32(ctx, 31, 0x1A0A78u);
    ctx->pc = 0x1A0A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0A70u;
            // 0x1a0a74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0BA0u;
    if (runtime->hasFunction(0x1A0BA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A78u; }
        if (ctx->pc != 0x1A0A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0BA0_0x1a0ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A78u; }
        if (ctx->pc != 0x1A0A78u) { return; }
    }
    ctx->pc = 0x1A0A78u;
label_1a0a78:
    // 0x1a0a78: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A0A78u;
    {
        const bool branch_taken_0x1a0a78 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A0A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0A78u;
            // 0x1a0a7c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0a78) {
            ctx->pc = 0x1A0AC8u;
            goto label_1a0ac8;
        }
    }
    ctx->pc = 0x1A0A80u;
    // 0x1a0a80: 0xae110564  sw          $s1, 0x564($s0)
    ctx->pc = 0x1a0a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 17));
label_1a0a84:
    // 0x1a0a84: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x1a0a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_1a0a88:
    // 0x1a0a88: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1a0a88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a0a8c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1A0A8Cu;
    {
        const bool branch_taken_0x1a0a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0a8c) {
            ctx->pc = 0x1A0A90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0A8Cu;
            // 0x1a0a90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A0ACCu;
            goto label_1a0acc;
        }
    }
    ctx->pc = 0x1A0A94u;
    // 0x1a0a94: 0xc0675cc  jal         func_19D730
    ctx->pc = 0x1A0A94u;
    SET_GPR_U32(ctx, 31, 0x1A0A9Cu);
    ctx->pc = 0x1A0A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0A94u;
            // 0x1a0a98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D730u;
    if (runtime->hasFunction(0x19D730u)) {
        auto targetFn = runtime->lookupFunction(0x19D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A9Cu; }
        if (ctx->pc != 0x1A0A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D730_0x19d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0A9Cu; }
        if (ctx->pc != 0x1A0A9Cu) { return; }
    }
    ctx->pc = 0x1A0A9Cu;
label_1a0a9c:
    // 0x1a0a9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a0a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a0aa0: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0AA0u;
    {
        const bool branch_taken_0x1a0aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a0aa0) {
            ctx->pc = 0x1A0AA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0AA0u;
            // 0x1a0aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A0AB4u;
            goto label_1a0ab4;
        }
    }
    ctx->pc = 0x1A0AA8u;
    // 0x1a0aa8: 0xc0682ba  jal         func_1A0AE8
    ctx->pc = 0x1A0AA8u;
    SET_GPR_U32(ctx, 31, 0x1A0AB0u);
    ctx->pc = 0x1A0AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0AA8u;
            // 0x1a0aac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AE8u;
    if (runtime->hasFunction(0x1A0AE8u)) {
        auto targetFn = runtime->lookupFunction(0x1A0AE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0AB0u; }
        if (ctx->pc != 0x1A0AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0AE8_0x1a0ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0AB0u; }
        if (ctx->pc != 0x1A0AB0u) { return; }
    }
    ctx->pc = 0x1A0AB0u;
label_1a0ab0:
    // 0x1a0ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a0ab4:
    // 0x1a0ab4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0ab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0ab8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a0ab8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a0abc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a0abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0ac0: 0x8068318  j           func_1A0C60
    ctx->pc = 0x1A0AC0u;
    ctx->pc = 0x1A0AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0AC0u;
            // 0x1a0ac4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0C60u;
    {
        auto targetFn = runtime->lookupFunction(0x1A0C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A0AC8u;
label_1a0ac8:
    // 0x1a0ac8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a0acc:
    // 0x1a0acc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a0accu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a0ad0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a0ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0AD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0AD4u;
            // 0x1a0ad8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0ADCu;
    // 0x1a0adc: 0x0  nop
    ctx->pc = 0x1a0adcu;
    // NOP
    // 0x1a0ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0AE0u;
            // 0x1a0ae4: 0x8c82057c  lw          $v0, 0x57C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1404)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0AE8u;
}
