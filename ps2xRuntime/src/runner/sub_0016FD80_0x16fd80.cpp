#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016FD80
// Address: 0x16fd80 - 0x16fee8
void sub_0016FD80_0x16fd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FD80_0x16fd80");
#endif

    switch (ctx->pc) {
        case 0x16fd80u: goto label_16fd80;
        case 0x16fd84u: goto label_16fd84;
        case 0x16fd88u: goto label_16fd88;
        case 0x16fd8cu: goto label_16fd8c;
        case 0x16fd90u: goto label_16fd90;
        case 0x16fd94u: goto label_16fd94;
        case 0x16fd98u: goto label_16fd98;
        case 0x16fd9cu: goto label_16fd9c;
        case 0x16fda0u: goto label_16fda0;
        case 0x16fda4u: goto label_16fda4;
        case 0x16fda8u: goto label_16fda8;
        case 0x16fdacu: goto label_16fdac;
        case 0x16fdb0u: goto label_16fdb0;
        case 0x16fdb4u: goto label_16fdb4;
        case 0x16fdb8u: goto label_16fdb8;
        case 0x16fdbcu: goto label_16fdbc;
        case 0x16fdc0u: goto label_16fdc0;
        case 0x16fdc4u: goto label_16fdc4;
        case 0x16fdc8u: goto label_16fdc8;
        case 0x16fdccu: goto label_16fdcc;
        case 0x16fdd0u: goto label_16fdd0;
        case 0x16fdd4u: goto label_16fdd4;
        case 0x16fdd8u: goto label_16fdd8;
        case 0x16fddcu: goto label_16fddc;
        case 0x16fde0u: goto label_16fde0;
        case 0x16fde4u: goto label_16fde4;
        case 0x16fde8u: goto label_16fde8;
        case 0x16fdecu: goto label_16fdec;
        case 0x16fdf0u: goto label_16fdf0;
        case 0x16fdf4u: goto label_16fdf4;
        case 0x16fdf8u: goto label_16fdf8;
        case 0x16fdfcu: goto label_16fdfc;
        case 0x16fe00u: goto label_16fe00;
        case 0x16fe04u: goto label_16fe04;
        case 0x16fe08u: goto label_16fe08;
        case 0x16fe0cu: goto label_16fe0c;
        case 0x16fe10u: goto label_16fe10;
        case 0x16fe14u: goto label_16fe14;
        case 0x16fe18u: goto label_16fe18;
        case 0x16fe1cu: goto label_16fe1c;
        case 0x16fe20u: goto label_16fe20;
        case 0x16fe24u: goto label_16fe24;
        case 0x16fe28u: goto label_16fe28;
        case 0x16fe2cu: goto label_16fe2c;
        case 0x16fe30u: goto label_16fe30;
        case 0x16fe34u: goto label_16fe34;
        case 0x16fe38u: goto label_16fe38;
        case 0x16fe3cu: goto label_16fe3c;
        case 0x16fe40u: goto label_16fe40;
        case 0x16fe44u: goto label_16fe44;
        case 0x16fe48u: goto label_16fe48;
        case 0x16fe4cu: goto label_16fe4c;
        case 0x16fe50u: goto label_16fe50;
        case 0x16fe54u: goto label_16fe54;
        case 0x16fe58u: goto label_16fe58;
        case 0x16fe5cu: goto label_16fe5c;
        case 0x16fe60u: goto label_16fe60;
        case 0x16fe64u: goto label_16fe64;
        case 0x16fe68u: goto label_16fe68;
        case 0x16fe6cu: goto label_16fe6c;
        case 0x16fe70u: goto label_16fe70;
        case 0x16fe74u: goto label_16fe74;
        case 0x16fe78u: goto label_16fe78;
        case 0x16fe7cu: goto label_16fe7c;
        case 0x16fe80u: goto label_16fe80;
        case 0x16fe84u: goto label_16fe84;
        case 0x16fe88u: goto label_16fe88;
        case 0x16fe8cu: goto label_16fe8c;
        case 0x16fe90u: goto label_16fe90;
        case 0x16fe94u: goto label_16fe94;
        case 0x16fe98u: goto label_16fe98;
        case 0x16fe9cu: goto label_16fe9c;
        case 0x16fea0u: goto label_16fea0;
        case 0x16fea4u: goto label_16fea4;
        case 0x16fea8u: goto label_16fea8;
        case 0x16feacu: goto label_16feac;
        case 0x16feb0u: goto label_16feb0;
        case 0x16feb4u: goto label_16feb4;
        case 0x16feb8u: goto label_16feb8;
        case 0x16febcu: goto label_16febc;
        case 0x16fec0u: goto label_16fec0;
        case 0x16fec4u: goto label_16fec4;
        case 0x16fec8u: goto label_16fec8;
        case 0x16feccu: goto label_16fecc;
        case 0x16fed0u: goto label_16fed0;
        case 0x16fed4u: goto label_16fed4;
        case 0x16fed8u: goto label_16fed8;
        case 0x16fedcu: goto label_16fedc;
        case 0x16fee0u: goto label_16fee0;
        case 0x16fee4u: goto label_16fee4;
        default: break;
    }

    ctx->pc = 0x16fd80u;

label_16fd80:
    // 0x16fd80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16fd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_16fd84:
    // 0x16fd84: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x16fd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_16fd88:
    // 0x16fd88: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x16fd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_16fd8c:
    // 0x16fd8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16fd8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16fd90:
    // 0x16fd90: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x16fd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_16fd94:
    // 0x16fd94: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16fd94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fd98:
    // 0x16fd98: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x16fd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_16fd9c:
    // 0x16fd9c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x16fd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_16fda0:
    // 0x16fda0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x16fda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_16fda4:
    // 0x16fda4: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x16fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_16fda8:
    // 0x16fda8: 0x82430002  lb          $v1, 0x2($s2)
    ctx->pc = 0x16fda8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_16fdac:
    // 0x16fdac: 0x28840  sll         $s1, $v0, 1
    ctx->pc = 0x16fdacu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_16fdb0:
    // 0x16fdb0: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
label_16fdb4:
    if (ctx->pc == 0x16FDB4u) {
        ctx->pc = 0x16FDB4u;
            // 0x16fdb4: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->pc = 0x16FDB8u;
        goto label_16fdb8;
    }
    ctx->pc = 0x16FDB0u;
    {
        const bool branch_taken_0x16fdb0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x16FDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FDB0u;
            // 0x16fdb4: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fdb0) {
            ctx->pc = 0x16FE1Cu;
            goto label_16fe1c;
        }
    }
    ctx->pc = 0x16FDB8u;
label_16fdb8:
    // 0x16fdb8: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x16fdb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_16fdbc:
    // 0x16fdbc: 0x0  nop
    ctx->pc = 0x16fdbcu;
    // NOP
label_16fdc0:
    // 0x16fdc0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16fdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16fdc4:
    // 0x16fdc4: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x16fdc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_16fdc8:
    // 0x16fdc8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x16fdc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16fdcc:
    // 0x16fdcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16fdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16fdd0:
    // 0x16fdd0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16fdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16fdd4:
    // 0x16fdd4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x16fdd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_16fdd8:
    // 0x16fdd8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x16fdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_16fddc:
    // 0x16fddc: 0x40f809  jalr        $v0
label_16fde0:
    if (ctx->pc == 0x16FDE0u) {
        ctx->pc = 0x16FDE0u;
            // 0x16fde0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x16FDE4u;
        goto label_16fde4;
    }
    ctx->pc = 0x16FDDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16FDE4u);
        ctx->pc = 0x16FDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FDDCu;
            // 0x16fde0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16FDE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16FDE4u; }
            if (ctx->pc != 0x16FDE4u) { return; }
        }
        }
    }
    ctx->pc = 0x16FDE4u;
label_16fde4:
    // 0x16fde4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16fde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16fde8:
    // 0x16fde8: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x16fde8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_16fdec:
    // 0x16fdec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16fdecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16fdf0:
    // 0x16fdf0: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x16fdf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16fdf4:
    // 0x16fdf4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x16fdf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16fdf8:
    // 0x16fdf8: 0x228102a  slt         $v0, $s1, $t0
    ctx->pc = 0x16fdf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_16fdfc:
    // 0x16fdfc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x16fdfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_16fe00:
    // 0x16fe00: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x16fe00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_16fe04:
    // 0x16fe04: 0x60f809  jalr        $v1
label_16fe08:
    if (ctx->pc == 0x16FE08u) {
        ctx->pc = 0x16FE08u;
            // 0x16fe08: 0x102880a  movz        $s1, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 8));
        ctx->pc = 0x16FE0Cu;
        goto label_16fe0c;
    }
    ctx->pc = 0x16FE04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16FE0Cu);
        ctx->pc = 0x16FE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FE04u;
            // 0x16fe08: 0x102880a  movz        $s1, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16FE0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16FE0Cu; }
            if (ctx->pc != 0x16FE0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16FE0Cu;
label_16fe0c:
    // 0x16fe0c: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x16fe0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_16fe10:
    // 0x16fe10: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x16fe10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_16fe14:
    // 0x16fe14: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_16fe18:
    if (ctx->pc == 0x16FE18u) {
        ctx->pc = 0x16FE18u;
            // 0x16fe18: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->pc = 0x16FE1Cu;
        goto label_16fe1c;
    }
    ctx->pc = 0x16FE14u;
    {
        const bool branch_taken_0x16fe14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FE14u;
            // 0x16fe18: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fe14) {
            ctx->pc = 0x16FDC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16fdc0;
        }
    }
    ctx->pc = 0x16FE1Cu;
label_16fe1c:
    // 0x16fe1c: 0x1117c2  srl         $v0, $s1, 31
    ctx->pc = 0x16fe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_16fe20:
    // 0x16fe20: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x16fe20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_16fe24:
    // 0x16fe24: 0x2a043  sra         $s4, $v0, 1
    ctx->pc = 0x16fe24u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 1));
label_16fe28:
    // 0x16fe28: 0x148840  sll         $s1, $s4, 1
    ctx->pc = 0x16fe28u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_16fe2c:
    // 0x16fe2c: 0x1a20001c  blez        $s1, . + 4 + (0x1C << 2)
label_16fe30:
    if (ctx->pc == 0x16FE30u) {
        ctx->pc = 0x16FE30u;
            // 0x16fe30: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x16FE34u;
        goto label_16fe34;
    }
    ctx->pc = 0x16FE2Cu;
    {
        const bool branch_taken_0x16fe2c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x16FE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FE2Cu;
            // 0x16fe30: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fe2c) {
            ctx->pc = 0x16FEA0u;
            goto label_16fea0;
        }
    }
    ctx->pc = 0x16FE34u;
label_16fe34:
    // 0x16fe34: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x16fe34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_16fe38:
    // 0x16fe38: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
label_16fe3c:
    if (ctx->pc == 0x16FE3Cu) {
        ctx->pc = 0x16FE3Cu;
            // 0x16fe3c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16FE40u;
        goto label_16fe40;
    }
    ctx->pc = 0x16FE38u;
    {
        const bool branch_taken_0x16fe38 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x16FE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FE38u;
            // 0x16fe3c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fe38) {
            ctx->pc = 0x16FE90u;
            goto label_16fe90;
        }
    }
    ctx->pc = 0x16FE40u;
label_16fe40:
    // 0x16fe40: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x16fe40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_16fe44:
    // 0x16fe44: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16fe44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16fe48:
    // 0x16fe48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16fe48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16fe4c:
    // 0x16fe4c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x16fe4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16fe50:
    // 0x16fe50: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x16fe50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16fe54:
    // 0x16fe54: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16fe54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16fe58:
    // 0x16fe58: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x16fe58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_16fe5c:
    // 0x16fe5c: 0x40f809  jalr        $v0
label_16fe60:
    if (ctx->pc == 0x16FE60u) {
        ctx->pc = 0x16FE60u;
            // 0x16fe60: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x16FE64u;
        goto label_16fe64;
    }
    ctx->pc = 0x16FE5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16FE64u);
        ctx->pc = 0x16FE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FE5Cu;
            // 0x16fe60: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16FE64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16FE64u; }
            if (ctx->pc != 0x16FE64u) { return; }
        }
        }
    }
    ctx->pc = 0x16FE64u;
label_16fe64:
    // 0x16fe64: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16fe64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16fe68:
    // 0x16fe68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16fe68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16fe6c:
    // 0x16fe6c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x16fe6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16fe70:
    // 0x16fe70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16fe70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16fe74:
    // 0x16fe74: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x16fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_16fe78:
    // 0x16fe78: 0x60f809  jalr        $v1
label_16fe7c:
    if (ctx->pc == 0x16FE7Cu) {
        ctx->pc = 0x16FE7Cu;
            // 0x16fe7c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x16FE80u;
        goto label_16fe80;
    }
    ctx->pc = 0x16FE78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16FE80u);
        ctx->pc = 0x16FE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FE78u;
            // 0x16fe7c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16FE80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16FE80u; }
            if (ctx->pc != 0x16FE80u) { return; }
        }
        }
    }
    ctx->pc = 0x16FE80u;
label_16fe80:
    // 0x16fe80: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x16fe80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_16fe84:
    // 0x16fe84: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x16fe84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_16fe88:
    // 0x16fe88: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
label_16fe8c:
    if (ctx->pc == 0x16FE8Cu) {
        ctx->pc = 0x16FE8Cu;
            // 0x16fe8c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x16FE90u;
        goto label_16fe90;
    }
    ctx->pc = 0x16FE88u;
    {
        const bool branch_taken_0x16fe88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16fe88) {
            ctx->pc = 0x16FE8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16FE88u;
            // 0x16fe8c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16FE48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16fe48;
        }
    }
    ctx->pc = 0x16FE90u;
label_16fe90:
    // 0x16fe90: 0x8e4200a4  lw          $v0, 0xA4($s2)
    ctx->pc = 0x16fe90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_16fe94:
    // 0x16fe94: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x16fe94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_16fe98:
    // 0x16fe98: 0xae4200a4  sw          $v0, 0xA4($s2)
    ctx->pc = 0x16fe98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 2));
label_16fe9c:
    // 0x16fe9c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x16fe9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16fea0:
    // 0x16fea0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x16fea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16fea4:
    // 0x16fea4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x16fea4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16fea8:
    // 0x16fea8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x16fea8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_16feac:
    // 0x16feac: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x16feacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16feb0:
    // 0x16feb0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x16feb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_16feb4:
    // 0x16feb4: 0x3e00008  jr          $ra
label_16feb8:
    if (ctx->pc == 0x16FEB8u) {
        ctx->pc = 0x16FEB8u;
            // 0x16feb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x16FEBCu;
        goto label_16febc;
    }
    ctx->pc = 0x16FEB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FEB4u;
            // 0x16feb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16FEBCu;
label_16febc:
    // 0x16febc: 0x0  nop
    ctx->pc = 0x16febcu;
    // NOP
label_16fec0:
    // 0x16fec0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16fec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_16fec4:
    // 0x16fec4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16fec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_16fec8:
    // 0x16fec8: 0x3c08005e  lui         $t0, 0x5E
    ctx->pc = 0x16fec8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)94 << 16));
label_16fecc:
    // 0x16fecc: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x16feccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_16fed0:
    // 0x16fed0: 0xac442384  sw          $a0, 0x2384($v0)
    ctx->pc = 0x16fed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9092), GPR_U32(ctx, 4));
label_16fed4:
    // 0x16fed4: 0xac652388  sw          $a1, 0x2388($v1)
    ctx->pc = 0x16fed4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9096), GPR_U32(ctx, 5));
label_16fed8:
    // 0x16fed8: 0xad06238c  sw          $a2, 0x238C($t0)
    ctx->pc = 0x16fed8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 9100), GPR_U32(ctx, 6));
label_16fedc:
    // 0x16fedc: 0x3e00008  jr          $ra
label_16fee0:
    if (ctx->pc == 0x16FEE0u) {
        ctx->pc = 0x16FEE0u;
            // 0x16fee0: 0xad272390  sw          $a3, 0x2390($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 9104), GPR_U32(ctx, 7));
        ctx->pc = 0x16FEE4u;
        goto label_16fee4;
    }
    ctx->pc = 0x16FEDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FEDCu;
            // 0x16fee0: 0xad272390  sw          $a3, 0x2390($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 9104), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16FEE4u;
label_16fee4:
    // 0x16fee4: 0x0  nop
    ctx->pc = 0x16fee4u;
    // NOP
}
