#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00334B30
// Address: 0x334b30 - 0x334ba0
void sub_00334B30_0x334b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334B30_0x334b30");
#endif

    switch (ctx->pc) {
        case 0x334b70u: goto label_334b70;
        case 0x334b88u: goto label_334b88;
        default: break;
    }

    ctx->pc = 0x334b30u;

    // 0x334b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x334b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x334b34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x334b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x334b38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x334b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x334b3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x334b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x334b40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x334b40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334b44: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x334B44u;
    {
        const bool branch_taken_0x334b44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x334B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334B44u;
            // 0x334b48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334b44) {
            ctx->pc = 0x334B88u;
            goto label_334b88;
        }
    }
    ctx->pc = 0x334B4Cu;
    // 0x334b4c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x334b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x334b50: 0x24425280  addiu       $v0, $v0, 0x5280
    ctx->pc = 0x334b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
    // 0x334b54: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x334B54u;
    {
        const bool branch_taken_0x334b54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x334B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334B54u;
            // 0x334b58: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334b54) {
            ctx->pc = 0x334B70u;
            goto label_334b70;
        }
    }
    ctx->pc = 0x334B5Cu;
    // 0x334b5c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x334b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x334b60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x334b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334b64: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x334b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x334b68: 0xc057a68  jal         func_15E9A0
    ctx->pc = 0x334B68u;
    SET_GPR_U32(ctx, 31, 0x334B70u);
    ctx->pc = 0x334B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334B68u;
            // 0x334b6c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334B70u; }
        if (ctx->pc != 0x334B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334B70u; }
        if (ctx->pc != 0x334B70u) { return; }
    }
    ctx->pc = 0x334B70u;
label_334b70:
    // 0x334b70: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x334b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x334b74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x334b74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x334b78: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x334B78u;
    {
        const bool branch_taken_0x334b78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x334b78) {
            ctx->pc = 0x334B7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x334B78u;
            // 0x334b7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x334B8Cu;
            goto label_334b8c;
        }
    }
    ctx->pc = 0x334B80u;
    // 0x334b80: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x334B80u;
    SET_GPR_U32(ctx, 31, 0x334B88u);
    ctx->pc = 0x334B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334B80u;
            // 0x334b84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334B88u; }
        if (ctx->pc != 0x334B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334B88u; }
        if (ctx->pc != 0x334B88u) { return; }
    }
    ctx->pc = 0x334B88u;
label_334b88:
    // 0x334b88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x334b88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_334b8c:
    // 0x334b8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x334b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x334b90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x334b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x334b94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x334b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334b98: 0x3e00008  jr          $ra
    ctx->pc = 0x334B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334B98u;
            // 0x334b9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x334BA0u;
}
