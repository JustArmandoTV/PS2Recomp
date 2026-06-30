#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B8E60
// Address: 0x3b8e60 - 0x3b8ee0
void sub_003B8E60_0x3b8e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B8E60_0x3b8e60");
#endif

    switch (ctx->pc) {
        case 0x3b8e60u: goto label_3b8e60;
        case 0x3b8e64u: goto label_3b8e64;
        case 0x3b8e68u: goto label_3b8e68;
        case 0x3b8e6cu: goto label_3b8e6c;
        case 0x3b8e70u: goto label_3b8e70;
        case 0x3b8e74u: goto label_3b8e74;
        case 0x3b8e78u: goto label_3b8e78;
        case 0x3b8e7cu: goto label_3b8e7c;
        case 0x3b8e80u: goto label_3b8e80;
        case 0x3b8e84u: goto label_3b8e84;
        case 0x3b8e88u: goto label_3b8e88;
        case 0x3b8e8cu: goto label_3b8e8c;
        case 0x3b8e90u: goto label_3b8e90;
        case 0x3b8e94u: goto label_3b8e94;
        case 0x3b8e98u: goto label_3b8e98;
        case 0x3b8e9cu: goto label_3b8e9c;
        case 0x3b8ea0u: goto label_3b8ea0;
        case 0x3b8ea4u: goto label_3b8ea4;
        case 0x3b8ea8u: goto label_3b8ea8;
        case 0x3b8eacu: goto label_3b8eac;
        case 0x3b8eb0u: goto label_3b8eb0;
        case 0x3b8eb4u: goto label_3b8eb4;
        case 0x3b8eb8u: goto label_3b8eb8;
        case 0x3b8ebcu: goto label_3b8ebc;
        case 0x3b8ec0u: goto label_3b8ec0;
        case 0x3b8ec4u: goto label_3b8ec4;
        case 0x3b8ec8u: goto label_3b8ec8;
        case 0x3b8eccu: goto label_3b8ecc;
        case 0x3b8ed0u: goto label_3b8ed0;
        case 0x3b8ed4u: goto label_3b8ed4;
        case 0x3b8ed8u: goto label_3b8ed8;
        case 0x3b8edcu: goto label_3b8edc;
        default: break;
    }

    ctx->pc = 0x3b8e60u;

label_3b8e60:
    // 0x3b8e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b8e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3b8e64:
    // 0x3b8e64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b8e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3b8e68:
    // 0x3b8e68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b8e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3b8e6c:
    // 0x3b8e6c: 0xa080002c  sb          $zero, 0x2C($a0)
    ctx->pc = 0x3b8e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 44), (uint8_t)GPR_U32(ctx, 0));
label_3b8e70:
    // 0x3b8e70: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x3b8e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3b8e74:
    // 0x3b8e74: 0x8c8b0008  lw          $t3, 0x8($a0)
    ctx->pc = 0x3b8e74u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3b8e78:
    // 0x3b8e78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b8e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3b8e7c:
    // 0x3b8e7c: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x3b8e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_3b8e80:
    // 0x3b8e80: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3b8e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b8e84:
    // 0x3b8e84: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3b8e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b8e88:
    // 0x3b8e88: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_3b8e8c:
    if (ctx->pc == 0x3B8E8Cu) {
        ctx->pc = 0x3B8E8Cu;
            // 0x3b8e8c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B8E90u;
        goto label_3b8e90;
    }
    ctx->pc = 0x3B8E88u;
    {
        const bool branch_taken_0x3b8e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8E88u;
            // 0x3b8e8c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8e88) {
            ctx->pc = 0x3B8EC8u;
            goto label_3b8ec8;
        }
    }
    ctx->pc = 0x3B8E90u;
label_3b8e90:
    // 0x3b8e90: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3b8e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3b8e94:
    // 0x3b8e94: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x3b8e94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_3b8e98:
    // 0x3b8e98: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3b8e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3b8e9c:
    // 0x3b8e9c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3b8e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3b8ea0:
    // 0x3b8ea0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3b8ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3b8ea4:
    // 0x3b8ea4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3b8ea4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3b8ea8:
    // 0x3b8ea8: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x3b8ea8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3b8eac:
    // 0x3b8eac: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x3b8eacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3b8eb0:
    // 0x3b8eb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b8eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3b8eb4:
    // 0x3b8eb4: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x3b8eb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3b8eb8:
    // 0x3b8eb8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3b8eb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b8ebc:
    // 0x3b8ebc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3b8ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b8ec0:
    // 0x3b8ec0: 0x320f809  jalr        $t9
label_3b8ec4:
    if (ctx->pc == 0x3B8EC4u) {
        ctx->pc = 0x3B8EC4u;
            // 0x3b8ec4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B8EC8u;
        goto label_3b8ec8;
    }
    ctx->pc = 0x3B8EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B8EC8u);
        ctx->pc = 0x3B8EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8EC0u;
            // 0x3b8ec4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B8EC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B8EC8u; }
            if (ctx->pc != 0x3B8EC8u) { return; }
        }
        }
    }
    ctx->pc = 0x3B8EC8u;
label_3b8ec8:
    // 0x3b8ec8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b8ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b8ecc:
    // 0x3b8ecc: 0xa203002c  sb          $v1, 0x2C($s0)
    ctx->pc = 0x3b8eccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 3));
label_3b8ed0:
    // 0x3b8ed0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b8ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b8ed4:
    // 0x3b8ed4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b8ed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b8ed8:
    // 0x3b8ed8: 0x3e00008  jr          $ra
label_3b8edc:
    if (ctx->pc == 0x3B8EDCu) {
        ctx->pc = 0x3B8EDCu;
            // 0x3b8edc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3B8EE0u;
        goto label_fallthrough_0x3b8ed8;
    }
    ctx->pc = 0x3B8ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B8EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8ED8u;
            // 0x3b8edc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3b8ed8:
    ctx->pc = 0x3B8EE0u;
}
