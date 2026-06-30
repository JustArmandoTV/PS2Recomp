#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00463F80
// Address: 0x463f80 - 0x463fd0
void sub_00463F80_0x463f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00463F80_0x463f80");
#endif

    switch (ctx->pc) {
        case 0x463f80u: goto label_463f80;
        case 0x463f84u: goto label_463f84;
        case 0x463f88u: goto label_463f88;
        case 0x463f8cu: goto label_463f8c;
        case 0x463f90u: goto label_463f90;
        case 0x463f94u: goto label_463f94;
        case 0x463f98u: goto label_463f98;
        case 0x463f9cu: goto label_463f9c;
        case 0x463fa0u: goto label_463fa0;
        case 0x463fa4u: goto label_463fa4;
        case 0x463fa8u: goto label_463fa8;
        case 0x463facu: goto label_463fac;
        case 0x463fb0u: goto label_463fb0;
        case 0x463fb4u: goto label_463fb4;
        case 0x463fb8u: goto label_463fb8;
        case 0x463fbcu: goto label_463fbc;
        case 0x463fc0u: goto label_463fc0;
        case 0x463fc4u: goto label_463fc4;
        case 0x463fc8u: goto label_463fc8;
        case 0x463fccu: goto label_463fcc;
        default: break;
    }

    ctx->pc = 0x463f80u;

label_463f80:
    // 0x463f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x463f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_463f84:
    // 0x463f84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x463f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_463f88:
    // 0x463f88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x463f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_463f8c:
    // 0x463f8c: 0x908302f8  lbu         $v1, 0x2F8($a0)
    ctx->pc = 0x463f8cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 760)));
label_463f90:
    // 0x463f90: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_463f94:
    if (ctx->pc == 0x463F94u) {
        ctx->pc = 0x463F94u;
            // 0x463f94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x463F98u;
        goto label_463f98;
    }
    ctx->pc = 0x463F90u;
    {
        const bool branch_taken_0x463f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x463F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x463F90u;
            // 0x463f94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x463f90) {
            ctx->pc = 0x463FC0u;
            goto label_463fc0;
        }
    }
    ctx->pc = 0x463F98u;
label_463f98:
    // 0x463f98: 0x8e0402f0  lw          $a0, 0x2F0($s0)
    ctx->pc = 0x463f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
label_463f9c:
    // 0x463f9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x463f9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_463fa0:
    // 0x463fa0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x463fa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_463fa4:
    // 0x463fa4: 0x320f809  jalr        $t9
label_463fa8:
    if (ctx->pc == 0x463FA8u) {
        ctx->pc = 0x463FACu;
        goto label_463fac;
    }
    ctx->pc = 0x463FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x463FACu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x463FACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x463FACu; }
            if (ctx->pc != 0x463FACu) { return; }
        }
        }
    }
    ctx->pc = 0x463FACu;
label_463fac:
    // 0x463fac: 0x8e0402f4  lw          $a0, 0x2F4($s0)
    ctx->pc = 0x463facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 756)));
label_463fb0:
    // 0x463fb0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x463fb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_463fb4:
    // 0x463fb4: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x463fb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_463fb8:
    // 0x463fb8: 0x320f809  jalr        $t9
label_463fbc:
    if (ctx->pc == 0x463FBCu) {
        ctx->pc = 0x463FC0u;
        goto label_463fc0;
    }
    ctx->pc = 0x463FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x463FC0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x463FC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x463FC0u; }
            if (ctx->pc != 0x463FC0u) { return; }
        }
        }
    }
    ctx->pc = 0x463FC0u;
label_463fc0:
    // 0x463fc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x463fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_463fc4:
    // 0x463fc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x463fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_463fc8:
    // 0x463fc8: 0x3e00008  jr          $ra
label_463fcc:
    if (ctx->pc == 0x463FCCu) {
        ctx->pc = 0x463FCCu;
            // 0x463fcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x463FD0u;
        goto label_fallthrough_0x463fc8;
    }
    ctx->pc = 0x463FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x463FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x463FC8u;
            // 0x463fcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x463fc8:
    ctx->pc = 0x463FD0u;
}
