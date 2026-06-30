#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C7030
// Address: 0x4c7030 - 0x4c7090
void sub_004C7030_0x4c7030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C7030_0x4c7030");
#endif

    switch (ctx->pc) {
        case 0x4c7070u: goto label_4c7070;
        default: break;
    }

    ctx->pc = 0x4c7030u;

    // 0x4c7030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c7030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c7034: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c7034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4c7038: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c7038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c703c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c703cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c7040: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4C7040u;
    {
        const bool branch_taken_0x4c7040 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c7040) {
            ctx->pc = 0x4C7044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7040u;
            // 0x4c7044: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C7074u;
            goto label_4c7074;
        }
    }
    ctx->pc = 0x4C7048u;
    // 0x4c7048: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c7048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c704c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x4c704cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x4c7050: 0x24421780  addiu       $v0, $v0, 0x1780
    ctx->pc = 0x4c7050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6016));
    // 0x4c7054: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4c7054u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x4c7058: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c7058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4c705c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4c705cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4c7060: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C7060u;
    {
        const bool branch_taken_0x4c7060 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4C7064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C7060u;
            // 0x4c7064: 0xac40aa00  sw          $zero, -0x5600($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c7060) {
            ctx->pc = 0x4C7070u;
            goto label_4c7070;
        }
    }
    ctx->pc = 0x4C7068u;
    // 0x4c7068: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4C7068u;
    SET_GPR_U32(ctx, 31, 0x4C7070u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7070u; }
        if (ctx->pc != 0x4C7070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C7070u; }
        if (ctx->pc != 0x4C7070u) { return; }
    }
    ctx->pc = 0x4C7070u;
label_4c7070:
    // 0x4c7070: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4c7070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c7074:
    // 0x4c7074: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c7074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c7078: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c7078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c707c: 0x3e00008  jr          $ra
    ctx->pc = 0x4C707Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C7080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C707Cu;
            // 0x4c7080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C7084u;
    // 0x4c7084: 0x0  nop
    ctx->pc = 0x4c7084u;
    // NOP
    // 0x4c7088: 0x0  nop
    ctx->pc = 0x4c7088u;
    // NOP
    // 0x4c708c: 0x0  nop
    ctx->pc = 0x4c708cu;
    // NOP
}
