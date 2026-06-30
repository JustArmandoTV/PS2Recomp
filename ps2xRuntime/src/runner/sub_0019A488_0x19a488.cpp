#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019A488
// Address: 0x19a488 - 0x19a4d8
void sub_0019A488_0x19a488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A488_0x19a488");
#endif

    switch (ctx->pc) {
        case 0x19a49cu: goto label_19a49c;
        case 0x19a4b4u: goto label_19a4b4;
        default: break;
    }

    ctx->pc = 0x19a488u;

    // 0x19a488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19a488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19a48c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19a48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a490: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19a490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19a494: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x19A494u;
    SET_GPR_U32(ctx, 31, 0x19A49Cu);
    ctx->pc = 0x19A498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A494u;
            // 0x19a498: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A49Cu; }
        if (ctx->pc != 0x19A49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A49Cu; }
        if (ctx->pc != 0x19A49Cu) { return; }
    }
    ctx->pc = 0x19A49Cu;
label_19a49c:
    // 0x19a49c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19a49cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19a4a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a4a4: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19A4A4u;
    {
        const bool branch_taken_0x19a4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19A4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A4A4u;
            // 0x19a4a8: 0x24848dd0  addiu       $a0, $a0, -0x7230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a4a4) {
            ctx->pc = 0x19A4C0u;
            goto label_19a4c0;
        }
    }
    ctx->pc = 0x19A4ACu;
    // 0x19a4ac: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19A4ACu;
    SET_GPR_U32(ctx, 31, 0x19A4B4u);
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A4B4u; }
        if (ctx->pc != 0x19A4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A4B4u; }
        if (ctx->pc != 0x19A4B4u) { return; }
    }
    ctx->pc = 0x19A4B4u;
label_19a4b4:
    // 0x19a4b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19A4B4u;
    {
        const bool branch_taken_0x19a4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A4B4u;
            // 0x19a4b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a4b4) {
            ctx->pc = 0x19A4C4u;
            goto label_19a4c4;
        }
    }
    ctx->pc = 0x19A4BCu;
    // 0x19a4bc: 0x0  nop
    ctx->pc = 0x19a4bcu;
    // NOP
label_19a4c0:
    // 0x19a4c0: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x19a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_19a4c4:
    // 0x19a4c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a4c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a4c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19a4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19a4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x19A4CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A4CCu;
            // 0x19a4d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A4D4u;
    // 0x19a4d4: 0x0  nop
    ctx->pc = 0x19a4d4u;
    // NOP
}
