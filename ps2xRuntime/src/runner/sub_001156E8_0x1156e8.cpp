#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001156E8
// Address: 0x1156e8 - 0x115728
void sub_001156E8_0x1156e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001156E8_0x1156e8");
#endif

    switch (ctx->pc) {
        case 0x1156fcu: goto label_1156fc;
        case 0x115718u: goto label_115718;
        default: break;
    }

    ctx->pc = 0x1156e8u;

    // 0x1156e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1156e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1156ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1156ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1156f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1156f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1156f4: 0xc045530  jal         func_1154C0
    ctx->pc = 0x1156F4u;
    SET_GPR_U32(ctx, 31, 0x1156FCu);
    ctx->pc = 0x1156F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1156F4u;
            // 0x1156f8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1154C0u;
    if (runtime->hasFunction(0x1154C0u)) {
        auto targetFn = runtime->lookupFunction(0x1154C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1156FCu; }
        if (ctx->pc != 0x1156FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001154C0_0x1154c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1156FCu; }
        if (ctx->pc != 0x1156FCu) { return; }
    }
    ctx->pc = 0x1156FCu;
label_1156fc:
    // 0x1156fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1156fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115700: 0x3e00008  jr          $ra
    ctx->pc = 0x115700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115700u;
            // 0x115704: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x115708u;
    // 0x115708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11570c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11570cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115710: 0xc045530  jal         func_1154C0
    ctx->pc = 0x115710u;
    SET_GPR_U32(ctx, 31, 0x115718u);
    ctx->pc = 0x115714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115710u;
            // 0x115714: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1154C0u;
    if (runtime->hasFunction(0x1154C0u)) {
        auto targetFn = runtime->lookupFunction(0x1154C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115718u; }
        if (ctx->pc != 0x115718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001154C0_0x1154c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115718u; }
        if (ctx->pc != 0x115718u) { return; }
    }
    ctx->pc = 0x115718u;
label_115718:
    // 0x115718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x115718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11571c: 0x3e00008  jr          $ra
    ctx->pc = 0x11571Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11571Cu;
            // 0x115720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x115724u;
    // 0x115724: 0x0  nop
    ctx->pc = 0x115724u;
    // NOP
}
