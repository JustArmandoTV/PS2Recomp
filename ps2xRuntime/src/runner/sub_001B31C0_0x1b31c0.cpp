#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B31C0
// Address: 0x1b31c0 - 0x1b3240
void sub_001B31C0_0x1b31c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B31C0_0x1b31c0");
#endif

    switch (ctx->pc) {
        case 0x1b31d4u: goto label_1b31d4;
        case 0x1b31e4u: goto label_1b31e4;
        case 0x1b31f4u: goto label_1b31f4;
        case 0x1b3204u: goto label_1b3204;
        default: break;
    }

    ctx->pc = 0x1b31c0u;

    // 0x1b31c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b31c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b31c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b31c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b31c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b31c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b31cc: 0xc06cc90  jal         func_1B3240
    ctx->pc = 0x1B31CCu;
    SET_GPR_U32(ctx, 31, 0x1B31D4u);
    ctx->pc = 0x1B31D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B31CCu;
            // 0x1b31d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3240u;
    if (runtime->hasFunction(0x1B3240u)) {
        auto targetFn = runtime->lookupFunction(0x1B3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B31D4u; }
        if (ctx->pc != 0x1B31D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3240_0x1b3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B31D4u; }
        if (ctx->pc != 0x1B31D4u) { return; }
    }
    ctx->pc = 0x1B31D4u;
label_1b31d4:
    // 0x1b31d4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B31D4u;
    {
        const bool branch_taken_0x1b31d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B31D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B31D4u;
            // 0x1b31d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b31d4) {
            ctx->pc = 0x1B3218u;
            goto label_1b3218;
        }
    }
    ctx->pc = 0x1B31DCu;
    // 0x1b31dc: 0xc06ccac  jal         func_1B32B0
    ctx->pc = 0x1B31DCu;
    SET_GPR_U32(ctx, 31, 0x1B31E4u);
    ctx->pc = 0x1B32B0u;
    if (runtime->hasFunction(0x1B32B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B32B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B31E4u; }
        if (ctx->pc != 0x1B31E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B32B0_0x1b32b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B31E4u; }
        if (ctx->pc != 0x1B31E4u) { return; }
    }
    ctx->pc = 0x1B31E4u;
label_1b31e4:
    // 0x1b31e4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B31E4u;
    {
        const bool branch_taken_0x1b31e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B31E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B31E4u;
            // 0x1b31e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b31e4) {
            ctx->pc = 0x1B3218u;
            goto label_1b3218;
        }
    }
    ctx->pc = 0x1B31ECu;
    // 0x1b31ec: 0xc06ccda  jal         func_1B3368
    ctx->pc = 0x1B31ECu;
    SET_GPR_U32(ctx, 31, 0x1B31F4u);
    ctx->pc = 0x1B3368u;
    if (runtime->hasFunction(0x1B3368u)) {
        auto targetFn = runtime->lookupFunction(0x1B3368u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B31F4u; }
        if (ctx->pc != 0x1B31F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3368_0x1b3368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B31F4u; }
        if (ctx->pc != 0x1B31F4u) { return; }
    }
    ctx->pc = 0x1B31F4u;
label_1b31f4:
    // 0x1b31f4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B31F4u;
    {
        const bool branch_taken_0x1b31f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B31F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B31F4u;
            // 0x1b31f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b31f4) {
            ctx->pc = 0x1B3218u;
            goto label_1b3218;
        }
    }
    ctx->pc = 0x1B31FCu;
    // 0x1b31fc: 0xc06ccf0  jal         func_1B33C0
    ctx->pc = 0x1B31FCu;
    SET_GPR_U32(ctx, 31, 0x1B3204u);
    ctx->pc = 0x1B33C0u;
    if (runtime->hasFunction(0x1B33C0u)) {
        auto targetFn = runtime->lookupFunction(0x1B33C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3204u; }
        if (ctx->pc != 0x1B3204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B33C0_0x1b33c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3204u; }
        if (ctx->pc != 0x1B3204u) { return; }
    }
    ctx->pc = 0x1B3204u;
label_1b3204:
    // 0x1b3204: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3204u;
    {
        const bool branch_taken_0x1b3204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3204u;
            // 0x1b3208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3204) {
            ctx->pc = 0x1B321Cu;
            goto label_1b321c;
        }
    }
    ctx->pc = 0x1B320Cu;
    // 0x1b320c: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1b320cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1b3210: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B3210u;
    {
        const bool branch_taken_0x1b3210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3210) {
            ctx->pc = 0x1B3214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3210u;
            // 0x1b3214: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B3230u;
            goto label_1b3230;
        }
    }
    ctx->pc = 0x1B3218u;
label_1b3218:
    // 0x1b3218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b321c:
    // 0x1b321c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b321cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3220: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b3220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b3224: 0x806cd38  j           func_1B34E0
    ctx->pc = 0x1B3224u;
    ctx->pc = 0x1B3228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3224u;
            // 0x1b3228: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B34E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B34E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B322Cu;
    // 0x1b322c: 0x0  nop
    ctx->pc = 0x1b322cu;
    // NOP
label_1b3230:
    // 0x1b3230: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b3230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b3234: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3234u;
            // 0x1b3238: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B323Cu;
    // 0x1b323c: 0x0  nop
    ctx->pc = 0x1b323cu;
    // NOP
}
