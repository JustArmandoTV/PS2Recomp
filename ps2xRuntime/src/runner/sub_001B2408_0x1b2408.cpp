#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2408
// Address: 0x1b2408 - 0x1b2478
void sub_001B2408_0x1b2408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2408_0x1b2408");
#endif

    switch (ctx->pc) {
        case 0x1b2424u: goto label_1b2424;
        case 0x1b245cu: goto label_1b245c;
        default: break;
    }

    ctx->pc = 0x1b2408u;

    // 0x1b2408: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b240c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b240cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2410: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b2410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2414: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b2414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b2418: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b2418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b241c: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B241Cu;
    SET_GPR_U32(ctx, 31, 0x1B2424u);
    ctx->pc = 0x1B2420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B241Cu;
            // 0x1b2420: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2424u; }
        if (ctx->pc != 0x1B2424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2424u; }
        if (ctx->pc != 0x1B2424u) { return; }
    }
    ctx->pc = 0x1B2424u;
label_1b2424:
    // 0x1b2424: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b2424u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b2428: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b2428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b242c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b242cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2430: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2430u;
    {
        const bool branch_taken_0x1b2430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2430u;
            // 0x1b2434: 0x34a50146  ori         $a1, $a1, 0x146 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)326);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2430) {
            ctx->pc = 0x1B2450u;
            goto label_1b2450;
        }
    }
    ctx->pc = 0x1B2438u;
    // 0x1b2438: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2438u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b243c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b243cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2440: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b2440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2444: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B2444u;
    ctx->pc = 0x1B2448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2444u;
            // 0x1b2448: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B244Cu;
    // 0x1b244c: 0x0  nop
    ctx->pc = 0x1b244cu;
    // NOP
label_1b2450:
    // 0x1b2450: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b2450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2454: 0xc06d75a  jal         func_1B5D68
    ctx->pc = 0x1B2454u;
    SET_GPR_U32(ctx, 31, 0x1B245Cu);
    ctx->pc = 0x1B2458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2454u;
            // 0x1b2458: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B245Cu; }
        if (ctx->pc != 0x1B245Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B245Cu; }
        if (ctx->pc != 0x1B245Cu) { return; }
    }
    ctx->pc = 0x1B245Cu;
label_1b245c:
    // 0x1b245c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b245cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2460: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2464: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2464u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2468: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b2468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b246c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B246Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B246Cu;
            // 0x1b2470: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B2474u;
    // 0x1b2474: 0x0  nop
    ctx->pc = 0x1b2474u;
    // NOP
}
