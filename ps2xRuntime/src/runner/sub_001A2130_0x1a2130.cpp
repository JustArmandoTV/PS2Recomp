#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A2130
// Address: 0x1a2130 - 0x1a21a8
void sub_001A2130_0x1a2130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2130_0x1a2130");
#endif

    switch (ctx->pc) {
        case 0x1a2170u: goto label_1a2170;
        case 0x1a2180u: goto label_1a2180;
        case 0x1a2188u: goto label_1a2188;
        case 0x1a2190u: goto label_1a2190;
        default: break;
    }

    ctx->pc = 0x1a2130u;

    // 0x1a2130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2134: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a2138: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a2138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a213c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a213cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a2140: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a2140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a2144: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1a2144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1a2148: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A2148u;
    {
        const bool branch_taken_0x1a2148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A214Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2148u;
            // 0x1a214c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2148) {
            ctx->pc = 0x1A2180u;
            goto label_1a2180;
        }
    }
    ctx->pc = 0x1A2150u;
    // 0x1a2150: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1a2150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1a2154: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a2154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a2158: 0x8c63a880  lw          $v1, -0x5780($v1)
    ctx->pc = 0x1a2158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944896)));
    // 0x1a215c: 0x600008  jr          $v1
    ctx->pc = 0x1A215Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2168u: goto label_1a2168;
            case 0x1A2178u: goto label_1a2178;
            case 0x1A2180u: goto label_1a2180;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A2164u;
    // 0x1a2164: 0x0  nop
    ctx->pc = 0x1a2164u;
    // NOP
label_1a2168:
    // 0x1a2168: 0xc068730  jal         func_1A1CC0
    ctx->pc = 0x1A2168u;
    SET_GPR_U32(ctx, 31, 0x1A2170u);
    ctx->pc = 0x1A216Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2168u;
            // 0x1a216c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1CC0u;
    if (runtime->hasFunction(0x1A1CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A1CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2170u; }
        if (ctx->pc != 0x1A2170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1CC0_0x1a1cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2170u; }
        if (ctx->pc != 0x1A2170u) { return; }
    }
    ctx->pc = 0x1A2170u;
label_1a2170:
    // 0x1a2170: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2170u;
    {
        const bool branch_taken_0x1a2170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2170) {
            ctx->pc = 0x1A2180u;
            goto label_1a2180;
        }
    }
    ctx->pc = 0x1A2178u;
label_1a2178:
    // 0x1a2178: 0xc068808  jal         func_1A2020
    ctx->pc = 0x1A2178u;
    SET_GPR_U32(ctx, 31, 0x1A2180u);
    ctx->pc = 0x1A217Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2178u;
            // 0x1a217c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2020u;
    if (runtime->hasFunction(0x1A2020u)) {
        auto targetFn = runtime->lookupFunction(0x1A2020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2180u; }
        if (ctx->pc != 0x1A2180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2020_0x1a2020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2180u; }
        if (ctx->pc != 0x1A2180u) { return; }
    }
    ctx->pc = 0x1A2180u;
label_1a2180:
    // 0x1a2180: 0xc06886a  jal         func_1A21A8
    ctx->pc = 0x1A2180u;
    SET_GPR_U32(ctx, 31, 0x1A2188u);
    ctx->pc = 0x1A2184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2180u;
            // 0x1a2184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A21A8u;
    if (runtime->hasFunction(0x1A21A8u)) {
        auto targetFn = runtime->lookupFunction(0x1A21A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2188u; }
        if (ctx->pc != 0x1A2188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A21A8_0x1a21a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2188u; }
        if (ctx->pc != 0x1A2188u) { return; }
    }
    ctx->pc = 0x1A2188u;
label_1a2188:
    // 0x1a2188: 0xc0673ac  jal         func_19CEB0
    ctx->pc = 0x1A2188u;
    SET_GPR_U32(ctx, 31, 0x1A2190u);
    ctx->pc = 0x1A218Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2188u;
            // 0x1a218c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CEB0u;
    if (runtime->hasFunction(0x19CEB0u)) {
        auto targetFn = runtime->lookupFunction(0x19CEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2190u; }
        if (ctx->pc != 0x1A2190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019CEB0_0x19ceb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2190u; }
        if (ctx->pc != 0x1A2190u) { return; }
    }
    ctx->pc = 0x1A2190u;
label_1a2190:
    // 0x1a2190: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a2190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2194: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2198: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a2198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a219c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A219Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A21A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A219Cu;
            // 0x1a21a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A21A4u;
    // 0x1a21a4: 0x0  nop
    ctx->pc = 0x1a21a4u;
    // NOP
}
