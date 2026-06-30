#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016E958
// Address: 0x16e958 - 0x16e9c0
void sub_0016E958_0x16e958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E958_0x16e958");
#endif

    switch (ctx->pc) {
        case 0x16e970u: goto label_16e970;
        case 0x16e97cu: goto label_16e97c;
        default: break;
    }

    ctx->pc = 0x16e958u;

    // 0x16e958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e95c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e960: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16e960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16e964: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16e964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16e968: 0xc060fc0  jal         func_183F00
    ctx->pc = 0x16E968u;
    SET_GPR_U32(ctx, 31, 0x16E970u);
    ctx->pc = 0x16E96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E968u;
            // 0x16e96c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183F00u;
    if (runtime->hasFunction(0x183F00u)) {
        auto targetFn = runtime->lookupFunction(0x183F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E970u; }
        if (ctx->pc != 0x16E970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183F00_0x183f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E970u; }
        if (ctx->pc != 0x16E970u) { return; }
    }
    ctx->pc = 0x16E970u;
label_16e970:
    // 0x16e970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16e970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e974: 0xc060f9a  jal         func_183E68
    ctx->pc = 0x16E974u;
    SET_GPR_U32(ctx, 31, 0x16E97Cu);
    ctx->pc = 0x16E978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E974u;
            // 0x16e978: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183E68u;
    if (runtime->hasFunction(0x183E68u)) {
        auto targetFn = runtime->lookupFunction(0x183E68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E97Cu; }
        if (ctx->pc != 0x16E97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183E68_0x183e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E97Cu; }
        if (ctx->pc != 0x16E97Cu) { return; }
    }
    ctx->pc = 0x16E97Cu;
label_16e97c:
    // 0x16e97c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16e97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e980: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16e980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16e984: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16e984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e988: 0x8060f36  j           func_183CD8
    ctx->pc = 0x16E988u;
    ctx->pc = 0x16E98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E988u;
            // 0x16e98c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183CD8u;
    {
        auto targetFn = runtime->lookupFunction(0x183CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16E990u;
    // 0x16e990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e99c: 0x8060f70  j           func_183DC0
    ctx->pc = 0x16E99Cu;
    ctx->pc = 0x16E9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E99Cu;
            // 0x16e9a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183DC0u;
    {
        auto targetFn = runtime->lookupFunction(0x183DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16E9A4u;
    // 0x16e9a4: 0x0  nop
    ctx->pc = 0x16e9a4u;
    // NOP
    // 0x16e9a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e9ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e9b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e9b4: 0x8060f82  j           func_183E08
    ctx->pc = 0x16E9B4u;
    ctx->pc = 0x16E9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E9B4u;
            // 0x16e9b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183E08u;
    {
        auto targetFn = runtime->lookupFunction(0x183E08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16E9BCu;
    // 0x16e9bc: 0x0  nop
    ctx->pc = 0x16e9bcu;
    // NOP
}
