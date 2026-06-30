#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A8760
// Address: 0x1a8760 - 0x1a87f8
void sub_001A8760_0x1a8760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8760_0x1a8760");
#endif

    switch (ctx->pc) {
        case 0x1a8790u: goto label_1a8790;
        case 0x1a87a0u: goto label_1a87a0;
        case 0x1a87d8u: goto label_1a87d8;
        default: break;
    }

    ctx->pc = 0x1a8760u;

    // 0x1a8760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a8760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a8764: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8768: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a8768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a876c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a876cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a8770: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a8770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8774: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a8774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a8778: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a8778u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a877c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A877Cu;
    {
        const bool branch_taken_0x1a877c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A877Cu;
            // 0x1a8780: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a877c) {
            ctx->pc = 0x1A8798u;
            goto label_1a8798;
        }
    }
    ctx->pc = 0x1A8784u;
    // 0x1a8784: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1a8784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1a8788: 0xc06a1fe  jal         func_1A87F8
    ctx->pc = 0x1A8788u;
    SET_GPR_U32(ctx, 31, 0x1A8790u);
    ctx->pc = 0x1A878Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8788u;
            // 0x1a878c: 0x24849b1c  addiu       $a0, $a0, -0x64E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941468));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A87F8u;
    if (runtime->hasFunction(0x1A87F8u)) {
        auto targetFn = runtime->lookupFunction(0x1A87F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8790u; }
        if (ctx->pc != 0x1A8790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A87F8_0x1a87f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8790u; }
        if (ctx->pc != 0x1A8790u) { return; }
    }
    ctx->pc = 0x1A8790u;
label_1a8790:
    // 0x1a8790: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A8790u;
    {
        const bool branch_taken_0x1a8790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8790u;
            // 0x1a8794: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8790) {
            ctx->pc = 0x1A87DCu;
            goto label_1a87dc;
        }
    }
    ctx->pc = 0x1A8798u;
label_1a8798:
    // 0x1a8798: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1A8798u;
    SET_GPR_U32(ctx, 31, 0x1A87A0u);
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A87A0u; }
        if (ctx->pc != 0x1A87A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A87A0u; }
        if (ctx->pc != 0x1A87A0u) { return; }
    }
    ctx->pc = 0x1A87A0u;
label_1a87a0:
    // 0x1a87a0: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a87a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a87a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A87A4u;
    {
        const bool branch_taken_0x1a87a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A87A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A87A4u;
            // 0x1a87a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a87a4) {
            ctx->pc = 0x1A87C8u;
            goto label_1a87c8;
        }
    }
    ctx->pc = 0x1A87ACu;
    // 0x1a87ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a87acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a87b0: 0x34a50101  ori         $a1, $a1, 0x101
    ctx->pc = 0x1a87b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)257);
    // 0x1a87b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a87b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a87b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a87b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a87bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a87bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a87c0: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1A87C0u;
    ctx->pc = 0x1A87C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A87C0u;
            // 0x1a87c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A87C8u;
label_1a87c8:
    // 0x1a87c8: 0x260409f8  addiu       $a0, $s0, 0x9F8
    ctx->pc = 0x1a87c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2552));
    // 0x1a87cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a87ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a87d0: 0xc06a1fe  jal         func_1A87F8
    ctx->pc = 0x1A87D0u;
    SET_GPR_U32(ctx, 31, 0x1A87D8u);
    ctx->pc = 0x1A87D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A87D0u;
            // 0x1a87d4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A87F8u;
    if (runtime->hasFunction(0x1A87F8u)) {
        auto targetFn = runtime->lookupFunction(0x1A87F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A87D8u; }
        if (ctx->pc != 0x1A87D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A87F8_0x1a87f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A87D8u; }
        if (ctx->pc != 0x1A87D8u) { return; }
    }
    ctx->pc = 0x1A87D8u;
label_1a87d8:
    // 0x1a87d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a87d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a87dc:
    // 0x1a87dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a87dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a87e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a87e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a87e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a87e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a87e8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a87e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a87ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1A87ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A87F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A87ECu;
            // 0x1a87f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A87F4u;
    // 0x1a87f4: 0x0  nop
    ctx->pc = 0x1a87f4u;
    // NOP
}
