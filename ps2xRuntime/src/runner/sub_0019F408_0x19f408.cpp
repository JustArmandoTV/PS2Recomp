#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F408
// Address: 0x19f408 - 0x19f468
void sub_0019F408_0x19f408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F408_0x19f408");
#endif

    switch (ctx->pc) {
        case 0x19f420u: goto label_19f420;
        case 0x19f438u: goto label_19f438;
        case 0x19f44cu: goto label_19f44c;
        case 0x19f454u: goto label_19f454;
        default: break;
    }

    ctx->pc = 0x19f408u;

    // 0x19f408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19f408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f40c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f410: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f414: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19f414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19f418: 0xc067cf8  jal         func_19F3E0
    ctx->pc = 0x19F418u;
    SET_GPR_U32(ctx, 31, 0x19F420u);
    ctx->pc = 0x19F41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F418u;
            // 0x19f41c: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F3E0u;
    if (runtime->hasFunction(0x19F3E0u)) {
        auto targetFn = runtime->lookupFunction(0x19F3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F420u; }
        if (ctx->pc != 0x19F420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F3E0_0x19f3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F420u; }
        if (ctx->pc != 0x19F420u) { return; }
    }
    ctx->pc = 0x19F420u;
label_19f420:
    // 0x19f420: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f424: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x19F424u;
    {
        const bool branch_taken_0x19f424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19F428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F424u;
            // 0x19f428: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f424) {
            ctx->pc = 0x19F454u;
            goto label_19f454;
        }
    }
    ctx->pc = 0x19F42Cu;
    // 0x19f42c: 0x8e0403f4  lw          $a0, 0x3F4($s0)
    ctx->pc = 0x19f42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1012)));
    // 0x19f430: 0xc06156e  jal         func_1855B8
    ctx->pc = 0x19F430u;
    SET_GPR_U32(ctx, 31, 0x19F438u);
    ctx->pc = 0x19F434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F430u;
            // 0x19f434: 0x8e0503f8  lw          $a1, 0x3F8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1016)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1855B8u;
    if (runtime->hasFunction(0x1855B8u)) {
        auto targetFn = runtime->lookupFunction(0x1855B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F438u; }
        if (ctx->pc != 0x19F438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001855B8_0x1855b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F438u; }
        if (ctx->pc != 0x19F438u) { return; }
    }
    ctx->pc = 0x19F438u;
label_19f438:
    // 0x19f438: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19f438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19f43c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19F43Cu;
    {
        const bool branch_taken_0x19f43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F43Cu;
            // 0x19f440: 0x2484a1e0  addiu       $a0, $a0, -0x5E20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f43c) {
            ctx->pc = 0x19F458u;
            goto label_19f458;
        }
    }
    ctx->pc = 0x19F444u;
    // 0x19f444: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19F444u;
    SET_GPR_U32(ctx, 31, 0x19F44Cu);
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F44Cu; }
        if (ctx->pc != 0x19F44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F44Cu; }
        if (ctx->pc != 0x19F44Cu) { return; }
    }
    ctx->pc = 0x19F44Cu;
label_19f44c:
    // 0x19f44c: 0xc0663b2  jal         func_198EC8
    ctx->pc = 0x19F44Cu;
    SET_GPR_U32(ctx, 31, 0x19F454u);
    ctx->pc = 0x19F450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F44Cu;
            // 0x19f450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198EC8u;
    if (runtime->hasFunction(0x198EC8u)) {
        auto targetFn = runtime->lookupFunction(0x198EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F454u; }
        if (ctx->pc != 0x19F454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00198EC8_0x198ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F454u; }
        if (ctx->pc != 0x19F454u) { return; }
    }
    ctx->pc = 0x19F454u;
label_19f454:
    // 0x19f454: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19f454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f458:
    // 0x19f458: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f45c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19f45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19f460: 0x3e00008  jr          $ra
    ctx->pc = 0x19F460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F460u;
            // 0x19f464: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F468u;
}
