#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B4DA8
// Address: 0x1b4da8 - 0x1b4e40
void sub_001B4DA8_0x1b4da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4DA8_0x1b4da8");
#endif

    switch (ctx->pc) {
        case 0x1b4dd8u: goto label_1b4dd8;
        default: break;
    }

    ctx->pc = 0x1b4da8u;

    // 0x1b4da8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b4da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b4dac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b4dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b4db0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b4db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4db4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b4db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b4db8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b4db8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4dbc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b4dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b4dc0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1b4dc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4dc4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b4dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b4dc8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B4DC8u;
    {
        const bool branch_taken_0x1b4dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4DC8u;
            // 0x1b4dcc: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4dc8) {
            ctx->pc = 0x1B4E2Cu;
            goto label_1b4e2c;
        }
    }
    ctx->pc = 0x1B4DD0u;
    // 0x1b4dd0: 0xc06d390  jal         func_1B4E40
    ctx->pc = 0x1B4DD0u;
    SET_GPR_U32(ctx, 31, 0x1B4DD8u);
    ctx->pc = 0x1B4E40u;
    if (runtime->hasFunction(0x1B4E40u)) {
        auto targetFn = runtime->lookupFunction(0x1B4E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4DD8u; }
        if (ctx->pc != 0x1B4DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4E40_0x1b4e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4DD8u; }
        if (ctx->pc != 0x1B4DD8u) { return; }
    }
    ctx->pc = 0x1B4DD8u;
label_1b4dd8:
    // 0x1b4dd8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b4dd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4ddc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b4ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b4de0: 0x50c20013  beql        $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B4DE0u;
    {
        const bool branch_taken_0x1b4de0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b4de0) {
            ctx->pc = 0x1B4DE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4DE0u;
            // 0x1b4de4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B4E30u;
            goto label_1b4e30;
        }
    }
    ctx->pc = 0x1B4DE8u;
    // 0x1b4de8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b4de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b4dec: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1b4decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b4df0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1b4df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b4df4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1b4df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1b4df8: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x1b4df8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b4dfc: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1b4dfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b4e00: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x1b4e00u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1b4e04: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b4e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b4e08: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1b4e08u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1b4e0c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1b4e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1b4e10: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x1b4e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x1b4e14: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1b4e14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b4e18: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1b4e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b4e1c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x1b4e1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b4e20: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x1b4e20u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x1b4e24: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x1b4e24u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b4e28: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x1b4e28u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
label_1b4e2c:
    // 0x1b4e2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b4e2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b4e30:
    // 0x1b4e30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b4e30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b4e34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b4e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4e38: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4E38u;
            // 0x1b4e3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B4E40u;
}
