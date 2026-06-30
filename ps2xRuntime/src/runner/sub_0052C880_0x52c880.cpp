#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0052C880
// Address: 0x52c880 - 0x52c8f0
void sub_0052C880_0x52c880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0052C880_0x52c880");
#endif

    switch (ctx->pc) {
        case 0x52c8c0u: goto label_52c8c0;
        case 0x52c8d8u: goto label_52c8d8;
        default: break;
    }

    ctx->pc = 0x52c880u;

    // 0x52c880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x52c880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x52c884: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x52c884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x52c888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52c888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x52c88c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52c88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x52c890: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x52c890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52c894: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x52C894u;
    {
        const bool branch_taken_0x52c894 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x52C898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C894u;
            // 0x52c898: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52c894) {
            ctx->pc = 0x52C8D8u;
            goto label_52c8d8;
        }
    }
    ctx->pc = 0x52C89Cu;
    // 0x52c89c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x52C89Cu;
    {
        const bool branch_taken_0x52c89c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x52c89c) {
            ctx->pc = 0x52C8A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52C89Cu;
            // 0x52c8a0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52C8C4u;
            goto label_52c8c4;
        }
    }
    ctx->pc = 0x52C8A4u;
    // 0x52c8a4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x52C8A4u;
    {
        const bool branch_taken_0x52c8a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x52c8a4) {
            ctx->pc = 0x52C8C0u;
            goto label_52c8c0;
        }
    }
    ctx->pc = 0x52C8ACu;
    // 0x52c8ac: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x52c8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x52c8b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x52C8B0u;
    {
        const bool branch_taken_0x52c8b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x52c8b0) {
            ctx->pc = 0x52C8C0u;
            goto label_52c8c0;
        }
    }
    ctx->pc = 0x52C8B8u;
    // 0x52c8b8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x52C8B8u;
    SET_GPR_U32(ctx, 31, 0x52C8C0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C8C0u; }
        if (ctx->pc != 0x52C8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C8C0u; }
        if (ctx->pc != 0x52C8C0u) { return; }
    }
    ctx->pc = 0x52C8C0u;
label_52c8c0:
    // 0x52c8c0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x52c8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_52c8c4:
    // 0x52c8c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x52c8c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x52c8c8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x52C8C8u;
    {
        const bool branch_taken_0x52c8c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x52c8c8) {
            ctx->pc = 0x52C8CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52C8C8u;
            // 0x52c8cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52C8DCu;
            goto label_52c8dc;
        }
    }
    ctx->pc = 0x52C8D0u;
    // 0x52c8d0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x52C8D0u;
    SET_GPR_U32(ctx, 31, 0x52C8D8u);
    ctx->pc = 0x52C8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52C8D0u;
            // 0x52c8d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C8D8u; }
        if (ctx->pc != 0x52C8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52C8D8u; }
        if (ctx->pc != 0x52C8D8u) { return; }
    }
    ctx->pc = 0x52C8D8u;
label_52c8d8:
    // 0x52c8d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x52c8d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52c8dc:
    // 0x52c8dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52c8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x52c8e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52c8e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x52c8e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52c8e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x52c8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x52C8E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52C8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52C8E8u;
            // 0x52c8ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52C8F0u;
}
