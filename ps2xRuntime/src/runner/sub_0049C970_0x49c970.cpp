#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049C970
// Address: 0x49c970 - 0x49c9e0
void sub_0049C970_0x49c970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049C970_0x49c970");
#endif

    switch (ctx->pc) {
        case 0x49c9b0u: goto label_49c9b0;
        case 0x49c9c8u: goto label_49c9c8;
        default: break;
    }

    ctx->pc = 0x49c970u;

    // 0x49c970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49c970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49c974: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49c974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x49c978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49c978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x49c97c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49c97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x49c980: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x49c980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c984: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x49C984u;
    {
        const bool branch_taken_0x49c984 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49C984u;
            // 0x49c988: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c984) {
            ctx->pc = 0x49C9C8u;
            goto label_49c9c8;
        }
    }
    ctx->pc = 0x49C98Cu;
    // 0x49c98c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x49C98Cu;
    {
        const bool branch_taken_0x49c98c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x49c98c) {
            ctx->pc = 0x49C990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49C98Cu;
            // 0x49c990: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49C9B4u;
            goto label_49c9b4;
        }
    }
    ctx->pc = 0x49C994u;
    // 0x49c994: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x49C994u;
    {
        const bool branch_taken_0x49c994 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x49c994) {
            ctx->pc = 0x49C9B0u;
            goto label_49c9b0;
        }
    }
    ctx->pc = 0x49C99Cu;
    // 0x49c99c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x49c99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x49c9a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x49C9A0u;
    {
        const bool branch_taken_0x49c9a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49c9a0) {
            ctx->pc = 0x49C9B0u;
            goto label_49c9b0;
        }
    }
    ctx->pc = 0x49C9A8u;
    // 0x49c9a8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x49C9A8u;
    SET_GPR_U32(ctx, 31, 0x49C9B0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C9B0u; }
        if (ctx->pc != 0x49C9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C9B0u; }
        if (ctx->pc != 0x49C9B0u) { return; }
    }
    ctx->pc = 0x49C9B0u;
label_49c9b0:
    // 0x49c9b0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x49c9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_49c9b4:
    // 0x49c9b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x49c9b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x49c9b8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49C9B8u;
    {
        const bool branch_taken_0x49c9b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x49c9b8) {
            ctx->pc = 0x49C9BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49C9B8u;
            // 0x49c9bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49C9CCu;
            goto label_49c9cc;
        }
    }
    ctx->pc = 0x49C9C0u;
    // 0x49c9c0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x49C9C0u;
    SET_GPR_U32(ctx, 31, 0x49C9C8u);
    ctx->pc = 0x49C9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49C9C0u;
            // 0x49c9c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C9C8u; }
        if (ctx->pc != 0x49C9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49C9C8u; }
        if (ctx->pc != 0x49C9C8u) { return; }
    }
    ctx->pc = 0x49C9C8u;
label_49c9c8:
    // 0x49c9c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x49c9c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49c9cc:
    // 0x49c9cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49c9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49c9d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49c9d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49c9d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49c9d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49c9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x49C9D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49C9D8u;
            // 0x49c9dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49C9E0u;
}
