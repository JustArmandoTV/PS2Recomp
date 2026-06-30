#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00507A40
// Address: 0x507a40 - 0x507aa0
void sub_00507A40_0x507a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00507A40_0x507a40");
#endif

    switch (ctx->pc) {
        case 0x507a80u: goto label_507a80;
        default: break;
    }

    ctx->pc = 0x507a40u;

    // 0x507a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x507a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x507a44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x507a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x507a48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x507a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x507a4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x507a4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507a50: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x507A50u;
    {
        const bool branch_taken_0x507a50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x507a50) {
            ctx->pc = 0x507A54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x507A50u;
            // 0x507a54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x507A84u;
            goto label_507a84;
        }
    }
    ctx->pc = 0x507A58u;
    // 0x507a58: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x507a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x507a5c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x507a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x507a60: 0x24424fa8  addiu       $v0, $v0, 0x4FA8
    ctx->pc = 0x507a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20392));
    // 0x507a64: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x507a64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x507a68: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x507a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x507a6c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x507a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x507a70: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x507A70u;
    {
        const bool branch_taken_0x507a70 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x507A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x507A70u;
            // 0x507a74: 0xac40aaf8  sw          $zero, -0x5508($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945528), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507a70) {
            ctx->pc = 0x507A80u;
            goto label_507a80;
        }
    }
    ctx->pc = 0x507A78u;
    // 0x507a78: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x507A78u;
    SET_GPR_U32(ctx, 31, 0x507A80u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507A80u; }
        if (ctx->pc != 0x507A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x507A80u; }
        if (ctx->pc != 0x507A80u) { return; }
    }
    ctx->pc = 0x507A80u;
label_507a80:
    // 0x507a80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x507a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_507a84:
    // 0x507a84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x507a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x507a88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x507a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x507a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x507A8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x507A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x507A8Cu;
            // 0x507a90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x507A94u;
    // 0x507a94: 0x0  nop
    ctx->pc = 0x507a94u;
    // NOP
    // 0x507a98: 0x0  nop
    ctx->pc = 0x507a98u;
    // NOP
    // 0x507a9c: 0x0  nop
    ctx->pc = 0x507a9cu;
    // NOP
}
