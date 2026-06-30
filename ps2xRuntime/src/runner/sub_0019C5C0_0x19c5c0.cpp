#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019C5C0
// Address: 0x19c5c0 - 0x19c618
void sub_0019C5C0_0x19c5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C5C0_0x19c5c0");
#endif

    switch (ctx->pc) {
        case 0x19c5e0u: goto label_19c5e0;
        case 0x19c5f0u: goto label_19c5f0;
        case 0x19c5f8u: goto label_19c5f8;
        default: break;
    }

    ctx->pc = 0x19c5c0u;

    // 0x19c5c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c5c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19c5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19c5c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c5c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c5cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19c5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19c5d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19c5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19c5d4: 0x8e11043c  lw          $s1, 0x43C($s0)
    ctx->pc = 0x19c5d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1084)));
    // 0x19c5d8: 0xc049776  jal         func_125DD8
    ctx->pc = 0x19C5D8u;
    SET_GPR_U32(ctx, 31, 0x19C5E0u);
    ctx->pc = 0x19C5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C5D8u;
            // 0x19c5dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125DD8u;
    if (runtime->hasFunction(0x125DD8u)) {
        auto targetFn = runtime->lookupFunction(0x125DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C5E0u; }
        if (ctx->pc != 0x19C5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125DD8_0x125dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C5E0u; }
        if (ctx->pc != 0x19C5E0u) { return; }
    }
    ctx->pc = 0x19C5E0u;
label_19c5e0:
    // 0x19c5e0: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x19c5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
    // 0x19c5e4: 0xdc259600  ld          $a1, -0x6A00($at)
    ctx->pc = 0x19c5e4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294940160)));
    // 0x19c5e8: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x19C5E8u;
    SET_GPR_U32(ctx, 31, 0x19C5F0u);
    ctx->pc = 0x19C5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C5E8u;
            // 0x19c5ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C5F0u; }
        if (ctx->pc != 0x19C5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C5F0u; }
        if (ctx->pc != 0x19C5F0u) { return; }
    }
    ctx->pc = 0x19C5F0u;
label_19c5f0:
    // 0x19c5f0: 0xc0497a2  jal         func_125E88
    ctx->pc = 0x19C5F0u;
    SET_GPR_U32(ctx, 31, 0x19C5F8u);
    ctx->pc = 0x19C5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C5F0u;
            // 0x19c5f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125E88u;
    if (runtime->hasFunction(0x125E88u)) {
        auto targetFn = runtime->lookupFunction(0x125E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C5F8u; }
        if (ctx->pc != 0x19C5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125E88_0x125e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C5F8u; }
        if (ctx->pc != 0x19C5F8u) { return; }
    }
    ctx->pc = 0x19C5F8u;
label_19c5f8:
    // 0x19c5f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c5fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19c5fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c600: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19c600u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19c604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19c604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c608: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19c608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c60c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19c60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c610: 0x806753a  j           func_19D4E8
    ctx->pc = 0x19C610u;
    ctx->pc = 0x19C614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C610u;
            // 0x19c614: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D4E8u;
    {
        auto targetFn = runtime->lookupFunction(0x19D4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19C618u;
}
