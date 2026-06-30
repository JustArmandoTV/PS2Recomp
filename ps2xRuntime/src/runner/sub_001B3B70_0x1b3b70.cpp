#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3B70
// Address: 0x1b3b70 - 0x1b3c10
void sub_001B3B70_0x1b3b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3B70_0x1b3b70");
#endif

    switch (ctx->pc) {
        case 0x1b3b84u: goto label_1b3b84;
        case 0x1b3bb0u: goto label_1b3bb0;
        case 0x1b3bb8u: goto label_1b3bb8;
        case 0x1b3bc0u: goto label_1b3bc0;
        case 0x1b3bc8u: goto label_1b3bc8;
        case 0x1b3bd8u: goto label_1b3bd8;
        default: break;
    }

    ctx->pc = 0x1b3b70u;

    // 0x1b3b70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3b74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b3b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b3b78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b3b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b3b7c: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B3B7Cu;
    SET_GPR_U32(ctx, 31, 0x1B3B84u);
    ctx->pc = 0x1B3B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3B7Cu;
            // 0x1b3b80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3B84u; }
        if (ctx->pc != 0x1B3B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3B84u; }
        if (ctx->pc != 0x1B3B84u) { return; }
    }
    ctx->pc = 0x1B3B84u;
label_1b3b84:
    // 0x1b3b84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B3B84u;
    {
        const bool branch_taken_0x1b3b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3B84u;
            // 0x1b3b88: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3b84) {
            ctx->pc = 0x1B3BA8u;
            goto label_1b3ba8;
        }
    }
    ctx->pc = 0x1B3B8Cu;
    // 0x1b3b8c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b3b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b3b90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b3b90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3b94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b3b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3b98: 0x34a50131  ori         $a1, $a1, 0x131
    ctx->pc = 0x1b3b98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)305);
    // 0x1b3b9c: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B3B9Cu;
    ctx->pc = 0x1B3BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3B9Cu;
            // 0x1b3ba0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B3BA4u;
    // 0x1b3ba4: 0x0  nop
    ctx->pc = 0x1b3ba4u;
    // NOP
label_1b3ba8:
    // 0x1b3ba8: 0xc06cf52  jal         func_1B3D48
    ctx->pc = 0x1B3BA8u;
    SET_GPR_U32(ctx, 31, 0x1B3BB0u);
    ctx->pc = 0x1B3BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3BA8u;
            // 0x1b3bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3D48u;
    if (runtime->hasFunction(0x1B3D48u)) {
        auto targetFn = runtime->lookupFunction(0x1B3D48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3BB0u; }
        if (ctx->pc != 0x1B3BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3D48_0x1b3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3BB0u; }
        if (ctx->pc != 0x1B3BB0u) { return; }
    }
    ctx->pc = 0x1B3BB0u;
label_1b3bb0:
    // 0x1b3bb0: 0xc069e7a  jal         func_1A79E8
    ctx->pc = 0x1B3BB0u;
    SET_GPR_U32(ctx, 31, 0x1B3BB8u);
    ctx->pc = 0x1B3BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3BB0u;
            // 0x1b3bb4: 0x26040078  addiu       $a0, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A79E8u;
    if (runtime->hasFunction(0x1A79E8u)) {
        auto targetFn = runtime->lookupFunction(0x1A79E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3BB8u; }
        if (ctx->pc != 0x1B3BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A79E8_0x1a79e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3BB8u; }
        if (ctx->pc != 0x1B3BB8u) { return; }
    }
    ctx->pc = 0x1B3BB8u;
label_1b3bb8:
    // 0x1b3bb8: 0xc069490  jal         func_1A5240
    ctx->pc = 0x1B3BB8u;
    SET_GPR_U32(ctx, 31, 0x1B3BC0u);
    ctx->pc = 0x1B3BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3BB8u;
            // 0x1b3bbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5240u;
    if (runtime->hasFunction(0x1A5240u)) {
        auto targetFn = runtime->lookupFunction(0x1A5240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3BC0u; }
        if (ctx->pc != 0x1B3BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5240_0x1a5240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3BC0u; }
        if (ctx->pc != 0x1B3BC0u) { return; }
    }
    ctx->pc = 0x1B3BC0u;
label_1b3bc0:
    // 0x1b3bc0: 0xc06cf04  jal         func_1B3C10
    ctx->pc = 0x1B3BC0u;
    SET_GPR_U32(ctx, 31, 0x1B3BC8u);
    ctx->pc = 0x1B3BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3BC0u;
            // 0x1b3bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C10u;
    if (runtime->hasFunction(0x1B3C10u)) {
        auto targetFn = runtime->lookupFunction(0x1B3C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3BC8u; }
        if (ctx->pc != 0x1B3BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3C10_0x1b3c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3BC8u; }
        if (ctx->pc != 0x1B3BC8u) { return; }
    }
    ctx->pc = 0x1B3BC8u;
label_1b3bc8:
    // 0x1b3bc8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1b3bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b3bcc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b3bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3bd0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b3bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b3bd4: 0x24439b8c  addiu       $v1, $v0, -0x6474
    ctx->pc = 0x1b3bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941580));
label_1b3bd8:
    // 0x1b3bd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b3bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b3bdc: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B3BDCu;
    {
        const bool branch_taken_0x1b3bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1b3bdc) {
            ctx->pc = 0x1B3BE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3BDCu;
            // 0x1b3be0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B3BE4u;
            goto label_1b3be4;
        }
    }
    ctx->pc = 0x1B3BE4u;
label_1b3be4:
    // 0x1b3be4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1b3be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1b3be8: 0x0  nop
    ctx->pc = 0x1b3be8u;
    // NOP
    // 0x1b3bec: 0x0  nop
    ctx->pc = 0x1b3becu;
    // NOP
    // 0x1b3bf0: 0x0  nop
    ctx->pc = 0x1b3bf0u;
    // NOP
    // 0x1b3bf4: 0x481fff8  bgez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B3BF4u;
    {
        const bool branch_taken_0x1b3bf4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1B3BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3BF4u;
            // 0x1b3bf8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3bf4) {
            ctx->pc = 0x1B3BD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b3bd8;
        }
    }
    ctx->pc = 0x1B3BFCu;
    // 0x1b3bfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b3bfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3c00: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1b3c00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3c04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b3c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b3c08: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3C08u;
            // 0x1b3c0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B3C10u;
}
