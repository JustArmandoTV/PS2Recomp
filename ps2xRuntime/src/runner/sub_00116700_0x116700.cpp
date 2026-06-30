#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00116700
// Address: 0x116700 - 0x116748
void sub_00116700_0x116700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116700_0x116700");
#endif

    switch (ctx->pc) {
        case 0x116734u: goto label_116734;
        default: break;
    }

    ctx->pc = 0x116700u;

    // 0x116700: 0x24030083  addiu       $v1, $zero, 0x83
    ctx->pc = 0x116700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x116704: 0xc  syscall     0
    ctx->pc = 0x116704u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x116708: 0x3e00008  jr          $ra
    ctx->pc = 0x116708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116710u;
    // 0x116710: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x116710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x116714: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x116714u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x116718: 0x8c45eab8  lw          $a1, -0x1548($v0)
    ctx->pc = 0x116718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x11671c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x11671cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x116720: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x116720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x116724: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x116724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116728: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x116728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11672c: 0xc04599e  jal         func_116678
    ctx->pc = 0x11672Cu;
    SET_GPR_U32(ctx, 31, 0x116734u);
    ctx->pc = 0x116730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11672Cu;
            // 0x116730: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116678u;
    if (runtime->hasFunction(0x116678u)) {
        auto targetFn = runtime->lookupFunction(0x116678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116734u; }
        if (ctx->pc != 0x116734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116678_0x116678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x116734u; }
        if (ctx->pc != 0x116734u) { return; }
    }
    ctx->pc = 0x116734u;
label_116734:
    // 0x116734: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x116734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116738: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x116738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11673c: 0x3e00008  jr          $ra
    ctx->pc = 0x11673Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11673Cu;
            // 0x116740: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116744u;
    // 0x116744: 0x0  nop
    ctx->pc = 0x116744u;
    // NOP
}
