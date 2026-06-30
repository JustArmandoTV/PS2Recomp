#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C8020
// Address: 0x2c8020 - 0x2c8080
void sub_002C8020_0x2c8020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8020_0x2c8020");
#endif

    switch (ctx->pc) {
        case 0x2c8060u: goto label_2c8060;
        default: break;
    }

    ctx->pc = 0x2c8020u;

    // 0x2c8020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c8020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c8024: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c8024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c8028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c8028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c802c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c802cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8030: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2C8030u;
    {
        const bool branch_taken_0x2c8030 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8030) {
            ctx->pc = 0x2C8034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8030u;
            // 0x2c8034: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C8064u;
            goto label_2c8064;
        }
    }
    ctx->pc = 0x2C8038u;
    // 0x2c8038: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c8038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c803c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2c803cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c8040: 0x24420790  addiu       $v0, $v0, 0x790
    ctx->pc = 0x2c8040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    // 0x2c8044: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c8044u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c8048: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c8048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c804c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c804cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c8050: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8050u;
    {
        const bool branch_taken_0x2c8050 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2C8054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8050u;
            // 0x2c8054: 0xac400e08  sw          $zero, 0xE08($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3592), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8050) {
            ctx->pc = 0x2C8060u;
            goto label_2c8060;
        }
    }
    ctx->pc = 0x2C8058u;
    // 0x2c8058: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C8058u;
    SET_GPR_U32(ctx, 31, 0x2C8060u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8060u; }
        if (ctx->pc != 0x2C8060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8060u; }
        if (ctx->pc != 0x2C8060u) { return; }
    }
    ctx->pc = 0x2C8060u;
label_2c8060:
    // 0x2c8060: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c8060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8064:
    // 0x2c8064: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c8064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8068: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c806c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C806Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C806Cu;
            // 0x2c8070: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8074u;
    // 0x2c8074: 0x0  nop
    ctx->pc = 0x2c8074u;
    // NOP
    // 0x2c8078: 0x0  nop
    ctx->pc = 0x2c8078u;
    // NOP
    // 0x2c807c: 0x0  nop
    ctx->pc = 0x2c807cu;
    // NOP
}
