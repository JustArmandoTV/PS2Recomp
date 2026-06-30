#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8B20
// Address: 0x1b8b20 - 0x1b8bc0
void sub_001B8B20_0x1b8b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8B20_0x1b8b20");
#endif

    switch (ctx->pc) {
        case 0x1b8b44u: goto label_1b8b44;
        case 0x1b8b54u: goto label_1b8b54;
        case 0x1b8b70u: goto label_1b8b70;
        case 0x1b8b80u: goto label_1b8b80;
        default: break;
    }

    ctx->pc = 0x1b8b20u;

    // 0x1b8b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b8b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b8b24: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1b8b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b8b28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b8b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b8b2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b8b2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8b30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b8b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b8b34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b8b34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8b38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b8b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b8b3c: 0xc06e328  jal         func_1B8CA0
    ctx->pc = 0x1B8B3Cu;
    SET_GPR_U32(ctx, 31, 0x1B8B44u);
    ctx->pc = 0x1B8B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B3Cu;
            // 0x1b8b40: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8CA0u;
    if (runtime->hasFunction(0x1B8CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B44u; }
        if (ctx->pc != 0x1B8B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8CA0_0x1b8ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B44u; }
        if (ctx->pc != 0x1B8B44u) { return; }
    }
    ctx->pc = 0x1B8B44u;
label_1b8b44:
    // 0x1b8b44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8b48: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b8b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b8b4c: 0xc06e2f8  jal         func_1B8BE0
    ctx->pc = 0x1B8B4Cu;
    SET_GPR_U32(ctx, 31, 0x1B8B54u);
    ctx->pc = 0x1B8B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B4Cu;
            // 0x1b8b50: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8BE0u;
    if (runtime->hasFunction(0x1B8BE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B54u; }
        if (ctx->pc != 0x1B8B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8BE0_0x1b8be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B54u; }
        if (ctx->pc != 0x1B8B54u) { return; }
    }
    ctx->pc = 0x1B8B54u;
label_1b8b54:
    // 0x1b8b54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8b58: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1b8b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b8b5c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b8b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b8b60: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B8B60u;
    {
        const bool branch_taken_0x1b8b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B60u;
            // 0x1b8b64: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8b60) {
            ctx->pc = 0x1B8BA0u;
            goto label_1b8ba0;
        }
    }
    ctx->pc = 0x1B8B68u;
    // 0x1b8b68: 0xc06e328  jal         func_1B8CA0
    ctx->pc = 0x1B8B68u;
    SET_GPR_U32(ctx, 31, 0x1B8B70u);
    ctx->pc = 0x1B8CA0u;
    if (runtime->hasFunction(0x1B8CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B70u; }
        if (ctx->pc != 0x1B8B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8CA0_0x1b8ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B70u; }
        if (ctx->pc != 0x1B8B70u) { return; }
    }
    ctx->pc = 0x1B8B70u;
label_1b8b70:
    // 0x1b8b70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8b74: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b8b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b8b78: 0xc06e2f8  jal         func_1B8BE0
    ctx->pc = 0x1B8B78u;
    SET_GPR_U32(ctx, 31, 0x1B8B80u);
    ctx->pc = 0x1B8B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B78u;
            // 0x1b8b7c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8BE0u;
    if (runtime->hasFunction(0x1B8BE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B80u; }
        if (ctx->pc != 0x1B8B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8BE0_0x1b8be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8B80u; }
        if (ctx->pc != 0x1B8B80u) { return; }
    }
    ctx->pc = 0x1B8B80u;
label_1b8b80:
    // 0x1b8b80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8b84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b8b84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8b88: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b8b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b8b8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b8b8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b8b90: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1b8b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b8b94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b8b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8b98: 0x806e328  j           func_1B8CA0
    ctx->pc = 0x1B8B98u;
    ctx->pc = 0x1B8B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8B98u;
            // 0x1b8b9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8CA0u;
    if (runtime->hasFunction(0x1B8CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8CA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B8CA0_0x1b8ca0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B8BA0u;
label_1b8ba0:
    // 0x1b8ba0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b8ba0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b8ba4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b8ba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8ba8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b8ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b8bac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b8bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8bb0: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1b8bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b8bb4: 0x806e328  j           func_1B8CA0
    ctx->pc = 0x1B8BB4u;
    ctx->pc = 0x1B8BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8BB4u;
            // 0x1b8bb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8CA0u;
    if (runtime->hasFunction(0x1B8CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8CA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B8CA0_0x1b8ca0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B8BBCu;
    // 0x1b8bbc: 0x0  nop
    ctx->pc = 0x1b8bbcu;
    // NOP
}
