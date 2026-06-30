#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017D578
// Address: 0x17d578 - 0x17d620
void sub_0017D578_0x17d578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D578_0x17d578");
#endif

    switch (ctx->pc) {
        case 0x17d5a0u: goto label_17d5a0;
        case 0x17d5c4u: goto label_17d5c4;
        case 0x17d5d8u: goto label_17d5d8;
        case 0x17d5e0u: goto label_17d5e0;
        case 0x17d5f0u: goto label_17d5f0;
        case 0x17d604u: goto label_17d604;
        default: break;
    }

    ctx->pc = 0x17d578u;

    // 0x17d578: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17d578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17d57c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17d57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17d580: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17d580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d584: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x17d584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x17d588: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17d588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17d58c: 0x24a56560  addiu       $a1, $a1, 0x6560
    ctx->pc = 0x17d58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25952));
    // 0x17d590: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17d590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d594: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17d594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17d598: 0xc04afe8  jal         func_12BFA0
    ctx->pc = 0x17D598u;
    SET_GPR_U32(ctx, 31, 0x17D5A0u);
    ctx->pc = 0x17D59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D598u;
            // 0x17d59c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BFA0u;
    if (runtime->hasFunction(0x12BFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12BFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D5A0u; }
        if (ctx->pc != 0x17D5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BFA0_0x12bfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D5A0u; }
        if (ctx->pc != 0x17D5A0u) { return; }
    }
    ctx->pc = 0x17D5A0u;
label_17d5a0:
    // 0x17d5a0: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x17d5a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17d5a4: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x17d5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x17d5a8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D5A8u;
    {
        const bool branch_taken_0x17d5a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17D5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D5A8u;
            // 0x17d5ac: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d5a8) {
            ctx->pc = 0x17D5C4u;
            goto label_17d5c4;
        }
    }
    ctx->pc = 0x17D5B0u;
    // 0x17d5b0: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D5B0u;
    {
        const bool branch_taken_0x17d5b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x17D5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D5B0u;
            // 0x17d5b4: 0x3c050063  lui         $a1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d5b0) {
            ctx->pc = 0x17D5C4u;
            goto label_17d5c4;
        }
    }
    ctx->pc = 0x17D5B8u;
    // 0x17d5b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17d5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5bc: 0xc04af4a  jal         func_12BD28
    ctx->pc = 0x17D5BCu;
    SET_GPR_U32(ctx, 31, 0x17D5C4u);
    ctx->pc = 0x17D5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D5BCu;
            // 0x17d5c0: 0x24a56020  addiu       $a1, $a1, 0x6020 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BD28u;
    if (runtime->hasFunction(0x12BD28u)) {
        auto targetFn = runtime->lookupFunction(0x12BD28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D5C4u; }
        if (ctx->pc != 0x17D5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BD28_0x12bd28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D5C4u; }
        if (ctx->pc != 0x17D5C4u) { return; }
    }
    ctx->pc = 0x17D5C4u;
label_17d5c4:
    // 0x17d5c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17d5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5c8: 0x3c100063  lui         $s0, 0x63
    ctx->pc = 0x17d5c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)99 << 16));
    // 0x17d5cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17d5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5d0: 0xc04af4a  jal         func_12BD28
    ctx->pc = 0x17D5D0u;
    SET_GPR_U32(ctx, 31, 0x17D5D8u);
    ctx->pc = 0x17D5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D5D0u;
            // 0x17d5d4: 0x26106028  addiu       $s0, $s0, 0x6028 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BD28u;
    if (runtime->hasFunction(0x12BD28u)) {
        auto targetFn = runtime->lookupFunction(0x12BD28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D5D8u; }
        if (ctx->pc != 0x17D5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BD28_0x12bd28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D5D8u; }
        if (ctx->pc != 0x17D5D8u) { return; }
    }
    ctx->pc = 0x17D5D8u;
label_17d5d8:
    // 0x17d5d8: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x17D5D8u;
    SET_GPR_U32(ctx, 31, 0x17D5E0u);
    ctx->pc = 0x17D5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D5D8u;
            // 0x17d5dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D5E0u; }
        if (ctx->pc != 0x17D5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D5E0u; }
        if (ctx->pc != 0x17D5E0u) { return; }
    }
    ctx->pc = 0x17D5E0u;
label_17d5e0:
    // 0x17d5e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17d5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5e4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x17d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17d5e8: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x17D5E8u;
    SET_GPR_U32(ctx, 31, 0x17D5F0u);
    ctx->pc = 0x17D5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D5E8u;
            // 0x17d5ec: 0x2444fffe  addiu       $a0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D5F0u; }
        if (ctx->pc != 0x17D5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D5F0u; }
        if (ctx->pc != 0x17D5F0u) { return; }
    }
    ctx->pc = 0x17D5F0u;
label_17d5f0:
    // 0x17d5f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17d5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17D5F4u;
    {
        const bool branch_taken_0x17d5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D5F4u;
            // 0x17d5f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d5f4) {
            ctx->pc = 0x17D608u;
            goto label_17d608;
        }
    }
    ctx->pc = 0x17D5FCu;
    // 0x17d5fc: 0xc04af4a  jal         func_12BD28
    ctx->pc = 0x17D5FCu;
    SET_GPR_U32(ctx, 31, 0x17D604u);
    ctx->pc = 0x12BD28u;
    if (runtime->hasFunction(0x12BD28u)) {
        auto targetFn = runtime->lookupFunction(0x12BD28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D604u; }
        if (ctx->pc != 0x17D604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BD28_0x12bd28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D604u; }
        if (ctx->pc != 0x17D604u) { return; }
    }
    ctx->pc = 0x17D604u;
label_17d604:
    // 0x17d604: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17d604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17d608:
    // 0x17d608: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17d608u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17d60c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17d60cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d610: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17d610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d614: 0x805f2ce  j           func_17CB38
    ctx->pc = 0x17D614u;
    ctx->pc = 0x17D618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D614u;
            // 0x17d618: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CB38u;
    if (runtime->hasFunction(0x17CB38u)) {
        auto targetFn = runtime->lookupFunction(0x17CB38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0017CB38_0x17cb38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17D61Cu;
    // 0x17d61c: 0x0  nop
    ctx->pc = 0x17d61cu;
    // NOP
}
