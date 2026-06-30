#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00519E70
// Address: 0x519e70 - 0x519ee0
void sub_00519E70_0x519e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00519E70_0x519e70");
#endif

    switch (ctx->pc) {
        case 0x519eb0u: goto label_519eb0;
        case 0x519ec8u: goto label_519ec8;
        default: break;
    }

    ctx->pc = 0x519e70u;

    // 0x519e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x519e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x519e74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x519e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x519e78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x519e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x519e7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x519e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x519e80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x519e80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x519e84: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x519E84u;
    {
        const bool branch_taken_0x519e84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x519E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x519E84u;
            // 0x519e88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x519e84) {
            ctx->pc = 0x519EC8u;
            goto label_519ec8;
        }
    }
    ctx->pc = 0x519E8Cu;
    // 0x519e8c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x519E8Cu;
    {
        const bool branch_taken_0x519e8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x519e8c) {
            ctx->pc = 0x519E90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x519E8Cu;
            // 0x519e90: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x519EB4u;
            goto label_519eb4;
        }
    }
    ctx->pc = 0x519E94u;
    // 0x519e94: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x519E94u;
    {
        const bool branch_taken_0x519e94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x519e94) {
            ctx->pc = 0x519EB0u;
            goto label_519eb0;
        }
    }
    ctx->pc = 0x519E9Cu;
    // 0x519e9c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x519e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x519ea0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x519EA0u;
    {
        const bool branch_taken_0x519ea0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x519ea0) {
            ctx->pc = 0x519EB0u;
            goto label_519eb0;
        }
    }
    ctx->pc = 0x519EA8u;
    // 0x519ea8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x519EA8u;
    SET_GPR_U32(ctx, 31, 0x519EB0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519EB0u; }
        if (ctx->pc != 0x519EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519EB0u; }
        if (ctx->pc != 0x519EB0u) { return; }
    }
    ctx->pc = 0x519EB0u;
label_519eb0:
    // 0x519eb0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x519eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_519eb4:
    // 0x519eb4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x519eb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x519eb8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x519EB8u;
    {
        const bool branch_taken_0x519eb8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x519eb8) {
            ctx->pc = 0x519EBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x519EB8u;
            // 0x519ebc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x519ECCu;
            goto label_519ecc;
        }
    }
    ctx->pc = 0x519EC0u;
    // 0x519ec0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x519EC0u;
    SET_GPR_U32(ctx, 31, 0x519EC8u);
    ctx->pc = 0x519EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x519EC0u;
            // 0x519ec4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519EC8u; }
        if (ctx->pc != 0x519EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x519EC8u; }
        if (ctx->pc != 0x519EC8u) { return; }
    }
    ctx->pc = 0x519EC8u;
label_519ec8:
    // 0x519ec8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x519ec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_519ecc:
    // 0x519ecc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x519eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x519ed0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x519ed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x519ed4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x519ed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x519ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x519ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x519EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x519ED8u;
            // 0x519edc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x519EE0u;
}
