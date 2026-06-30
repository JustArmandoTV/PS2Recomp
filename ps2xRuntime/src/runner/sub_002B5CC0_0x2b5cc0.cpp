#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B5CC0
// Address: 0x2b5cc0 - 0x2b5d30
void sub_002B5CC0_0x2b5cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5CC0_0x2b5cc0");
#endif

    switch (ctx->pc) {
        case 0x2b5d00u: goto label_2b5d00;
        case 0x2b5d18u: goto label_2b5d18;
        default: break;
    }

    ctx->pc = 0x2b5cc0u;

    // 0x2b5cc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b5cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b5cc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b5cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b5cc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b5cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b5ccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b5cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b5cd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b5cd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5cd4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B5CD4u;
    {
        const bool branch_taken_0x2b5cd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5CD4u;
            // 0x2b5cd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5cd4) {
            ctx->pc = 0x2B5D18u;
            goto label_2b5d18;
        }
    }
    ctx->pc = 0x2B5CDCu;
    // 0x2b5cdc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B5CDCu;
    {
        const bool branch_taken_0x2b5cdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5cdc) {
            ctx->pc = 0x2B5CE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5CDCu;
            // 0x2b5ce0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B5D04u;
            goto label_2b5d04;
        }
    }
    ctx->pc = 0x2B5CE4u;
    // 0x2b5ce4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B5CE4u;
    {
        const bool branch_taken_0x2b5ce4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5ce4) {
            ctx->pc = 0x2B5D00u;
            goto label_2b5d00;
        }
    }
    ctx->pc = 0x2B5CECu;
    // 0x2b5cec: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x2b5cecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2b5cf0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5CF0u;
    {
        const bool branch_taken_0x2b5cf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5cf0) {
            ctx->pc = 0x2B5D00u;
            goto label_2b5d00;
        }
    }
    ctx->pc = 0x2B5CF8u;
    // 0x2b5cf8: 0xc0b474c  jal         func_2D1D30
    ctx->pc = 0x2B5CF8u;
    SET_GPR_U32(ctx, 31, 0x2B5D00u);
    ctx->pc = 0x2D1D30u;
    if (runtime->hasFunction(0x2D1D30u)) {
        auto targetFn = runtime->lookupFunction(0x2D1D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5D00u; }
        if (ctx->pc != 0x2B5D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1D30_0x2d1d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5D00u; }
        if (ctx->pc != 0x2B5D00u) { return; }
    }
    ctx->pc = 0x2B5D00u;
label_2b5d00:
    // 0x2b5d00: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2b5d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2b5d04:
    // 0x2b5d04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b5d04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b5d08: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5D08u;
    {
        const bool branch_taken_0x2b5d08 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b5d08) {
            ctx->pc = 0x2B5D0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5D08u;
            // 0x2b5d0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B5D1Cu;
            goto label_2b5d1c;
        }
    }
    ctx->pc = 0x2B5D10u;
    // 0x2b5d10: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2B5D10u;
    SET_GPR_U32(ctx, 31, 0x2B5D18u);
    ctx->pc = 0x2B5D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5D10u;
            // 0x2b5d14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5D18u; }
        if (ctx->pc != 0x2B5D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5D18u; }
        if (ctx->pc != 0x2B5D18u) { return; }
    }
    ctx->pc = 0x2B5D18u;
label_2b5d18:
    // 0x2b5d18: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b5d18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b5d1c:
    // 0x2b5d1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b5d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5d20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b5d20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5d24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b5d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5d28: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5D28u;
            // 0x2b5d2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B5D30u;
}
