#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00101FA0
// Address: 0x101fa0 - 0x102010
void sub_00101FA0_0x101fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101FA0_0x101fa0");
#endif

    switch (ctx->pc) {
        case 0x101fa0u: goto label_101fa0;
        case 0x101fa4u: goto label_101fa4;
        case 0x101fa8u: goto label_101fa8;
        case 0x101facu: goto label_101fac;
        case 0x101fb0u: goto label_101fb0;
        case 0x101fb4u: goto label_101fb4;
        case 0x101fb8u: goto label_101fb8;
        case 0x101fbcu: goto label_101fbc;
        case 0x101fc0u: goto label_101fc0;
        case 0x101fc4u: goto label_101fc4;
        case 0x101fc8u: goto label_101fc8;
        case 0x101fccu: goto label_101fcc;
        case 0x101fd0u: goto label_101fd0;
        case 0x101fd4u: goto label_101fd4;
        case 0x101fd8u: goto label_101fd8;
        case 0x101fdcu: goto label_101fdc;
        case 0x101fe0u: goto label_101fe0;
        case 0x101fe4u: goto label_101fe4;
        case 0x101fe8u: goto label_101fe8;
        case 0x101fecu: goto label_101fec;
        case 0x101ff0u: goto label_101ff0;
        case 0x101ff4u: goto label_101ff4;
        case 0x101ff8u: goto label_101ff8;
        case 0x101ffcu: goto label_101ffc;
        case 0x102000u: goto label_102000;
        case 0x102004u: goto label_102004;
        case 0x102008u: goto label_102008;
        case 0x10200cu: goto label_10200c;
        default: break;
    }

    ctx->pc = 0x101fa0u;

label_101fa0:
    // 0x101fa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x101fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_101fa4:
    // 0x101fa4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x101fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_101fa8:
    // 0x101fa8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x101fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_101fac:
    // 0x101fac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x101facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_101fb0:
    // 0x101fb0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x101fb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_101fb4:
    // 0x101fb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x101fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_101fb8:
    // 0x101fb8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x101fb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_101fbc:
    // 0x101fbc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x101fbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_101fc0:
    // 0x101fc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x101fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_101fc4:
    // 0x101fc4: 0x2511818  mult        $v1, $s2, $s1
    ctx->pc = 0x101fc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_101fc8:
    // 0x101fc8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_101fcc:
    if (ctx->pc == 0x101FCCu) {
        ctx->pc = 0x101FCCu;
            // 0x101fcc: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x101FD0u;
        goto label_101fd0;
    }
    ctx->pc = 0x101FC8u;
    {
        const bool branch_taken_0x101fc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x101FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101FC8u;
            // 0x101fcc: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101fc8) {
            ctx->pc = 0x101FF0u;
            goto label_101ff0;
        }
    }
    ctx->pc = 0x101FD0u;
label_101fd0:
    // 0x101fd0: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x101fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_101fd4:
    // 0x101fd4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x101fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_101fd8:
    // 0x101fd8: 0x260f809  jalr        $s3
label_101fdc:
    if (ctx->pc == 0x101FDCu) {
        ctx->pc = 0x101FDCu;
            // 0x101fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x101FE0u;
        goto label_101fe0;
    }
    ctx->pc = 0x101FD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x101FE0u);
        ctx->pc = 0x101FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101FD8u;
            // 0x101fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x101FE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x101FE0u; }
            if (ctx->pc != 0x101FE0u) { return; }
        }
        }
    }
    ctx->pc = 0x101FE0u;
label_101fe0:
    // 0x101fe0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x101fe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_101fe4:
    // 0x101fe4: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
label_101fe8:
    if (ctx->pc == 0x101FE8u) {
        ctx->pc = 0x101FECu;
        goto label_101fec;
    }
    ctx->pc = 0x101FE4u;
    {
        const bool branch_taken_0x101fe4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x101fe4) {
            ctx->pc = 0x101FD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_101fd0;
        }
    }
    ctx->pc = 0x101FECu;
label_101fec:
    // 0x101fec: 0x0  nop
    ctx->pc = 0x101fecu;
    // NOP
label_101ff0:
    // 0x101ff0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x101ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_101ff4:
    // 0x101ff4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x101ff4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_101ff8:
    // 0x101ff8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x101ff8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_101ffc:
    // 0x101ffc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x101ffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_102000:
    // 0x102000: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x102000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_102004:
    // 0x102004: 0x3e00008  jr          $ra
label_102008:
    if (ctx->pc == 0x102008u) {
        ctx->pc = 0x102008u;
            // 0x102008: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x10200Cu;
        goto label_10200c;
    }
    ctx->pc = 0x102004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102004u;
            // 0x102008: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10200Cu;
label_10200c:
    // 0x10200c: 0x0  nop
    ctx->pc = 0x10200cu;
    // NOP
}
