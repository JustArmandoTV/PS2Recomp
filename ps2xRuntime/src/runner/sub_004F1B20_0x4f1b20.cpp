#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F1B20
// Address: 0x4f1b20 - 0x4f1b90
void sub_004F1B20_0x4f1b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F1B20_0x4f1b20");
#endif

    switch (ctx->pc) {
        case 0x4f1b60u: goto label_4f1b60;
        case 0x4f1b78u: goto label_4f1b78;
        default: break;
    }

    ctx->pc = 0x4f1b20u;

    // 0x4f1b20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f1b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4f1b24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4f1b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4f1b28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f1b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4f1b2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f1b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4f1b30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f1b30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f1b34: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4F1B34u;
    {
        const bool branch_taken_0x4f1b34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1B34u;
            // 0x4f1b38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1b34) {
            ctx->pc = 0x4F1B78u;
            goto label_4f1b78;
        }
    }
    ctx->pc = 0x4F1B3Cu;
    // 0x4f1b3c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4F1B3Cu;
    {
        const bool branch_taken_0x4f1b3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f1b3c) {
            ctx->pc = 0x4F1B40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1B3Cu;
            // 0x4f1b40: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F1B64u;
            goto label_4f1b64;
        }
    }
    ctx->pc = 0x4F1B44u;
    // 0x4f1b44: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4F1B44u;
    {
        const bool branch_taken_0x4f1b44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f1b44) {
            ctx->pc = 0x4F1B60u;
            goto label_4f1b60;
        }
    }
    ctx->pc = 0x4F1B4Cu;
    // 0x4f1b4c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4f1b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4f1b50: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F1B50u;
    {
        const bool branch_taken_0x4f1b50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f1b50) {
            ctx->pc = 0x4F1B60u;
            goto label_4f1b60;
        }
    }
    ctx->pc = 0x4F1B58u;
    // 0x4f1b58: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4F1B58u;
    SET_GPR_U32(ctx, 31, 0x4F1B60u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1B60u; }
        if (ctx->pc != 0x4F1B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1B60u; }
        if (ctx->pc != 0x4F1B60u) { return; }
    }
    ctx->pc = 0x4F1B60u;
label_4f1b60:
    // 0x4f1b60: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4f1b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4f1b64:
    // 0x4f1b64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4f1b64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4f1b68: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4F1B68u;
    {
        const bool branch_taken_0x4f1b68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4f1b68) {
            ctx->pc = 0x4F1B6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1B68u;
            // 0x4f1b6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F1B7Cu;
            goto label_4f1b7c;
        }
    }
    ctx->pc = 0x4F1B70u;
    // 0x4f1b70: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4F1B70u;
    SET_GPR_U32(ctx, 31, 0x4F1B78u);
    ctx->pc = 0x4F1B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1B70u;
            // 0x4f1b74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1B78u; }
        if (ctx->pc != 0x4F1B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F1B78u; }
        if (ctx->pc != 0x4F1B78u) { return; }
    }
    ctx->pc = 0x4F1B78u;
label_4f1b78:
    // 0x4f1b78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4f1b78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f1b7c:
    // 0x4f1b7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f1b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f1b80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f1b80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f1b84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f1b84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f1b88: 0x3e00008  jr          $ra
    ctx->pc = 0x4F1B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F1B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F1B88u;
            // 0x4f1b8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F1B90u;
}
