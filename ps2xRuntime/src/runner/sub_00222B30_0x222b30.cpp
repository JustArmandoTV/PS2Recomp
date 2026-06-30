#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00222B30
// Address: 0x222b30 - 0x222bd0
void sub_00222B30_0x222b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222B30_0x222b30");
#endif

    switch (ctx->pc) {
        case 0x222b30u: goto label_222b30;
        case 0x222b34u: goto label_222b34;
        case 0x222b38u: goto label_222b38;
        case 0x222b3cu: goto label_222b3c;
        case 0x222b40u: goto label_222b40;
        case 0x222b44u: goto label_222b44;
        case 0x222b48u: goto label_222b48;
        case 0x222b4cu: goto label_222b4c;
        case 0x222b50u: goto label_222b50;
        case 0x222b54u: goto label_222b54;
        case 0x222b58u: goto label_222b58;
        case 0x222b5cu: goto label_222b5c;
        case 0x222b60u: goto label_222b60;
        case 0x222b64u: goto label_222b64;
        case 0x222b68u: goto label_222b68;
        case 0x222b6cu: goto label_222b6c;
        case 0x222b70u: goto label_222b70;
        case 0x222b74u: goto label_222b74;
        case 0x222b78u: goto label_222b78;
        case 0x222b7cu: goto label_222b7c;
        case 0x222b80u: goto label_222b80;
        case 0x222b84u: goto label_222b84;
        case 0x222b88u: goto label_222b88;
        case 0x222b8cu: goto label_222b8c;
        case 0x222b90u: goto label_222b90;
        case 0x222b94u: goto label_222b94;
        case 0x222b98u: goto label_222b98;
        case 0x222b9cu: goto label_222b9c;
        case 0x222ba0u: goto label_222ba0;
        case 0x222ba4u: goto label_222ba4;
        case 0x222ba8u: goto label_222ba8;
        case 0x222bacu: goto label_222bac;
        case 0x222bb0u: goto label_222bb0;
        case 0x222bb4u: goto label_222bb4;
        case 0x222bb8u: goto label_222bb8;
        case 0x222bbcu: goto label_222bbc;
        case 0x222bc0u: goto label_222bc0;
        case 0x222bc4u: goto label_222bc4;
        case 0x222bc8u: goto label_222bc8;
        case 0x222bccu: goto label_222bcc;
        default: break;
    }

    ctx->pc = 0x222b30u;

label_222b30:
    // 0x222b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_222b34:
    // 0x222b34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x222b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_222b38:
    // 0x222b38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x222b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_222b3c:
    // 0x222b3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x222b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_222b40:
    // 0x222b40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x222b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_222b44:
    // 0x222b44: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_222b48:
    if (ctx->pc == 0x222B48u) {
        ctx->pc = 0x222B48u;
            // 0x222b48: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x222B4Cu;
        goto label_222b4c;
    }
    ctx->pc = 0x222B44u;
    {
        const bool branch_taken_0x222b44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x222B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222B44u;
            // 0x222b48: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b44) {
            ctx->pc = 0x222B64u;
            goto label_222b64;
        }
    }
    ctx->pc = 0x222B4Cu;
label_222b4c:
    // 0x222b4c: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x222b4cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_222b50:
    // 0x222b50: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_222b54:
    if (ctx->pc == 0x222B54u) {
        ctx->pc = 0x222B54u;
            // 0x222b54: 0x8e240090  lw          $a0, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->pc = 0x222B58u;
        goto label_222b58;
    }
    ctx->pc = 0x222B50u;
    {
        const bool branch_taken_0x222b50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x222b50) {
            ctx->pc = 0x222B54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222B50u;
            // 0x222b54: 0x8e240090  lw          $a0, 0x90($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222B68u;
            goto label_222b68;
        }
    }
    ctx->pc = 0x222B58u;
label_222b58:
    // 0x222b58: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x222b58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_222b5c:
    // 0x222b5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x222b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_222b60:
    // 0x222b60: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x222b60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_222b64:
    // 0x222b64: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x222b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_222b68:
    // 0x222b68: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
label_222b6c:
    if (ctx->pc == 0x222B6Cu) {
        ctx->pc = 0x222B6Cu;
            // 0x222b6c: 0xae300090  sw          $s0, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
        ctx->pc = 0x222B70u;
        goto label_222b70;
    }
    ctx->pc = 0x222B68u;
    {
        const bool branch_taken_0x222b68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x222b68) {
            ctx->pc = 0x222B6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x222B68u;
            // 0x222b6c: 0xae300090  sw          $s0, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x222BB4u;
            goto label_222bb4;
        }
    }
    ctx->pc = 0x222B70u;
label_222b70:
    // 0x222b70: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x222b70u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_222b74:
    // 0x222b74: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_222b78:
    if (ctx->pc == 0x222B78u) {
        ctx->pc = 0x222B7Cu;
        goto label_222b7c;
    }
    ctx->pc = 0x222B74u;
    {
        const bool branch_taken_0x222b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x222b74) {
            ctx->pc = 0x222BB0u;
            goto label_222bb0;
        }
    }
    ctx->pc = 0x222B7Cu;
label_222b7c:
    // 0x222b7c: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x222b7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_222b80:
    // 0x222b80: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x222b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_222b84:
    // 0x222b84: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x222b84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_222b88:
    // 0x222b88: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x222b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_222b8c:
    // 0x222b8c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x222b8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_222b90:
    // 0x222b90: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_222b94:
    if (ctx->pc == 0x222B94u) {
        ctx->pc = 0x222B98u;
        goto label_222b98;
    }
    ctx->pc = 0x222B90u;
    {
        const bool branch_taken_0x222b90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x222b90) {
            ctx->pc = 0x222BB0u;
            goto label_222bb0;
        }
    }
    ctx->pc = 0x222B98u;
label_222b98:
    // 0x222b98: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_222b9c:
    if (ctx->pc == 0x222B9Cu) {
        ctx->pc = 0x222BA0u;
        goto label_222ba0;
    }
    ctx->pc = 0x222B98u;
    {
        const bool branch_taken_0x222b98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x222b98) {
            ctx->pc = 0x222BB0u;
            goto label_222bb0;
        }
    }
    ctx->pc = 0x222BA0u;
label_222ba0:
    // 0x222ba0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x222ba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_222ba4:
    // 0x222ba4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x222ba4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_222ba8:
    // 0x222ba8: 0x320f809  jalr        $t9
label_222bac:
    if (ctx->pc == 0x222BACu) {
        ctx->pc = 0x222BACu;
            // 0x222bac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x222BB0u;
        goto label_222bb0;
    }
    ctx->pc = 0x222BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x222BB0u);
        ctx->pc = 0x222BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222BA8u;
            // 0x222bac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x222BB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x222BB0u; }
            if (ctx->pc != 0x222BB0u) { return; }
        }
        }
    }
    ctx->pc = 0x222BB0u;
label_222bb0:
    // 0x222bb0: 0xae300090  sw          $s0, 0x90($s1)
    ctx->pc = 0x222bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
label_222bb4:
    // 0x222bb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x222bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_222bb8:
    // 0x222bb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x222bb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_222bbc:
    // 0x222bbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x222bbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_222bc0:
    // 0x222bc0: 0x3e00008  jr          $ra
label_222bc4:
    if (ctx->pc == 0x222BC4u) {
        ctx->pc = 0x222BC4u;
            // 0x222bc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x222BC8u;
        goto label_222bc8;
    }
    ctx->pc = 0x222BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222BC0u;
            // 0x222bc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x222BC8u;
label_222bc8:
    // 0x222bc8: 0x0  nop
    ctx->pc = 0x222bc8u;
    // NOP
label_222bcc:
    // 0x222bcc: 0x0  nop
    ctx->pc = 0x222bccu;
    // NOP
}
