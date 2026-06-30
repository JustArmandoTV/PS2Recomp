#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2328
// Address: 0x1b2328 - 0x1b2398
void sub_001B2328_0x1b2328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2328_0x1b2328");
#endif

    switch (ctx->pc) {
        case 0x1b2344u: goto label_1b2344;
        case 0x1b2374u: goto label_1b2374;
        case 0x1b2380u: goto label_1b2380;
        default: break;
    }

    ctx->pc = 0x1b2328u;

    // 0x1b2328: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b232c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b232cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2330: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b2330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2334: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b2334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b2338: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b2338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b233c: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B233Cu;
    SET_GPR_U32(ctx, 31, 0x1B2344u);
    ctx->pc = 0x1B2340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B233Cu;
            // 0x1b2340: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2344u; }
        if (ctx->pc != 0x1B2344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2344u; }
        if (ctx->pc != 0x1B2344u) { return; }
    }
    ctx->pc = 0x1B2344u;
label_1b2344:
    // 0x1b2344: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b2344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b2348: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2348u;
    {
        const bool branch_taken_0x1b2348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B234Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2348u;
            // 0x1b234c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2348) {
            ctx->pc = 0x1B2368u;
            goto label_1b2368;
        }
    }
    ctx->pc = 0x1B2350u;
    // 0x1b2350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2354: 0x34a50144  ori         $a1, $a1, 0x144
    ctx->pc = 0x1b2354u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)324);
    // 0x1b2358: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2358u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b235c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b235cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2360: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B2360u;
    ctx->pc = 0x1B2364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2360u;
            // 0x1b2364: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B2368u;
label_1b2368:
    // 0x1b2368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b236c: 0xc06e07a  jal         func_1B81E8
    ctx->pc = 0x1B236Cu;
    SET_GPR_U32(ctx, 31, 0x1B2374u);
    ctx->pc = 0x1B2370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B236Cu;
            // 0x1b2370: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B81E8u;
    if (runtime->hasFunction(0x1B81E8u)) {
        auto targetFn = runtime->lookupFunction(0x1B81E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2374u; }
        if (ctx->pc != 0x1B2374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B81E8_0x1b81e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2374u; }
        if (ctx->pc != 0x1B2374u) { return; }
    }
    ctx->pc = 0x1B2374u;
label_1b2374:
    // 0x1b2374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2378: 0xc0692ec  jal         func_1A4BB0
    ctx->pc = 0x1B2378u;
    SET_GPR_U32(ctx, 31, 0x1B2380u);
    ctx->pc = 0x1B237Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2378u;
            // 0x1b237c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4BB0u;
    if (runtime->hasFunction(0x1A4BB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A4BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2380u; }
        if (ctx->pc != 0x1B2380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4BB0_0x1a4bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2380u; }
        if (ctx->pc != 0x1B2380u) { return; }
    }
    ctx->pc = 0x1B2380u;
label_1b2380:
    // 0x1b2380: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b2380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2388: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b238c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b238cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2390: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2390u;
            // 0x1b2394: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B2398u;
}
