#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00557100
// Address: 0x557100 - 0x557160
void sub_00557100_0x557100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00557100_0x557100");
#endif

    switch (ctx->pc) {
        case 0x557140u: goto label_557140;
        default: break;
    }

    ctx->pc = 0x557100u;

    // 0x557100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x557100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x557104: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x557104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x557108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x557108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x55710c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x55710cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x557110: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x557110u;
    {
        const bool branch_taken_0x557110 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x557110) {
            ctx->pc = 0x557114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x557110u;
            // 0x557114: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x557144u;
            goto label_557144;
        }
    }
    ctx->pc = 0x557118u;
    // 0x557118: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x557118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x55711c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x55711cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x557120: 0x24427b30  addiu       $v0, $v0, 0x7B30
    ctx->pc = 0x557120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31536));
    // 0x557124: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x557124u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x557128: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x557128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x55712c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x55712cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x557130: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x557130u;
    {
        const bool branch_taken_0x557130 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x557134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x557130u;
            // 0x557134: 0xac40b7b8  sw          $zero, -0x4848($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948792), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x557130) {
            ctx->pc = 0x557140u;
            goto label_557140;
        }
    }
    ctx->pc = 0x557138u;
    // 0x557138: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x557138u;
    SET_GPR_U32(ctx, 31, 0x557140u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557140u; }
        if (ctx->pc != 0x557140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x557140u; }
        if (ctx->pc != 0x557140u) { return; }
    }
    ctx->pc = 0x557140u;
label_557140:
    // 0x557140: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x557140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_557144:
    // 0x557144: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x557144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x557148: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x557148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x55714c: 0x3e00008  jr          $ra
    ctx->pc = 0x55714Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x557150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55714Cu;
            // 0x557150: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x557154u;
    // 0x557154: 0x0  nop
    ctx->pc = 0x557154u;
    // NOP
    // 0x557158: 0x0  nop
    ctx->pc = 0x557158u;
    // NOP
    // 0x55715c: 0x0  nop
    ctx->pc = 0x55715cu;
    // NOP
}
