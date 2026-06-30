#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00139710
// Address: 0x139710 - 0x139760
void sub_00139710_0x139710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139710_0x139710");
#endif

    switch (ctx->pc) {
        case 0x139744u: goto label_139744;
        case 0x13974cu: goto label_13974c;
        default: break;
    }

    ctx->pc = 0x139710u;

    // 0x139710: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x139710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x139714: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x139714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139718: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13971c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x13971cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x139720: 0x8f828358  lw          $v0, -0x7CA8($gp)
    ctx->pc = 0x139720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935384)));
    // 0x139724: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x139724u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x139728: 0x93888354  lbu         $t0, -0x7CAC($gp)
    ctx->pc = 0x139728u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935380)));
    // 0x13972c: 0x93898355  lbu         $t1, -0x7CAB($gp)
    ctx->pc = 0x13972cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935381)));
    // 0x139730: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x139730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x139734: 0x938a8356  lbu         $t2, -0x7CAA($gp)
    ctx->pc = 0x139734u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935382)));
    // 0x139738: 0x938b8357  lbu         $t3, -0x7CA9($gp)
    ctx->pc = 0x139738u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935383)));
    // 0x13973c: 0xc0574a0  jal         func_15D280
    ctx->pc = 0x13973Cu;
    SET_GPR_U32(ctx, 31, 0x139744u);
    ctx->pc = 0x139740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13973Cu;
            // 0x139740: 0x38460001  xori        $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D280u;
    if (runtime->hasFunction(0x15D280u)) {
        auto targetFn = runtime->lookupFunction(0x15D280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139744u; }
        if (ctx->pc != 0x139744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D280_0x15d280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139744u; }
        if (ctx->pc != 0x139744u) { return; }
    }
    ctx->pc = 0x139744u;
label_139744:
    // 0x139744: 0xc0574b0  jal         func_15D2C0
    ctx->pc = 0x139744u;
    SET_GPR_U32(ctx, 31, 0x13974Cu);
    ctx->pc = 0x139748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139744u;
            // 0x139748: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D2C0u;
    if (runtime->hasFunction(0x15D2C0u)) {
        auto targetFn = runtime->lookupFunction(0x15D2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13974Cu; }
        if (ctx->pc != 0x13974Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D2C0_0x15d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13974Cu; }
        if (ctx->pc != 0x13974Cu) { return; }
    }
    ctx->pc = 0x13974Cu;
label_13974c:
    // 0x13974c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13974cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139750: 0x3e00008  jr          $ra
    ctx->pc = 0x139750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139750u;
            // 0x139754: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139758u;
    // 0x139758: 0x0  nop
    ctx->pc = 0x139758u;
    // NOP
    // 0x13975c: 0x0  nop
    ctx->pc = 0x13975cu;
    // NOP
}
