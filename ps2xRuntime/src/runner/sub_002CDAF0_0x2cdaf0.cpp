#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CDAF0
// Address: 0x2cdaf0 - 0x2cddd0
void sub_002CDAF0_0x2cdaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CDAF0_0x2cdaf0");
#endif

    switch (ctx->pc) {
        case 0x2cdb64u: goto label_2cdb64;
        case 0x2cdb88u: goto label_2cdb88;
        case 0x2cdb98u: goto label_2cdb98;
        case 0x2cdba0u: goto label_2cdba0;
        case 0x2cdbfcu: goto label_2cdbfc;
        case 0x2cdc70u: goto label_2cdc70;
        case 0x2cdc90u: goto label_2cdc90;
        case 0x2cdca8u: goto label_2cdca8;
        case 0x2cdd14u: goto label_2cdd14;
        case 0x2cdd20u: goto label_2cdd20;
        case 0x2cdd7cu: goto label_2cdd7c;
        case 0x2cdda8u: goto label_2cdda8;
        default: break;
    }

    ctx->pc = 0x2cdaf0u;

    // 0x2cdaf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cdaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2cdaf4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cdaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cdaf8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2cdaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2cdafc: 0x2442fed0  addiu       $v0, $v0, -0x130
    ctx->pc = 0x2cdafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966992));
    // 0x2cdb00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cdb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2cdb04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cdb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cdb08: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2cdb08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdb0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cdb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cdb10: 0x26630010  addiu       $v1, $s3, 0x10
    ctx->pc = 0x2cdb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2cdb14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cdb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cdb18: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2cdb18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdb1c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2cdb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2cdb20: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cdb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cdb24: 0x2442feb0  addiu       $v0, $v0, -0x150
    ctx->pc = 0x2cdb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966960));
    // 0x2cdb28: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2cdb28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2cdb2c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2cdb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2cdb30: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cdb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cdb34: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2cdb34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2cdb38: 0x2442fea0  addiu       $v0, $v0, -0x160
    ctx->pc = 0x2cdb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966944));
    // 0x2cdb3c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2cdb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2cdb40: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x2cdb40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x2cdb44: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x2cdb44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x2cdb48: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2cdb48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2cdb4c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2cdb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2cdb50: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2cdb50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2cdb54: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x2cdb54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x2cdb58: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2cdb58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2cdb5c: 0xc0fcbcc  jal         func_3F2F30
    ctx->pc = 0x2CDB5Cu;
    SET_GPR_U32(ctx, 31, 0x2CDB64u);
    ctx->pc = 0x2CDB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDB5Cu;
            // 0x2cdb60: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F2F30u;
    if (runtime->hasFunction(0x3F2F30u)) {
        auto targetFn = runtime->lookupFunction(0x3F2F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDB64u; }
        if (ctx->pc != 0x2CDB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F2F30_0x3f2f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDB64u; }
        if (ctx->pc != 0x2CDB64u) { return; }
    }
    ctx->pc = 0x2CDB64u;
label_2cdb64:
    // 0x2cdb64: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cdb64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2cdb68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cdb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cdb6c: 0x2463fe70  addiu       $v1, $v1, -0x190
    ctx->pc = 0x2cdb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966896));
    // 0x2cdb70: 0x2442fe88  addiu       $v0, $v0, -0x178
    ctx->pc = 0x2cdb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966920));
    // 0x2cdb74: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2cdb74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2cdb78: 0xae620028  sw          $v0, 0x28($s3)
    ctx->pc = 0x2cdb78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
    // 0x2cdb7c: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x2cdb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2cdb80: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2CDB80u;
    SET_GPR_U32(ctx, 31, 0x2CDB88u);
    ctx->pc = 0x2CDB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDB80u;
            // 0x2cdb84: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDB88u; }
        if (ctx->pc != 0x2CDB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDB88u; }
        if (ctx->pc != 0x2CDB88u) { return; }
    }
    ctx->pc = 0x2CDB88u;
label_2cdb88:
    // 0x2cdb88: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2cdb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2cdb8c: 0x26510014  addiu       $s1, $s2, 0x14
    ctx->pc = 0x2cdb8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x2cdb90: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2CDB90u;
    {
        const bool branch_taken_0x2cdb90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDB90u;
            // 0x2cdb94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdb90) {
            ctx->pc = 0x2CDC10u;
            goto label_2cdc10;
        }
    }
    ctx->pc = 0x2CDB98u;
label_2cdb98:
    // 0x2cdb98: 0xc040180  jal         func_100600
    ctx->pc = 0x2CDB98u;
    SET_GPR_U32(ctx, 31, 0x2CDBA0u);
    ctx->pc = 0x2CDB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDB98u;
            // 0x2cdb9c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDBA0u; }
        if (ctx->pc != 0x2CDBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDBA0u; }
        if (ctx->pc != 0x2CDBA0u) { return; }
    }
    ctx->pc = 0x2CDBA0u;
label_2cdba0:
    // 0x2cdba0: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x2cdba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x2cdba4: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x2cdba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2cdba8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x2cdba8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2cdbac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2cdbacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cdbb0: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2cdbb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2cdbb4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2cdbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cdbb8: 0x86230004  lh          $v1, 0x4($s1)
    ctx->pc = 0x2cdbb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2cdbbc: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x2cdbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2cdbc0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2cdbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2cdbc4: 0x86230006  lh          $v1, 0x6($s1)
    ctx->pc = 0x2cdbc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x2cdbc8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x2cdbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2cdbcc: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2cdbccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x2cdbd0: 0x86230008  lh          $v1, 0x8($s1)
    ctx->pc = 0x2cdbd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2cdbd4: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x2cdbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2cdbd8: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x2cdbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x2cdbdc: 0x8623000a  lh          $v1, 0xA($s1)
    ctx->pc = 0x2cdbdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x2cdbe0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x2cdbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2cdbe4: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x2cdbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x2cdbe8: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x2cdbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2cdbec: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2cdbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2cdbf0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cdbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cdbf4: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2CDBF4u;
    SET_GPR_U32(ctx, 31, 0x2CDBFCu);
    ctx->pc = 0x2CDBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDBF4u;
            // 0x2cdbf8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDBFCu; }
        if (ctx->pc != 0x2CDBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDBFCu; }
        if (ctx->pc != 0x2CDBFCu) { return; }
    }
    ctx->pc = 0x2CDBFCu;
label_2cdbfc:
    // 0x2cdbfc: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2cdbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2cdc00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2cdc00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2cdc04: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2cdc04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2cdc08: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2CDC08u;
    {
        const bool branch_taken_0x2cdc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDC08u;
            // 0x2cdc0c: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc08) {
            ctx->pc = 0x2CDB98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cdb98;
        }
    }
    ctx->pc = 0x2CDC10u;
label_2cdc10:
    // 0x2cdc10: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2cdc10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdc14: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2cdc14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cdc18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cdc18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cdc1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cdc1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cdc20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cdc20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cdc24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cdc24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cdc28: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDC28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDC28u;
            // 0x2cdc2c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CDC30u;
    // 0x2cdc30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cdc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cdc34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cdc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cdc38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cdc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cdc3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cdc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cdc40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cdc40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdc44: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2CDC44u;
    {
        const bool branch_taken_0x2cdc44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDC44u;
            // 0x2cdc48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdc44) {
            ctx->pc = 0x2CDCA8u;
            goto label_2cdca8;
        }
    }
    ctx->pc = 0x2CDC4Cu;
    // 0x2cdc4c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cdc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cdc50: 0x2442fea0  addiu       $v0, $v0, -0x160
    ctx->pc = 0x2cdc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966944));
    // 0x2cdc54: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x2cdc54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x2cdc58: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2cdc58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2cdc5c: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CDC5Cu;
    {
        const bool branch_taken_0x2cdc5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdc5c) {
            ctx->pc = 0x2CDC60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDC5Cu;
            // 0x2cdc60: 0x2624000c  addiu       $a0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CDC78u;
            goto label_2cdc78;
        }
    }
    ctx->pc = 0x2CDC64u;
    // 0x2cdc64: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cdc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2cdc68: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x2CDC68u;
    SET_GPR_U32(ctx, 31, 0x2CDC70u);
    ctx->pc = 0x2CDC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDC68u;
            // 0x2cdc6c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDC70u; }
        if (ctx->pc != 0x2CDC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDC70u; }
        if (ctx->pc != 0x2CDC70u) { return; }
    }
    ctx->pc = 0x2CDC70u;
label_2cdc70:
    // 0x2cdc70: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2cdc70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2cdc74: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x2cdc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_2cdc78:
    // 0x2cdc78: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CDC78u;
    {
        const bool branch_taken_0x2cdc78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdc78) {
            ctx->pc = 0x2CDC7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDC78u;
            // 0x2cdc7c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CDC94u;
            goto label_2cdc94;
        }
    }
    ctx->pc = 0x2CDC80u;
    // 0x2cdc80: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDC80u;
    {
        const bool branch_taken_0x2cdc80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdc80) {
            ctx->pc = 0x2CDC90u;
            goto label_2cdc90;
        }
    }
    ctx->pc = 0x2CDC88u;
    // 0x2cdc88: 0xc0b4b3c  jal         func_2D2CF0
    ctx->pc = 0x2CDC88u;
    SET_GPR_U32(ctx, 31, 0x2CDC90u);
    ctx->pc = 0x2CDC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDC88u;
            // 0x2cdc8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2CF0u;
    if (runtime->hasFunction(0x2D2CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2D2CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDC90u; }
        if (ctx->pc != 0x2CDC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2CF0_0x2d2cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDC90u; }
        if (ctx->pc != 0x2CDC90u) { return; }
    }
    ctx->pc = 0x2CDC90u;
label_2cdc90:
    // 0x2cdc90: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2cdc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2cdc94:
    // 0x2cdc94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cdc94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2cdc98: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CDC98u;
    {
        const bool branch_taken_0x2cdc98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cdc98) {
            ctx->pc = 0x2CDC9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDC98u;
            // 0x2cdc9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CDCACu;
            goto label_2cdcac;
        }
    }
    ctx->pc = 0x2CDCA0u;
    // 0x2cdca0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2CDCA0u;
    SET_GPR_U32(ctx, 31, 0x2CDCA8u);
    ctx->pc = 0x2CDCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDCA0u;
            // 0x2cdca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDCA8u; }
        if (ctx->pc != 0x2CDCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDCA8u; }
        if (ctx->pc != 0x2CDCA8u) { return; }
    }
    ctx->pc = 0x2CDCA8u;
label_2cdca8:
    // 0x2cdca8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cdca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cdcac:
    // 0x2cdcac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cdcacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cdcb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cdcb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cdcb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cdcb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cdcb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDCB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDCB8u;
            // 0x2cdcbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CDCC0u;
    // 0x2cdcc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cdcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cdcc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cdcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cdcc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cdcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cdccc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cdcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cdcd0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2cdcd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdcd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cdcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cdcd8: 0x12400033  beqz        $s2, . + 4 + (0x33 << 2)
    ctx->pc = 0x2CDCD8u;
    {
        const bool branch_taken_0x2cdcd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDCD8u;
            // 0x2cdcdc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdcd8) {
            ctx->pc = 0x2CDDA8u;
            goto label_2cdda8;
        }
    }
    ctx->pc = 0x2CDCE0u;
    // 0x2cdce0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cdce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cdce4: 0x2442feb0  addiu       $v0, $v0, -0x150
    ctx->pc = 0x2cdce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966960));
    // 0x2cdce8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2cdce8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2cdcec: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2cdcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2cdcf0: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x2cdcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2cdcf4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2cdcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2cdcf8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2cdcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cdcfc: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x2cdcfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x2cdd00: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2cdd00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2cdd04: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2cdd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2cdd08: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CDD08u;
    {
        const bool branch_taken_0x2cdd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDD08u;
            // 0x2cdd0c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdd08) {
            ctx->pc = 0x2CDD50u;
            goto label_2cdd50;
        }
    }
    ctx->pc = 0x2CDD10u;
    // 0x2cdd10: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x2cdd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_2cdd14:
    // 0x2cdd14: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2cdd14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2cdd18: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2CDD18u;
    SET_GPR_U32(ctx, 31, 0x2CDD20u);
    ctx->pc = 0x2CDD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDD18u;
            // 0x2cdd1c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDD20u; }
        if (ctx->pc != 0x2CDD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDD20u; }
        if (ctx->pc != 0x2CDD20u) { return; }
    }
    ctx->pc = 0x2CDD20u;
label_2cdd20:
    // 0x2cdd20: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x2cdd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2cdd24: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x2cdd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2cdd28: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2cdd28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2cdd2c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2cdd2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cdd30: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2cdd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2cdd34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2cdd34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2cdd38: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2cdd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cdd3c: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x2cdd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
    // 0x2cdd40: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2cdd40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2cdd44: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2cdd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2cdd48: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x2CDD48u;
    {
        const bool branch_taken_0x2cdd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cdd48) {
            ctx->pc = 0x2CDD4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDD48u;
            // 0x2cdd4c: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CDD14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cdd14;
        }
    }
    ctx->pc = 0x2CDD50u;
label_2cdd50:
    // 0x2cdd50: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x2cdd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2cdd54: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CDD54u;
    {
        const bool branch_taken_0x2cdd54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdd54) {
            ctx->pc = 0x2CDD7Cu;
            goto label_2cdd7c;
        }
    }
    ctx->pc = 0x2CDD5Cu;
    // 0x2cdd5c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CDD5Cu;
    {
        const bool branch_taken_0x2cdd5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdd5c) {
            ctx->pc = 0x2CDD7Cu;
            goto label_2cdd7c;
        }
    }
    ctx->pc = 0x2CDD64u;
    // 0x2cdd64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CDD64u;
    {
        const bool branch_taken_0x2cdd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdd64) {
            ctx->pc = 0x2CDD7Cu;
            goto label_2cdd7c;
        }
    }
    ctx->pc = 0x2CDD6Cu;
    // 0x2cdd6c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDD6Cu;
    {
        const bool branch_taken_0x2cdd6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdd6c) {
            ctx->pc = 0x2CDD7Cu;
            goto label_2cdd7c;
        }
    }
    ctx->pc = 0x2CDD74u;
    // 0x2cdd74: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2CDD74u;
    SET_GPR_U32(ctx, 31, 0x2CDD7Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDD7Cu; }
        if (ctx->pc != 0x2CDD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDD7Cu; }
        if (ctx->pc != 0x2CDD7Cu) { return; }
    }
    ctx->pc = 0x2CDD7Cu;
label_2cdd7c:
    // 0x2cdd7c: 0x52400005  beql        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CDD7Cu;
    {
        const bool branch_taken_0x2cdd7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdd7c) {
            ctx->pc = 0x2CDD80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDD7Cu;
            // 0x2cdd80: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CDD94u;
            goto label_2cdd94;
        }
    }
    ctx->pc = 0x2CDD84u;
    // 0x2cdd84: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cdd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cdd88: 0x2442fed0  addiu       $v0, $v0, -0x130
    ctx->pc = 0x2cdd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966992));
    // 0x2cdd8c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2cdd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2cdd90: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2cdd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2cdd94:
    // 0x2cdd94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cdd94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2cdd98: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CDD98u;
    {
        const bool branch_taken_0x2cdd98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cdd98) {
            ctx->pc = 0x2CDD9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDD98u;
            // 0x2cdd9c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CDDACu;
            goto label_2cddac;
        }
    }
    ctx->pc = 0x2CDDA0u;
    // 0x2cdda0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2CDDA0u;
    SET_GPR_U32(ctx, 31, 0x2CDDA8u);
    ctx->pc = 0x2CDDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDDA0u;
            // 0x2cdda4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDDA8u; }
        if (ctx->pc != 0x2CDDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDDA8u; }
        if (ctx->pc != 0x2CDDA8u) { return; }
    }
    ctx->pc = 0x2CDDA8u;
label_2cdda8:
    // 0x2cdda8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2cdda8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cddac:
    // 0x2cddac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cddacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cddb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cddb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cddb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cddb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cddb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cddb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cddbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDDBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDDBCu;
            // 0x2cddc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CDDC4u;
    // 0x2cddc4: 0x0  nop
    ctx->pc = 0x2cddc4u;
    // NOP
    // 0x2cddc8: 0x0  nop
    ctx->pc = 0x2cddc8u;
    // NOP
    // 0x2cddcc: 0x0  nop
    ctx->pc = 0x2cddccu;
    // NOP
}
