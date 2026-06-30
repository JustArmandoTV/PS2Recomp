#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0043C1C0
// Address: 0x43c1c0 - 0x43c230
void sub_0043C1C0_0x43c1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043C1C0_0x43c1c0");
#endif

    switch (ctx->pc) {
        case 0x43c200u: goto label_43c200;
        case 0x43c218u: goto label_43c218;
        default: break;
    }

    ctx->pc = 0x43c1c0u;

    // 0x43c1c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43c1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x43c1c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x43c1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x43c1c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43c1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x43c1cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43c1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x43c1d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x43c1d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c1d4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x43C1D4u;
    {
        const bool branch_taken_0x43c1d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x43C1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43C1D4u;
            // 0x43c1d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c1d4) {
            ctx->pc = 0x43C218u;
            goto label_43c218;
        }
    }
    ctx->pc = 0x43C1DCu;
    // 0x43c1dc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x43C1DCu;
    {
        const bool branch_taken_0x43c1dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x43c1dc) {
            ctx->pc = 0x43C1E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43C1DCu;
            // 0x43c1e0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43C204u;
            goto label_43c204;
        }
    }
    ctx->pc = 0x43C1E4u;
    // 0x43c1e4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x43C1E4u;
    {
        const bool branch_taken_0x43c1e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x43c1e4) {
            ctx->pc = 0x43C200u;
            goto label_43c200;
        }
    }
    ctx->pc = 0x43C1ECu;
    // 0x43c1ec: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x43c1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x43c1f0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43C1F0u;
    {
        const bool branch_taken_0x43c1f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x43c1f0) {
            ctx->pc = 0x43C200u;
            goto label_43c200;
        }
    }
    ctx->pc = 0x43C1F8u;
    // 0x43c1f8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x43C1F8u;
    SET_GPR_U32(ctx, 31, 0x43C200u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C200u; }
        if (ctx->pc != 0x43C200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C200u; }
        if (ctx->pc != 0x43C200u) { return; }
    }
    ctx->pc = 0x43C200u;
label_43c200:
    // 0x43c200: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x43c200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_43c204:
    // 0x43c204: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x43c204u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x43c208: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43C208u;
    {
        const bool branch_taken_0x43c208 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x43c208) {
            ctx->pc = 0x43C20Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43C208u;
            // 0x43c20c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43C21Cu;
            goto label_43c21c;
        }
    }
    ctx->pc = 0x43C210u;
    // 0x43c210: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x43C210u;
    SET_GPR_U32(ctx, 31, 0x43C218u);
    ctx->pc = 0x43C214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C210u;
            // 0x43c214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C218u; }
        if (ctx->pc != 0x43C218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C218u; }
        if (ctx->pc != 0x43C218u) { return; }
    }
    ctx->pc = 0x43C218u;
label_43c218:
    // 0x43c218: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x43c218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43c21c:
    // 0x43c21c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x43c21cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43c220: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43c220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43c224: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43c224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43c228: 0x3e00008  jr          $ra
    ctx->pc = 0x43C228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43C22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43C228u;
            // 0x43c22c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43C230u;
}
