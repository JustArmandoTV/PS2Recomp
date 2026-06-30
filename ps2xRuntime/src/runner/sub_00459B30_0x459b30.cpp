#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00459B30
// Address: 0x459b30 - 0x459ba0
void sub_00459B30_0x459b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00459B30_0x459b30");
#endif

    switch (ctx->pc) {
        case 0x459b70u: goto label_459b70;
        case 0x459b88u: goto label_459b88;
        default: break;
    }

    ctx->pc = 0x459b30u;

    // 0x459b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x459b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x459b34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x459b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x459b38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x459b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x459b3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x459b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x459b40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x459b40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459b44: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x459B44u;
    {
        const bool branch_taken_0x459b44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x459B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x459B44u;
            // 0x459b48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x459b44) {
            ctx->pc = 0x459B88u;
            goto label_459b88;
        }
    }
    ctx->pc = 0x459B4Cu;
    // 0x459b4c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x459B4Cu;
    {
        const bool branch_taken_0x459b4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x459b4c) {
            ctx->pc = 0x459B50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x459B4Cu;
            // 0x459b50: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x459B74u;
            goto label_459b74;
        }
    }
    ctx->pc = 0x459B54u;
    // 0x459b54: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x459B54u;
    {
        const bool branch_taken_0x459b54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x459b54) {
            ctx->pc = 0x459B70u;
            goto label_459b70;
        }
    }
    ctx->pc = 0x459B5Cu;
    // 0x459b5c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x459b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x459b60: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x459B60u;
    {
        const bool branch_taken_0x459b60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x459b60) {
            ctx->pc = 0x459B70u;
            goto label_459b70;
        }
    }
    ctx->pc = 0x459B68u;
    // 0x459b68: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x459B68u;
    SET_GPR_U32(ctx, 31, 0x459B70u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459B70u; }
        if (ctx->pc != 0x459B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459B70u; }
        if (ctx->pc != 0x459B70u) { return; }
    }
    ctx->pc = 0x459B70u;
label_459b70:
    // 0x459b70: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x459b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_459b74:
    // 0x459b74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x459b74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x459b78: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x459B78u;
    {
        const bool branch_taken_0x459b78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x459b78) {
            ctx->pc = 0x459B7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x459B78u;
            // 0x459b7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x459B8Cu;
            goto label_459b8c;
        }
    }
    ctx->pc = 0x459B80u;
    // 0x459b80: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x459B80u;
    SET_GPR_U32(ctx, 31, 0x459B88u);
    ctx->pc = 0x459B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459B80u;
            // 0x459b84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459B88u; }
        if (ctx->pc != 0x459B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459B88u; }
        if (ctx->pc != 0x459B88u) { return; }
    }
    ctx->pc = 0x459B88u;
label_459b88:
    // 0x459b88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x459b88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_459b8c:
    // 0x459b8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x459b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x459b90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x459b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459b94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x459b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x459b98: 0x3e00008  jr          $ra
    ctx->pc = 0x459B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x459B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x459B98u;
            // 0x459b9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x459BA0u;
}
