#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AEF00
// Address: 0x1aef00 - 0x1af078
void sub_001AEF00_0x1aef00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEF00_0x1aef00");
#endif

    switch (ctx->pc) {
        case 0x1aef00u: goto label_1aef00;
        case 0x1aef04u: goto label_1aef04;
        case 0x1aef08u: goto label_1aef08;
        case 0x1aef0cu: goto label_1aef0c;
        case 0x1aef10u: goto label_1aef10;
        case 0x1aef14u: goto label_1aef14;
        case 0x1aef18u: goto label_1aef18;
        case 0x1aef1cu: goto label_1aef1c;
        case 0x1aef20u: goto label_1aef20;
        case 0x1aef24u: goto label_1aef24;
        case 0x1aef28u: goto label_1aef28;
        case 0x1aef2cu: goto label_1aef2c;
        case 0x1aef30u: goto label_1aef30;
        case 0x1aef34u: goto label_1aef34;
        case 0x1aef38u: goto label_1aef38;
        case 0x1aef3cu: goto label_1aef3c;
        case 0x1aef40u: goto label_1aef40;
        case 0x1aef44u: goto label_1aef44;
        case 0x1aef48u: goto label_1aef48;
        case 0x1aef4cu: goto label_1aef4c;
        case 0x1aef50u: goto label_1aef50;
        case 0x1aef54u: goto label_1aef54;
        case 0x1aef58u: goto label_1aef58;
        case 0x1aef5cu: goto label_1aef5c;
        case 0x1aef60u: goto label_1aef60;
        case 0x1aef64u: goto label_1aef64;
        case 0x1aef68u: goto label_1aef68;
        case 0x1aef6cu: goto label_1aef6c;
        case 0x1aef70u: goto label_1aef70;
        case 0x1aef74u: goto label_1aef74;
        case 0x1aef78u: goto label_1aef78;
        case 0x1aef7cu: goto label_1aef7c;
        case 0x1aef80u: goto label_1aef80;
        case 0x1aef84u: goto label_1aef84;
        case 0x1aef88u: goto label_1aef88;
        case 0x1aef8cu: goto label_1aef8c;
        case 0x1aef90u: goto label_1aef90;
        case 0x1aef94u: goto label_1aef94;
        case 0x1aef98u: goto label_1aef98;
        case 0x1aef9cu: goto label_1aef9c;
        case 0x1aefa0u: goto label_1aefa0;
        case 0x1aefa4u: goto label_1aefa4;
        case 0x1aefa8u: goto label_1aefa8;
        case 0x1aefacu: goto label_1aefac;
        case 0x1aefb0u: goto label_1aefb0;
        case 0x1aefb4u: goto label_1aefb4;
        case 0x1aefb8u: goto label_1aefb8;
        case 0x1aefbcu: goto label_1aefbc;
        case 0x1aefc0u: goto label_1aefc0;
        case 0x1aefc4u: goto label_1aefc4;
        case 0x1aefc8u: goto label_1aefc8;
        case 0x1aefccu: goto label_1aefcc;
        case 0x1aefd0u: goto label_1aefd0;
        case 0x1aefd4u: goto label_1aefd4;
        case 0x1aefd8u: goto label_1aefd8;
        case 0x1aefdcu: goto label_1aefdc;
        case 0x1aefe0u: goto label_1aefe0;
        case 0x1aefe4u: goto label_1aefe4;
        case 0x1aefe8u: goto label_1aefe8;
        case 0x1aefecu: goto label_1aefec;
        case 0x1aeff0u: goto label_1aeff0;
        case 0x1aeff4u: goto label_1aeff4;
        case 0x1aeff8u: goto label_1aeff8;
        case 0x1aeffcu: goto label_1aeffc;
        case 0x1af000u: goto label_1af000;
        case 0x1af004u: goto label_1af004;
        case 0x1af008u: goto label_1af008;
        case 0x1af00cu: goto label_1af00c;
        case 0x1af010u: goto label_1af010;
        case 0x1af014u: goto label_1af014;
        case 0x1af018u: goto label_1af018;
        case 0x1af01cu: goto label_1af01c;
        case 0x1af020u: goto label_1af020;
        case 0x1af024u: goto label_1af024;
        case 0x1af028u: goto label_1af028;
        case 0x1af02cu: goto label_1af02c;
        case 0x1af030u: goto label_1af030;
        case 0x1af034u: goto label_1af034;
        case 0x1af038u: goto label_1af038;
        case 0x1af03cu: goto label_1af03c;
        case 0x1af040u: goto label_1af040;
        case 0x1af044u: goto label_1af044;
        case 0x1af048u: goto label_1af048;
        case 0x1af04cu: goto label_1af04c;
        case 0x1af050u: goto label_1af050;
        case 0x1af054u: goto label_1af054;
        case 0x1af058u: goto label_1af058;
        case 0x1af05cu: goto label_1af05c;
        case 0x1af060u: goto label_1af060;
        case 0x1af064u: goto label_1af064;
        case 0x1af068u: goto label_1af068;
        case 0x1af06cu: goto label_1af06c;
        case 0x1af070u: goto label_1af070;
        case 0x1af074u: goto label_1af074;
        default: break;
    }

    ctx->pc = 0x1aef00u;

label_1aef00:
    // 0x1aef00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1aef00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1aef04:
    // 0x1aef04: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1aef04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1aef08:
    // 0x1aef08: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1aef08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1aef0c:
    // 0x1aef0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1aef0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1aef10:
    // 0x1aef10: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1aef10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1aef14:
    // 0x1aef14: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1aef14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aef18:
    // 0x1aef18: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1aef18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1aef1c:
    // 0x1aef1c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1aef1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1aef20:
    // 0x1aef20: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1aef20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_1aef24:
    // 0x1aef24: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1aef24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1aef28:
    // 0x1aef28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1aef28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1aef2c:
    // 0x1aef2c: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1aef2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1aef30:
    // 0x1aef30: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1aef30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1aef34:
    // 0x1aef34: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1aef34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1aef38:
    // 0x1aef38: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1aef38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1aef3c:
    // 0x1aef3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aef3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aef40:
    // 0x1aef40: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1aef40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1aef44:
    // 0x1aef44: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1aef44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1aef48:
    // 0x1aef48: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1aef48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_1aef4c:
    // 0x1aef4c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1aef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1aef50:
    // 0x1aef50: 0x40f809  jalr        $v0
label_1aef54:
    if (ctx->pc == 0x1AEF54u) {
        ctx->pc = 0x1AEF54u;
            // 0x1aef54: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x1AEF58u;
        goto label_1aef58;
    }
    ctx->pc = 0x1AEF50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AEF58u);
        ctx->pc = 0x1AEF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEF50u;
            // 0x1aef54: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AEF58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AEF58u; }
            if (ctx->pc != 0x1AEF58u) { return; }
        }
        }
    }
    ctx->pc = 0x1AEF58u;
label_1aef58:
    // 0x1aef58: 0x240600cc  addiu       $a2, $zero, 0xCC
    ctx->pc = 0x1aef58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_1aef5c:
    // 0x1aef5c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1aef5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1aef60:
    // 0x1aef60: 0xc064bc8  jal         func_192F20
label_1aef64:
    if (ctx->pc == 0x1AEF64u) {
        ctx->pc = 0x1AEF64u;
            // 0x1aef64: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x1AEF68u;
        goto label_1aef68;
    }
    ctx->pc = 0x1AEF60u;
    SET_GPR_U32(ctx, 31, 0x1AEF68u);
    ctx->pc = 0x1AEF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEF60u;
            // 0x1aef64: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192F20u;
    if (runtime->hasFunction(0x192F20u)) {
        auto targetFn = runtime->lookupFunction(0x192F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEF68u; }
        if (ctx->pc != 0x1AEF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192F20_0x192f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEF68u; }
        if (ctx->pc != 0x1AEF68u) { return; }
    }
    ctx->pc = 0x1AEF68u;
label_1aef68:
    // 0x1aef68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aef68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aef6c:
    // 0x1aef6c: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
label_1aef70:
    if (ctx->pc == 0x1AEF70u) {
        ctx->pc = 0x1AEF70u;
            // 0x1aef70: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->pc = 0x1AEF74u;
        goto label_1aef74;
    }
    ctx->pc = 0x1AEF6Cu;
    {
        const bool branch_taken_0x1aef6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEF6Cu;
            // 0x1aef70: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef6c) {
            ctx->pc = 0x1AF018u;
            goto label_1af018;
        }
    }
    ctx->pc = 0x1AEF74u;
label_1aef74:
    // 0x1aef74: 0xc064b62  jal         func_192D88
label_1aef78:
    if (ctx->pc == 0x1AEF78u) {
        ctx->pc = 0x1AEF78u;
            // 0x1aef78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AEF7Cu;
        goto label_1aef7c;
    }
    ctx->pc = 0x1AEF74u;
    SET_GPR_U32(ctx, 31, 0x1AEF7Cu);
    ctx->pc = 0x1AEF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEF74u;
            // 0x1aef78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192D88u;
    if (runtime->hasFunction(0x192D88u)) {
        auto targetFn = runtime->lookupFunction(0x192D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEF7Cu; }
        if (ctx->pc != 0x1AEF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192D88_0x192d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEF7Cu; }
        if (ctx->pc != 0x1AEF7Cu) { return; }
    }
    ctx->pc = 0x1AEF7Cu;
label_1aef7c:
    // 0x1aef7c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1aef7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1aef80:
    // 0x1aef80: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_1aef84:
    if (ctx->pc == 0x1AEF84u) {
        ctx->pc = 0x1AEF84u;
            // 0x1aef84: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x1AEF88u;
        goto label_1aef88;
    }
    ctx->pc = 0x1AEF80u;
    {
        const bool branch_taken_0x1aef80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEF80u;
            // 0x1aef84: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef80) {
            ctx->pc = 0x1AF038u;
            goto label_1af038;
        }
    }
    ctx->pc = 0x1AEF88u;
label_1aef88:
    // 0x1aef88: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1aef88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1aef8c:
    // 0x1aef8c: 0x2061023  subu        $v0, $s0, $a2
    ctx->pc = 0x1aef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_1aef90:
    // 0x1aef90: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x1aef90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_1aef94:
    // 0x1aef94: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1aef94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1aef98:
    // 0x1aef98: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_1aef9c:
    if (ctx->pc == 0x1AEF9Cu) {
        ctx->pc = 0x1AEF9Cu;
            // 0x1aef9c: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->pc = 0x1AEFA0u;
        goto label_1aefa0;
    }
    ctx->pc = 0x1AEF98u;
    {
        const bool branch_taken_0x1aef98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEF98u;
            // 0x1aef9c: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aef98) {
            ctx->pc = 0x1AF018u;
            goto label_1af018;
        }
    }
    ctx->pc = 0x1AEFA0u;
label_1aefa0:
    // 0x1aefa0: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x1aefa0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_1aefa4:
    // 0x1aefa4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1aefa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1aefa8:
    // 0x1aefa8: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x1aefa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
label_1aefac:
    // 0x1aefac: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1aefacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_1aefb0:
    // 0x1aefb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1aefb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1aefb4:
    // 0x1aefb4: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1aefb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_1aefb8:
    // 0x1aefb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1aefb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1aefbc:
    // 0x1aefbc: 0x8c63ac50  lw          $v1, -0x53B0($v1)
    ctx->pc = 0x1aefbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945872)));
label_1aefc0:
    // 0x1aefc0: 0x1464001d  bne         $v1, $a0, . + 4 + (0x1D << 2)
label_1aefc4:
    if (ctx->pc == 0x1AEFC4u) {
        ctx->pc = 0x1AEFC4u;
            // 0x1aefc4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1AEFC8u;
        goto label_1aefc8;
    }
    ctx->pc = 0x1AEFC0u;
    {
        const bool branch_taken_0x1aefc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1AEFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEFC0u;
            // 0x1aefc4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aefc0) {
            ctx->pc = 0x1AF038u;
            goto label_1af038;
        }
    }
    ctx->pc = 0x1AEFC8u;
label_1aefc8:
    // 0x1aefc8: 0xd01023  subu        $v0, $a2, $s0
    ctx->pc = 0x1aefc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_1aefcc:
    // 0x1aefcc: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x1aefccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1aefd0:
    // 0x1aefd0: 0x459021  addu        $s2, $v0, $a1
    ctx->pc = 0x1aefd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1aefd4:
    // 0x1aefd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aefd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aefd8:
    // 0x1aefd8: 0xc064bc8  jal         func_192F20
label_1aefdc:
    if (ctx->pc == 0x1AEFDCu) {
        ctx->pc = 0x1AEFDCu;
            // 0x1aefdc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AEFE0u;
        goto label_1aefe0;
    }
    ctx->pc = 0x1AEFD8u;
    SET_GPR_U32(ctx, 31, 0x1AEFE0u);
    ctx->pc = 0x1AEFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEFD8u;
            // 0x1aefdc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192F20u;
    if (runtime->hasFunction(0x192F20u)) {
        auto targetFn = runtime->lookupFunction(0x192F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEFE0u; }
        if (ctx->pc != 0x1AEFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192F20_0x192f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEFE0u; }
        if (ctx->pc != 0x1AEFE0u) { return; }
    }
    ctx->pc = 0x1AEFE0u;
label_1aefe0:
    // 0x1aefe0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1aefe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aefe4:
    // 0x1aefe4: 0x52200015  beql        $s1, $zero, . + 4 + (0x15 << 2)
label_1aefe8:
    if (ctx->pc == 0x1AEFE8u) {
        ctx->pc = 0x1AEFE8u;
            // 0x1aefe8: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x1AEFECu;
        goto label_1aefec;
    }
    ctx->pc = 0x1AEFE4u;
    {
        const bool branch_taken_0x1aefe4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aefe4) {
            ctx->pc = 0x1AEFE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEFE4u;
            // 0x1aefe8: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AF03Cu;
            goto label_1af03c;
        }
    }
    ctx->pc = 0x1AEFECu;
label_1aefec:
    // 0x1aefec: 0xc064b62  jal         func_192D88
label_1aeff0:
    if (ctx->pc == 0x1AEFF0u) {
        ctx->pc = 0x1AEFF0u;
            // 0x1aeff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AEFF4u;
        goto label_1aeff4;
    }
    ctx->pc = 0x1AEFECu;
    SET_GPR_U32(ctx, 31, 0x1AEFF4u);
    ctx->pc = 0x1AEFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEFECu;
            // 0x1aeff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192D88u;
    if (runtime->hasFunction(0x192D88u)) {
        auto targetFn = runtime->lookupFunction(0x192D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEFF4u; }
        if (ctx->pc != 0x1AEFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192D88_0x192d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEFF4u; }
        if (ctx->pc != 0x1AEFF4u) { return; }
    }
    ctx->pc = 0x1AEFF4u;
label_1aeff4:
    // 0x1aeff4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1aeff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1aeff8:
    // 0x1aeff8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1aeffc:
    if (ctx->pc == 0x1AEFFCu) {
        ctx->pc = 0x1AEFFCu;
            // 0x1aeffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AF000u;
        goto label_1af000;
    }
    ctx->pc = 0x1AEFF8u;
    {
        const bool branch_taken_0x1aeff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEFF8u;
            // 0x1aeffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeff8) {
            ctx->pc = 0x1AF038u;
            goto label_1af038;
        }
    }
    ctx->pc = 0x1AF000u;
label_1af000:
    // 0x1af000: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1af000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1af004:
    // 0x1af004: 0xc064bc8  jal         func_192F20
label_1af008:
    if (ctx->pc == 0x1AF008u) {
        ctx->pc = 0x1AF008u;
            // 0x1af008: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1AF00Cu;
        goto label_1af00c;
    }
    ctx->pc = 0x1AF004u;
    SET_GPR_U32(ctx, 31, 0x1AF00Cu);
    ctx->pc = 0x1AF008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF004u;
            // 0x1af008: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192F20u;
    if (runtime->hasFunction(0x192F20u)) {
        auto targetFn = runtime->lookupFunction(0x192F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF00Cu; }
        if (ctx->pc != 0x1AF00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192F20_0x192f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF00Cu; }
        if (ctx->pc != 0x1AF00Cu) { return; }
    }
    ctx->pc = 0x1AF00Cu;
label_1af00c:
    // 0x1af00c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1af010:
    if (ctx->pc == 0x1AF010u) {
        ctx->pc = 0x1AF010u;
            // 0x1af010: 0x511023  subu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->pc = 0x1AF014u;
        goto label_1af014;
    }
    ctx->pc = 0x1AF00Cu;
    {
        const bool branch_taken_0x1af00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF00Cu;
            // 0x1af010: 0x511023  subu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af00c) {
            ctx->pc = 0x1AF030u;
            goto label_1af030;
        }
    }
    ctx->pc = 0x1AF014u;
label_1af014:
    // 0x1af014: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1af014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1af018:
    // 0x1af018: 0x24639bbc  addiu       $v1, $v1, -0x6444
    ctx->pc = 0x1af018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941628));
label_1af01c:
    // 0x1af01c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1af01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1af020:
    // 0x1af020: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1af020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1af024:
    // 0x1af024: 0x10000004  b           . + 4 + (0x4 << 2)
label_1af028:
    if (ctx->pc == 0x1AF028u) {
        ctx->pc = 0x1AF028u;
            // 0x1af028: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1AF02Cu;
        goto label_1af02c;
    }
    ctx->pc = 0x1AF024u;
    {
        const bool branch_taken_0x1af024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF024u;
            // 0x1af028: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af024) {
            ctx->pc = 0x1AF038u;
            goto label_1af038;
        }
    }
    ctx->pc = 0x1AF02Cu;
label_1af02c:
    // 0x1af02c: 0x0  nop
    ctx->pc = 0x1af02cu;
    // NOP
label_1af030:
    // 0x1af030: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x1af030u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
label_1af034:
    // 0x1af034: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1af034u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1af038:
    // 0x1af038: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1af038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1af03c:
    // 0x1af03c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1af03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1af040:
    // 0x1af040: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1af040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1af044:
    // 0x1af044: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1af044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1af048:
    // 0x1af048: 0x40f809  jalr        $v0
label_1af04c:
    if (ctx->pc == 0x1AF04Cu) {
        ctx->pc = 0x1AF04Cu;
            // 0x1af04c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AF050u;
        goto label_1af050;
    }
    ctx->pc = 0x1AF048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AF050u);
        ctx->pc = 0x1AF04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF048u;
            // 0x1af04c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AF050u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AF050u; }
            if (ctx->pc != 0x1AF050u) { return; }
        }
        }
    }
    ctx->pc = 0x1AF050u;
label_1af050:
    // 0x1af050: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1af050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1af054:
    // 0x1af054: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1af054u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1af058:
    // 0x1af058: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1af058u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1af05c:
    // 0x1af05c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1af05cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1af060:
    // 0x1af060: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1af060u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1af064:
    // 0x1af064: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1af064u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1af068:
    // 0x1af068: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1af068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1af06c:
    // 0x1af06c: 0x3e00008  jr          $ra
label_1af070:
    if (ctx->pc == 0x1AF070u) {
        ctx->pc = 0x1AF070u;
            // 0x1af070: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1AF074u;
        goto label_1af074;
    }
    ctx->pc = 0x1AF06Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF06Cu;
            // 0x1af070: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF074u;
label_1af074:
    // 0x1af074: 0x0  nop
    ctx->pc = 0x1af074u;
    // NOP
}
