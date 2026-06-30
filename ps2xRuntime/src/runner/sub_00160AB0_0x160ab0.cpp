#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00160AB0
// Address: 0x160ab0 - 0x160b30
void sub_00160AB0_0x160ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160AB0_0x160ab0");
#endif

    switch (ctx->pc) {
        case 0x160b00u: goto label_160b00;
        default: break;
    }

    ctx->pc = 0x160ab0u;

    // 0x160ab0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x160ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x160ab4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x160ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x160ab8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x160ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x160abc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x160abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x160ac0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x160ac0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160ac4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x160ac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160ac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x160ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x160acc: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x160accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x160ad0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x160ad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160ad4: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x160ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x160ad8: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x160ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x160adc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x160adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x160ae0: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x160ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x160ae4: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x160ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x160ae8: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x160ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x160aec: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x160aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x160af0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x160AF0u;
    {
        const bool branch_taken_0x160af0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x160AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160AF0u;
            // 0x160af4: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160af0) {
            ctx->pc = 0x160B00u;
            goto label_160b00;
        }
    }
    ctx->pc = 0x160AF8u;
    // 0x160af8: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x160AF8u;
    SET_GPR_U32(ctx, 31, 0x160B00u);
    ctx->pc = 0x160AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160AF8u;
            // 0x160afc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160B00u; }
        if (ctx->pc != 0x160B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160B00u; }
        if (ctx->pc != 0x160B00u) { return; }
    }
    ctx->pc = 0x160B00u;
label_160b00:
    // 0x160b00: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x160b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x160b04: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x160b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x160b08: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x160b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x160b0c: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x160b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x160b10: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x160b10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x160b14: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x160b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x160b18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x160b18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160b1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x160b1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160b20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x160b20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160b24: 0x3e00008  jr          $ra
    ctx->pc = 0x160B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160B24u;
            // 0x160b28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160B2Cu;
    // 0x160b2c: 0x0  nop
    ctx->pc = 0x160b2cu;
    // NOP
}
