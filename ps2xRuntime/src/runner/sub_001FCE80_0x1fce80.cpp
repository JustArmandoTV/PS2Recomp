#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FCE80
// Address: 0x1fce80 - 0x1fcf50
void sub_001FCE80_0x1fce80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FCE80_0x1fce80");
#endif

    switch (ctx->pc) {
        case 0x1fce80u: goto label_1fce80;
        case 0x1fce84u: goto label_1fce84;
        case 0x1fce88u: goto label_1fce88;
        case 0x1fce8cu: goto label_1fce8c;
        case 0x1fce90u: goto label_1fce90;
        case 0x1fce94u: goto label_1fce94;
        case 0x1fce98u: goto label_1fce98;
        case 0x1fce9cu: goto label_1fce9c;
        case 0x1fcea0u: goto label_1fcea0;
        case 0x1fcea4u: goto label_1fcea4;
        case 0x1fcea8u: goto label_1fcea8;
        case 0x1fceacu: goto label_1fceac;
        case 0x1fceb0u: goto label_1fceb0;
        case 0x1fceb4u: goto label_1fceb4;
        case 0x1fceb8u: goto label_1fceb8;
        case 0x1fcebcu: goto label_1fcebc;
        case 0x1fcec0u: goto label_1fcec0;
        case 0x1fcec4u: goto label_1fcec4;
        case 0x1fcec8u: goto label_1fcec8;
        case 0x1fceccu: goto label_1fcecc;
        case 0x1fced0u: goto label_1fced0;
        case 0x1fced4u: goto label_1fced4;
        case 0x1fced8u: goto label_1fced8;
        case 0x1fcedcu: goto label_1fcedc;
        case 0x1fcee0u: goto label_1fcee0;
        case 0x1fcee4u: goto label_1fcee4;
        case 0x1fcee8u: goto label_1fcee8;
        case 0x1fceecu: goto label_1fceec;
        case 0x1fcef0u: goto label_1fcef0;
        case 0x1fcef4u: goto label_1fcef4;
        case 0x1fcef8u: goto label_1fcef8;
        case 0x1fcefcu: goto label_1fcefc;
        case 0x1fcf00u: goto label_1fcf00;
        case 0x1fcf04u: goto label_1fcf04;
        case 0x1fcf08u: goto label_1fcf08;
        case 0x1fcf0cu: goto label_1fcf0c;
        case 0x1fcf10u: goto label_1fcf10;
        case 0x1fcf14u: goto label_1fcf14;
        case 0x1fcf18u: goto label_1fcf18;
        case 0x1fcf1cu: goto label_1fcf1c;
        case 0x1fcf20u: goto label_1fcf20;
        case 0x1fcf24u: goto label_1fcf24;
        case 0x1fcf28u: goto label_1fcf28;
        case 0x1fcf2cu: goto label_1fcf2c;
        case 0x1fcf30u: goto label_1fcf30;
        case 0x1fcf34u: goto label_1fcf34;
        case 0x1fcf38u: goto label_1fcf38;
        case 0x1fcf3cu: goto label_1fcf3c;
        case 0x1fcf40u: goto label_1fcf40;
        case 0x1fcf44u: goto label_1fcf44;
        case 0x1fcf48u: goto label_1fcf48;
        case 0x1fcf4cu: goto label_1fcf4c;
        default: break;
    }

    ctx->pc = 0x1fce80u;

label_1fce80:
    // 0x1fce80: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1fce80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1fce84:
    // 0x1fce84: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1fce84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1fce88:
    // 0x1fce88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fce88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1fce8c:
    // 0x1fce8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fce8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fce90:
    // 0x1fce90: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1fce90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fce94:
    // 0x1fce94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fce94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fce98:
    // 0x1fce98: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1fce98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fce9c:
    // 0x1fce9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fce9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fcea0:
    // 0x1fcea0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fcea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fcea4:
    // 0x1fcea4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fcea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fcea8:
    // 0x1fcea8: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x1fcea8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fceac:
    // 0x1fceac: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1fceacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fceb0:
    // 0x1fceb0: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x1fceb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1fceb4:
    // 0x1fceb4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1fceb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1fceb8:
    // 0x1fceb8: 0xc0a456c  jal         func_2915B0
label_1fcebc:
    if (ctx->pc == 0x1FCEBCu) {
        ctx->pc = 0x1FCEBCu;
            // 0x1fcebc: 0x26460030  addiu       $a2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x1FCEC0u;
        goto label_1fcec0;
    }
    ctx->pc = 0x1FCEB8u;
    SET_GPR_U32(ctx, 31, 0x1FCEC0u);
    ctx->pc = 0x1FCEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCEB8u;
            // 0x1fcebc: 0x26460030  addiu       $a2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2915B0u;
    if (runtime->hasFunction(0x2915B0u)) {
        auto targetFn = runtime->lookupFunction(0x2915B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCEC0u; }
        if (ctx->pc != 0x1FCEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002915B0_0x2915b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCEC0u; }
        if (ctx->pc != 0x1FCEC0u) { return; }
    }
    ctx->pc = 0x1FCEC0u;
label_1fcec0:
    // 0x1fcec0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1fcec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1fcec4:
    // 0x1fcec4: 0xafb4006c  sw          $s4, 0x6C($sp)
    ctx->pc = 0x1fcec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 20));
label_1fcec8:
    // 0x1fcec8: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1fcec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_1fcecc:
    // 0x1fcecc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1fceccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fced0:
    // 0x1fced0: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1fced0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1fced4:
    // 0x1fced4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1fced4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1fced8:
    // 0x1fced8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1fced8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1fcedc:
    // 0x1fcedc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fcedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fcee0:
    // 0x1fcee0: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x1fcee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_1fcee4:
    // 0x1fcee4: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x1fcee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
label_1fcee8:
    // 0x1fcee8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1fcee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1fceec:
    // 0x1fceec: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x1fceecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fcef0:
    // 0x1fcef0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1fcef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fcef4:
    // 0x1fcef4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1fcef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1fcef8:
    // 0x1fcef8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1fcef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1fcefc:
    // 0x1fcefc: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1fcefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1fcf00:
    // 0x1fcf00: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fcf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1fcf04:
    // 0x1fcf04: 0x904301a0  lbu         $v1, 0x1A0($v0)
    ctx->pc = 0x1fcf04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 416)));
label_1fcf08:
    // 0x1fcf08: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1fcf08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fcf0c:
    // 0x1fcf0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fcf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fcf10:
    // 0x1fcf10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fcf10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fcf14:
    // 0x1fcf14: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1fcf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1fcf18:
    // 0x1fcf18: 0x8c4209a8  lw          $v0, 0x9A8($v0)
    ctx->pc = 0x1fcf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2472)));
label_1fcf1c:
    // 0x1fcf1c: 0x40f809  jalr        $v0
label_1fcf20:
    if (ctx->pc == 0x1FCF20u) {
        ctx->pc = 0x1FCF20u;
            // 0x1fcf20: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FCF24u;
        goto label_1fcf24;
    }
    ctx->pc = 0x1FCF1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FCF24u);
        ctx->pc = 0x1FCF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCF1Cu;
            // 0x1fcf20: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FCF24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FCF24u; }
            if (ctx->pc != 0x1FCF24u) { return; }
        }
        }
    }
    ctx->pc = 0x1FCF24u;
label_1fcf24:
    // 0x1fcf24: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1fcf24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1fcf28:
    // 0x1fcf28: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fcf28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fcf2c:
    // 0x1fcf2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fcf2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fcf30:
    // 0x1fcf30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fcf30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fcf34:
    // 0x1fcf34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fcf34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fcf38:
    // 0x1fcf38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fcf38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fcf3c:
    // 0x1fcf3c: 0x3e00008  jr          $ra
label_1fcf40:
    if (ctx->pc == 0x1FCF40u) {
        ctx->pc = 0x1FCF40u;
            // 0x1fcf40: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1FCF44u;
        goto label_1fcf44;
    }
    ctx->pc = 0x1FCF3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCF3Cu;
            // 0x1fcf40: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FCF44u;
label_1fcf44:
    // 0x1fcf44: 0x0  nop
    ctx->pc = 0x1fcf44u;
    // NOP
label_1fcf48:
    // 0x1fcf48: 0x0  nop
    ctx->pc = 0x1fcf48u;
    // NOP
label_1fcf4c:
    // 0x1fcf4c: 0x0  nop
    ctx->pc = 0x1fcf4cu;
    // NOP
}
