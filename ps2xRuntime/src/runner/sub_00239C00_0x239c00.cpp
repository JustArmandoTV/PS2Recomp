#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00239C00
// Address: 0x239c00 - 0x239d10
void sub_00239C00_0x239c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239C00_0x239c00");
#endif

    switch (ctx->pc) {
        case 0x239c00u: goto label_239c00;
        case 0x239c04u: goto label_239c04;
        case 0x239c08u: goto label_239c08;
        case 0x239c0cu: goto label_239c0c;
        case 0x239c10u: goto label_239c10;
        case 0x239c14u: goto label_239c14;
        case 0x239c18u: goto label_239c18;
        case 0x239c1cu: goto label_239c1c;
        case 0x239c20u: goto label_239c20;
        case 0x239c24u: goto label_239c24;
        case 0x239c28u: goto label_239c28;
        case 0x239c2cu: goto label_239c2c;
        case 0x239c30u: goto label_239c30;
        case 0x239c34u: goto label_239c34;
        case 0x239c38u: goto label_239c38;
        case 0x239c3cu: goto label_239c3c;
        case 0x239c40u: goto label_239c40;
        case 0x239c44u: goto label_239c44;
        case 0x239c48u: goto label_239c48;
        case 0x239c4cu: goto label_239c4c;
        case 0x239c50u: goto label_239c50;
        case 0x239c54u: goto label_239c54;
        case 0x239c58u: goto label_239c58;
        case 0x239c5cu: goto label_239c5c;
        case 0x239c60u: goto label_239c60;
        case 0x239c64u: goto label_239c64;
        case 0x239c68u: goto label_239c68;
        case 0x239c6cu: goto label_239c6c;
        case 0x239c70u: goto label_239c70;
        case 0x239c74u: goto label_239c74;
        case 0x239c78u: goto label_239c78;
        case 0x239c7cu: goto label_239c7c;
        case 0x239c80u: goto label_239c80;
        case 0x239c84u: goto label_239c84;
        case 0x239c88u: goto label_239c88;
        case 0x239c8cu: goto label_239c8c;
        case 0x239c90u: goto label_239c90;
        case 0x239c94u: goto label_239c94;
        case 0x239c98u: goto label_239c98;
        case 0x239c9cu: goto label_239c9c;
        case 0x239ca0u: goto label_239ca0;
        case 0x239ca4u: goto label_239ca4;
        case 0x239ca8u: goto label_239ca8;
        case 0x239cacu: goto label_239cac;
        case 0x239cb0u: goto label_239cb0;
        case 0x239cb4u: goto label_239cb4;
        case 0x239cb8u: goto label_239cb8;
        case 0x239cbcu: goto label_239cbc;
        case 0x239cc0u: goto label_239cc0;
        case 0x239cc4u: goto label_239cc4;
        case 0x239cc8u: goto label_239cc8;
        case 0x239cccu: goto label_239ccc;
        case 0x239cd0u: goto label_239cd0;
        case 0x239cd4u: goto label_239cd4;
        case 0x239cd8u: goto label_239cd8;
        case 0x239cdcu: goto label_239cdc;
        case 0x239ce0u: goto label_239ce0;
        case 0x239ce4u: goto label_239ce4;
        case 0x239ce8u: goto label_239ce8;
        case 0x239cecu: goto label_239cec;
        case 0x239cf0u: goto label_239cf0;
        case 0x239cf4u: goto label_239cf4;
        case 0x239cf8u: goto label_239cf8;
        case 0x239cfcu: goto label_239cfc;
        case 0x239d00u: goto label_239d00;
        case 0x239d04u: goto label_239d04;
        case 0x239d08u: goto label_239d08;
        case 0x239d0cu: goto label_239d0c;
        default: break;
    }

    ctx->pc = 0x239c00u;

label_239c00:
    // 0x239c00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x239c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_239c04:
    // 0x239c04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x239c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_239c08:
    // 0x239c08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x239c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_239c0c:
    // 0x239c0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x239c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_239c10:
    // 0x239c10: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x239c10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_239c14:
    // 0x239c14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x239c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_239c18:
    // 0x239c18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x239c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_239c1c:
    // 0x239c1c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x239c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_239c20:
    // 0x239c20: 0x8c830180  lw          $v1, 0x180($a0)
    ctx->pc = 0x239c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
label_239c24:
    // 0x239c24: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x239c24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_239c28:
    // 0x239c28: 0x640000f  bltz        $s2, . + 4 + (0xF << 2)
label_239c2c:
    if (ctx->pc == 0x239C2Cu) {
        ctx->pc = 0x239C2Cu;
            // 0x239c2c: 0x2490017c  addiu       $s0, $a0, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 380));
        ctx->pc = 0x239C30u;
        goto label_239c30;
    }
    ctx->pc = 0x239C28u;
    {
        const bool branch_taken_0x239c28 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x239C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239C28u;
            // 0x239c2c: 0x2490017c  addiu       $s0, $a0, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 380));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239c28) {
            ctx->pc = 0x239C68u;
            goto label_239c68;
        }
    }
    ctx->pc = 0x239C30u;
label_239c30:
    // 0x239c30: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x239c30u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_239c34:
    // 0x239c34: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x239c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239c38:
    // 0x239c38: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x239c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_239c3c:
    // 0x239c3c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x239c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_239c40:
    // 0x239c40: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_239c44:
    if (ctx->pc == 0x239C44u) {
        ctx->pc = 0x239C48u;
        goto label_239c48;
    }
    ctx->pc = 0x239C40u;
    {
        const bool branch_taken_0x239c40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x239c40) {
            ctx->pc = 0x239C58u;
            goto label_239c58;
        }
    }
    ctx->pc = 0x239C48u;
label_239c48:
    // 0x239c48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x239c48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_239c4c:
    // 0x239c4c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x239c4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_239c50:
    // 0x239c50: 0x320f809  jalr        $t9
label_239c54:
    if (ctx->pc == 0x239C54u) {
        ctx->pc = 0x239C54u;
            // 0x239c54: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239C58u;
        goto label_239c58;
    }
    ctx->pc = 0x239C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x239C58u);
        ctx->pc = 0x239C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239C50u;
            // 0x239c54: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x239C58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x239C58u; }
            if (ctx->pc != 0x239C58u) { return; }
        }
        }
    }
    ctx->pc = 0x239C58u;
label_239c58:
    // 0x239c58: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x239c58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_239c5c:
    // 0x239c5c: 0x641fff5  bgez        $s2, . + 4 + (-0xB << 2)
label_239c60:
    if (ctx->pc == 0x239C60u) {
        ctx->pc = 0x239C60u;
            // 0x239c60: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x239C64u;
        goto label_239c64;
    }
    ctx->pc = 0x239C5Cu;
    {
        const bool branch_taken_0x239c5c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x239C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239C5Cu;
            // 0x239c60: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239c5c) {
            ctx->pc = 0x239C34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239c34;
        }
    }
    ctx->pc = 0x239C64u;
label_239c64:
    // 0x239c64: 0x0  nop
    ctx->pc = 0x239c64u;
    // NOP
label_239c68:
    // 0x239c68: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239c6c:
    // 0x239c6c: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x239c6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_239c70:
    // 0x239c70: 0x500001d  bltz        $t0, . + 4 + (0x1D << 2)
label_239c74:
    if (ctx->pc == 0x239C74u) {
        ctx->pc = 0x239C78u;
        goto label_239c78;
    }
    ctx->pc = 0x239C70u;
    {
        const bool branch_taken_0x239c70 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x239c70) {
            ctx->pc = 0x239CE8u;
            goto label_239ce8;
        }
    }
    ctx->pc = 0x239C78u;
label_239c78:
    // 0x239c78: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x239c78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_239c7c:
    // 0x239c7c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x239c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239c80:
    // 0x239c80: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x239c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_239c84:
    // 0x239c84: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x239c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_239c88:
    // 0x239c88: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_239c8c:
    if (ctx->pc == 0x239C8Cu) {
        ctx->pc = 0x239C90u;
        goto label_239c90;
    }
    ctx->pc = 0x239C88u;
    {
        const bool branch_taken_0x239c88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x239c88) {
            ctx->pc = 0x239CD8u;
            goto label_239cd8;
        }
    }
    ctx->pc = 0x239C90u;
label_239c90:
    // 0x239c90: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239c94:
    // 0x239c94: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x239c94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_239c98:
    // 0x239c98: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x239c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_239c9c:
    // 0x239c9c: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x239c9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_239ca0:
    // 0x239ca0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_239ca4:
    if (ctx->pc == 0x239CA4u) {
        ctx->pc = 0x239CA4u;
            // 0x239ca4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x239CA8u;
        goto label_239ca8;
    }
    ctx->pc = 0x239CA0u;
    {
        const bool branch_taken_0x239ca0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x239CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239CA0u;
            // 0x239ca4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ca0) {
            ctx->pc = 0x239CD8u;
            goto label_239cd8;
        }
    }
    ctx->pc = 0x239CA8u;
label_239ca8:
    // 0x239ca8: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x239ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_239cac:
    // 0x239cac: 0x0  nop
    ctx->pc = 0x239cacu;
    // NOP
label_239cb0:
    // 0x239cb0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x239cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239cb4:
    // 0x239cb4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x239cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_239cb8:
    // 0x239cb8: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x239cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_239cbc:
    // 0x239cbc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x239cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_239cc0:
    // 0x239cc0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x239cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_239cc4:
    // 0x239cc4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239cc8:
    // 0x239cc8: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x239cc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_239ccc:
    // 0x239ccc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_239cd0:
    if (ctx->pc == 0x239CD0u) {
        ctx->pc = 0x239CD0u;
            // 0x239cd0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x239CD4u;
        goto label_239cd4;
    }
    ctx->pc = 0x239CCCu;
    {
        const bool branch_taken_0x239ccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x239CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239CCCu;
            // 0x239cd0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ccc) {
            ctx->pc = 0x239CB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239cb0;
        }
    }
    ctx->pc = 0x239CD4u;
label_239cd4:
    // 0x239cd4: 0x0  nop
    ctx->pc = 0x239cd4u;
    // NOP
label_239cd8:
    // 0x239cd8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x239cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_239cdc:
    // 0x239cdc: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_239ce0:
    if (ctx->pc == 0x239CE0u) {
        ctx->pc = 0x239CE0u;
            // 0x239ce0: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x239CE4u;
        goto label_239ce4;
    }
    ctx->pc = 0x239CDCu;
    {
        const bool branch_taken_0x239cdc = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x239CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239CDCu;
            // 0x239ce0: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239cdc) {
            ctx->pc = 0x239C7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239c7c;
        }
    }
    ctx->pc = 0x239CE4u;
label_239ce4:
    // 0x239ce4: 0x0  nop
    ctx->pc = 0x239ce4u;
    // NOP
label_239ce8:
    // 0x239ce8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x239ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_239cec:
    // 0x239cec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x239cecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_239cf0:
    // 0x239cf0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x239cf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_239cf4:
    // 0x239cf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x239cf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_239cf8:
    // 0x239cf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x239cf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_239cfc:
    // 0x239cfc: 0x3e00008  jr          $ra
label_239d00:
    if (ctx->pc == 0x239D00u) {
        ctx->pc = 0x239D00u;
            // 0x239d00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x239D04u;
        goto label_239d04;
    }
    ctx->pc = 0x239CFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239CFCu;
            // 0x239d00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x239D04u;
label_239d04:
    // 0x239d04: 0x0  nop
    ctx->pc = 0x239d04u;
    // NOP
label_239d08:
    // 0x239d08: 0x0  nop
    ctx->pc = 0x239d08u;
    // NOP
label_239d0c:
    // 0x239d0c: 0x0  nop
    ctx->pc = 0x239d0cu;
    // NOP
}
