#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C6758
// Address: 0x1c6758 - 0x1c67a8
void sub_001C6758_0x1c6758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6758_0x1c6758");
#endif

    switch (ctx->pc) {
        case 0x1c678cu: goto label_1c678c;
        default: break;
    }

    ctx->pc = 0x1c6758u;

    // 0x1c6758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c675c: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1c675cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1c6760: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x1c6760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
    // 0x1c6764: 0x3c06006e  lui         $a2, 0x6E
    ctx->pc = 0x1c6764u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)110 << 16));
    // 0x1c6768: 0x3c07006e  lui         $a3, 0x6E
    ctx->pc = 0x1c6768u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)110 << 16));
    // 0x1c676c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c676cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6770: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c6770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c6774: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c6774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6778: 0xac403040  sw          $zero, 0x3040($v0)
    ctx->pc = 0x1c6778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12352), GPR_U32(ctx, 0));
    // 0x1c677c: 0xac603044  sw          $zero, 0x3044($v1)
    ctx->pc = 0x1c677cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12356), GPR_U32(ctx, 0));
    // 0x1c6780: 0xacc03048  sw          $zero, 0x3048($a2)
    ctx->pc = 0x1c6780u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12360), GPR_U32(ctx, 0));
    // 0x1c6784: 0xc07197c  jal         func_1C65F0
    ctx->pc = 0x1C6784u;
    SET_GPR_U32(ctx, 31, 0x1C678Cu);
    ctx->pc = 0x1C6788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6784u;
            // 0x1c6788: 0xace0304c  sw          $zero, 0x304C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12364), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C65F0u;
    if (runtime->hasFunction(0x1C65F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C678Cu; }
        if (ctx->pc != 0x1C678Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C65F0_0x1c65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C678Cu; }
        if (ctx->pc != 0x1C678Cu) { return; }
    }
    ctx->pc = 0x1C678Cu;
label_1c678c:
    // 0x1c678c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C678Cu;
    {
        const bool branch_taken_0x1c678c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c678c) {
            ctx->pc = 0x1C6790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C678Cu;
            // 0x1c6790: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6794u;
            goto label_1c6794;
        }
    }
    ctx->pc = 0x1C6794u;
label_1c6794:
    // 0x1c6794: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6798: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c6798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c679c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C679Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C67A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C679Cu;
            // 0x1c67a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C67A4u;
    // 0x1c67a4: 0x0  nop
    ctx->pc = 0x1c67a4u;
    // NOP
}
