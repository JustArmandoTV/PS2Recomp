#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00385B90
// Address: 0x385b90 - 0x385c20
void sub_00385B90_0x385b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385B90_0x385b90");
#endif

    switch (ctx->pc) {
        case 0x385b90u: goto label_385b90;
        case 0x385b94u: goto label_385b94;
        case 0x385b98u: goto label_385b98;
        case 0x385b9cu: goto label_385b9c;
        case 0x385ba0u: goto label_385ba0;
        case 0x385ba4u: goto label_385ba4;
        case 0x385ba8u: goto label_385ba8;
        case 0x385bacu: goto label_385bac;
        case 0x385bb0u: goto label_385bb0;
        case 0x385bb4u: goto label_385bb4;
        case 0x385bb8u: goto label_385bb8;
        case 0x385bbcu: goto label_385bbc;
        case 0x385bc0u: goto label_385bc0;
        case 0x385bc4u: goto label_385bc4;
        case 0x385bc8u: goto label_385bc8;
        case 0x385bccu: goto label_385bcc;
        case 0x385bd0u: goto label_385bd0;
        case 0x385bd4u: goto label_385bd4;
        case 0x385bd8u: goto label_385bd8;
        case 0x385bdcu: goto label_385bdc;
        case 0x385be0u: goto label_385be0;
        case 0x385be4u: goto label_385be4;
        case 0x385be8u: goto label_385be8;
        case 0x385becu: goto label_385bec;
        case 0x385bf0u: goto label_385bf0;
        case 0x385bf4u: goto label_385bf4;
        case 0x385bf8u: goto label_385bf8;
        case 0x385bfcu: goto label_385bfc;
        case 0x385c00u: goto label_385c00;
        case 0x385c04u: goto label_385c04;
        case 0x385c08u: goto label_385c08;
        case 0x385c0cu: goto label_385c0c;
        case 0x385c10u: goto label_385c10;
        case 0x385c14u: goto label_385c14;
        case 0x385c18u: goto label_385c18;
        case 0x385c1cu: goto label_385c1c;
        default: break;
    }

    ctx->pc = 0x385b90u;

label_385b90:
    // 0x385b90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x385b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_385b94:
    // 0x385b94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x385b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_385b98:
    // 0x385b98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x385b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_385b9c:
    // 0x385b9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x385b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_385ba0:
    // 0x385ba0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x385ba0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_385ba4:
    // 0x385ba4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x385ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_385ba8:
    // 0x385ba8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x385ba8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_385bac:
    // 0x385bac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x385bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_385bb0:
    // 0x385bb0: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x385bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
label_385bb4:
    // 0x385bb4: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x385bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
label_385bb8:
    // 0x385bb8: 0x8c900068  lw          $s0, 0x68($a0)
    ctx->pc = 0x385bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_385bbc:
    // 0x385bbc: 0x8c910054  lw          $s1, 0x54($a0)
    ctx->pc = 0x385bbcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_385bc0:
    // 0x385bc0: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x385bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
label_385bc4:
    // 0x385bc4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x385bc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_385bc8:
    // 0x385bc8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x385bc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_385bcc:
    // 0x385bcc: 0x320f809  jalr        $t9
label_385bd0:
    if (ctx->pc == 0x385BD0u) {
        ctx->pc = 0x385BD0u;
            // 0x385bd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x385BD4u;
        goto label_385bd4;
    }
    ctx->pc = 0x385BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x385BD4u);
        ctx->pc = 0x385BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x385BCCu;
            // 0x385bd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x385BD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x385BD4u; }
            if (ctx->pc != 0x385BD4u) { return; }
        }
        }
    }
    ctx->pc = 0x385BD4u;
label_385bd4:
    // 0x385bd4: 0x8e650064  lw          $a1, 0x64($s3)
    ctx->pc = 0x385bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_385bd8:
    // 0x385bd8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x385bd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_385bdc:
    // 0x385bdc: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x385bdcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_385be0:
    // 0x385be0: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x385be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_385be4:
    // 0x385be4: 0xae640064  sw          $a0, 0x64($s3)
    ctx->pc = 0x385be4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 4));
label_385be8:
    // 0x385be8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x385be8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_385bec:
    // 0x385bec: 0x8e640060  lw          $a0, 0x60($s3)
    ctx->pc = 0x385becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_385bf0:
    // 0x385bf0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x385bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_385bf4:
    // 0x385bf4: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x385bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
label_385bf8:
    // 0x385bf8: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_385bfc:
    if (ctx->pc == 0x385BFCu) {
        ctx->pc = 0x385BFCu;
            // 0x385bfc: 0x263103b0  addiu       $s1, $s1, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 944));
        ctx->pc = 0x385C00u;
        goto label_385c00;
    }
    ctx->pc = 0x385BF8u;
    {
        const bool branch_taken_0x385bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x385BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x385BF8u;
            // 0x385bfc: 0x263103b0  addiu       $s1, $s1, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385bf8) {
            ctx->pc = 0x385BC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_385bc4;
        }
    }
    ctx->pc = 0x385C00u;
label_385c00:
    // 0x385c00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x385c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_385c04:
    // 0x385c04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x385c04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_385c08:
    // 0x385c08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x385c08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_385c0c:
    // 0x385c0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x385c0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_385c10:
    // 0x385c10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x385c10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_385c14:
    // 0x385c14: 0x3e00008  jr          $ra
label_385c18:
    if (ctx->pc == 0x385C18u) {
        ctx->pc = 0x385C18u;
            // 0x385c18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x385C1Cu;
        goto label_385c1c;
    }
    ctx->pc = 0x385C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x385C14u;
            // 0x385c18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x385C1Cu;
label_385c1c:
    // 0x385c1c: 0x0  nop
    ctx->pc = 0x385c1cu;
    // NOP
}
