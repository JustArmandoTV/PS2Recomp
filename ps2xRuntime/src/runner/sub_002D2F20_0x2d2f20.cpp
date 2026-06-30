#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D2F20
// Address: 0x2d2f20 - 0x2d2f90
void sub_002D2F20_0x2d2f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2F20_0x2d2f20");
#endif

    switch (ctx->pc) {
        case 0x2d2f44u: goto label_2d2f44;
        case 0x2d2f58u: goto label_2d2f58;
        case 0x2d2f70u: goto label_2d2f70;
        default: break;
    }

    ctx->pc = 0x2d2f20u;

    // 0x2d2f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d2f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d2f24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d2f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d2f28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d2f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d2f2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d2f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d2f30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d2f30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2f34: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x2D2F34u;
    {
        const bool branch_taken_0x2d2f34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2F34u;
            // 0x2d2f38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2f34) {
            ctx->pc = 0x2D2F70u;
            goto label_2d2f70;
        }
    }
    ctx->pc = 0x2D2F3Cu;
    // 0x2d2f3c: 0xc0b64ac  jal         func_2D92B0
    ctx->pc = 0x2D2F3Cu;
    SET_GPR_U32(ctx, 31, 0x2D2F44u);
    ctx->pc = 0x2D92B0u;
    if (runtime->hasFunction(0x2D92B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D92B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2F44u; }
        if (ctx->pc != 0x2D2F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D92B0_0x2d92b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2F44u; }
        if (ctx->pc != 0x2D2F44u) { return; }
    }
    ctx->pc = 0x2D2F44u;
label_2d2f44:
    // 0x2d2f44: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2d2f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d2f48: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2F48u;
    {
        const bool branch_taken_0x2d2f48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2f48) {
            ctx->pc = 0x2D2F4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2F48u;
            // 0x2d2f4c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2F5Cu;
            goto label_2d2f5c;
        }
    }
    ctx->pc = 0x2D2F50u;
    // 0x2d2f50: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2D2F50u;
    SET_GPR_U32(ctx, 31, 0x2D2F58u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2F58u; }
        if (ctx->pc != 0x2D2F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2F58u; }
        if (ctx->pc != 0x2D2F58u) { return; }
    }
    ctx->pc = 0x2D2F58u;
label_2d2f58:
    // 0x2d2f58: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2d2f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2d2f5c:
    // 0x2d2f5c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d2f5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d2f60: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2F60u;
    {
        const bool branch_taken_0x2d2f60 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d2f60) {
            ctx->pc = 0x2D2F64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2F60u;
            // 0x2d2f64: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2F74u;
            goto label_2d2f74;
        }
    }
    ctx->pc = 0x2D2F68u;
    // 0x2d2f68: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2D2F68u;
    SET_GPR_U32(ctx, 31, 0x2D2F70u);
    ctx->pc = 0x2D2F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2F68u;
            // 0x2d2f6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2F70u; }
        if (ctx->pc != 0x2D2F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2F70u; }
        if (ctx->pc != 0x2D2F70u) { return; }
    }
    ctx->pc = 0x2D2F70u;
label_2d2f70:
    // 0x2d2f70: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d2f70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d2f74:
    // 0x2d2f74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d2f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2f78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d2f78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2f7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d2f7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2f80: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2F80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2F80u;
            // 0x2d2f84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D2F88u;
    // 0x2d2f88: 0x0  nop
    ctx->pc = 0x2d2f88u;
    // NOP
    // 0x2d2f8c: 0x0  nop
    ctx->pc = 0x2d2f8cu;
    // NOP
}
