#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2B60
// Address: 0x1b2b60 - 0x1b2c00
void sub_001B2B60_0x1b2b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2B60_0x1b2b60");
#endif

    switch (ctx->pc) {
        case 0x1b2bd8u: goto label_1b2bd8;
        case 0x1b2be8u: goto label_1b2be8;
        default: break;
    }

    ctx->pc = 0x1b2b60u;

    // 0x1b2b60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b2b64: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b2b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b2b68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2b6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b2b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b2b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b2b74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b2b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b2b78: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1b2b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1b2b7c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B2B7Cu;
    {
        const bool branch_taken_0x1b2b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B2B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2B7Cu;
            // 0x1b2b80: 0x8e110048  lw          $s1, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2b7c) {
            ctx->pc = 0x1B2BC8u;
            goto label_1b2bc8;
        }
    }
    ctx->pc = 0x1B2B84u;
    // 0x1b2b84: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x1b2b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1b2b88: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2B88u;
    {
        const bool branch_taken_0x1b2b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2B88u;
            // 0x1b2b8c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2b88) {
            ctx->pc = 0x1B2BA8u;
            goto label_1b2ba8;
        }
    }
    ctx->pc = 0x1B2B90u;
    // 0x1b2b90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b2b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b2b94: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B2B94u;
    {
        const bool branch_taken_0x1b2b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B2B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2B94u;
            // 0x1b2b98: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2b94) {
            ctx->pc = 0x1B2BC0u;
            goto label_1b2bc0;
        }
    }
    ctx->pc = 0x1B2B9Cu;
    // 0x1b2b9c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1B2B9Cu;
    {
        const bool branch_taken_0x1b2b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2B9Cu;
            // 0x1b2ba0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2b9c) {
            ctx->pc = 0x1B2BF0u;
            goto label_1b2bf0;
        }
    }
    ctx->pc = 0x1B2BA4u;
    // 0x1b2ba4: 0x0  nop
    ctx->pc = 0x1b2ba4u;
    // NOP
label_1b2ba8:
    // 0x1b2ba8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B2BA8u;
    {
        const bool branch_taken_0x1b2ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B2BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2BA8u;
            // 0x1b2bac: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ba8) {
            ctx->pc = 0x1B2BD0u;
            goto label_1b2bd0;
        }
    }
    ctx->pc = 0x1B2BB0u;
    // 0x1b2bb0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2BB0u;
    {
        const bool branch_taken_0x1b2bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B2BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2BB0u;
            // 0x1b2bb4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2bb0) {
            ctx->pc = 0x1B2BD0u;
            goto label_1b2bd0;
        }
    }
    ctx->pc = 0x1B2BB8u;
    // 0x1b2bb8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B2BB8u;
    {
        const bool branch_taken_0x1b2bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2BB8u;
            // 0x1b2bbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2bb8) {
            ctx->pc = 0x1B2BF0u;
            goto label_1b2bf0;
        }
    }
    ctx->pc = 0x1B2BC0u;
label_1b2bc0:
    // 0x1b2bc0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B2BC0u;
    {
        const bool branch_taken_0x1b2bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2BC0u;
            // 0x1b2bc4: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2bc0) {
            ctx->pc = 0x1B2BE8u;
            goto label_1b2be8;
        }
    }
    ctx->pc = 0x1B2BC8u;
label_1b2bc8:
    // 0x1b2bc8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2BC8u;
    {
        const bool branch_taken_0x1b2bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2BC8u;
            // 0x1b2bcc: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2bc8) {
            ctx->pc = 0x1B2BE8u;
            goto label_1b2be8;
        }
    }
    ctx->pc = 0x1B2BD0u;
label_1b2bd0:
    // 0x1b2bd0: 0xc06cb1e  jal         func_1B2C78
    ctx->pc = 0x1B2BD0u;
    SET_GPR_U32(ctx, 31, 0x1B2BD8u);
    ctx->pc = 0x1B2BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2BD0u;
            // 0x1b2bd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2C78u;
    if (runtime->hasFunction(0x1B2C78u)) {
        auto targetFn = runtime->lookupFunction(0x1B2C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2BD8u; }
        if (ctx->pc != 0x1B2BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2C78_0x1b2c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2BD8u; }
        if (ctx->pc != 0x1B2BD8u) { return; }
    }
    ctx->pc = 0x1B2BD8u;
label_1b2bd8:
    // 0x1b2bd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2BD8u;
    {
        const bool branch_taken_0x1b2bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2BD8u;
            // 0x1b2bdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2bd8) {
            ctx->pc = 0x1B2BE8u;
            goto label_1b2be8;
        }
    }
    ctx->pc = 0x1B2BE0u;
    // 0x1b2be0: 0xc06cf32  jal         func_1B3CC8
    ctx->pc = 0x1B2BE0u;
    SET_GPR_U32(ctx, 31, 0x1B2BE8u);
    ctx->pc = 0x1B2BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2BE0u;
            // 0x1b2be4: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3CC8u;
    if (runtime->hasFunction(0x1B3CC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2BE8u; }
        if (ctx->pc != 0x1B2BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3CC8_0x1b3cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2BE8u; }
        if (ctx->pc != 0x1B2BE8u) { return; }
    }
    ctx->pc = 0x1B2BE8u;
label_1b2be8:
    // 0x1b2be8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b2be8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2bec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b2bf0:
    // 0x1b2bf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2bf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2bf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b2bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2BF8u;
            // 0x1b2bfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B2C00u;
}
