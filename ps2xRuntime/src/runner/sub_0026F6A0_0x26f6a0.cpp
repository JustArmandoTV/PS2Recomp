#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026F6A0
// Address: 0x26f6a0 - 0x26fb00
void sub_0026F6A0_0x26f6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F6A0_0x26f6a0");
#endif

    switch (ctx->pc) {
        case 0x26f708u: goto label_26f708;
        case 0x26f74cu: goto label_26f74c;
        case 0x26f7a4u: goto label_26f7a4;
        case 0x26f7ecu: goto label_26f7ec;
        case 0x26f834u: goto label_26f834;
        case 0x26f890u: goto label_26f890;
        case 0x26f8d8u: goto label_26f8d8;
        case 0x26f924u: goto label_26f924;
        case 0x26f96cu: goto label_26f96c;
        case 0x26f9b4u: goto label_26f9b4;
        case 0x26fa00u: goto label_26fa00;
        case 0x26fa4cu: goto label_26fa4c;
        case 0x26fa9cu: goto label_26fa9c;
        case 0x26fae4u: goto label_26fae4;
        default: break;
    }

    ctx->pc = 0x26f6a0u;

    // 0x26f6a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26f6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26f6a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26f6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26f6a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26f6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26f6ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26f6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26f6b0: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x26f6b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26f6b4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x26f6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f6b8: 0xc58823  subu        $s1, $a2, $a1
    ctx->pc = 0x26f6b8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x26f6bc: 0x1a20010a  blez        $s1, . + 4 + (0x10A << 2)
    ctx->pc = 0x26F6BCu;
    {
        const bool branch_taken_0x26f6bc = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x26F6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F6BCu;
            // 0x26f6c0: 0x2a2100ff  slti        $at, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)255) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f6bc) {
            ctx->pc = 0x26FAE8u;
            goto label_26fae8;
        }
    }
    ctx->pc = 0x26F6C4u;
    // 0x26f6c4: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x26F6C4u;
    {
        const bool branch_taken_0x26f6c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f6c4) {
            ctx->pc = 0x26F758u;
            goto label_26f758;
        }
    }
    ctx->pc = 0x26F6CCu;
    // 0x26f6cc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26f6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26f6d0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x26f6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26f6d4: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x26f6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x26f6d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26f6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26f6dc: 0xa071ffff  sb          $s1, -0x1($v1)
    ctx->pc = 0x26f6dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 17));
    // 0x26f6e0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26f6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f6e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26f6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26f6e8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26f6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26f6ec: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26f6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f6f0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26f6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26f6f4: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26f6f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26f6f8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F6F8u;
    {
        const bool branch_taken_0x26f6f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F6F8u;
            // 0x26f6fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f6f8) {
            ctx->pc = 0x26F708u;
            goto label_26f708;
        }
    }
    ctx->pc = 0x26F700u;
    // 0x26f700: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26F700u;
    SET_GPR_U32(ctx, 31, 0x26F708u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F708u; }
        if (ctx->pc != 0x26F708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F708u; }
        if (ctx->pc != 0x26F708u) { return; }
    }
    ctx->pc = 0x26F708u;
label_26f708:
    // 0x26f708: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26f708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26f70c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26f70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f710: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x26f710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26f714: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26f714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26f718: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26f718u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26f71c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26f71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26f720: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26f720u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26f724: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26f724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f728: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26f728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26f72c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26f72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26f730: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26f730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f734: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26f734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26f738: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26f738u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26f73c: 0x146000ea  bnez        $v1, . + 4 + (0xEA << 2)
    ctx->pc = 0x26F73Cu;
    {
        const bool branch_taken_0x26f73c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F73Cu;
            // 0x26f740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f73c) {
            ctx->pc = 0x26FAE8u;
            goto label_26fae8;
        }
    }
    ctx->pc = 0x26F744u;
    // 0x26f744: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26F744u;
    SET_GPR_U32(ctx, 31, 0x26F74Cu);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F74Cu; }
        if (ctx->pc != 0x26F74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F74Cu; }
        if (ctx->pc != 0x26F74Cu) { return; }
    }
    ctx->pc = 0x26F74Cu;
label_26f74c:
    // 0x26f74c: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x26F74Cu;
    {
        const bool branch_taken_0x26f74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f74c) {
            ctx->pc = 0x26FAE8u;
            goto label_26fae8;
        }
    }
    ctx->pc = 0x26F754u;
    // 0x26f754: 0x0  nop
    ctx->pc = 0x26f754u;
    // NOP
label_26f758:
    // 0x26f758: 0x3401ffff  ori         $at, $zero, 0xFFFF
    ctx->pc = 0x26f758u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x26f75c: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x26f75cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x26f760: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x26F760u;
    {
        const bool branch_taken_0x26f760 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f760) {
            ctx->pc = 0x26F840u;
            goto label_26f840;
        }
    }
    ctx->pc = 0x26F768u;
    // 0x26f768: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26f768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26f76c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x26f76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26f770: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x26f770u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x26f774: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26f774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26f778: 0xa071ffff  sb          $s1, -0x1($v1)
    ctx->pc = 0x26f778u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 17));
    // 0x26f77c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26f77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f780: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26f780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26f784: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26f784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26f788: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26f788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f78c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26f78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26f790: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26f790u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26f794: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F794u;
    {
        const bool branch_taken_0x26f794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F794u;
            // 0x26f798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f794) {
            ctx->pc = 0x26F7A8u;
            goto label_26f7a8;
        }
    }
    ctx->pc = 0x26F79Cu;
    // 0x26f79c: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26F79Cu;
    SET_GPR_U32(ctx, 31, 0x26F7A4u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F7A4u; }
        if (ctx->pc != 0x26F7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F7A4u; }
        if (ctx->pc != 0x26F7A4u) { return; }
    }
    ctx->pc = 0x26F7A4u;
label_26f7a4:
    // 0x26f7a4: 0x0  nop
    ctx->pc = 0x26f7a4u;
    // NOP
label_26f7a8:
    // 0x26f7a8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26f7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26f7ac: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26f7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f7b0: 0x113203  sra         $a2, $s1, 8
    ctx->pc = 0x26f7b0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 17), 8));
    // 0x26f7b4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26f7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26f7b8: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26f7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26f7bc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26f7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26f7c0: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26f7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26f7c4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26f7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f7c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26f7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26f7cc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26f7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26f7d0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26f7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f7d4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26f7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26f7d8: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26f7d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26f7dc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F7DCu;
    {
        const bool branch_taken_0x26f7dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F7DCu;
            // 0x26f7e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f7dc) {
            ctx->pc = 0x26F7F0u;
            goto label_26f7f0;
        }
    }
    ctx->pc = 0x26F7E4u;
    // 0x26f7e4: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26F7E4u;
    SET_GPR_U32(ctx, 31, 0x26F7ECu);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F7ECu; }
        if (ctx->pc != 0x26F7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F7ECu; }
        if (ctx->pc != 0x26F7ECu) { return; }
    }
    ctx->pc = 0x26F7ECu;
label_26f7ec:
    // 0x26f7ec: 0x0  nop
    ctx->pc = 0x26f7ecu;
    // NOP
label_26f7f0:
    // 0x26f7f0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26f7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26f7f4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26f7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f7f8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x26f7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26f7fc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26f7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26f800: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26f800u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26f804: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26f804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26f808: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26f808u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26f80c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26f80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f810: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26f810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26f814: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26f814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26f818: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26f818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f81c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26f81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26f820: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26f820u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26f824: 0x146000b0  bnez        $v1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x26F824u;
    {
        const bool branch_taken_0x26f824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F824u;
            // 0x26f828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f824) {
            ctx->pc = 0x26FAE8u;
            goto label_26fae8;
        }
    }
    ctx->pc = 0x26F82Cu;
    // 0x26f82c: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26F82Cu;
    SET_GPR_U32(ctx, 31, 0x26F834u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F834u; }
        if (ctx->pc != 0x26F834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F834u; }
        if (ctx->pc != 0x26F834u) { return; }
    }
    ctx->pc = 0x26F834u;
label_26f834:
    // 0x26f834: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x26F834u;
    {
        const bool branch_taken_0x26f834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f834) {
            ctx->pc = 0x26FAE8u;
            goto label_26fae8;
        }
    }
    ctx->pc = 0x26F83Cu;
    // 0x26f83c: 0x0  nop
    ctx->pc = 0x26f83cu;
    // NOP
label_26f840:
    // 0x26f840: 0x3c0100ff  lui         $at, 0xFF
    ctx->pc = 0x26f840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)255 << 16));
    // 0x26f844: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x26f844u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x26f848: 0x221082a  slt         $at, $s1, $at
    ctx->pc = 0x26f848u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x26f84c: 0x1020004a  beqz        $at, . + 4 + (0x4A << 2)
    ctx->pc = 0x26F84Cu;
    {
        const bool branch_taken_0x26f84c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f84c) {
            ctx->pc = 0x26F978u;
            goto label_26f978;
        }
    }
    ctx->pc = 0x26F854u;
    // 0x26f854: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26f854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26f858: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x26f858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26f85c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x26f85cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x26f860: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26f860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26f864: 0xa071ffff  sb          $s1, -0x1($v1)
    ctx->pc = 0x26f864u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 17));
    // 0x26f868: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26f868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f86c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26f86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26f870: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26f870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26f874: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26f874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f878: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26f878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26f87c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26f87cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26f880: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F880u;
    {
        const bool branch_taken_0x26f880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F880u;
            // 0x26f884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f880) {
            ctx->pc = 0x26F890u;
            goto label_26f890;
        }
    }
    ctx->pc = 0x26F888u;
    // 0x26f888: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26F888u;
    SET_GPR_U32(ctx, 31, 0x26F890u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F890u; }
        if (ctx->pc != 0x26F890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F890u; }
        if (ctx->pc != 0x26F890u) { return; }
    }
    ctx->pc = 0x26F890u;
label_26f890:
    // 0x26f890: 0x3223ff00  andi        $v1, $s1, 0xFF00
    ctx->pc = 0x26f890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65280);
    // 0x26f894: 0x33203  sra         $a2, $v1, 8
    ctx->pc = 0x26f894u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 8));
    // 0x26f898: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26f898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26f89c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26f89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f8a0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26f8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26f8a4: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26f8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26f8a8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26f8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26f8ac: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26f8acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26f8b0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26f8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f8b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26f8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26f8b8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26f8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26f8bc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26f8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f8c0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26f8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26f8c4: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26f8c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26f8c8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F8C8u;
    {
        const bool branch_taken_0x26f8c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F8C8u;
            // 0x26f8cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f8c8) {
            ctx->pc = 0x26F8D8u;
            goto label_26f8d8;
        }
    }
    ctx->pc = 0x26F8D0u;
    // 0x26f8d0: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26F8D0u;
    SET_GPR_U32(ctx, 31, 0x26F8D8u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F8D8u; }
        if (ctx->pc != 0x26F8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F8D8u; }
        if (ctx->pc != 0x26F8D8u) { return; }
    }
    ctx->pc = 0x26F8D8u;
label_26f8d8:
    // 0x26f8d8: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x26f8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x26f8dc: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x26f8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x26f8e0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26f8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26f8e4: 0x33403  sra         $a2, $v1, 16
    ctx->pc = 0x26f8e4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 16));
    // 0x26f8e8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26f8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f8ec: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26f8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26f8f0: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26f8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26f8f4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26f8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26f8f8: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26f8f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26f8fc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26f8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f900: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26f900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26f904: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26f904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26f908: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26f908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f90c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26f90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26f910: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26f910u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26f914: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F914u;
    {
        const bool branch_taken_0x26f914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F914u;
            // 0x26f918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f914) {
            ctx->pc = 0x26F928u;
            goto label_26f928;
        }
    }
    ctx->pc = 0x26F91Cu;
    // 0x26f91c: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26F91Cu;
    SET_GPR_U32(ctx, 31, 0x26F924u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F924u; }
        if (ctx->pc != 0x26F924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F924u; }
        if (ctx->pc != 0x26F924u) { return; }
    }
    ctx->pc = 0x26F924u;
label_26f924:
    // 0x26f924: 0x0  nop
    ctx->pc = 0x26f924u;
    // NOP
label_26f928:
    // 0x26f928: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26f928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26f92c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26f92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f930: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x26f930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26f934: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26f934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26f938: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26f938u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26f93c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26f93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26f940: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26f940u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26f944: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26f944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f948: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26f948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26f94c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26f94cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26f950: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26f950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f954: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26f954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26f958: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26f958u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26f95c: 0x14600062  bnez        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x26F95Cu;
    {
        const bool branch_taken_0x26f95c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F95Cu;
            // 0x26f960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f95c) {
            ctx->pc = 0x26FAE8u;
            goto label_26fae8;
        }
    }
    ctx->pc = 0x26F964u;
    // 0x26f964: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26F964u;
    SET_GPR_U32(ctx, 31, 0x26F96Cu);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F96Cu; }
        if (ctx->pc != 0x26F96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F96Cu; }
        if (ctx->pc != 0x26F96Cu) { return; }
    }
    ctx->pc = 0x26F96Cu;
label_26f96c:
    // 0x26f96c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x26F96Cu;
    {
        const bool branch_taken_0x26f96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f96c) {
            ctx->pc = 0x26FAE8u;
            goto label_26fae8;
        }
    }
    ctx->pc = 0x26F974u;
    // 0x26f974: 0x0  nop
    ctx->pc = 0x26f974u;
    // NOP
label_26f978:
    // 0x26f978: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26f978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26f97c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x26f97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26f980: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x26f980u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x26f984: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26f984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26f988: 0xa071ffff  sb          $s1, -0x1($v1)
    ctx->pc = 0x26f988u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 17));
    // 0x26f98c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26f98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f990: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26f990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26f994: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26f994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26f998: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26f998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f99c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26f99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26f9a0: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26f9a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26f9a4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F9A4u;
    {
        const bool branch_taken_0x26f9a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F9A4u;
            // 0x26f9a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f9a4) {
            ctx->pc = 0x26F9B8u;
            goto label_26f9b8;
        }
    }
    ctx->pc = 0x26F9ACu;
    // 0x26f9ac: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26F9ACu;
    SET_GPR_U32(ctx, 31, 0x26F9B4u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F9B4u; }
        if (ctx->pc != 0x26F9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F9B4u; }
        if (ctx->pc != 0x26F9B4u) { return; }
    }
    ctx->pc = 0x26F9B4u;
label_26f9b4:
    // 0x26f9b4: 0x0  nop
    ctx->pc = 0x26f9b4u;
    // NOP
label_26f9b8:
    // 0x26f9b8: 0x3223ff00  andi        $v1, $s1, 0xFF00
    ctx->pc = 0x26f9b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65280);
    // 0x26f9bc: 0x33202  srl         $a2, $v1, 8
    ctx->pc = 0x26f9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x26f9c0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26f9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26f9c4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26f9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f9c8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26f9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26f9cc: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26f9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26f9d0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26f9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26f9d4: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26f9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26f9d8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26f9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f9dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26f9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26f9e0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26f9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26f9e4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26f9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26f9e8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26f9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26f9ec: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26f9ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26f9f0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F9F0u;
    {
        const bool branch_taken_0x26f9f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F9F0u;
            // 0x26f9f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f9f0) {
            ctx->pc = 0x26FA00u;
            goto label_26fa00;
        }
    }
    ctx->pc = 0x26F9F8u;
    // 0x26f9f8: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26F9F8u;
    SET_GPR_U32(ctx, 31, 0x26FA00u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FA00u; }
        if (ctx->pc != 0x26FA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FA00u; }
        if (ctx->pc != 0x26FA00u) { return; }
    }
    ctx->pc = 0x26FA00u;
label_26fa00:
    // 0x26fa00: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x26fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x26fa04: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x26fa04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x26fa08: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26fa08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26fa0c: 0x33402  srl         $a2, $v1, 16
    ctx->pc = 0x26fa0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x26fa10: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26fa10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26fa14: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26fa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26fa18: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26fa18u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26fa1c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26fa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26fa20: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26fa20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26fa24: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26fa24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26fa28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26fa28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26fa2c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26fa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26fa30: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26fa30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26fa34: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26fa34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26fa38: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26fa38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26fa3c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26FA3Cu;
    {
        const bool branch_taken_0x26fa3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FA3Cu;
            // 0x26fa40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa3c) {
            ctx->pc = 0x26FA50u;
            goto label_26fa50;
        }
    }
    ctx->pc = 0x26FA44u;
    // 0x26fa44: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26FA44u;
    SET_GPR_U32(ctx, 31, 0x26FA4Cu);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FA4Cu; }
        if (ctx->pc != 0x26FA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FA4Cu; }
        if (ctx->pc != 0x26FA4Cu) { return; }
    }
    ctx->pc = 0x26FA4Cu;
label_26fa4c:
    // 0x26fa4c: 0x0  nop
    ctx->pc = 0x26fa4cu;
    // NOP
label_26fa50:
    // 0x26fa50: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x26fa50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x26fa54: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x26fa54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x26fa58: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26fa58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26fa5c: 0x33602  srl         $a2, $v1, 24
    ctx->pc = 0x26fa5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x26fa60: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26fa60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26fa64: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26fa64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26fa68: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26fa68u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26fa6c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26fa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26fa70: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26fa70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26fa74: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26fa74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26fa78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26fa78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26fa7c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26fa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26fa80: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26fa80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26fa84: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26fa84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26fa88: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26fa88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26fa8c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26FA8Cu;
    {
        const bool branch_taken_0x26fa8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FA8Cu;
            // 0x26fa90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa8c) {
            ctx->pc = 0x26FAA0u;
            goto label_26faa0;
        }
    }
    ctx->pc = 0x26FA94u;
    // 0x26fa94: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26FA94u;
    SET_GPR_U32(ctx, 31, 0x26FA9Cu);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FA9Cu; }
        if (ctx->pc != 0x26FA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FA9Cu; }
        if (ctx->pc != 0x26FA9Cu) { return; }
    }
    ctx->pc = 0x26FA9Cu;
label_26fa9c:
    // 0x26fa9c: 0x0  nop
    ctx->pc = 0x26fa9cu;
    // NOP
label_26faa0:
    // 0x26faa0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x26faa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26faa4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26faa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26faa8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x26faa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x26faac: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x26faacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26fab0: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x26fab0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26fab4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x26fab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x26fab8: 0xa066ffff  sb          $a2, -0x1($v1)
    ctx->pc = 0x26fab8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 6));
    // 0x26fabc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x26fabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26fac0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26fac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26fac4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x26fac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x26fac8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x26fac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x26facc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x26faccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x26fad0: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x26fad0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26fad4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26FAD4u;
    {
        const bool branch_taken_0x26fad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FAD4u;
            // 0x26fad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fad4) {
            ctx->pc = 0x26FAE8u;
            goto label_26fae8;
        }
    }
    ctx->pc = 0x26FADCu;
    // 0x26fadc: 0xc09a8b0  jal         func_26A2C0
    ctx->pc = 0x26FADCu;
    SET_GPR_U32(ctx, 31, 0x26FAE4u);
    ctx->pc = 0x26A2C0u;
    if (runtime->hasFunction(0x26A2C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FAE4u; }
        if (ctx->pc != 0x26FAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A2C0_0x26a2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FAE4u; }
        if (ctx->pc != 0x26FAE4u) { return; }
    }
    ctx->pc = 0x26FAE4u;
label_26fae4:
    // 0x26fae4: 0x0  nop
    ctx->pc = 0x26fae4u;
    // NOP
label_26fae8:
    // 0x26fae8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26fae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26faec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26faecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26faf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26faf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26faf4: 0x3e00008  jr          $ra
    ctx->pc = 0x26FAF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FAF4u;
            // 0x26faf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26FAFCu;
    // 0x26fafc: 0x0  nop
    ctx->pc = 0x26fafcu;
    // NOP
}
