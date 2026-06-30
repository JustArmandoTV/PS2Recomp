#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00109F78
// Address: 0x109f78 - 0x109ff0
void sub_00109F78_0x109f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109F78_0x109f78");
#endif

    switch (ctx->pc) {
        case 0x109f78u: goto label_109f78;
        case 0x109f7cu: goto label_109f7c;
        case 0x109f80u: goto label_109f80;
        case 0x109f84u: goto label_109f84;
        case 0x109f88u: goto label_109f88;
        case 0x109f8cu: goto label_109f8c;
        case 0x109f90u: goto label_109f90;
        case 0x109f94u: goto label_109f94;
        case 0x109f98u: goto label_109f98;
        case 0x109f9cu: goto label_109f9c;
        case 0x109fa0u: goto label_109fa0;
        case 0x109fa4u: goto label_109fa4;
        case 0x109fa8u: goto label_109fa8;
        case 0x109facu: goto label_109fac;
        case 0x109fb0u: goto label_109fb0;
        case 0x109fb4u: goto label_109fb4;
        case 0x109fb8u: goto label_109fb8;
        case 0x109fbcu: goto label_109fbc;
        case 0x109fc0u: goto label_109fc0;
        case 0x109fc4u: goto label_109fc4;
        case 0x109fc8u: goto label_109fc8;
        case 0x109fccu: goto label_109fcc;
        case 0x109fd0u: goto label_109fd0;
        case 0x109fd4u: goto label_109fd4;
        case 0x109fd8u: goto label_109fd8;
        case 0x109fdcu: goto label_109fdc;
        case 0x109fe0u: goto label_109fe0;
        case 0x109fe4u: goto label_109fe4;
        case 0x109fe8u: goto label_109fe8;
        case 0x109fecu: goto label_109fec;
        default: break;
    }

    ctx->pc = 0x109f78u;

label_109f78:
    // 0x109f78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x109f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_109f7c:
    // 0x109f7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_109f80:
    // 0x109f80: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x109f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_109f84:
    // 0x109f84: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x109f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_109f88:
    // 0x109f88: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_109f8c:
    if (ctx->pc == 0x109F8Cu) {
        ctx->pc = 0x109F8Cu;
            // 0x109f8c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x109F90u;
        goto label_109f90;
    }
    ctx->pc = 0x109F88u;
    {
        const bool branch_taken_0x109f88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x109F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109F88u;
            // 0x109f8c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109f88) {
            ctx->pc = 0x109FD8u;
            goto label_109fd8;
        }
    }
    ctx->pc = 0x109F90u;
label_109f90:
    // 0x109f90: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x109f90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_109f94:
    // 0x109f94: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_109f98:
    if (ctx->pc == 0x109F98u) {
        ctx->pc = 0x109F98u;
            // 0x109f98: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x109F9Cu;
        goto label_109f9c;
    }
    ctx->pc = 0x109F94u;
    {
        const bool branch_taken_0x109f94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x109F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109F94u;
            // 0x109f98: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109f94) {
            ctx->pc = 0x109FE0u;
            goto label_109fe0;
        }
    }
    ctx->pc = 0x109F9Cu;
label_109f9c:
    // 0x109f9c: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x109f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_109fa0:
    // 0x109fa0: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
label_109fa4:
    if (ctx->pc == 0x109FA4u) {
        ctx->pc = 0x109FA4u;
            // 0x109fa4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x109FA8u;
        goto label_109fa8;
    }
    ctx->pc = 0x109FA0u;
    {
        const bool branch_taken_0x109fa0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x109FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109FA0u;
            // 0x109fa4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109fa0) {
            ctx->pc = 0x109FE4u;
            goto label_109fe4;
        }
    }
    ctx->pc = 0x109FA8u;
label_109fa8:
    // 0x109fa8: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x109fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_109fac:
    // 0x109fac: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x109facu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_109fb0:
    // 0x109fb0: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x109fb0u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_109fb4:
    // 0x109fb4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x109fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_109fb8:
    // 0x109fb8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x109fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_109fbc:
    // 0x109fbc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x109fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_109fc0:
    // 0x109fc0: 0x624018  mult        $t0, $v1, $v0
    ctx->pc = 0x109fc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_109fc4:
    // 0x109fc4: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x109fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_109fc8:
    // 0x109fc8: 0xe0f809  jalr        $a3
label_109fcc:
    if (ctx->pc == 0x109FCCu) {
        ctx->pc = 0x109FCCu;
            // 0x109fcc: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->pc = 0x109FD0u;
        goto label_109fd0;
    }
    ctx->pc = 0x109FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x109FD0u);
        ctx->pc = 0x109FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109FC8u;
            // 0x109fcc: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x109FD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x109FD0u; }
            if (ctx->pc != 0x109FD0u) { return; }
        }
        }
    }
    ctx->pc = 0x109FD0u;
label_109fd0:
    // 0x109fd0: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x109fd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_109fd4:
    // 0x109fd4: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x109fd4u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_109fd8:
    // 0x109fd8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x109fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_109fdc:
    // 0x109fdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_109fe0:
    // 0x109fe0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x109fe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_109fe4:
    // 0x109fe4: 0x3e00008  jr          $ra
label_109fe8:
    if (ctx->pc == 0x109FE8u) {
        ctx->pc = 0x109FE8u;
            // 0x109fe8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x109FECu;
        goto label_109fec;
    }
    ctx->pc = 0x109FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109FE4u;
            // 0x109fe8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x109FECu;
label_109fec:
    // 0x109fec: 0x0  nop
    ctx->pc = 0x109fecu;
    // NOP
}
