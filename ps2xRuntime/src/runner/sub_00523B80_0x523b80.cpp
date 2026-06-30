#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00523B80
// Address: 0x523b80 - 0x523be0
void sub_00523B80_0x523b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00523B80_0x523b80");
#endif

    switch (ctx->pc) {
        case 0x523bc0u: goto label_523bc0;
        default: break;
    }

    ctx->pc = 0x523b80u;

    // 0x523b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x523b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x523b84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x523b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x523b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x523b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x523b8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x523b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x523b90: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x523B90u;
    {
        const bool branch_taken_0x523b90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x523b90) {
            ctx->pc = 0x523B94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x523B90u;
            // 0x523b94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x523BC4u;
            goto label_523bc4;
        }
    }
    ctx->pc = 0x523B98u;
    // 0x523b98: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x523b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x523b9c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x523b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x523ba0: 0x24426148  addiu       $v0, $v0, 0x6148
    ctx->pc = 0x523ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24904));
    // 0x523ba4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x523ba4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x523ba8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x523ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x523bac: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x523bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x523bb0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x523BB0u;
    {
        const bool branch_taken_0x523bb0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x523BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523BB0u;
            // 0x523bb4: 0xac40ab58  sw          $zero, -0x54A8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x523bb0) {
            ctx->pc = 0x523BC0u;
            goto label_523bc0;
        }
    }
    ctx->pc = 0x523BB8u;
    // 0x523bb8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x523BB8u;
    SET_GPR_U32(ctx, 31, 0x523BC0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523BC0u; }
        if (ctx->pc != 0x523BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523BC0u; }
        if (ctx->pc != 0x523BC0u) { return; }
    }
    ctx->pc = 0x523BC0u;
label_523bc0:
    // 0x523bc0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x523bc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_523bc4:
    // 0x523bc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x523bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x523bc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x523bc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x523bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x523BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x523BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523BCCu;
            // 0x523bd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x523BD4u;
    // 0x523bd4: 0x0  nop
    ctx->pc = 0x523bd4u;
    // NOP
    // 0x523bd8: 0x0  nop
    ctx->pc = 0x523bd8u;
    // NOP
    // 0x523bdc: 0x0  nop
    ctx->pc = 0x523bdcu;
    // NOP
}
