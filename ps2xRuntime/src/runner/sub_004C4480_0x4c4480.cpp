#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C4480
// Address: 0x4c4480 - 0x4c44e0
void sub_004C4480_0x4c4480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C4480_0x4c4480");
#endif

    switch (ctx->pc) {
        case 0x4c44c0u: goto label_4c44c0;
        default: break;
    }

    ctx->pc = 0x4c4480u;

    // 0x4c4480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c4480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c4484: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c4484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4c4488: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c4488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c448c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c448cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4490: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4C4490u;
    {
        const bool branch_taken_0x4c4490 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c4490) {
            ctx->pc = 0x4C4494u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C4490u;
            // 0x4c4494: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C44C4u;
            goto label_4c44c4;
        }
    }
    ctx->pc = 0x4C4498u;
    // 0x4c4498: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c4498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c449c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x4c449cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x4c44a0: 0x24421620  addiu       $v0, $v0, 0x1620
    ctx->pc = 0x4c44a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5664));
    // 0x4c44a4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4c44a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x4c44a8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c44a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4c44ac: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4c44acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4c44b0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C44B0u;
    {
        const bool branch_taken_0x4c44b0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4C44B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C44B0u;
            // 0x4c44b4: 0xac40a9f8  sw          $zero, -0x5608($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c44b0) {
            ctx->pc = 0x4C44C0u;
            goto label_4c44c0;
        }
    }
    ctx->pc = 0x4C44B8u;
    // 0x4c44b8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4C44B8u;
    SET_GPR_U32(ctx, 31, 0x4C44C0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C44C0u; }
        if (ctx->pc != 0x4C44C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C44C0u; }
        if (ctx->pc != 0x4C44C0u) { return; }
    }
    ctx->pc = 0x4C44C0u;
label_4c44c0:
    // 0x4c44c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4c44c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c44c4:
    // 0x4c44c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c44c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c44c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c44c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c44cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4C44CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C44D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C44CCu;
            // 0x4c44d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C44D4u;
    // 0x4c44d4: 0x0  nop
    ctx->pc = 0x4c44d4u;
    // NOP
    // 0x4c44d8: 0x0  nop
    ctx->pc = 0x4c44d8u;
    // NOP
    // 0x4c44dc: 0x0  nop
    ctx->pc = 0x4c44dcu;
    // NOP
}
