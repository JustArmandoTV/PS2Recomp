#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042CC60
// Address: 0x42cc60 - 0x42ccc0
void sub_0042CC60_0x42cc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042CC60_0x42cc60");
#endif

    switch (ctx->pc) {
        case 0x42cca0u: goto label_42cca0;
        default: break;
    }

    ctx->pc = 0x42cc60u;

    // 0x42cc60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42cc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x42cc64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x42cc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x42cc68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42cc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x42cc6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x42cc6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42cc70: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x42CC70u;
    {
        const bool branch_taken_0x42cc70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x42cc70) {
            ctx->pc = 0x42CC74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42CC70u;
            // 0x42cc74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42CCA4u;
            goto label_42cca4;
        }
    }
    ctx->pc = 0x42CC78u;
    // 0x42cc78: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x42cc7c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x42cc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x42cc80: 0x2442c418  addiu       $v0, $v0, -0x3BE8
    ctx->pc = 0x42cc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951960));
    // 0x42cc84: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x42cc84u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x42cc88: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x42cc88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x42cc8c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42cc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x42cc90: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x42CC90u;
    {
        const bool branch_taken_0x42cc90 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x42CC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42CC90u;
            // 0x42cc94: 0xac4074a8  sw          $zero, 0x74A8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 29864), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cc90) {
            ctx->pc = 0x42CCA0u;
            goto label_42cca0;
        }
    }
    ctx->pc = 0x42CC98u;
    // 0x42cc98: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x42CC98u;
    SET_GPR_U32(ctx, 31, 0x42CCA0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CCA0u; }
        if (ctx->pc != 0x42CCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CCA0u; }
        if (ctx->pc != 0x42CCA0u) { return; }
    }
    ctx->pc = 0x42CCA0u;
label_42cca0:
    // 0x42cca0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42cca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42cca4:
    // 0x42cca4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42cca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42cca8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42cca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42ccac: 0x3e00008  jr          $ra
    ctx->pc = 0x42CCACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42CCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42CCACu;
            // 0x42ccb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42CCB4u;
    // 0x42ccb4: 0x0  nop
    ctx->pc = 0x42ccb4u;
    // NOP
    // 0x42ccb8: 0x0  nop
    ctx->pc = 0x42ccb8u;
    // NOP
    // 0x42ccbc: 0x0  nop
    ctx->pc = 0x42ccbcu;
    // NOP
}
