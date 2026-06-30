#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C9B00
// Address: 0x4c9b00 - 0x4c9b70
void sub_004C9B00_0x4c9b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C9B00_0x4c9b00");
#endif

    switch (ctx->pc) {
        case 0x4c9b40u: goto label_4c9b40;
        case 0x4c9b58u: goto label_4c9b58;
        default: break;
    }

    ctx->pc = 0x4c9b00u;

    // 0x4c9b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c9b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c9b04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c9b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4c9b08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c9b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4c9b0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c9b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c9b10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c9b10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c9b14: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4C9B14u;
    {
        const bool branch_taken_0x4c9b14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9B14u;
            // 0x4c9b18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9b14) {
            ctx->pc = 0x4C9B58u;
            goto label_4c9b58;
        }
    }
    ctx->pc = 0x4C9B1Cu;
    // 0x4c9b1c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4C9B1Cu;
    {
        const bool branch_taken_0x4c9b1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c9b1c) {
            ctx->pc = 0x4C9B20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9B1Cu;
            // 0x4c9b20: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C9B44u;
            goto label_4c9b44;
        }
    }
    ctx->pc = 0x4C9B24u;
    // 0x4c9b24: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4C9B24u;
    {
        const bool branch_taken_0x4c9b24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c9b24) {
            ctx->pc = 0x4C9B40u;
            goto label_4c9b40;
        }
    }
    ctx->pc = 0x4C9B2Cu;
    // 0x4c9b2c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4c9b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4c9b30: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C9B30u;
    {
        const bool branch_taken_0x4c9b30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c9b30) {
            ctx->pc = 0x4C9B40u;
            goto label_4c9b40;
        }
    }
    ctx->pc = 0x4C9B38u;
    // 0x4c9b38: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4C9B38u;
    SET_GPR_U32(ctx, 31, 0x4C9B40u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9B40u; }
        if (ctx->pc != 0x4C9B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9B40u; }
        if (ctx->pc != 0x4C9B40u) { return; }
    }
    ctx->pc = 0x4C9B40u;
label_4c9b40:
    // 0x4c9b40: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4c9b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4c9b44:
    // 0x4c9b44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4c9b44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4c9b48: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C9B48u;
    {
        const bool branch_taken_0x4c9b48 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4c9b48) {
            ctx->pc = 0x4C9B4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9B48u;
            // 0x4c9b4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C9B5Cu;
            goto label_4c9b5c;
        }
    }
    ctx->pc = 0x4C9B50u;
    // 0x4c9b50: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4C9B50u;
    SET_GPR_U32(ctx, 31, 0x4C9B58u);
    ctx->pc = 0x4C9B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9B50u;
            // 0x4c9b54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9B58u; }
        if (ctx->pc != 0x4C9B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9B58u; }
        if (ctx->pc != 0x4C9B58u) { return; }
    }
    ctx->pc = 0x4C9B58u;
label_4c9b58:
    // 0x4c9b58: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4c9b58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c9b5c:
    // 0x4c9b5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c9b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c9b60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c9b60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c9b64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c9b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c9b68: 0x3e00008  jr          $ra
    ctx->pc = 0x4C9B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C9B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9B68u;
            // 0x4c9b6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C9B70u;
}
