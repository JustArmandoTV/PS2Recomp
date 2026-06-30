#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FEB40
// Address: 0x1feb40 - 0x1fec30
void sub_001FEB40_0x1feb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEB40_0x1feb40");
#endif

    switch (ctx->pc) {
        case 0x1feb9cu: goto label_1feb9c;
        case 0x1febc8u: goto label_1febc8;
        default: break;
    }

    ctx->pc = 0x1feb40u;

    // 0x1feb40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1feb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1feb44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1feb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1feb48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1feb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1feb4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1feb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1feb50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1feb50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feb54: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1feb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1feb58: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1feb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1feb5c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FEB5Cu;
    {
        const bool branch_taken_0x1feb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEB5Cu;
            // 0x1feb60: 0x2485002c  addiu       $a1, $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb5c) {
            ctx->pc = 0x1FEB80u;
            goto label_1feb80;
        }
    }
    ctx->pc = 0x1FEB64u;
    // 0x1feb64: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1feb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1feb68: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1feb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1feb6c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1feb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x1feb70: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1feb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1feb74: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1feb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1feb78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FEB78u;
    {
        const bool branch_taken_0x1feb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEB78u;
            // 0x1feb7c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb78) {
            ctx->pc = 0x1FEB84u;
            goto label_1feb84;
        }
    }
    ctx->pc = 0x1FEB80u;
label_1feb80:
    // 0x1feb80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1feb80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1feb84:
    // 0x1feb84: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEB84u;
    {
        const bool branch_taken_0x1feb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1feb84) {
            ctx->pc = 0x1FEB88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEB84u;
            // 0x1feb88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FEB94u;
            goto label_1feb94;
        }
    }
    ctx->pc = 0x1FEB8Cu;
    // 0x1feb8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEB8Cu;
    {
        const bool branch_taken_0x1feb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1feb8c) {
            ctx->pc = 0x1FEB9Cu;
            goto label_1feb9c;
        }
    }
    ctx->pc = 0x1FEB94u;
label_1feb94:
    // 0x1feb94: 0xc0a79c0  jal         func_29E700
    ctx->pc = 0x1FEB94u;
    SET_GPR_U32(ctx, 31, 0x1FEB9Cu);
    ctx->pc = 0x29E700u;
    if (runtime->hasFunction(0x29E700u)) {
        auto targetFn = runtime->lookupFunction(0x29E700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEB9Cu; }
        if (ctx->pc != 0x1FEB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E700_0x29e700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEB9Cu; }
        if (ctx->pc != 0x1FEB9Cu) { return; }
    }
    ctx->pc = 0x1FEB9Cu;
label_1feb9c:
    // 0x1feb9c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FEB9Cu;
    {
        const bool branch_taken_0x1feb9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1feb9c) {
            ctx->pc = 0x1FEBA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEB9Cu;
            // 0x1feba0: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FEBC0u;
            goto label_1febc0;
        }
    }
    ctx->pc = 0x1FEBA4u;
    // 0x1feba4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1feba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1feba8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1feba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1febac: 0x2484e010  addiu       $a0, $a0, -0x1FF0
    ctx->pc = 0x1febacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959120));
    // 0x1febb0: 0x2463dff0  addiu       $v1, $v1, -0x2010
    ctx->pc = 0x1febb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959088));
    // 0x1febb4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1febb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1febb8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1febb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1febbc: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x1febbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
label_1febc0:
    // 0x1febc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1febc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1febc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1febc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1febc8:
    // 0x1febc8: 0x8e030100  lw          $v1, 0x100($s0)
    ctx->pc = 0x1febc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1febcc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1febccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1febd0: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x1febd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1febd4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1febd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1febd8: 0x8e030100  lw          $v1, 0x100($s0)
    ctx->pc = 0x1febd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1febdc: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1febdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1febe0: 0x8e030100  lw          $v1, 0x100($s0)
    ctx->pc = 0x1febe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1febe4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1febe4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1febe8: 0x8e030100  lw          $v1, 0x100($s0)
    ctx->pc = 0x1febe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1febec: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1febecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1febf0: 0x8e030100  lw          $v1, 0x100($s0)
    ctx->pc = 0x1febf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1febf4: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x1febf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x1febf8: 0x8e030100  lw          $v1, 0x100($s0)
    ctx->pc = 0x1febf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1febfc: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1febfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1fec00: 0x8e030100  lw          $v1, 0x100($s0)
    ctx->pc = 0x1fec00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1fec04: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1fec04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x1fec08: 0x8e030100  lw          $v1, 0x100($s0)
    ctx->pc = 0x1fec08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1fec0c: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x1fec0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x1fec10: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1FEC10u;
    {
        const bool branch_taken_0x1fec10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEC10u;
            // 0x1fec14: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec10) {
            ctx->pc = 0x1FEBC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1febc8;
        }
    }
    ctx->pc = 0x1FEC18u;
    // 0x1fec18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fec18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fec1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fec1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fec20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fec20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fec24: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEC24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEC24u;
            // 0x1fec28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEC2Cu;
    // 0x1fec2c: 0x0  nop
    ctx->pc = 0x1fec2cu;
    // NOP
}
