#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F5E80
// Address: 0x2f5e80 - 0x2f5ee0
void sub_002F5E80_0x2f5e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5E80_0x2f5e80");
#endif

    switch (ctx->pc) {
        case 0x2f5e80u: goto label_2f5e80;
        case 0x2f5e84u: goto label_2f5e84;
        case 0x2f5e88u: goto label_2f5e88;
        case 0x2f5e8cu: goto label_2f5e8c;
        case 0x2f5e90u: goto label_2f5e90;
        case 0x2f5e94u: goto label_2f5e94;
        case 0x2f5e98u: goto label_2f5e98;
        case 0x2f5e9cu: goto label_2f5e9c;
        case 0x2f5ea0u: goto label_2f5ea0;
        case 0x2f5ea4u: goto label_2f5ea4;
        case 0x2f5ea8u: goto label_2f5ea8;
        case 0x2f5eacu: goto label_2f5eac;
        case 0x2f5eb0u: goto label_2f5eb0;
        case 0x2f5eb4u: goto label_2f5eb4;
        case 0x2f5eb8u: goto label_2f5eb8;
        case 0x2f5ebcu: goto label_2f5ebc;
        case 0x2f5ec0u: goto label_2f5ec0;
        case 0x2f5ec4u: goto label_2f5ec4;
        case 0x2f5ec8u: goto label_2f5ec8;
        case 0x2f5eccu: goto label_2f5ecc;
        case 0x2f5ed0u: goto label_2f5ed0;
        case 0x2f5ed4u: goto label_2f5ed4;
        case 0x2f5ed8u: goto label_2f5ed8;
        case 0x2f5edcu: goto label_2f5edc;
        default: break;
    }

    ctx->pc = 0x2f5e80u;

label_2f5e80:
    // 0x2f5e80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f5e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2f5e84:
    // 0x2f5e84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f5e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2f5e88:
    // 0x2f5e88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f5e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2f5e8c:
    // 0x2f5e8c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x2f5e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2f5e90:
    // 0x2f5e90: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_2f5e94:
    if (ctx->pc == 0x2F5E94u) {
        ctx->pc = 0x2F5E98u;
        goto label_2f5e98;
    }
    ctx->pc = 0x2F5E90u;
    {
        const bool branch_taken_0x2f5e90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5e90) {
            ctx->pc = 0x2F5EC0u;
            goto label_2f5ec0;
        }
    }
    ctx->pc = 0x2F5E98u;
label_2f5e98:
    // 0x2f5e98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f5e98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f5e9c:
    // 0x2f5e9c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x2f5e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2f5ea0:
    // 0x2f5ea0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f5ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f5ea4:
    // 0x2f5ea4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2f5ea4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2f5ea8:
    // 0x2f5ea8: 0x320f809  jalr        $t9
label_2f5eac:
    if (ctx->pc == 0x2F5EACu) {
        ctx->pc = 0x2F5EB0u;
        goto label_2f5eb0;
    }
    ctx->pc = 0x2F5EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F5EB0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F5EB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F5EB0u; }
            if (ctx->pc != 0x2F5EB0u) { return; }
        }
        }
    }
    ctx->pc = 0x2F5EB0u;
label_2f5eb0:
    // 0x2f5eb0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2f5eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2f5eb4:
    // 0x2f5eb4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2f5eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2f5eb8:
    // 0x2f5eb8: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
label_2f5ebc:
    if (ctx->pc == 0x2F5EBCu) {
        ctx->pc = 0x2F5EBCu;
            // 0x2f5ebc: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x2F5EC0u;
        goto label_2f5ec0;
    }
    ctx->pc = 0x2F5EB8u;
    {
        const bool branch_taken_0x2f5eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5eb8) {
            ctx->pc = 0x2F5EBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5EB8u;
            // 0x2f5ebc: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F5EA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5ea0;
        }
    }
    ctx->pc = 0x2F5EC0u;
label_2f5ec0:
    // 0x2f5ec0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f5ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f5ec4:
    // 0x2f5ec4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f5ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f5ec8:
    // 0x2f5ec8: 0x3e00008  jr          $ra
label_2f5ecc:
    if (ctx->pc == 0x2F5ECCu) {
        ctx->pc = 0x2F5ECCu;
            // 0x2f5ecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2F5ED0u;
        goto label_2f5ed0;
    }
    ctx->pc = 0x2F5EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5EC8u;
            // 0x2f5ecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5ED0u;
label_2f5ed0:
    // 0x2f5ed0: 0x3e00008  jr          $ra
label_2f5ed4:
    if (ctx->pc == 0x2F5ED4u) {
        ctx->pc = 0x2F5ED8u;
        goto label_2f5ed8;
    }
    ctx->pc = 0x2F5ED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5ED8u;
label_2f5ed8:
    // 0x2f5ed8: 0x0  nop
    ctx->pc = 0x2f5ed8u;
    // NOP
label_2f5edc:
    // 0x2f5edc: 0x0  nop
    ctx->pc = 0x2f5edcu;
    // NOP
}
