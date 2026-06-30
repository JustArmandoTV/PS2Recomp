#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00396E40
// Address: 0x396e40 - 0x396ea0
void sub_00396E40_0x396e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396E40_0x396e40");
#endif

    switch (ctx->pc) {
        case 0x396e80u: goto label_396e80;
        default: break;
    }

    ctx->pc = 0x396e40u;

    // 0x396e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x396e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x396e44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x396e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x396e48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x396e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x396e4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x396e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396e50: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x396E50u;
    {
        const bool branch_taken_0x396e50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x396e50) {
            ctx->pc = 0x396E54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x396E50u;
            // 0x396e54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x396E84u;
            goto label_396e84;
        }
    }
    ctx->pc = 0x396E58u;
    // 0x396e58: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x396e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x396e5c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x396e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x396e60: 0x24428168  addiu       $v0, $v0, -0x7E98
    ctx->pc = 0x396e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934888));
    // 0x396e64: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x396e64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x396e68: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x396e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x396e6c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x396e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x396e70: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x396E70u;
    {
        const bool branch_taken_0x396e70 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x396E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396E70u;
            // 0x396e74: 0xac406488  sw          $zero, 0x6488($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 25736), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396e70) {
            ctx->pc = 0x396E80u;
            goto label_396e80;
        }
    }
    ctx->pc = 0x396E78u;
    // 0x396e78: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x396E78u;
    SET_GPR_U32(ctx, 31, 0x396E80u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396E80u; }
        if (ctx->pc != 0x396E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x396E80u; }
        if (ctx->pc != 0x396E80u) { return; }
    }
    ctx->pc = 0x396E80u;
label_396e80:
    // 0x396e80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x396e80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_396e84:
    // 0x396e84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x396e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x396e88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x396e88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x396E8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396E8Cu;
            // 0x396e90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x396E94u;
    // 0x396e94: 0x0  nop
    ctx->pc = 0x396e94u;
    // NOP
    // 0x396e98: 0x0  nop
    ctx->pc = 0x396e98u;
    // NOP
    // 0x396e9c: 0x0  nop
    ctx->pc = 0x396e9cu;
    // NOP
}
