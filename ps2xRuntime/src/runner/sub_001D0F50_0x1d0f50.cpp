#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D0F50
// Address: 0x1d0f50 - 0x1d0fb0
void sub_001D0F50_0x1d0f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0F50_0x1d0f50");
#endif

    switch (ctx->pc) {
        case 0x1d0f90u: goto label_1d0f90;
        default: break;
    }

    ctx->pc = 0x1d0f50u;

    // 0x1d0f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d0f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d0f54: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1d0f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1d0f58: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d0f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d0f5c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1d0f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d0f60: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x1d0f60u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x1d0f64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d0f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d0f68: 0x2607a1c0  addiu       $a3, $s0, -0x5E40
    ctx->pc = 0x1d0f68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943168));
    // 0x1d0f6c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d0f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1d0f70: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x1d0f70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x1d0f74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d0f74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0f78: 0x2444a180  addiu       $a0, $v0, -0x5E80
    ctx->pc = 0x1d0f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943104));
    // 0x1d0f7c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1d0f7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d0f80: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d0f80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0f84: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1d0f84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d0f88: 0xc04410c  jal         func_110430
    ctx->pc = 0x1D0F88u;
    SET_GPR_U32(ctx, 31, 0x1D0F90u);
    ctx->pc = 0x1D0F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0F88u;
            // 0x1d0f8c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110430u;
    if (runtime->hasFunction(0x110430u)) {
        auto targetFn = runtime->lookupFunction(0x110430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0F90u; }
        if (ctx->pc != 0x1D0F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110430_0x110430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0F90u; }
        if (ctx->pc != 0x1D0F90u) { return; }
    }
    ctx->pc = 0x1D0F90u;
label_1d0f90:
    // 0x1d0f90: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D0F90u;
    {
        const bool branch_taken_0x1d0f90 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D0F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0F90u;
            // 0x1d0f94: 0x8e02a1c0  lw          $v0, -0x5E40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f90) {
            ctx->pc = 0x1D0F9Cu;
            goto label_1d0f9c;
        }
    }
    ctx->pc = 0x1D0F98u;
    // 0x1d0f98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d0f98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0f9c:
    // 0x1d0f9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d0f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d0fa0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d0fa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0FA4u;
            // 0x1d0fa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D0FACu;
    // 0x1d0fac: 0x0  nop
    ctx->pc = 0x1d0facu;
    // NOP
}
