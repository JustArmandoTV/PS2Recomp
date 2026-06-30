#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B63B8
// Address: 0x1b63b8 - 0x1b6438
void sub_001B63B8_0x1b63b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B63B8_0x1b63b8");
#endif

    switch (ctx->pc) {
        case 0x1b63dcu: goto label_1b63dc;
        case 0x1b6418u: goto label_1b6418;
        default: break;
    }

    ctx->pc = 0x1b63b8u;

    // 0x1b63b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b63b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b63bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b63bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b63c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b63c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b63c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b63c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b63c8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b63c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b63cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b63ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b63d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b63d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b63d4: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B63D4u;
    SET_GPR_U32(ctx, 31, 0x1B63DCu);
    ctx->pc = 0x1B63D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B63D4u;
            // 0x1b63d8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B63DCu; }
        if (ctx->pc != 0x1B63DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B63DCu; }
        if (ctx->pc != 0x1B63DCu) { return; }
    }
    ctx->pc = 0x1B63DCu;
label_1b63dc:
    // 0x1b63dc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b63dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b63e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b63e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b63e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b63e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b63e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B63E8u;
    {
        const bool branch_taken_0x1b63e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B63ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B63E8u;
            // 0x1b63ec: 0x34a50117  ori         $a1, $a1, 0x117 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)279);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b63e8) {
            ctx->pc = 0x1B6410u;
            goto label_1b6410;
        }
    }
    ctx->pc = 0x1B63F0u;
    // 0x1b63f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b63f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b63f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b63f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b63f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b63f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b63fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b63fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6400: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b6400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b6404: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B6404u;
    ctx->pc = 0x1B6408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6404u;
            // 0x1b6408: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B640Cu;
    // 0x1b640c: 0x0  nop
    ctx->pc = 0x1b640cu;
    // NOP
label_1b6410:
    // 0x1b6410: 0xc06d90e  jal         func_1B6438
    ctx->pc = 0x1B6410u;
    SET_GPR_U32(ctx, 31, 0x1B6418u);
    ctx->pc = 0x1B6414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6410u;
            // 0x1b6414: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6438u;
    if (runtime->hasFunction(0x1B6438u)) {
        auto targetFn = runtime->lookupFunction(0x1B6438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6418u; }
        if (ctx->pc != 0x1B6418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6438_0x1b6438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6418u; }
        if (ctx->pc != 0x1B6418u) { return; }
    }
    ctx->pc = 0x1B6418u;
label_1b6418:
    // 0x1b6418: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b6418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b641c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b641cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6420: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6424: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b6424u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6428: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b6428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b642c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B642Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B642Cu;
            // 0x1b6430: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6434u;
    // 0x1b6434: 0x0  nop
    ctx->pc = 0x1b6434u;
    // NOP
}
