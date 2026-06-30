#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A8CC8
// Address: 0x1a8cc8 - 0x1a8da0
void sub_001A8CC8_0x1a8cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8CC8_0x1a8cc8");
#endif

    switch (ctx->pc) {
        case 0x1a8cf0u: goto label_1a8cf0;
        case 0x1a8d20u: goto label_1a8d20;
        case 0x1a8d4cu: goto label_1a8d4c;
        case 0x1a8d70u: goto label_1a8d70;
        case 0x1a8d84u: goto label_1a8d84;
        default: break;
    }

    ctx->pc = 0x1a8cc8u;

    // 0x1a8cc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a8cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a8ccc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a8cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1a8cd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a8cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8cd4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1a8cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1a8cd8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a8cd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8cdc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1a8cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1a8ce0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1a8ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1a8ce4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A8CE4u;
    {
        const bool branch_taken_0x1a8ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8CE4u;
            // 0x1a8ce8: 0x8e120028  lw          $s2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ce4) {
            ctx->pc = 0x1A8D2Cu;
            goto label_1a8d2c;
        }
    }
    ctx->pc = 0x1A8CECu;
    // 0x1a8cec: 0x0  nop
    ctx->pc = 0x1a8cecu;
    // NOP
label_1a8cf0:
    // 0x1a8cf0: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x1a8cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1a8cf4: 0xde060990  ld          $a2, 0x990($s0)
    ctx->pc = 0x1a8cf4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 2448)));
    // 0x1a8cf8: 0xde020998  ld          $v0, 0x998($s0)
    ctx->pc = 0x1a8cf8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 2456)));
    // 0x1a8cfc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1a8cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8d00: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a8d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8d04: 0xe6302d  daddu       $a2, $a3, $a2
    ctx->pc = 0x1a8d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 6));
    // 0x1a8d08: 0xfe060990  sd          $a2, 0x990($s0)
    ctx->pc = 0x1a8d08u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2448), GPR_U64(ctx, 6));
    // 0x1a8d0c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1a8d0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1a8d10: 0x10e0001a  beqz        $a3, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A8D10u;
    {
        const bool branch_taken_0x1a8d10 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D10u;
            // 0x1a8d14: 0xfe020998  sd          $v0, 0x998($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 2456), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d10) {
            ctx->pc = 0x1A8D7Cu;
            goto label_1a8d7c;
        }
    }
    ctx->pc = 0x1A8D18u;
    // 0x1a8d18: 0xc06a398  jal         func_1A8E60
    ctx->pc = 0x1A8D18u;
    SET_GPR_U32(ctx, 31, 0x1A8D20u);
    ctx->pc = 0x1A8E60u;
    if (runtime->hasFunction(0x1A8E60u)) {
        auto targetFn = runtime->lookupFunction(0x1A8E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D20u; }
        if (ctx->pc != 0x1A8D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8E60_0x1a8e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D20u; }
        if (ctx->pc != 0x1A8D20u) { return; }
    }
    ctx->pc = 0x1A8D20u;
label_1a8d20:
    // 0x1a8d20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a8d20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8d24: 0x16200015  bnez        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A8D24u;
    {
        const bool branch_taken_0x1a8d24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8d24) {
            ctx->pc = 0x1A8D7Cu;
            goto label_1a8d7c;
        }
    }
    ctx->pc = 0x1A8D2Cu;
label_1a8d2c:
    // 0x1a8d2c: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1a8d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1a8d30: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A8D30u;
    {
        const bool branch_taken_0x1a8d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D30u;
            // 0x1a8d34: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d30) {
            ctx->pc = 0x1A8D7Cu;
            goto label_1a8d7c;
        }
    }
    ctx->pc = 0x1A8D38u;
    // 0x1a8d38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8d3c: 0x27a80008  addiu       $t0, $sp, 0x8
    ctx->pc = 0x1a8d3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1a8d40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a8d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8d44: 0xc06a368  jal         func_1A8DA0
    ctx->pc = 0x1A8D44u;
    SET_GPR_U32(ctx, 31, 0x1A8D4Cu);
    ctx->pc = 0x1A8D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D44u;
            // 0x1a8d48: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8DA0u;
    if (runtime->hasFunction(0x1A8DA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A8DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D4Cu; }
        if (ctx->pc != 0x1A8D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8DA0_0x1a8da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D4Cu; }
        if (ctx->pc != 0x1A8D4Cu) { return; }
    }
    ctx->pc = 0x1A8D4Cu;
label_1a8d4c:
    // 0x1a8d4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8d50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a8d50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8d54: 0x27a7000c  addiu       $a3, $sp, 0xC
    ctx->pc = 0x1a8d54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1a8d58: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A8D58u;
    {
        const bool branch_taken_0x1a8d58 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D58u;
            // 0x1a8d5c: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d58) {
            ctx->pc = 0x1A8D7Cu;
            goto label_1a8d7c;
        }
    }
    ctx->pc = 0x1A8D60u;
    // 0x1a8d60: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1a8d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8d64: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1a8d64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a8d68: 0xc06a3b2  jal         func_1A8EC8
    ctx->pc = 0x1A8D68u;
    SET_GPR_U32(ctx, 31, 0x1A8D70u);
    ctx->pc = 0x1A8D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D68u;
            // 0x1a8d6c: 0x8fa90008  lw          $t1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EC8u;
    if (runtime->hasFunction(0x1A8EC8u)) {
        auto targetFn = runtime->lookupFunction(0x1A8EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D70u; }
        if (ctx->pc != 0x1A8D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8EC8_0x1a8ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D70u; }
        if (ctx->pc != 0x1A8D70u) { return; }
    }
    ctx->pc = 0x1A8D70u;
label_1a8d70:
    // 0x1a8d70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a8d70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8d74: 0x1220ffde  beqz        $s1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1A8D74u;
    {
        const bool branch_taken_0x1a8d74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D74u;
            // 0x1a8d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d74) {
            ctx->pc = 0x1A8CF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a8cf0;
        }
    }
    ctx->pc = 0x1A8D7Cu;
label_1a8d7c:
    // 0x1a8d7c: 0xc06a9a6  jal         func_1AA698
    ctx->pc = 0x1A8D7Cu;
    SET_GPR_U32(ctx, 31, 0x1A8D84u);
    ctx->pc = 0x1A8D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D7Cu;
            // 0x1a8d80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA698u;
    if (runtime->hasFunction(0x1AA698u)) {
        auto targetFn = runtime->lookupFunction(0x1AA698u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D84u; }
        if (ctx->pc != 0x1A8D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA698_0x1aa698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D84u; }
        if (ctx->pc != 0x1A8D84u) { return; }
    }
    ctx->pc = 0x1A8D84u;
label_1a8d84:
    // 0x1a8d84: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a8d84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8d88: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a8d88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8d8c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1a8d8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a8d90: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1a8d90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8d94: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1a8d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a8d98: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D98u;
            // 0x1a8d9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8DA0u;
}
