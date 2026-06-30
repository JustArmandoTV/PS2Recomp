#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A2D80
// Address: 0x1a2d80 - 0x1a2df8
void sub_001A2D80_0x1a2d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2D80_0x1a2d80");
#endif

    switch (ctx->pc) {
        case 0x1a2db4u: goto label_1a2db4;
        case 0x1a2dd0u: goto label_1a2dd0;
        default: break;
    }

    ctx->pc = 0x1a2d80u;

    // 0x1a2d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a2d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a2d84: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a2d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a2d88: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1a2d88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2d8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a2d90: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a2d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2d94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a2d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a2d98: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a2d98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2d9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a2d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a2da0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1a2da0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2da4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a2da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a2da8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a2da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1a2dac: 0xc05c296  jal         func_170A58
    ctx->pc = 0x1A2DACu;
    SET_GPR_U32(ctx, 31, 0x1A2DB4u);
    ctx->pc = 0x1A2DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2DACu;
            // 0x1a2db0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A58u;
    if (runtime->hasFunction(0x170A58u)) {
        auto targetFn = runtime->lookupFunction(0x170A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2DB4u; }
        if (ctx->pc != 0x1A2DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A58_0x170a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2DB4u; }
        if (ctx->pc != 0x1A2DB4u) { return; }
    }
    ctx->pc = 0x1A2DB4u;
label_1a2db4:
    // 0x1a2db4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1a2db4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2db8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a2db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2dbc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a2dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2dc0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1a2dc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2dc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2dc8: 0xc05c22e  jal         func_1708B8
    ctx->pc = 0x1A2DC8u;
    SET_GPR_U32(ctx, 31, 0x1A2DD0u);
    ctx->pc = 0x1A2DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2DC8u;
            // 0x1a2dcc: 0x842f8  dsll        $t0, $t0, 11 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 11);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1708B8u;
    if (runtime->hasFunction(0x1708B8u)) {
        auto targetFn = runtime->lookupFunction(0x1708B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2DD0u; }
        if (ctx->pc != 0x1A2DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001708B8_0x1708b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2DD0u; }
        if (ctx->pc != 0x1A2DD0u) { return; }
    }
    ctx->pc = 0x1A2DD0u;
label_1a2dd0:
    // 0x1a2dd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2dd4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1a2dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2dd8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a2dd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2ddc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2ddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2de0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a2de0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a2de4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a2de4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2de8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a2de8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2dec: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a2decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a2df0: 0x805c3ce  j           func_170F38
    ctx->pc = 0x1A2DF0u;
    ctx->pc = 0x1A2DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2DF0u;
            // 0x1a2df4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170F38u;
    if (runtime->hasFunction(0x170F38u)) {
        auto targetFn = runtime->lookupFunction(0x170F38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00170F38_0x170f38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A2DF8u;
}
