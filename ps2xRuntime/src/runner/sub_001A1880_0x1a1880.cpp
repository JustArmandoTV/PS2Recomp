#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A1880
// Address: 0x1a1880 - 0x1a18c8
void sub_001A1880_0x1a1880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1880_0x1a1880");
#endif

    switch (ctx->pc) {
        case 0x1a18b0u: goto label_1a18b0;
        default: break;
    }

    ctx->pc = 0x1a1880u;

    // 0x1a1880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1884: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1a1884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1888: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1a1888u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a188c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a188cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1890: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a1894: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a1894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1898: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a1898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a189c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1a189cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a18a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1a18a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a18a4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a18a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a18a8: 0xc06211a  jal         func_188468
    ctx->pc = 0x1A18A8u;
    SET_GPR_U32(ctx, 31, 0x1A18B0u);
    ctx->pc = 0x1A18ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A18A8u;
            // 0x1a18ac: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188468u;
    if (runtime->hasFunction(0x188468u)) {
        auto targetFn = runtime->lookupFunction(0x188468u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A18B0u; }
        if (ctx->pc != 0x1A18B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188468_0x188468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A18B0u; }
        if (ctx->pc != 0x1A18B0u) { return; }
    }
    ctx->pc = 0x1A18B0u;
label_1a18b0:
    // 0x1a18b0: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1a18b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1a18b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a18b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a18b8: 0xac50be84  sw          $s0, -0x417C($v0)
    ctx->pc = 0x1a18b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950532), GPR_U32(ctx, 16));
    // 0x1a18bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a18bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a18c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A18C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A18C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A18C0u;
            // 0x1a18c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A18C8u;
}
