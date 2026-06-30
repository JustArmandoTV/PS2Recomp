#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A1978
// Address: 0x1a1978 - 0x1a19c8
void sub_001A1978_0x1a1978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1978_0x1a1978");
#endif

    switch (ctx->pc) {
        case 0x1a1998u: goto label_1a1998;
        case 0x1a19b0u: goto label_1a19b0;
        default: break;
    }

    ctx->pc = 0x1a1978u;

    // 0x1a1978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a197c: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1a197cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1a1980: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1984: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1a1984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a1988: 0x8c45be8c  lw          $a1, -0x4174($v0)
    ctx->pc = 0x1a1988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950540)));
    // 0x1a198c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a198cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1990: 0x80620de  j           func_188378
    ctx->pc = 0x1A1990u;
    ctx->pc = 0x1A1994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1990u;
            // 0x1a1994: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188378u;
    if (runtime->hasFunction(0x188378u)) {
        auto targetFn = runtime->lookupFunction(0x188378u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00188378_0x188378(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A1998u;
label_1a1998:
    // 0x1a1998: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x1a1998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x1a199c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a199cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a19a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a19a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a19a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a19a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a19a8: 0xc0622c4  jal         func_188B10
    ctx->pc = 0x1A19A8u;
    SET_GPR_U32(ctx, 31, 0x1A19B0u);
    ctx->pc = 0x1A19ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A19A8u;
            // 0x1a19ac: 0x248419f0  addiu       $a0, $a0, 0x19F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188B10u;
    if (runtime->hasFunction(0x188B10u)) {
        auto targetFn = runtime->lookupFunction(0x188B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A19B0u; }
        if (ctx->pc != 0x1A19B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188B10_0x188b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A19B0u; }
        if (ctx->pc != 0x1A19B0u) { return; }
    }
    ctx->pc = 0x1A19B0u;
label_1a19b0:
    // 0x1a19b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a19b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a19b4: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x1a19b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x1a19b8: 0x24841a08  addiu       $a0, $a0, 0x1A08
    ctx->pc = 0x1a19b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6664));
    // 0x1a19bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a19bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a19c0: 0x80622ca  j           func_188B28
    ctx->pc = 0x1A19C0u;
    ctx->pc = 0x1A19C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A19C0u;
            // 0x1a19c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188B28u;
    {
        auto targetFn = runtime->lookupFunction(0x188B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A19C8u;
}
