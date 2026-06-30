#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B54D8
// Address: 0x1b54d8 - 0x1b5558
void sub_001B54D8_0x1b54d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B54D8_0x1b54d8");
#endif

    switch (ctx->pc) {
        case 0x1b5500u: goto label_1b5500;
        case 0x1b5514u: goto label_1b5514;
        default: break;
    }

    ctx->pc = 0x1b54d8u;

    // 0x1b54d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b54d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b54dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b54dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b54e0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b54e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b54e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b54e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b54e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b54e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b54ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b54ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b54f0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b54f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b54f4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b54f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b54f8: 0xc06e388  jal         func_1B8E20
    ctx->pc = 0x1B54F8u;
    SET_GPR_U32(ctx, 31, 0x1B5500u);
    ctx->pc = 0x1B54FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B54F8u;
            // 0x1b54fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8E20u;
    if (runtime->hasFunction(0x1B8E20u)) {
        auto targetFn = runtime->lookupFunction(0x1B8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5500u; }
        if (ctx->pc != 0x1B5500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8E20_0x1b8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5500u; }
        if (ctx->pc != 0x1B5500u) { return; }
    }
    ctx->pc = 0x1B5500u;
label_1b5500:
    // 0x1b5500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5504: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B5504u;
    {
        const bool branch_taken_0x1b5504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5504u;
            // 0x1b5508: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5504) {
            ctx->pc = 0x1B5538u;
            goto label_1b5538;
        }
    }
    ctx->pc = 0x1B550Cu;
    // 0x1b550c: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B550Cu;
    SET_GPR_U32(ctx, 31, 0x1B5514u);
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5514u; }
        if (ctx->pc != 0x1B5514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5514u; }
        if (ctx->pc != 0x1B5514u) { return; }
    }
    ctx->pc = 0x1B5514u;
label_1b5514:
    // 0x1b5514: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b5514u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b551c: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B551Cu;
    {
        const bool branch_taken_0x1b551c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b551c) {
            ctx->pc = 0x1B5520u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B551Cu;
            // 0x1b5520: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B553Cu;
            goto label_1b553c;
        }
    }
    ctx->pc = 0x1B5524u;
    // 0x1b5524: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1b5524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1b5528: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b5528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b552c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B552Cu;
    {
        const bool branch_taken_0x1b552c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B552Cu;
            // 0x1b5530: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b552c) {
            ctx->pc = 0x1B5540u;
            goto label_1b5540;
        }
    }
    ctx->pc = 0x1B5534u;
    // 0x1b5534: 0x0  nop
    ctx->pc = 0x1b5534u;
    // NOP
label_1b5538:
    // 0x1b5538: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1b5538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1b553c:
    // 0x1b553c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b553cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5540:
    // 0x1b5540: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5544: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b5544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5548: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b5548u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b554c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b554cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b5550: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5550u;
            // 0x1b5554: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5558u;
}
