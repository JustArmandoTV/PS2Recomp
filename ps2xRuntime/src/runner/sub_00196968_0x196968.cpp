#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00196968
// Address: 0x196968 - 0x1969c8
void sub_00196968_0x196968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196968_0x196968");
#endif

    switch (ctx->pc) {
        case 0x19697cu: goto label_19697c;
        default: break;
    }

    ctx->pc = 0x196968u;

    // 0x196968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19696c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19696cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x196970: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x196970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x196974: 0xc0628a2  jal         func_18A288
    ctx->pc = 0x196974u;
    SET_GPR_U32(ctx, 31, 0x19697Cu);
    ctx->pc = 0x196978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196974u;
            // 0x196978: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A288u;
    if (runtime->hasFunction(0x18A288u)) {
        auto targetFn = runtime->lookupFunction(0x18A288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19697Cu; }
        if (ctx->pc != 0x19697Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A288_0x18a288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19697Cu; }
        if (ctx->pc != 0x19697Cu) { return; }
    }
    ctx->pc = 0x19697Cu;
label_19697c:
    // 0x19697c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x19697Cu;
    {
        const bool branch_taken_0x19697c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19697c) {
            ctx->pc = 0x196980u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19697Cu;
            // 0x196980: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1969A4u;
            goto label_1969a4;
        }
    }
    ctx->pc = 0x196984u;
    // 0x196984: 0x8e0203d4  lw          $v0, 0x3D4($s0)
    ctx->pc = 0x196984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 980)));
    // 0x196988: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x196988u;
    {
        const bool branch_taken_0x196988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19698Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196988u;
            // 0x19698c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196988) {
            ctx->pc = 0x1969A0u;
            goto label_1969a0;
        }
    }
    ctx->pc = 0x196990u;
    // 0x196990: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x196990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196994: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x196994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x196998: 0x8062976  j           func_18A5D8
    ctx->pc = 0x196998u;
    ctx->pc = 0x19699Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196998u;
            // 0x19699c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A5D8u;
    {
        auto targetFn = runtime->lookupFunction(0x18A5D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1969A0u;
label_1969a0:
    // 0x1969a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1969a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1969a4:
    // 0x1969a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1969a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1969a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1969A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1969ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1969A8u;
            // 0x1969ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1969B0u;
    // 0x1969b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1969b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1969b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1969b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1969b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1969b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1969bc: 0x8065a72  j           func_1969C8
    ctx->pc = 0x1969BCu;
    ctx->pc = 0x1969C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1969BCu;
            // 0x1969c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1969C8u;
    if (runtime->hasFunction(0x1969C8u)) {
        auto targetFn = runtime->lookupFunction(0x1969C8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001969C8_0x1969c8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1969C4u;
    // 0x1969c4: 0x0  nop
    ctx->pc = 0x1969c4u;
    // NOP
}
