#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7B80
// Address: 0x1b7b80 - 0x1b7c88
void sub_001B7B80_0x1b7b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7B80_0x1b7b80");
#endif

    switch (ctx->pc) {
        case 0x1b7ba4u: goto label_1b7ba4;
        case 0x1b7c1cu: goto label_1b7c1c;
        case 0x1b7c68u: goto label_1b7c68;
        default: break;
    }

    ctx->pc = 0x1b7b80u;

    // 0x1b7b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b7b84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b7b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b7b88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b7b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b7b8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b7b8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7b90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7b94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b7b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7b98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b7b9c: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B7B9Cu;
    SET_GPR_U32(ctx, 31, 0x1B7BA4u);
    ctx->pc = 0x1B7BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7B9Cu;
            // 0x1b7ba0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7BA4u; }
        if (ctx->pc != 0x1B7BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7BA4u; }
        if (ctx->pc != 0x1B7BA4u) { return; }
    }
    ctx->pc = 0x1B7BA4u;
label_1b7ba4:
    // 0x1b7ba4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b7ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b7ba8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7BA8u;
    {
        const bool branch_taken_0x1b7ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7BA8u;
            // 0x1b7bac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7ba8) {
            ctx->pc = 0x1B7BC8u;
            goto label_1b7bc8;
        }
    }
    ctx->pc = 0x1B7BB0u;
    // 0x1b7bb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7bb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7bb4: 0x34a5011b  ori         $a1, $a1, 0x11B
    ctx->pc = 0x1b7bb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)283);
    // 0x1b7bb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b7bb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7bbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7bc0: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B7BC0u;
    ctx->pc = 0x1B7BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7BC0u;
            // 0x1b7bc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B7BC8u;
label_1b7bc8:
    // 0x1b7bc8: 0x8e030920  lw          $v1, 0x920($s0)
    ctx->pc = 0x1b7bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2336)));
    // 0x1b7bcc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7BCCu;
    {
        const bool branch_taken_0x1b7bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7BCCu;
            // 0x1b7bd0: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7bcc) {
            ctx->pc = 0x1B7BE4u;
            goto label_1b7be4;
        }
    }
    ctx->pc = 0x1B7BD4u;
    // 0x1b7bd4: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1b7bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1b7bd8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1b7bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b7bdc: 0x8c84ae40  lw          $a0, -0x51C0($a0)
    ctx->pc = 0x1b7bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294946368)));
    // 0x1b7be0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x1b7be0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_1b7be4:
    // 0x1b7be4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7be4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7be8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b7be8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7bec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7BF0u;
            // 0x1b7bf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7BF8u;
    // 0x1b7bf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b7bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b7bfc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b7bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b7c00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b7c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b7c04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b7c04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7c08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7c0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b7c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7c10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b7c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b7c14: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B7C14u;
    SET_GPR_U32(ctx, 31, 0x1B7C1Cu);
    ctx->pc = 0x1B7C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7C14u;
            // 0x1b7c18: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7C1Cu; }
        if (ctx->pc != 0x1B7C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7C1Cu; }
        if (ctx->pc != 0x1B7C1Cu) { return; }
    }
    ctx->pc = 0x1B7C1Cu;
label_1b7c1c:
    // 0x1b7c1c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b7c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b7c20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7C20u;
    {
        const bool branch_taken_0x1b7c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7C20u;
            // 0x1b7c24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c20) {
            ctx->pc = 0x1B7C40u;
            goto label_1b7c40;
        }
    }
    ctx->pc = 0x1B7C28u;
    // 0x1b7c28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7c28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7c2c: 0x34a50118  ori         $a1, $a1, 0x118
    ctx->pc = 0x1b7c2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)280);
    // 0x1b7c30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b7c30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7c34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7c38: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B7C38u;
    ctx->pc = 0x1B7C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7C38u;
            // 0x1b7c3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B7C40u;
label_1b7c40:
    // 0x1b7c40: 0x8e030920  lw          $v1, 0x920($s0)
    ctx->pc = 0x1b7c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2336)));
    // 0x1b7c44: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1B7C44u;
    {
        const bool branch_taken_0x1b7c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7C44u;
            // 0x1b7c48: 0x26040d88  addiu       $a0, $s0, 0xD88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c44) {
            ctx->pc = 0x1B7C70u;
            goto label_1b7c70;
        }
    }
    ctx->pc = 0x1B7C4Cu;
    // 0x1b7c4c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1b7c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b7c50: 0x8c8502ac  lw          $a1, 0x2AC($a0)
    ctx->pc = 0x1b7c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 684)));
    // 0x1b7c54: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1b7c54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1b7c58: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1b7c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b7c5c: 0x8c84ae40  lw          $a0, -0x51C0($a0)
    ctx->pc = 0x1b7c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294946368)));
    // 0x1b7c60: 0xc065a72  jal         func_1969C8
    ctx->pc = 0x1B7C60u;
    SET_GPR_U32(ctx, 31, 0x1B7C68u);
    ctx->pc = 0x1B7C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7C60u;
            // 0x1b7c64: 0x240603e8  addiu       $a2, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1969C8u;
    if (runtime->hasFunction(0x1969C8u)) {
        auto targetFn = runtime->lookupFunction(0x1969C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7C68u; }
        if (ctx->pc != 0x1B7C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001969C8_0x1969c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7C68u; }
        if (ctx->pc != 0x1B7C68u) { return; }
    }
    ctx->pc = 0x1B7C68u;
label_1b7c68:
    // 0x1b7c68: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1b7c68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1b7c6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b7c6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7c70:
    // 0x1b7c70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7c70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7c74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b7c74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7c78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b7c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7C7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7C7Cu;
            // 0x1b7c80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7C84u;
    // 0x1b7c84: 0x0  nop
    ctx->pc = 0x1b7c84u;
    // NOP
}
