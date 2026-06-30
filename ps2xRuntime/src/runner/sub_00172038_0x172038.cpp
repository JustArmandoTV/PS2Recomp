#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00172038
// Address: 0x172038 - 0x172080
void sub_00172038_0x172038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172038_0x172038");
#endif

    switch (ctx->pc) {
        case 0x17205cu: goto label_17205c;
        case 0x172064u: goto label_172064;
        case 0x17206cu: goto label_17206c;
        default: break;
    }

    ctx->pc = 0x172038u;

    // 0x172038: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x172038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17203c: 0x3e00008  jr          $ra
    ctx->pc = 0x17203Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17203Cu;
            // 0x172040: 0x8c622e74  lw          $v0, 0x2E74($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11892)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172044u;
    // 0x172044: 0x0  nop
    ctx->pc = 0x172044u;
    // NOP
    // 0x172048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17204c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17204cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x172050: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x172050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x172054: 0xc0599de  jal         func_166778
    ctx->pc = 0x172054u;
    SET_GPR_U32(ctx, 31, 0x17205Cu);
    ctx->pc = 0x172058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172054u;
            // 0x172058: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17205Cu; }
        if (ctx->pc != 0x17205Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17205Cu; }
        if (ctx->pc != 0x17205Cu) { return; }
    }
    ctx->pc = 0x17205Cu;
label_17205c:
    // 0x17205c: 0xc05c820  jal         func_172080
    ctx->pc = 0x17205Cu;
    SET_GPR_U32(ctx, 31, 0x172064u);
    ctx->pc = 0x172060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17205Cu;
            // 0x172060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172080u;
    if (runtime->hasFunction(0x172080u)) {
        auto targetFn = runtime->lookupFunction(0x172080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172064u; }
        if (ctx->pc != 0x172064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172080_0x172080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172064u; }
        if (ctx->pc != 0x172064u) { return; }
    }
    ctx->pc = 0x172064u;
label_172064:
    // 0x172064: 0xc0599e0  jal         func_166780
    ctx->pc = 0x172064u;
    SET_GPR_U32(ctx, 31, 0x17206Cu);
    ctx->pc = 0x172068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172064u;
            // 0x172068: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17206Cu; }
        if (ctx->pc != 0x17206Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17206Cu; }
        if (ctx->pc != 0x17206Cu) { return; }
    }
    ctx->pc = 0x17206Cu;
label_17206c:
    // 0x17206c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17206cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172070: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x172070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x172074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172078: 0x3e00008  jr          $ra
    ctx->pc = 0x172078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17207Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172078u;
            // 0x17207c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172080u;
}
