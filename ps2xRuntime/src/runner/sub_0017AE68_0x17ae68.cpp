#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017AE68
// Address: 0x17ae68 - 0x17b038
void sub_0017AE68_0x17ae68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AE68_0x17ae68");
#endif

    switch (ctx->pc) {
        case 0x17aec0u: goto label_17aec0;
        case 0x17af00u: goto label_17af00;
        case 0x17af14u: goto label_17af14;
        case 0x17af20u: goto label_17af20;
        case 0x17af40u: goto label_17af40;
        case 0x17af50u: goto label_17af50;
        case 0x17af5cu: goto label_17af5c;
        case 0x17afbcu: goto label_17afbc;
        case 0x17afccu: goto label_17afcc;
        case 0x17afdcu: goto label_17afdc;
        case 0x17aff8u: goto label_17aff8;
        default: break;
    }

    ctx->pc = 0x17ae68u;

    // 0x17ae68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17ae68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17ae6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17ae6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ae70: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x17ae70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17ae74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17ae74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ae78: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17ae78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17ae7c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17ae7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17ae80: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17ae84: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x17AE84u;
    {
        const bool branch_taken_0x17ae84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x17AE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AE84u;
            // 0x17ae88: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ae84) {
            ctx->pc = 0x17AEE4u;
            goto label_17aee4;
        }
    }
    ctx->pc = 0x17AE8Cu;
    // 0x17ae8c: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x17ae8cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x17ae90: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x17ae90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x17ae94: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x17AE94u;
    {
        const bool branch_taken_0x17ae94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ae94) {
            ctx->pc = 0x17AE98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17AE94u;
            // 0x17ae98: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17AEE4u;
            goto label_17aee4;
        }
    }
    ctx->pc = 0x17AE9Cu;
    // 0x17ae9c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x17ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17aea0: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x17aea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x17aea4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17aea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17aea8: 0x8c635970  lw          $v1, 0x5970($v1)
    ctx->pc = 0x17aea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22896)));
    // 0x17aeac: 0x600008  jr          $v1
    ctx->pc = 0x17AEACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17AEB8u: goto label_17aeb8;
            case 0x17AED8u: goto label_17aed8;
            case 0x17AEE0u: goto label_17aee0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17AEB4u;
    // 0x17aeb4: 0x0  nop
    ctx->pc = 0x17aeb4u;
    // NOP
label_17aeb8:
    // 0x17aeb8: 0xc05ea04  jal         func_17A810
    ctx->pc = 0x17AEB8u;
    SET_GPR_U32(ctx, 31, 0x17AEC0u);
    ctx->pc = 0x17AEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AEB8u;
            // 0x17aebc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A810u;
    if (runtime->hasFunction(0x17A810u)) {
        auto targetFn = runtime->lookupFunction(0x17A810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AEC0u; }
        if (ctx->pc != 0x17AEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A810_0x17a810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AEC0u; }
        if (ctx->pc != 0x17AEC0u) { return; }
    }
    ctx->pc = 0x17AEC0u;
label_17aec0:
    // 0x17aec0: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x17aec0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x17aec4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17aec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17aec8: 0x246343e4  addiu       $v1, $v1, 0x43E4
    ctx->pc = 0x17aec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17380));
    // 0x17aecc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17aeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17aed0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17aed4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x17aed4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_17aed8:
    // 0x17aed8: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x17aed8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x17aedc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17aedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17aee0:
    // 0x17aee0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x17aee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_17aee4:
    // 0x17aee4: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x17aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x17aee8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17aee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17aeec: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x17aeecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x17aef0: 0x5443002c  bnel        $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x17AEF0u;
    {
        const bool branch_taken_0x17aef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17aef0) {
            ctx->pc = 0x17AEF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17AEF0u;
            // 0x17aef4: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17AFA4u;
            goto label_17afa4;
        }
    }
    ctx->pc = 0x17AEF8u;
    // 0x17aef8: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17AEF8u;
    SET_GPR_U32(ctx, 31, 0x17AF00u);
    ctx->pc = 0x17AEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AEF8u;
            // 0x17aefc: 0x24042000  addiu       $a0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AF00u; }
        if (ctx->pc != 0x17AF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AF00u; }
        if (ctx->pc != 0x17AF00u) { return; }
    }
    ctx->pc = 0x17AF00u;
label_17af00:
    // 0x17af00: 0xde250028  ld          $a1, 0x28($s1)
    ctx->pc = 0x17af00u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x17af04: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x17af04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x17af08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17af08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17af0c: 0xc05edb2  jal         func_17B6C8
    ctx->pc = 0x17AF0Cu;
    SET_GPR_U32(ctx, 31, 0x17AF14u);
    ctx->pc = 0x17AF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AF0Cu;
            // 0x17af10: 0x52af8  dsll        $a1, $a1, 11 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B6C8u;
    if (runtime->hasFunction(0x17B6C8u)) {
        auto targetFn = runtime->lookupFunction(0x17B6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AF14u; }
        if (ctx->pc != 0x17AF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B6C8_0x17b6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AF14u; }
        if (ctx->pc != 0x17AF14u) { return; }
    }
    ctx->pc = 0x17AF14u;
label_17af14:
    // 0x17af14: 0x24042001  addiu       $a0, $zero, 0x2001
    ctx->pc = 0x17af14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8193));
    // 0x17af18: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17AF18u;
    SET_GPR_U32(ctx, 31, 0x17AF20u);
    ctx->pc = 0x17AF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AF18u;
            // 0x17af1c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AF20u; }
        if (ctx->pc != 0x17AF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AF20u; }
        if (ctx->pc != 0x17AF20u) { return; }
    }
    ctx->pc = 0x17AF20u;
label_17af20:
    // 0x17af20: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17AF20u;
    {
        const bool branch_taken_0x17af20 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x17AF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AF20u;
            // 0x17af24: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17af20) {
            ctx->pc = 0x17AF38u;
            goto label_17af38;
        }
    }
    ctx->pc = 0x17AF28u;
    // 0x17af28: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x17af28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x17af2c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x17af2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x17af30: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x17af30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x17af34: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x17af34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
label_17af38:
    // 0x17af38: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17AF38u;
    SET_GPR_U32(ctx, 31, 0x17AF40u);
    ctx->pc = 0x17AF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AF38u;
            // 0x17af3c: 0x24042100  addiu       $a0, $zero, 0x2100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AF40u; }
        if (ctx->pc != 0x17AF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AF40u; }
        if (ctx->pc != 0x17AF40u) { return; }
    }
    ctx->pc = 0x17AF40u;
label_17af40:
    // 0x17af40: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x17af40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x17af44: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x17af44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x17af48: 0xc05ee2e  jal         func_17B8B8
    ctx->pc = 0x17AF48u;
    SET_GPR_U32(ctx, 31, 0x17AF50u);
    ctx->pc = 0x17AF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AF48u;
            // 0x17af4c: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B8B8u;
    if (runtime->hasFunction(0x17B8B8u)) {
        auto targetFn = runtime->lookupFunction(0x17B8B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AF50u; }
        if (ctx->pc != 0x17AF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B8B8_0x17b8b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AF50u; }
        if (ctx->pc != 0x17AF50u) { return; }
    }
    ctx->pc = 0x17AF50u;
label_17af50:
    // 0x17af50: 0x24042101  addiu       $a0, $zero, 0x2101
    ctx->pc = 0x17af50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8449));
    // 0x17af54: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17AF54u;
    SET_GPR_U32(ctx, 31, 0x17AF5Cu);
    ctx->pc = 0x17AF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AF54u;
            // 0x17af58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AF5Cu; }
        if (ctx->pc != 0x17AF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AF5Cu; }
        if (ctx->pc != 0x17AF5Cu) { return; }
    }
    ctx->pc = 0x17AF5Cu;
label_17af5c:
    // 0x17af5c: 0x600000a  bltz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x17AF5Cu;
    {
        const bool branch_taken_0x17af5c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x17AF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AF5Cu;
            // 0x17af60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17af5c) {
            ctx->pc = 0x17AF88u;
            goto label_17af88;
        }
    }
    ctx->pc = 0x17AF64u;
    // 0x17af64: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17af64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17af68: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x17af68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x17af6c: 0x246343e0  addiu       $v1, $v1, 0x43E0
    ctx->pc = 0x17af6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17376));
    // 0x17af70: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x17af70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17af74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17af74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17af78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17af78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17af7c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x17af7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x17af80: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17AF80u;
    {
        const bool branch_taken_0x17af80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AF80u;
            // 0x17af84: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17af80) {
            ctx->pc = 0x17AFA4u;
            goto label_17afa4;
        }
    }
    ctx->pc = 0x17AF88u;
label_17af88:
    // 0x17af88: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x17af88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x17af8c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x17af8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x17af90: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x17af90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17af94: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x17af94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x17af98: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x17af98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17af9c: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x17af9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x17afa0: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x17afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_17afa4:
    // 0x17afa4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x17afa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17afa8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x17afa8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x17afac: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x17AFACu;
    {
        const bool branch_taken_0x17afac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x17AFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AFACu;
            // 0x17afb0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17afac) {
            ctx->pc = 0x17B024u;
            goto label_17b024;
        }
    }
    ctx->pc = 0x17AFB4u;
    // 0x17afb4: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17AFB4u;
    SET_GPR_U32(ctx, 31, 0x17AFBCu);
    ctx->pc = 0x17AFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AFB4u;
            // 0x17afb8: 0x24042200  addiu       $a0, $zero, 0x2200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AFBCu; }
        if (ctx->pc != 0x17AFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AFBCu; }
        if (ctx->pc != 0x17AFBCu) { return; }
    }
    ctx->pc = 0x17AFBCu;
label_17afbc:
    // 0x17afbc: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x17afbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x17afc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17afc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17afc4: 0xc05ede0  jal         func_17B780
    ctx->pc = 0x17AFC4u;
    SET_GPR_U32(ctx, 31, 0x17AFCCu);
    ctx->pc = 0x17AFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AFC4u;
            // 0x17afc8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B780u;
    if (runtime->hasFunction(0x17B780u)) {
        auto targetFn = runtime->lookupFunction(0x17B780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AFCCu; }
        if (ctx->pc != 0x17AFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B780_0x17b780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AFCCu; }
        if (ctx->pc != 0x17AFCCu) { return; }
    }
    ctx->pc = 0x17AFCCu;
label_17afcc:
    // 0x17afcc: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17AFCCu;
    {
        const bool branch_taken_0x17afcc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x17afcc) {
            ctx->pc = 0x17AFF0u;
            goto label_17aff0;
        }
    }
    ctx->pc = 0x17AFD4u;
    // 0x17afd4: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17AFD4u;
    SET_GPR_U32(ctx, 31, 0x17AFDCu);
    ctx->pc = 0x17AFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AFD4u;
            // 0x17afd8: 0x24042201  addiu       $a0, $zero, 0x2201 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8705));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AFDCu; }
        if (ctx->pc != 0x17AFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AFDCu; }
        if (ctx->pc != 0x17AFDCu) { return; }
    }
    ctx->pc = 0x17AFDCu;
label_17afdc:
    // 0x17afdc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x17afdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17afe0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17afe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17afe4: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x17afe4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x17afe8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17AFE8u;
    {
        const bool branch_taken_0x17afe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AFE8u;
            // 0x17afec: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17afe8) {
            ctx->pc = 0x17B020u;
            goto label_17b020;
        }
    }
    ctx->pc = 0x17AFF0u;
label_17aff0:
    // 0x17aff0: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17AFF0u;
    SET_GPR_U32(ctx, 31, 0x17AFF8u);
    ctx->pc = 0x17AFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AFF0u;
            // 0x17aff4: 0x24042202  addiu       $a0, $zero, 0x2202 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8706));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AFF8u; }
        if (ctx->pc != 0x17AFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AFF8u; }
        if (ctx->pc != 0x17AFF8u) { return; }
    }
    ctx->pc = 0x17AFF8u;
label_17aff8:
    // 0x17aff8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17affc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17AFFCu;
    {
        const bool branch_taken_0x17affc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AFFCu;
            // 0x17b000: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17affc) {
            ctx->pc = 0x17B024u;
            goto label_17b024;
        }
    }
    ctx->pc = 0x17B004u;
    // 0x17b004: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17b004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17b008: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17b008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17b00c: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x17b00cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x17b010: 0x246343e4  addiu       $v1, $v1, 0x43E4
    ctx->pc = 0x17b010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17380));
    // 0x17b014: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17b014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b018: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17b018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17b01c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x17b01cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_17b020:
    // 0x17b020: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17b020u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17b024:
    // 0x17b024: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x17b024u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17b028: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17b028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b02c: 0x3e00008  jr          $ra
    ctx->pc = 0x17B02Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B02Cu;
            // 0x17b030: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B034u;
    // 0x17b034: 0x0  nop
    ctx->pc = 0x17b034u;
    // NOP
}
