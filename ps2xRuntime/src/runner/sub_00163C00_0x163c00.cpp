#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00163C00
// Address: 0x163c00 - 0x163c58
void sub_00163C00_0x163c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163C00_0x163c00");
#endif

    switch (ctx->pc) {
        case 0x163c20u: goto label_163c20;
        case 0x163c3cu: goto label_163c3c;
        default: break;
    }

    ctx->pc = 0x163c00u;

    // 0x163c00: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x163c00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x163c04: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x163c04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x163c08: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x163c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x163c0c: 0x24a529f8  addiu       $a1, $a1, 0x29F8
    ctx->pc = 0x163c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10744));
    // 0x163c10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x163c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x163c14: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x163c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x163c18: 0xc04a4e2  jal         func_129388
    ctx->pc = 0x163C18u;
    SET_GPR_U32(ctx, 31, 0x163C20u);
    ctx->pc = 0x163C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163C18u;
            // 0x163c1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163C20u; }
        if (ctx->pc != 0x163C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163C20u; }
        if (ctx->pc != 0x163C20u) { return; }
    }
    ctx->pc = 0x163C20u;
label_163c20:
    // 0x163c20: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x163c20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x163c24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163c28: 0x24a52a00  addiu       $a1, $a1, 0x2A00
    ctx->pc = 0x163c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10752));
    // 0x163c2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163C2Cu;
    {
        const bool branch_taken_0x163c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163C2Cu;
            // 0x163c30: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163c2c) {
            ctx->pc = 0x163C44u;
            goto label_163c44;
        }
    }
    ctx->pc = 0x163C34u;
    // 0x163c34: 0xc04a4e2  jal         func_129388
    ctx->pc = 0x163C34u;
    SET_GPR_U32(ctx, 31, 0x163C3Cu);
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163C3Cu; }
        if (ctx->pc != 0x163C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163C3Cu; }
        if (ctx->pc != 0x163C3Cu) { return; }
    }
    ctx->pc = 0x163C3Cu;
label_163c3c:
    // 0x163c3c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x163C3Cu;
    {
        const bool branch_taken_0x163c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163c3c) {
            ctx->pc = 0x163C40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x163C3Cu;
            // 0x163c40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x163C48u;
            goto label_163c48;
        }
    }
    ctx->pc = 0x163C44u;
label_163c44:
    // 0x163c44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163c48:
    // 0x163c48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x163c48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163c4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x163c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x163c50: 0x3e00008  jr          $ra
    ctx->pc = 0x163C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163C50u;
            // 0x163c54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x163C58u;
}
