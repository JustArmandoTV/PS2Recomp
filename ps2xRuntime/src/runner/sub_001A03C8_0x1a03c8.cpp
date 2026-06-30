#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A03C8
// Address: 0x1a03c8 - 0x1a0418
void sub_001A03C8_0x1a03c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A03C8_0x1a03c8");
#endif

    switch (ctx->pc) {
        case 0x1a03dcu: goto label_1a03dc;
        default: break;
    }

    ctx->pc = 0x1a03c8u;

    // 0x1a03c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a03c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a03cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a03ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a03d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a03d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a03d4: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x1A03D4u;
    SET_GPR_U32(ctx, 31, 0x1A03DCu);
    ctx->pc = 0x1A03D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A03D4u;
            // 0x1a03d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A03DCu; }
        if (ctx->pc != 0x1A03DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A03DCu; }
        if (ctx->pc != 0x1A03DCu) { return; }
    }
    ctx->pc = 0x1A03DCu;
label_1a03dc:
    // 0x1a03dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a03dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a03e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a03e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a03e4: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A03E4u;
    {
        const bool branch_taken_0x1a03e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A03E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A03E4u;
            // 0x1a03e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a03e4) {
            ctx->pc = 0x1A0408u;
            goto label_1a0408;
        }
    }
    ctx->pc = 0x1A03ECu;
    // 0x1a03ec: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1a03ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1a03f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a03f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a03f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a03f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a03f8: 0x2484a560  addiu       $a0, $a0, -0x5AA0
    ctx->pc = 0x1a03f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944096));
    // 0x1a03fc: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x1A03FCu;
    ctx->pc = 0x1A0400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A03FCu;
            // 0x1a0400: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A0404u;
    // 0x1a0404: 0x0  nop
    ctx->pc = 0x1a0404u;
    // NOP
label_1a0408:
    // 0x1a0408: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a040c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a040cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a0410: 0x8068242  j           func_1A0908
    ctx->pc = 0x1A0410u;
    ctx->pc = 0x1A0414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0410u;
            // 0x1a0414: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0908u;
    if (runtime->hasFunction(0x1A0908u)) {
        auto targetFn = runtime->lookupFunction(0x1A0908u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A0908_0x1a0908(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A0418u;
}
