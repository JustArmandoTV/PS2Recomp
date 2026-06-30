#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D2E40
// Address: 0x2d2e40 - 0x2d2eb0
void sub_002D2E40_0x2d2e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2E40_0x2d2e40");
#endif

    switch (ctx->pc) {
        case 0x2d2e64u: goto label_2d2e64;
        case 0x2d2e78u: goto label_2d2e78;
        case 0x2d2e90u: goto label_2d2e90;
        default: break;
    }

    ctx->pc = 0x2d2e40u;

    // 0x2d2e40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d2e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d2e44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d2e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d2e48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d2e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d2e4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d2e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d2e50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d2e50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e54: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x2D2E54u;
    {
        const bool branch_taken_0x2d2e54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2E54u;
            // 0x2d2e58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2e54) {
            ctx->pc = 0x2D2E90u;
            goto label_2d2e90;
        }
    }
    ctx->pc = 0x2D2E5Cu;
    // 0x2d2e5c: 0xc0b6464  jal         func_2D9190
    ctx->pc = 0x2D2E5Cu;
    SET_GPR_U32(ctx, 31, 0x2D2E64u);
    ctx->pc = 0x2D9190u;
    if (runtime->hasFunction(0x2D9190u)) {
        auto targetFn = runtime->lookupFunction(0x2D9190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2E64u; }
        if (ctx->pc != 0x2D2E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9190_0x2d9190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2E64u; }
        if (ctx->pc != 0x2D2E64u) { return; }
    }
    ctx->pc = 0x2D2E64u;
label_2d2e64:
    // 0x2d2e64: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2d2e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d2e68: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2E68u;
    {
        const bool branch_taken_0x2d2e68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2e68) {
            ctx->pc = 0x2D2E6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2E68u;
            // 0x2d2e6c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2E7Cu;
            goto label_2d2e7c;
        }
    }
    ctx->pc = 0x2D2E70u;
    // 0x2d2e70: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2D2E70u;
    SET_GPR_U32(ctx, 31, 0x2D2E78u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2E78u; }
        if (ctx->pc != 0x2D2E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2E78u; }
        if (ctx->pc != 0x2D2E78u) { return; }
    }
    ctx->pc = 0x2D2E78u;
label_2d2e78:
    // 0x2d2e78: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2d2e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2d2e7c:
    // 0x2d2e7c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d2e7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d2e80: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2E80u;
    {
        const bool branch_taken_0x2d2e80 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d2e80) {
            ctx->pc = 0x2D2E84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2E80u;
            // 0x2d2e84: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2E94u;
            goto label_2d2e94;
        }
    }
    ctx->pc = 0x2D2E88u;
    // 0x2d2e88: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2D2E88u;
    SET_GPR_U32(ctx, 31, 0x2D2E90u);
    ctx->pc = 0x2D2E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2E88u;
            // 0x2d2e8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2E90u; }
        if (ctx->pc != 0x2D2E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2E90u; }
        if (ctx->pc != 0x2D2E90u) { return; }
    }
    ctx->pc = 0x2D2E90u;
label_2d2e90:
    // 0x2d2e90: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d2e90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d2e94:
    // 0x2d2e94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d2e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2e98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d2e98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2e9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d2e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2EA0u;
            // 0x2d2ea4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D2EA8u;
    // 0x2d2ea8: 0x0  nop
    ctx->pc = 0x2d2ea8u;
    // NOP
    // 0x2d2eac: 0x0  nop
    ctx->pc = 0x2d2eacu;
    // NOP
}
