#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029C850
// Address: 0x29c850 - 0x29c8e0
void sub_0029C850_0x29c850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C850_0x29c850");
#endif

    switch (ctx->pc) {
        case 0x29c878u: goto label_29c878;
        case 0x29c8a0u: goto label_29c8a0;
        default: break;
    }

    ctx->pc = 0x29c850u;

    // 0x29c850: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29c850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29c854: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29c854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29c858: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29c858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29c85c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29c85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29c860: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29c860u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c864: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29c864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29c868: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x29c868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c86c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29c86cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c870: 0xc0a7f60  jal         func_29FD80
    ctx->pc = 0x29C870u;
    SET_GPR_U32(ctx, 31, 0x29C878u);
    ctx->pc = 0x29C874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C870u;
            // 0x29c874: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FD80u;
    if (runtime->hasFunction(0x29FD80u)) {
        auto targetFn = runtime->lookupFunction(0x29FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C878u; }
        if (ctx->pc != 0x29C878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FD80_0x29fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C878u; }
        if (ctx->pc != 0x29C878u) { return; }
    }
    ctx->pc = 0x29C878u;
label_29c878:
    // 0x29c878: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x29c878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x29c87c: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x29c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x29c880: 0x2463e030  addiu       $v1, $v1, -0x1FD0
    ctx->pc = 0x29c880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959152));
    // 0x29c884: 0x2444ffe0  addiu       $a0, $v0, -0x20
    ctx->pc = 0x29c884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x29c888: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29C888u;
    {
        const bool branch_taken_0x29c888 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C888u;
            // 0x29c88c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c888) {
            ctx->pc = 0x29C8A4u;
            goto label_29c8a4;
        }
    }
    ctx->pc = 0x29C890u;
    // 0x29c890: 0x2626ffe0  addiu       $a2, $s1, -0x20
    ctx->pc = 0x29c890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x29c894: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29c894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c898: 0xc0a823c  jal         func_2A08F0
    ctx->pc = 0x29C898u;
    SET_GPR_U32(ctx, 31, 0x29C8A0u);
    ctx->pc = 0x29C89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C898u;
            // 0x29c89c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A08F0u;
    if (runtime->hasFunction(0x2A08F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A08F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C8A0u; }
        if (ctx->pc != 0x29C8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A08F0_0x2a08f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C8A0u; }
        if (ctx->pc != 0x29C8A0u) { return; }
    }
    ctx->pc = 0x29C8A0u;
label_29c8a0:
    // 0x29c8a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29c8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29c8a4:
    // 0x29c8a4: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x29c8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x29c8a8: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x29c8a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29c8ac: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29C8ACu;
    {
        const bool branch_taken_0x29c8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c8ac) {
            ctx->pc = 0x29C8B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29C8ACu;
            // 0x29c8b0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29C8C4u;
            goto label_29c8c4;
        }
    }
    ctx->pc = 0x29C8B4u;
    // 0x29c8b4: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x29c8b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x29c8b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29c8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29c8bc: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x29c8bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x29c8c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29c8c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29c8c4:
    // 0x29c8c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29c8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29c8c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29c8c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c8cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29c8ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c8d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29c8d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x29C8D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C8D4u;
            // 0x29c8d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C8DCu;
    // 0x29c8dc: 0x0  nop
    ctx->pc = 0x29c8dcu;
    // NOP
}
