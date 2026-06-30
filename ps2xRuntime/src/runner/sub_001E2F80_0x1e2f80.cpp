#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E2F80
// Address: 0x1e2f80 - 0x1e2fd0
void sub_001E2F80_0x1e2f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2F80_0x1e2f80");
#endif

    switch (ctx->pc) {
        case 0x1e2fb8u: goto label_1e2fb8;
        default: break;
    }

    ctx->pc = 0x1e2f80u;

    // 0x1e2f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e2f84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e2f88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e2f8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e2f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2f90: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1E2F90u;
    {
        const bool branch_taken_0x1e2f90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2f90) {
            ctx->pc = 0x1E2F94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2F90u;
            // 0x1e2f94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2FBCu;
            goto label_1e2fbc;
        }
    }
    ctx->pc = 0x1E2F98u;
    // 0x1e2f98: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e2f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1e2f9c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e2f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1e2fa0: 0x2463d3f0  addiu       $v1, $v1, -0x2C10
    ctx->pc = 0x1e2fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956016));
    // 0x1e2fa4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e2fa4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e2fa8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2FA8u;
    {
        const bool branch_taken_0x1e2fa8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E2FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2FA8u;
            // 0x1e2fac: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2fa8) {
            ctx->pc = 0x1E2FB8u;
            goto label_1e2fb8;
        }
    }
    ctx->pc = 0x1E2FB0u;
    // 0x1e2fb0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x1E2FB0u;
    SET_GPR_U32(ctx, 31, 0x1E2FB8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2FB8u; }
        if (ctx->pc != 0x1E2FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2FB8u; }
        if (ctx->pc != 0x1E2FB8u) { return; }
    }
    ctx->pc = 0x1E2FB8u;
label_1e2fb8:
    // 0x1e2fb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e2fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e2fbc:
    // 0x1e2fbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2fc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2FC4u;
            // 0x1e2fc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2FCCu;
    // 0x1e2fcc: 0x0  nop
    ctx->pc = 0x1e2fccu;
    // NOP
}
