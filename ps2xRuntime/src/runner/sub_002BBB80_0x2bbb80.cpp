#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BBB80
// Address: 0x2bbb80 - 0x2bbd20
void sub_002BBB80_0x2bbb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBB80_0x2bbb80");
#endif

    switch (ctx->pc) {
        case 0x2bbb9cu: goto label_2bbb9c;
        case 0x2bbbbcu: goto label_2bbbbc;
        case 0x2bbc08u: goto label_2bbc08;
        case 0x2bbc28u: goto label_2bbc28;
        case 0x2bbc50u: goto label_2bbc50;
        case 0x2bbcb0u: goto label_2bbcb0;
        case 0x2bbcbcu: goto label_2bbcbc;
        case 0x2bbcc8u: goto label_2bbcc8;
        case 0x2bbcd4u: goto label_2bbcd4;
        case 0x2bbce0u: goto label_2bbce0;
        case 0x2bbcecu: goto label_2bbcec;
        case 0x2bbd04u: goto label_2bbd04;
        default: break;
    }

    ctx->pc = 0x2bbb80u;

    // 0x2bbb80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bbb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bbb84: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2bbb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2bbb88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bbb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bbb8c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x2bbb8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x2bbb90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bbb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bbb94: 0xc0af014  jal         func_2BC050
    ctx->pc = 0x2BBB94u;
    SET_GPR_U32(ctx, 31, 0x2BBB9Cu);
    ctx->pc = 0x2BBB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBB94u;
            // 0x2bbb98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC050u;
    if (runtime->hasFunction(0x2BC050u)) {
        auto targetFn = runtime->lookupFunction(0x2BC050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBB9Cu; }
        if (ctx->pc != 0x2BBB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC050_0x2bc050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBB9Cu; }
        if (ctx->pc != 0x2BBB9Cu) { return; }
    }
    ctx->pc = 0x2BBB9Cu;
label_2bbb9c:
    // 0x2bbb9c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bbb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bbba0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bbba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bbba4: 0x24632190  addiu       $v1, $v1, 0x2190
    ctx->pc = 0x2bbba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8592));
    // 0x2bbba8: 0x244221c8  addiu       $v0, $v0, 0x21C8
    ctx->pc = 0x2bbba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8648));
    // 0x2bbbac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2bbbacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2bbbb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bbbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbbb4: 0xc0af010  jal         func_2BC040
    ctx->pc = 0x2BBBB4u;
    SET_GPR_U32(ctx, 31, 0x2BBBBCu);
    ctx->pc = 0x2BBBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBBB4u;
            // 0x2bbbb8: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC040u;
    if (runtime->hasFunction(0x2BC040u)) {
        auto targetFn = runtime->lookupFunction(0x2BC040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBBBCu; }
        if (ctx->pc != 0x2BBBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC040_0x2bc040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBBBCu; }
        if (ctx->pc != 0x2BBBBCu) { return; }
    }
    ctx->pc = 0x2BBBBCu;
label_2bbbbc:
    // 0x2bbbbc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2bbbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2bbbc0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x2bbbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2bbbc4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2bbbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2bbbc8: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x2bbbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x2bbbcc: 0x24425460  addiu       $v0, $v0, 0x5460
    ctx->pc = 0x2bbbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21600));
    // 0x2bbbd0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2bbbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2bbbd4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2bbbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2bbbd8: 0x24425498  addiu       $v0, $v0, 0x5498
    ctx->pc = 0x2bbbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21656));
    // 0x2bbbdc: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2bbbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2bbbe0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2bbbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2bbbe4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2bbbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2bbbe8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2bbbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2bbbec: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2bbbecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2bbbf0: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2bbbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2bbbf4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x2bbbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x2bbbf8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2bbbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2bbbfc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2bbbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x2bbc00: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x2BBC00u;
    SET_GPR_U32(ctx, 31, 0x2BBC08u);
    ctx->pc = 0x2BBC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBC00u;
            // 0x2bbc04: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBC08u; }
        if (ctx->pc != 0x2BBC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBC08u; }
        if (ctx->pc != 0x2BBC08u) { return; }
    }
    ctx->pc = 0x2BBC08u;
label_2bbc08:
    // 0x2bbc08: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2bbc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2bbc0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bbc0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbc10: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BBC10u;
    {
        const bool branch_taken_0x2bbc10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBC10u;
            // 0x2bbc14: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbc10) {
            ctx->pc = 0x2BBC2Cu;
            goto label_2bbc2c;
        }
    }
    ctx->pc = 0x2BBC18u;
    // 0x2bbc18: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2bbc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2bbc1c: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x2bbc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bbc20: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x2BBC20u;
    SET_GPR_U32(ctx, 31, 0x2BBC28u);
    ctx->pc = 0x2BBC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBC20u;
            // 0x2bbc24: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBC28u; }
        if (ctx->pc != 0x2BBC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBC28u; }
        if (ctx->pc != 0x2BBC28u) { return; }
    }
    ctx->pc = 0x2BBC28u;
label_2bbc28:
    // 0x2bbc28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bbc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bbc2c:
    // 0x2bbc2c: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x2bbc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
    // 0x2bbc30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bbc30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbc34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bbc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbc38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bbc38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbc3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBC3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBC3Cu;
            // 0x2bbc40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BBC44u;
    // 0x2bbc44: 0x0  nop
    ctx->pc = 0x2bbc44u;
    // NOP
    // 0x2bbc48: 0x0  nop
    ctx->pc = 0x2bbc48u;
    // NOP
    // 0x2bbc4c: 0x0  nop
    ctx->pc = 0x2bbc4cu;
    // NOP
label_2bbc50:
    // 0x2bbc50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bbc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bbc54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bbc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bbc58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bbc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bbc5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bbc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bbc60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bbc60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbc64: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2BBC64u;
    {
        const bool branch_taken_0x2bbc64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBC64u;
            // 0x2bbc68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbc64) {
            ctx->pc = 0x2BBD04u;
            goto label_2bbd04;
        }
    }
    ctx->pc = 0x2BBC6Cu;
    // 0x2bbc6c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bbc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bbc70: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bbc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bbc74: 0x24632190  addiu       $v1, $v1, 0x2190
    ctx->pc = 0x2bbc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8592));
    // 0x2bbc78: 0x244221c8  addiu       $v0, $v0, 0x21C8
    ctx->pc = 0x2bbc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8648));
    // 0x2bbc7c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2bbc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2bbc80: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2BBC80u;
    {
        const bool branch_taken_0x2bbc80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBC80u;
            // 0x2bbc84: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbc80) {
            ctx->pc = 0x2BBCECu;
            goto label_2bbcec;
        }
    }
    ctx->pc = 0x2BBC88u;
    // 0x2bbc88: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bbc88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bbc8c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bbc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2bbc90: 0x24632140  addiu       $v1, $v1, 0x2140
    ctx->pc = 0x2bbc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8512));
    // 0x2bbc94: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2bbc94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2bbc98: 0x24422178  addiu       $v0, $v0, 0x2178
    ctx->pc = 0x2bbc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8568));
    // 0x2bbc9c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2bbc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2bbca0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2bbca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2bbca4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x2bbca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2bbca8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x2BBCA8u;
    SET_GPR_U32(ctx, 31, 0x2BBCB0u);
    ctx->pc = 0x2BBCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBCA8u;
            // 0x2bbcac: 0x24a5bdf0  addiu       $a1, $a1, -0x4210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBCB0u; }
        if (ctx->pc != 0x2BBCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBCB0u; }
        if (ctx->pc != 0x2BBCB0u) { return; }
    }
    ctx->pc = 0x2BBCB0u;
label_2bbcb0:
    // 0x2bbcb0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x2bbcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x2bbcb4: 0xc0ad618  jal         func_2B5860
    ctx->pc = 0x2BBCB4u;
    SET_GPR_U32(ctx, 31, 0x2BBCBCu);
    ctx->pc = 0x2BBCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBCB4u;
            // 0x2bbcb8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5860u;
    if (runtime->hasFunction(0x2B5860u)) {
        auto targetFn = runtime->lookupFunction(0x2B5860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBCBCu; }
        if (ctx->pc != 0x2BBCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5860_0x2b5860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBCBCu; }
        if (ctx->pc != 0x2BBCBCu) { return; }
    }
    ctx->pc = 0x2BBCBCu;
label_2bbcbc:
    // 0x2bbcbc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x2bbcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x2bbcc0: 0xc0aef60  jal         func_2BBD80
    ctx->pc = 0x2BBCC0u;
    SET_GPR_U32(ctx, 31, 0x2BBCC8u);
    ctx->pc = 0x2BBCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBCC0u;
            // 0x2bbcc4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBD80u;
    if (runtime->hasFunction(0x2BBD80u)) {
        auto targetFn = runtime->lookupFunction(0x2BBD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBCC8u; }
        if (ctx->pc != 0x2BBCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBD80_0x2bbd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBCC8u; }
        if (ctx->pc != 0x2BBCC8u) { return; }
    }
    ctx->pc = 0x2BBCC8u;
label_2bbcc8:
    // 0x2bbcc8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2bbcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x2bbccc: 0xc0aef60  jal         func_2BBD80
    ctx->pc = 0x2BBCCCu;
    SET_GPR_U32(ctx, 31, 0x2BBCD4u);
    ctx->pc = 0x2BBCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBCCCu;
            // 0x2bbcd0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBD80u;
    if (runtime->hasFunction(0x2BBD80u)) {
        auto targetFn = runtime->lookupFunction(0x2BBD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBCD4u; }
        if (ctx->pc != 0x2BBCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBD80_0x2bbd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBCD4u; }
        if (ctx->pc != 0x2BBCD4u) { return; }
    }
    ctx->pc = 0x2BBCD4u;
label_2bbcd4:
    // 0x2bbcd4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x2bbcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2bbcd8: 0xc0aef48  jal         func_2BBD20
    ctx->pc = 0x2BBCD8u;
    SET_GPR_U32(ctx, 31, 0x2BBCE0u);
    ctx->pc = 0x2BBCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBCD8u;
            // 0x2bbcdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBD20u;
    if (runtime->hasFunction(0x2BBD20u)) {
        auto targetFn = runtime->lookupFunction(0x2BBD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBCE0u; }
        if (ctx->pc != 0x2BBCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBD20_0x2bbd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBCE0u; }
        if (ctx->pc != 0x2BBCE0u) { return; }
    }
    ctx->pc = 0x2BBCE0u;
label_2bbce0:
    // 0x2bbce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bbce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbce4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x2BBCE4u;
    SET_GPR_U32(ctx, 31, 0x2BBCECu);
    ctx->pc = 0x2BBCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBCE4u;
            // 0x2bbce8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBCECu; }
        if (ctx->pc != 0x2BBCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBCECu; }
        if (ctx->pc != 0x2BBCECu) { return; }
    }
    ctx->pc = 0x2BBCECu;
label_2bbcec:
    // 0x2bbcec: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2bbcecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2bbcf0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bbcf0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2bbcf4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BBCF4u;
    {
        const bool branch_taken_0x2bbcf4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bbcf4) {
            ctx->pc = 0x2BBCF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBCF4u;
            // 0x2bbcf8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BBD08u;
            goto label_2bbd08;
        }
    }
    ctx->pc = 0x2BBCFCu;
    // 0x2bbcfc: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2BBCFCu;
    SET_GPR_U32(ctx, 31, 0x2BBD04u);
    ctx->pc = 0x2BBD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBCFCu;
            // 0x2bbd00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBD04u; }
        if (ctx->pc != 0x2BBD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBD04u; }
        if (ctx->pc != 0x2BBD04u) { return; }
    }
    ctx->pc = 0x2BBD04u;
label_2bbd04:
    // 0x2bbd04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bbd04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bbd08:
    // 0x2bbd08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bbd08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bbd0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bbd0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbd10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bbd10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbd14: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBD14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBD14u;
            // 0x2bbd18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BBD1Cu;
    // 0x2bbd1c: 0x0  nop
    ctx->pc = 0x2bbd1cu;
    // NOP
}
