#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00184BA0
// Address: 0x184ba0 - 0x184be8
void sub_00184BA0_0x184ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184BA0_0x184ba0");
#endif

    switch (ctx->pc) {
        case 0x184bbcu: goto label_184bbc;
        case 0x184bc8u: goto label_184bc8;
        case 0x184bd0u: goto label_184bd0;
        default: break;
    }

    ctx->pc = 0x184ba0u;

    // 0x184ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x184ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x184ba4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x184ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x184ba8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x184ba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184bac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x184bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x184bb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x184bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x184bb4: 0xc06127c  jal         func_1849F0
    ctx->pc = 0x184BB4u;
    SET_GPR_U32(ctx, 31, 0x184BBCu);
    ctx->pc = 0x184BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184BB4u;
            // 0x184bb8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184BBCu; }
        if (ctx->pc != 0x184BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184BBCu; }
        if (ctx->pc != 0x184BBCu) { return; }
    }
    ctx->pc = 0x184BBCu;
label_184bbc:
    // 0x184bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184bc0: 0xc0612fa  jal         func_184BE8
    ctx->pc = 0x184BC0u;
    SET_GPR_U32(ctx, 31, 0x184BC8u);
    ctx->pc = 0x184BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184BC0u;
            // 0x184bc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184BE8u;
    if (runtime->hasFunction(0x184BE8u)) {
        auto targetFn = runtime->lookupFunction(0x184BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184BC8u; }
        if (ctx->pc != 0x184BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184BE8_0x184be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184BC8u; }
        if (ctx->pc != 0x184BC8u) { return; }
    }
    ctx->pc = 0x184BC8u;
label_184bc8:
    // 0x184bc8: 0xc061282  jal         func_184A08
    ctx->pc = 0x184BC8u;
    SET_GPR_U32(ctx, 31, 0x184BD0u);
    ctx->pc = 0x184BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184BC8u;
            // 0x184bcc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184BD0u; }
        if (ctx->pc != 0x184BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184A08_0x184a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184BD0u; }
        if (ctx->pc != 0x184BD0u) { return; }
    }
    ctx->pc = 0x184BD0u;
label_184bd0:
    // 0x184bd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x184bd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x184bd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x184bd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184bd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x184bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184bdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x184bdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184be0: 0x3e00008  jr          $ra
    ctx->pc = 0x184BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184BE0u;
            // 0x184be4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184BE8u;
}
