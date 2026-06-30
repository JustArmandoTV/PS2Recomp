#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00234DF0
// Address: 0x234df0 - 0x234ea0
void sub_00234DF0_0x234df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234DF0_0x234df0");
#endif

    switch (ctx->pc) {
        case 0x234e1cu: goto label_234e1c;
        case 0x234e64u: goto label_234e64;
        default: break;
    }

    ctx->pc = 0x234df0u;

    // 0x234df0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x234df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x234df4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x234df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x234df8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x234df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x234dfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x234dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x234e00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x234e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234e04: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x234e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x234e08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x234e08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234e0c: 0xffa60038  sd          $a2, 0x38($sp)
    ctx->pc = 0x234e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 6));
    // 0x234e10: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x234E10u;
    {
        const bool branch_taken_0x234e10 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x234E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234E10u;
            // 0x234e14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e10) {
            ctx->pc = 0x234E40u;
            goto label_234e40;
        }
    }
    ctx->pc = 0x234E18u;
    // 0x234e18: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x234e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_234e1c:
    // 0x234e1c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x234e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x234e20: 0x5203001a  beql        $s0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x234E20u;
    {
        const bool branch_taken_0x234e20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x234e20) {
            ctx->pc = 0x234E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x234E20u;
            // 0x234e24: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x234E8Cu;
            goto label_234e8c;
        }
    }
    ctx->pc = 0x234E28u;
    // 0x234e28: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x234e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x234e2c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x234e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x234e30: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x234e30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x234e34: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x234E34u;
    {
        const bool branch_taken_0x234e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x234E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234E34u;
            // 0x234e38: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e34) {
            ctx->pc = 0x234E1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_234e1c;
        }
    }
    ctx->pc = 0x234E3Cu;
    // 0x234e3c: 0x0  nop
    ctx->pc = 0x234e3cu;
    // NOP
label_234e40:
    // 0x234e40: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x234e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x234e44: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x234e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x234e48: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x234e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x234e4c: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x234e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x234e50: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x234E50u;
    {
        const bool branch_taken_0x234e50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x234e50) {
            ctx->pc = 0x234E54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x234E50u;
            // 0x234e54: 0x8e250050  lw          $a1, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x234E68u;
            goto label_234e68;
        }
    }
    ctx->pc = 0x234E58u;
    // 0x234e58: 0x2624004c  addiu       $a0, $s1, 0x4C
    ctx->pc = 0x234e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x234e5c: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x234E5Cu;
    SET_GPR_U32(ctx, 31, 0x234E64u);
    ctx->pc = 0x234E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234E5Cu;
            // 0x234e60: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234E64u; }
        if (ctx->pc != 0x234E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234E64u; }
        if (ctx->pc != 0x234E64u) { return; }
    }
    ctx->pc = 0x234E64u;
label_234e64:
    // 0x234e64: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x234e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_234e68:
    // 0x234e68: 0xdfa30038  ld          $v1, 0x38($sp)
    ctx->pc = 0x234e68u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x234e6c: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x234e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x234e70: 0xae240050  sw          $a0, 0x50($s1)
    ctx->pc = 0x234e70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 4));
    // 0x234e74: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x234e74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x234e78: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x234e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x234e7c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x234e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x234e80: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x234e80u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x234e84: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x234e84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x234e88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x234e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_234e8c:
    // 0x234e8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x234e8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234e90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x234e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234e94: 0x3e00008  jr          $ra
    ctx->pc = 0x234E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234E94u;
            // 0x234e98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234E9Cu;
    // 0x234e9c: 0x0  nop
    ctx->pc = 0x234e9cu;
    // NOP
}
