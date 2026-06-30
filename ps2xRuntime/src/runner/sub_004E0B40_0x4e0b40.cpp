#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E0B40
// Address: 0x4e0b40 - 0x4e0ba0
void sub_004E0B40_0x4e0b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E0B40_0x4e0b40");
#endif

    switch (ctx->pc) {
        case 0x4e0b80u: goto label_4e0b80;
        default: break;
    }

    ctx->pc = 0x4e0b40u;

    // 0x4e0b40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e0b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4e0b44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e0b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4e0b48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e0b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4e0b4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e0b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e0b50: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4E0B50u;
    {
        const bool branch_taken_0x4e0b50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e0b50) {
            ctx->pc = 0x4E0B54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0B50u;
            // 0x4e0b54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E0B84u;
            goto label_4e0b84;
        }
    }
    ctx->pc = 0x4E0B58u;
    // 0x4e0b58: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e0b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4e0b5c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x4e0b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x4e0b60: 0x24423398  addiu       $v0, $v0, 0x3398
    ctx->pc = 0x4e0b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13208));
    // 0x4e0b64: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4e0b64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x4e0b68: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e0b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4e0b6c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4e0b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4e0b70: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E0B70u;
    {
        const bool branch_taken_0x4e0b70 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4E0B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0B70u;
            // 0x4e0b74: 0xac40aa88  sw          $zero, -0x5578($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0b70) {
            ctx->pc = 0x4E0B80u;
            goto label_4e0b80;
        }
    }
    ctx->pc = 0x4E0B78u;
    // 0x4e0b78: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4E0B78u;
    SET_GPR_U32(ctx, 31, 0x4E0B80u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0B80u; }
        if (ctx->pc != 0x4E0B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E0B80u; }
        if (ctx->pc != 0x4E0B80u) { return; }
    }
    ctx->pc = 0x4E0B80u;
label_4e0b80:
    // 0x4e0b80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e0b80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e0b84:
    // 0x4e0b84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e0b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e0b88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e0b88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e0b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E0B8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E0B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E0B8Cu;
            // 0x4e0b90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E0B94u;
    // 0x4e0b94: 0x0  nop
    ctx->pc = 0x4e0b94u;
    // NOP
    // 0x4e0b98: 0x0  nop
    ctx->pc = 0x4e0b98u;
    // NOP
    // 0x4e0b9c: 0x0  nop
    ctx->pc = 0x4e0b9cu;
    // NOP
}
