#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001306F0
// Address: 0x1306f0 - 0x130720
void sub_001306F0_0x1306f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001306F0_0x1306f0");
#endif

    switch (ctx->pc) {
        case 0x130700u: goto label_130700;
        case 0x13070cu: goto label_13070c;
        case 0x130714u: goto label_130714;
        default: break;
    }

    ctx->pc = 0x1306f0u;

    // 0x1306f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1306f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1306f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1306f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1306f8: 0xc049514  jal         func_125450
    ctx->pc = 0x1306F8u;
    SET_GPR_U32(ctx, 31, 0x130700u);
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130700u; }
        if (ctx->pc != 0x130700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130700u; }
        if (ctx->pc != 0x130700u) { return; }
    }
    ctx->pc = 0x130700u;
label_130700:
    // 0x130700: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x130700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130704: 0xc04755a  jal         func_11D568
    ctx->pc = 0x130704u;
    SET_GPR_U32(ctx, 31, 0x13070Cu);
    ctx->pc = 0x130708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130704u;
            // 0x130708: 0x27a50018  addiu       $a1, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D568u;
    if (runtime->hasFunction(0x11D568u)) {
        auto targetFn = runtime->lookupFunction(0x11D568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13070Cu; }
        if (ctx->pc != 0x13070Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D568_0x11d568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13070Cu; }
        if (ctx->pc != 0x13070Cu) { return; }
    }
    ctx->pc = 0x13070Cu;
label_13070c:
    // 0x13070c: 0xc0497dc  jal         func_125F70
    ctx->pc = 0x13070Cu;
    SET_GPR_U32(ctx, 31, 0x130714u);
    ctx->pc = 0x130710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13070Cu;
            // 0x130710: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130714u; }
        if (ctx->pc != 0x130714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130714u; }
        if (ctx->pc != 0x130714u) { return; }
    }
    ctx->pc = 0x130714u;
label_130714:
    // 0x130714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x130714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130718: 0x3e00008  jr          $ra
    ctx->pc = 0x130718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13071Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130718u;
            // 0x13071c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x130720u;
}
