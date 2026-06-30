#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D2BE0
// Address: 0x3d2be0 - 0x3d2c30
void sub_003D2BE0_0x3d2be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2BE0_0x3d2be0");
#endif

    switch (ctx->pc) {
        case 0x3d2be0u: goto label_3d2be0;
        case 0x3d2be4u: goto label_3d2be4;
        case 0x3d2be8u: goto label_3d2be8;
        case 0x3d2becu: goto label_3d2bec;
        case 0x3d2bf0u: goto label_3d2bf0;
        case 0x3d2bf4u: goto label_3d2bf4;
        case 0x3d2bf8u: goto label_3d2bf8;
        case 0x3d2bfcu: goto label_3d2bfc;
        case 0x3d2c00u: goto label_3d2c00;
        case 0x3d2c04u: goto label_3d2c04;
        case 0x3d2c08u: goto label_3d2c08;
        case 0x3d2c0cu: goto label_3d2c0c;
        case 0x3d2c10u: goto label_3d2c10;
        case 0x3d2c14u: goto label_3d2c14;
        case 0x3d2c18u: goto label_3d2c18;
        case 0x3d2c1cu: goto label_3d2c1c;
        case 0x3d2c20u: goto label_3d2c20;
        case 0x3d2c24u: goto label_3d2c24;
        case 0x3d2c28u: goto label_3d2c28;
        case 0x3d2c2cu: goto label_3d2c2c;
        default: break;
    }

    ctx->pc = 0x3d2be0u;

label_3d2be0:
    // 0x3d2be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d2be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3d2be4:
    // 0x3d2be4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d2be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d2be8:
    // 0x3d2be8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d2be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d2bec:
    // 0x3d2bec: 0x8c850218  lw          $a1, 0x218($a0)
    ctx->pc = 0x3d2becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_3d2bf0:
    // 0x3d2bf0: 0x18a00009  blez        $a1, . + 4 + (0x9 << 2)
label_3d2bf4:
    if (ctx->pc == 0x3D2BF4u) {
        ctx->pc = 0x3D2BF4u;
            // 0x3d2bf4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D2BF8u;
        goto label_3d2bf8;
    }
    ctx->pc = 0x3D2BF0u;
    {
        const bool branch_taken_0x3d2bf0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3D2BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2BF0u;
            // 0x3d2bf4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2bf0) {
            ctx->pc = 0x3D2C18u;
            goto label_3d2c18;
        }
    }
    ctx->pc = 0x3D2BF8u;
label_3d2bf8:
    // 0x3d2bf8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3d2bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3d2bfc:
    // 0x3d2bfc: 0x8c4489e8  lw          $a0, -0x7618($v0)
    ctx->pc = 0x3d2bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_3d2c00:
    // 0x3d2c00: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d2c00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d2c04:
    // 0x3d2c04: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x3d2c04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_3d2c08:
    // 0x3d2c08: 0x320f809  jalr        $t9
label_3d2c0c:
    if (ctx->pc == 0x3D2C0Cu) {
        ctx->pc = 0x3D2C10u;
        goto label_3d2c10;
    }
    ctx->pc = 0x3D2C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D2C10u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D2C10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D2C10u; }
            if (ctx->pc != 0x3D2C10u) { return; }
        }
        }
    }
    ctx->pc = 0x3D2C10u;
label_3d2c10:
    // 0x3d2c10: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d2c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d2c14:
    // 0x3d2c14: 0xae030218  sw          $v1, 0x218($s0)
    ctx->pc = 0x3d2c14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
label_3d2c18:
    // 0x3d2c18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d2c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d2c1c:
    // 0x3d2c1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d2c1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d2c20:
    // 0x3d2c20: 0x3e00008  jr          $ra
label_3d2c24:
    if (ctx->pc == 0x3D2C24u) {
        ctx->pc = 0x3D2C24u;
            // 0x3d2c24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3D2C28u;
        goto label_3d2c28;
    }
    ctx->pc = 0x3D2C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D2C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2C20u;
            // 0x3d2c24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D2C28u;
label_3d2c28:
    // 0x3d2c28: 0x0  nop
    ctx->pc = 0x3d2c28u;
    // NOP
label_3d2c2c:
    // 0x3d2c2c: 0x0  nop
    ctx->pc = 0x3d2c2cu;
    // NOP
}
