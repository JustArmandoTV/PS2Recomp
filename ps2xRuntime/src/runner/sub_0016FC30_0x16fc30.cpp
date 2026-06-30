#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016FC30
// Address: 0x16fc30 - 0x16fd80
void sub_0016FC30_0x16fc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FC30_0x16fc30");
#endif

    switch (ctx->pc) {
        case 0x16fc30u: goto label_16fc30;
        case 0x16fc34u: goto label_16fc34;
        case 0x16fc38u: goto label_16fc38;
        case 0x16fc3cu: goto label_16fc3c;
        case 0x16fc40u: goto label_16fc40;
        case 0x16fc44u: goto label_16fc44;
        case 0x16fc48u: goto label_16fc48;
        case 0x16fc4cu: goto label_16fc4c;
        case 0x16fc50u: goto label_16fc50;
        case 0x16fc54u: goto label_16fc54;
        case 0x16fc58u: goto label_16fc58;
        case 0x16fc5cu: goto label_16fc5c;
        case 0x16fc60u: goto label_16fc60;
        case 0x16fc64u: goto label_16fc64;
        case 0x16fc68u: goto label_16fc68;
        case 0x16fc6cu: goto label_16fc6c;
        case 0x16fc70u: goto label_16fc70;
        case 0x16fc74u: goto label_16fc74;
        case 0x16fc78u: goto label_16fc78;
        case 0x16fc7cu: goto label_16fc7c;
        case 0x16fc80u: goto label_16fc80;
        case 0x16fc84u: goto label_16fc84;
        case 0x16fc88u: goto label_16fc88;
        case 0x16fc8cu: goto label_16fc8c;
        case 0x16fc90u: goto label_16fc90;
        case 0x16fc94u: goto label_16fc94;
        case 0x16fc98u: goto label_16fc98;
        case 0x16fc9cu: goto label_16fc9c;
        case 0x16fca0u: goto label_16fca0;
        case 0x16fca4u: goto label_16fca4;
        case 0x16fca8u: goto label_16fca8;
        case 0x16fcacu: goto label_16fcac;
        case 0x16fcb0u: goto label_16fcb0;
        case 0x16fcb4u: goto label_16fcb4;
        case 0x16fcb8u: goto label_16fcb8;
        case 0x16fcbcu: goto label_16fcbc;
        case 0x16fcc0u: goto label_16fcc0;
        case 0x16fcc4u: goto label_16fcc4;
        case 0x16fcc8u: goto label_16fcc8;
        case 0x16fcccu: goto label_16fccc;
        case 0x16fcd0u: goto label_16fcd0;
        case 0x16fcd4u: goto label_16fcd4;
        case 0x16fcd8u: goto label_16fcd8;
        case 0x16fcdcu: goto label_16fcdc;
        case 0x16fce0u: goto label_16fce0;
        case 0x16fce4u: goto label_16fce4;
        case 0x16fce8u: goto label_16fce8;
        case 0x16fcecu: goto label_16fcec;
        case 0x16fcf0u: goto label_16fcf0;
        case 0x16fcf4u: goto label_16fcf4;
        case 0x16fcf8u: goto label_16fcf8;
        case 0x16fcfcu: goto label_16fcfc;
        case 0x16fd00u: goto label_16fd00;
        case 0x16fd04u: goto label_16fd04;
        case 0x16fd08u: goto label_16fd08;
        case 0x16fd0cu: goto label_16fd0c;
        case 0x16fd10u: goto label_16fd10;
        case 0x16fd14u: goto label_16fd14;
        case 0x16fd18u: goto label_16fd18;
        case 0x16fd1cu: goto label_16fd1c;
        case 0x16fd20u: goto label_16fd20;
        case 0x16fd24u: goto label_16fd24;
        case 0x16fd28u: goto label_16fd28;
        case 0x16fd2cu: goto label_16fd2c;
        case 0x16fd30u: goto label_16fd30;
        case 0x16fd34u: goto label_16fd34;
        case 0x16fd38u: goto label_16fd38;
        case 0x16fd3cu: goto label_16fd3c;
        case 0x16fd40u: goto label_16fd40;
        case 0x16fd44u: goto label_16fd44;
        case 0x16fd48u: goto label_16fd48;
        case 0x16fd4cu: goto label_16fd4c;
        case 0x16fd50u: goto label_16fd50;
        case 0x16fd54u: goto label_16fd54;
        case 0x16fd58u: goto label_16fd58;
        case 0x16fd5cu: goto label_16fd5c;
        case 0x16fd60u: goto label_16fd60;
        case 0x16fd64u: goto label_16fd64;
        case 0x16fd68u: goto label_16fd68;
        case 0x16fd6cu: goto label_16fd6c;
        case 0x16fd70u: goto label_16fd70;
        case 0x16fd74u: goto label_16fd74;
        case 0x16fd78u: goto label_16fd78;
        case 0x16fd7cu: goto label_16fd7c;
        default: break;
    }

    ctx->pc = 0x16fc30u;

label_16fc30:
    // 0x16fc30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16fc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_16fc34:
    // 0x16fc34: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x16fc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_16fc38:
    // 0x16fc38: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x16fc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_16fc3c:
    // 0x16fc3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16fc3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16fc40:
    // 0x16fc40: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x16fc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_16fc44:
    // 0x16fc44: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16fc44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fc48:
    // 0x16fc48: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x16fc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_16fc4c:
    // 0x16fc4c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x16fc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_16fc50:
    // 0x16fc50: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x16fc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_16fc54:
    // 0x16fc54: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x16fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_16fc58:
    // 0x16fc58: 0x82430002  lb          $v1, 0x2($s2)
    ctx->pc = 0x16fc58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_16fc5c:
    // 0x16fc5c: 0x28840  sll         $s1, $v0, 1
    ctx->pc = 0x16fc5cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_16fc60:
    // 0x16fc60: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
label_16fc64:
    if (ctx->pc == 0x16FC64u) {
        ctx->pc = 0x16FC64u;
            // 0x16fc64: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->pc = 0x16FC68u;
        goto label_16fc68;
    }
    ctx->pc = 0x16FC60u;
    {
        const bool branch_taken_0x16fc60 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x16FC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FC60u;
            // 0x16fc64: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fc60) {
            ctx->pc = 0x16FCCCu;
            goto label_16fccc;
        }
    }
    ctx->pc = 0x16FC68u;
label_16fc68:
    // 0x16fc68: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x16fc68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_16fc6c:
    // 0x16fc6c: 0x0  nop
    ctx->pc = 0x16fc6cu;
    // NOP
label_16fc70:
    // 0x16fc70: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16fc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16fc74:
    // 0x16fc74: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x16fc74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_16fc78:
    // 0x16fc78: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x16fc78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16fc7c:
    // 0x16fc7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16fc7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fc80:
    // 0x16fc80: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16fc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16fc84:
    // 0x16fc84: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x16fc84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_16fc88:
    // 0x16fc88: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x16fc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_16fc8c:
    // 0x16fc8c: 0x40f809  jalr        $v0
label_16fc90:
    if (ctx->pc == 0x16FC90u) {
        ctx->pc = 0x16FC90u;
            // 0x16fc90: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x16FC94u;
        goto label_16fc94;
    }
    ctx->pc = 0x16FC8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16FC94u);
        ctx->pc = 0x16FC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FC8Cu;
            // 0x16fc90: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16FC94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16FC94u; }
            if (ctx->pc != 0x16FC94u) { return; }
        }
        }
    }
    ctx->pc = 0x16FC94u;
label_16fc94:
    // 0x16fc94: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16fc94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16fc98:
    // 0x16fc98: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x16fc98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_16fc9c:
    // 0x16fc9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16fc9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fca0:
    // 0x16fca0: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x16fca0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16fca4:
    // 0x16fca4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x16fca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16fca8:
    // 0x16fca8: 0x228102a  slt         $v0, $s1, $t0
    ctx->pc = 0x16fca8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_16fcac:
    // 0x16fcac: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x16fcacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_16fcb0:
    // 0x16fcb0: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x16fcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_16fcb4:
    // 0x16fcb4: 0x60f809  jalr        $v1
label_16fcb8:
    if (ctx->pc == 0x16FCB8u) {
        ctx->pc = 0x16FCB8u;
            // 0x16fcb8: 0x102880a  movz        $s1, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 8));
        ctx->pc = 0x16FCBCu;
        goto label_16fcbc;
    }
    ctx->pc = 0x16FCB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16FCBCu);
        ctx->pc = 0x16FCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FCB4u;
            // 0x16fcb8: 0x102880a  movz        $s1, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16FCBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16FCBCu; }
            if (ctx->pc != 0x16FCBCu) { return; }
        }
        }
    }
    ctx->pc = 0x16FCBCu;
label_16fcbc:
    // 0x16fcbc: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x16fcbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_16fcc0:
    // 0x16fcc0: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x16fcc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_16fcc4:
    // 0x16fcc4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_16fcc8:
    if (ctx->pc == 0x16FCC8u) {
        ctx->pc = 0x16FCC8u;
            // 0x16fcc8: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->pc = 0x16FCCCu;
        goto label_16fccc;
    }
    ctx->pc = 0x16FCC4u;
    {
        const bool branch_taken_0x16fcc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FCC4u;
            // 0x16fcc8: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fcc4) {
            ctx->pc = 0x16FC70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16fc70;
        }
    }
    ctx->pc = 0x16FCCCu;
label_16fccc:
    // 0x16fccc: 0x1117c2  srl         $v0, $s1, 31
    ctx->pc = 0x16fcccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_16fcd0:
    // 0x16fcd0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x16fcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_16fcd4:
    // 0x16fcd4: 0x2a043  sra         $s4, $v0, 1
    ctx->pc = 0x16fcd4u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 1));
label_16fcd8:
    // 0x16fcd8: 0x148840  sll         $s1, $s4, 1
    ctx->pc = 0x16fcd8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_16fcdc:
    // 0x16fcdc: 0x1a200020  blez        $s1, . + 4 + (0x20 << 2)
label_16fce0:
    if (ctx->pc == 0x16FCE0u) {
        ctx->pc = 0x16FCE0u;
            // 0x16fce0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x16FCE4u;
        goto label_16fce4;
    }
    ctx->pc = 0x16FCDCu;
    {
        const bool branch_taken_0x16fcdc = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x16FCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FCDCu;
            // 0x16fce0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fcdc) {
            ctx->pc = 0x16FD60u;
            goto label_16fd60;
        }
    }
    ctx->pc = 0x16FCE4u;
label_16fce4:
    // 0x16fce4: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x16fce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_16fce8:
    // 0x16fce8: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
label_16fcec:
    if (ctx->pc == 0x16FCECu) {
        ctx->pc = 0x16FCECu;
            // 0x16fcec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16FCF0u;
        goto label_16fcf0;
    }
    ctx->pc = 0x16FCE8u;
    {
        const bool branch_taken_0x16fce8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16FCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FCE8u;
            // 0x16fcec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fce8) {
            ctx->pc = 0x16FD50u;
            goto label_16fd50;
        }
    }
    ctx->pc = 0x16FCF0u;
label_16fcf0:
    // 0x16fcf0: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x16fcf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_16fcf4:
    // 0x16fcf4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16fcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16fcf8:
    // 0x16fcf8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x16fcf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16fcfc:
    // 0x16fcfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16fcfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fd00:
    // 0x16fd00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x16fd00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16fd04:
    // 0x16fd04: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16fd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16fd08:
    // 0x16fd08: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x16fd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_16fd0c:
    // 0x16fd0c: 0x40f809  jalr        $v0
label_16fd10:
    if (ctx->pc == 0x16FD10u) {
        ctx->pc = 0x16FD10u;
            // 0x16fd10: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x16FD14u;
        goto label_16fd14;
    }
    ctx->pc = 0x16FD0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16FD14u);
        ctx->pc = 0x16FD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FD0Cu;
            // 0x16fd10: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16FD14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16FD14u; }
            if (ctx->pc != 0x16FD14u) { return; }
        }
        }
    }
    ctx->pc = 0x16FD14u;
label_16fd14:
    // 0x16fd14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16fd14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fd18:
    // 0x16fd18: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x16fd18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16fd1c:
    // 0x16fd1c: 0xc04a576  jal         func_1295D8
label_16fd20:
    if (ctx->pc == 0x16FD20u) {
        ctx->pc = 0x16FD20u;
            // 0x16fd20: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16FD24u;
        goto label_16fd24;
    }
    ctx->pc = 0x16FD1Cu;
    SET_GPR_U32(ctx, 31, 0x16FD24u);
    ctx->pc = 0x16FD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FD1Cu;
            // 0x16fd20: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FD24u; }
        if (ctx->pc != 0x16FD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FD24u; }
        if (ctx->pc != 0x16FD24u) { return; }
    }
    ctx->pc = 0x16FD24u;
label_16fd24:
    // 0x16fd24: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16fd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16fd28:
    // 0x16fd28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16fd28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16fd2c:
    // 0x16fd2c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x16fd2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16fd30:
    // 0x16fd30: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16fd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16fd34:
    // 0x16fd34: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x16fd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_16fd38:
    // 0x16fd38: 0x60f809  jalr        $v1
label_16fd3c:
    if (ctx->pc == 0x16FD3Cu) {
        ctx->pc = 0x16FD3Cu;
            // 0x16fd3c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x16FD40u;
        goto label_16fd40;
    }
    ctx->pc = 0x16FD38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16FD40u);
        ctx->pc = 0x16FD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FD38u;
            // 0x16fd3c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16FD40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16FD40u; }
            if (ctx->pc != 0x16FD40u) { return; }
        }
        }
    }
    ctx->pc = 0x16FD40u;
label_16fd40:
    // 0x16fd40: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x16fd40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_16fd44:
    // 0x16fd44: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x16fd44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_16fd48:
    // 0x16fd48: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
label_16fd4c:
    if (ctx->pc == 0x16FD4Cu) {
        ctx->pc = 0x16FD4Cu;
            // 0x16fd4c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x16FD50u;
        goto label_16fd50;
    }
    ctx->pc = 0x16FD48u;
    {
        const bool branch_taken_0x16fd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16fd48) {
            ctx->pc = 0x16FD4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16FD48u;
            // 0x16fd4c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16FCF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16fcf8;
        }
    }
    ctx->pc = 0x16FD50u;
label_16fd50:
    // 0x16fd50: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x16fd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_16fd54:
    // 0x16fd54: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x16fd54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_16fd58:
    // 0x16fd58: 0xae4200a0  sw          $v0, 0xA0($s2)
    ctx->pc = 0x16fd58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
label_16fd5c:
    // 0x16fd5c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x16fd5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16fd60:
    // 0x16fd60: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x16fd60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16fd64:
    // 0x16fd64: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x16fd64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16fd68:
    // 0x16fd68: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x16fd68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_16fd6c:
    // 0x16fd6c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x16fd6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16fd70:
    // 0x16fd70: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x16fd70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_16fd74:
    // 0x16fd74: 0x3e00008  jr          $ra
label_16fd78:
    if (ctx->pc == 0x16FD78u) {
        ctx->pc = 0x16FD78u;
            // 0x16fd78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x16FD7Cu;
        goto label_16fd7c;
    }
    ctx->pc = 0x16FD74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FD74u;
            // 0x16fd78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16FD7Cu;
label_16fd7c:
    // 0x16fd7c: 0x0  nop
    ctx->pc = 0x16fd7cu;
    // NOP
}
