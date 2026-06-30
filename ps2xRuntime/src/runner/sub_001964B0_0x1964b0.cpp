#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001964B0
// Address: 0x1964b0 - 0x196560
void sub_001964B0_0x1964b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001964B0_0x1964b0");
#endif

    switch (ctx->pc) {
        case 0x1964e0u: goto label_1964e0;
        case 0x1964f8u: goto label_1964f8;
        case 0x196540u: goto label_196540;
        default: break;
    }

    ctx->pc = 0x1964b0u;

    // 0x1964b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1964b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1964b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1964b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1964b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1964b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1964bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1964c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1964c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1964c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1964c8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1964c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964cc: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1964CCu;
    {
        const bool branch_taken_0x1964cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1964D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1964CCu;
            // 0x1964d0: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1964cc) {
            ctx->pc = 0x1964F0u;
            goto label_1964f0;
        }
    }
    ctx->pc = 0x1964D4u;
    // 0x1964d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1964d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964d8: 0xc065958  jal         func_196560
    ctx->pc = 0x1964D8u;
    SET_GPR_U32(ctx, 31, 0x1964E0u);
    ctx->pc = 0x1964DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1964D8u;
            // 0x1964dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196560u;
    if (runtime->hasFunction(0x196560u)) {
        auto targetFn = runtime->lookupFunction(0x196560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1964E0u; }
        if (ctx->pc != 0x1964E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196560_0x196560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1964E0u; }
        if (ctx->pc != 0x1964E0u) { return; }
    }
    ctx->pc = 0x1964E0u;
label_1964e0:
    // 0x1964e0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1964e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x1964e4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1964E4u;
    {
        const bool branch_taken_0x1964e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1964E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1964E4u;
            // 0x1964e8: 0x2443fed8  addiu       $v1, $v0, -0x128 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1964e4) {
            ctx->pc = 0x196524u;
            goto label_196524;
        }
    }
    ctx->pc = 0x1964ECu;
    // 0x1964ec: 0x0  nop
    ctx->pc = 0x1964ecu;
    // NOP
label_1964f0:
    // 0x1964f0: 0xc06599a  jal         func_196668
    ctx->pc = 0x1964F0u;
    SET_GPR_U32(ctx, 31, 0x1964F8u);
    ctx->pc = 0x196668u;
    if (runtime->hasFunction(0x196668u)) {
        auto targetFn = runtime->lookupFunction(0x196668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1964F8u; }
        if (ctx->pc != 0x1964F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196668_0x196668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1964F8u; }
        if (ctx->pc != 0x1964F8u) { return; }
    }
    ctx->pc = 0x1964F8u;
label_1964f8:
    // 0x1964f8: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1964f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1964fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1964FCu;
    {
        const bool branch_taken_0x1964fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1964FCu;
            // 0x196500: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1964fc) {
            ctx->pc = 0x196520u;
            goto label_196520;
        }
    }
    ctx->pc = 0x196504u;
    // 0x196504: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x196504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196508: 0x34a50202  ori         $a1, $a1, 0x202
    ctx->pc = 0x196508u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)514);
    // 0x19650c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19650cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x196510: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x196510u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196514: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x196514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196518: 0x8064f2a  j           func_193CA8
    ctx->pc = 0x196518u;
    ctx->pc = 0x19651Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196518u;
            // 0x19651c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193CA8u;
    if (runtime->hasFunction(0x193CA8u)) {
        auto targetFn = runtime->lookupFunction(0x193CA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00193CA8_0x193ca8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x196520u;
label_196520:
    // 0x196520: 0x26030190  addiu       $v1, $s0, 0x190
    ctx->pc = 0x196520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_196524:
    // 0x196524: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x196524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x196528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19652c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19652cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x196530: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196534: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x196534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x196538: 0xc0659c8  jal         func_196720
    ctx->pc = 0x196538u;
    SET_GPR_U32(ctx, 31, 0x196540u);
    ctx->pc = 0x19653Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196538u;
            // 0x19653c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196720u;
    if (runtime->hasFunction(0x196720u)) {
        auto targetFn = runtime->lookupFunction(0x196720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196540u; }
        if (ctx->pc != 0x196540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196720_0x196720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196540u; }
        if (ctx->pc != 0x196540u) { return; }
    }
    ctx->pc = 0x196540u;
label_196540:
    // 0x196540: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x196540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196544: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x196544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196548: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x196548u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19654c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19654cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196550: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x196550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196554: 0x3e00008  jr          $ra
    ctx->pc = 0x196554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196554u;
            // 0x196558: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19655Cu;
    // 0x19655c: 0x0  nop
    ctx->pc = 0x19655cu;
    // NOP
}
